/*
 * XREFs of SeTokenCanImpersonate @ 0x140606E90
 * Callers:
 *     PsImpersonateClient @ 0x140607260 (PsImpersonateClient.c)
 * Callees:
 *     SepAcquireOrderedReadLocks @ 0x140204DAC (SepAcquireOrderedReadLocks.c)
 *     SepReleaseOrderedReadLocks @ 0x140204E28 (SepReleaseOrderedReadLocks.c)
 *     SeTokenIsRestricted @ 0x140205C20 (SeTokenIsRestricted.c)
 *     SeTokenIsWriteRestricted @ 0x140205C40 (SeTokenIsWriteRestricted.c)
 *     RtlSidDominates @ 0x14020FB40 (RtlSidDominates.c)
 *     RtlSidDominatesForTrust @ 0x14020FCC0 (RtlSidDominatesForTrust.c)
 *     RtlEqualSid @ 0x140210C40 (RtlEqualSid.c)
 *     SepCopyTokenIntegrity @ 0x14023D638 (SepCopyTokenIntegrity.c)
 *     SepLogUnmatchedSessionFlagImpersonationAttempt @ 0x140595888 (SepLogUnmatchedSessionFlagImpersonationAttempt.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x1406C1CA0 (SepIsImpersonationAllowedDueToCapability.c)
 *     SeTokenIsElevated @ 0x1406C585C (SeTokenIsElevated.c)
 *     RtlQueryElevationFlags @ 0x1406CA9C0 (RtlQueryElevationFlags.c)
 *     RtlIsParentOfChildAppContainer @ 0x1406FCB64 (RtlIsParentOfChildAppContainer.c)
 */

NTSTATUS __fastcall SeTokenCanImpersonate(__int64 Token, __int64 a2, int a3, _BYTE *a4)
{
  NTSTATUS result; // eax
  void *v7; // rbx
  void *v8; // rdi
  _BYTE *v9; // r11
  NTSTATUS IsElevated; // ebx
  void *v11; // rbp
  void *v12; // r14
  int v13; // eax
  BOOLEAN DominatesTrust; // [rsp+70h] [rbp+8h] BYREF
  BOOLEAN Dominates; // [rsp+78h] [rbp+10h] BYREF
  char v16; // [rsp+80h] [rbp+18h] BYREF
  _RTL_ELEVATION_FLAGS Flags; // [rsp+88h] [rbp+20h] BYREF

  Dominates = 0;
  DominatesTrust = 0;
  v16 = 0;
  Flags.Flags = 0;
  *a4 = 0;
  if ( a3 < 2 )
    return 0;
  if ( *(_DWORD *)(a2 + 24) == 998 && !*(_DWORD *)(a2 + 28) )
  {
    if ( (*(_DWORD *)(Token + 200) & 0x4000) != 0 )
    {
      if ( (*(_DWORD *)(a2 + 200) & 0x4000) == 0 )
        return -1073741727;
      v7 = *(void **)(a2 + 784);
      v8 = *(void **)(Token + 784);
      if ( !RtlEqualSid(v8, v7) && !RtlIsParentOfChildAppContainer(v8, v7) )
        return -1073741727;
    }
    return 0;
  }
  result = RtlSidDominatesForTrust(*(PSID *)(Token + 1104), *(PSID *)(a2 + 1104), &DominatesTrust);
  if ( result < 0 )
    return result;
  if ( !DominatesTrust )
    *v9 = 1;
  if ( (*(_DWORD *)(Token + 64) & *(_DWORD *)(Token + 72) & 0x20000000) != 0 )
    return 0;
  SepAcquireOrderedReadLocks(Token, a2);
  SepCopyTokenIntegrity(Token);
  SepCopyTokenIntegrity(a2);
  IsElevated = RtlSidDominates(0LL, 0LL, &Dominates);
  if ( IsElevated >= 0 )
  {
    if ( !Dominates )
      goto LABEL_42;
    if ( (unsigned __int8)SepIsImpersonationAllowedDueToCapability((PACCESS_TOKEN)Token)
      || *(_DWORD *)(Token + 24) == *(_DWORD *)(a2 + 224) && *(_DWORD *)(Token + 28) == *(_DWORD *)(a2 + 228) )
    {
      IsElevated = 0;
      goto LABEL_43;
    }
    if ( !RtlEqualSid(**(PSID **)(Token + 152), **(PSID **)(a2 + 152)) )
    {
LABEL_42:
      IsElevated = -1073741727;
      goto LABEL_43;
    }
    if ( RtlQueryElevationFlags(&Flags) < 0 || (Flags.Flags & 1) == 0 )
      goto LABEL_32;
    IsElevated = SeTokenIsElevated(a2, &v16);
    if ( IsElevated >= 0 )
    {
      if ( !v16 )
        goto LABEL_29;
      IsElevated = SeTokenIsElevated(Token, &v16);
      if ( IsElevated >= 0 )
      {
        if ( !v16 && (*(_DWORD *)(*(_QWORD *)(Token + 216) + 32LL) & 4) != 0 )
          goto LABEL_42;
LABEL_29:
        if ( (*(_DWORD *)(*(_QWORD *)(Token + 216) + 32LL) & 4) != 0
          && (*(_DWORD *)(*(_QWORD *)(a2 + 216) + 32LL) & 4) == 0 )
        {
          SepLogUnmatchedSessionFlagImpersonationAttempt(Token, a2);
          goto LABEL_42;
        }
LABEL_32:
        IsElevated = 0;
        if ( (*(_DWORD *)(Token + 200) & 0x4000) == 0
          || (*(_DWORD *)(a2 + 200) & 0x4000) != 0
          && ((v11 = *(void **)(a2 + 784), v12 = *(void **)(Token + 784), RtlEqualSid(v12, v11))
           || RtlIsParentOfChildAppContainer(v12, v11)) )
        {
          if ( !SeTokenIsRestricted((PACCESS_TOKEN)Token)
            || SeTokenIsRestricted((PACCESS_TOKEN)a2)
            && (SeTokenIsWriteRestricted((PACCESS_TOKEN)Token) || !SeTokenIsWriteRestricted((PACCESS_TOKEN)a2)) )
          {
            v13 = *(_DWORD *)(a2 + 120);
            if ( *(_DWORD *)(Token + 120) == v13 || v13 )
              goto LABEL_43;
          }
        }
        goto LABEL_42;
      }
    }
  }
LABEL_43:
  SepReleaseOrderedReadLocks(Token, a2);
  return IsElevated;
}
