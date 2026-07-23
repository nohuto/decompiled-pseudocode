/*
 * XREFs of SeTokenCanImpersonate @ 0x140609600
 * Callers:
 *     PsImpersonateClient @ 0x140609080 (PsImpersonateClient.c)
 * Callees:
 *     RtlEqualSid @ 0x140206340 (RtlEqualSid.c)
 *     RtlSidDominates @ 0x140258190 (RtlSidDominates.c)
 *     RtlSidDominatesForTrust @ 0x1402597C0 (RtlSidDominatesForTrust.c)
 *     SeTokenIsRestricted @ 0x1402C12C0 (SeTokenIsRestricted.c)
 *     SeTokenIsWriteRestricted @ 0x1402C12E0 (SeTokenIsWriteRestricted.c)
 *     SepCopyTokenIntegrity @ 0x1402D7648 (SepCopyTokenIntegrity.c)
 *     SepReleaseOrderedReadLocks @ 0x1403050F4 (SepReleaseOrderedReadLocks.c)
 *     SepAcquireOrderedReadLocks @ 0x140305128 (SepAcquireOrderedReadLocks.c)
 *     SepLogUnmatchedSessionFlagImpersonationAttempt @ 0x1405916F8 (SepLogUnmatchedSessionFlagImpersonationAttempt.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x1406CCA20 (SepIsImpersonationAllowedDueToCapability.c)
 *     SeTokenIsElevated @ 0x1406D1328 (SeTokenIsElevated.c)
 *     RtlQueryElevationFlags @ 0x1406D49C0 (RtlQueryElevationFlags.c)
 *     RtlIsParentOfChildAppContainer @ 0x14070D9A8 (RtlIsParentOfChildAppContainer.c)
 */

NTSTATUS __fastcall SeTokenCanImpersonate(__int64 Token, __int64 a2, int a3, _BYTE *a4)
{
  NTSTATUS result; // eax
  _BYTE *v7; // r11
  NTSTATUS IsElevated; // esi
  int v9; // eax
  void *v10; // rbp
  void *v11; // r14
  BOOLEAN DominatesTrust; // [rsp+70h] [rbp+8h] BYREF
  BOOLEAN Dominates; // [rsp+78h] [rbp+10h] BYREF
  char v14; // [rsp+80h] [rbp+18h] BYREF
  _RTL_ELEVATION_FLAGS Flags; // [rsp+88h] [rbp+20h] BYREF

  Dominates = 0;
  DominatesTrust = 0;
  v14 = 0;
  Flags.Flags = 0;
  *a4 = 0;
  if ( a3 >= 2 && (*(_DWORD *)(a2 + 24) != 998 || *(_DWORD *)(a2 + 28)) )
  {
    result = RtlSidDominatesForTrust(*(PSID *)(Token + 1104), *(PSID *)(a2 + 1104), &DominatesTrust);
    if ( result < 0 )
      return result;
    if ( !DominatesTrust )
      *v7 = 1;
    if ( (*(_DWORD *)(Token + 64) & *(_DWORD *)(Token + 72) & 0x20000000) == 0 )
    {
      SepAcquireOrderedReadLocks(Token, a2);
      SepCopyTokenIntegrity(Token);
      SepCopyTokenIntegrity(a2);
      IsElevated = RtlSidDominates(0LL, 0LL, &Dominates);
      if ( IsElevated >= 0 )
      {
        if ( !Dominates )
          goto LABEL_29;
        if ( (unsigned __int8)SepIsImpersonationAllowedDueToCapability((PACCESS_TOKEN)Token)
          || *(_DWORD *)(Token + 24) == *(_DWORD *)(a2 + 224) && *(_DWORD *)(Token + 28) == *(_DWORD *)(a2 + 228) )
        {
          IsElevated = 0;
          goto LABEL_23;
        }
        if ( !RtlEqualSid(**(PSID **)(Token + 152), **(PSID **)(a2 + 152)) )
          goto LABEL_29;
        if ( RtlQueryElevationFlags(&Flags) < 0 || (Flags.Flags & 1) == 0 )
        {
LABEL_20:
          IsElevated = 0;
          if ( (*(_DWORD *)(Token + 200) & 0x4000) == 0
            || (*(_DWORD *)(a2 + 200) & 0x4000) != 0
            && ((v10 = *(void **)(a2 + 784), v11 = *(void **)(Token + 784), RtlEqualSid(v11, v10))
             || RtlIsParentOfChildAppContainer(v11, v10)) )
          {
            if ( !SeTokenIsRestricted((PACCESS_TOKEN)Token)
              || SeTokenIsRestricted((PACCESS_TOKEN)a2)
              && (SeTokenIsWriteRestricted((PACCESS_TOKEN)Token) || !SeTokenIsWriteRestricted((PACCESS_TOKEN)a2)) )
            {
              v9 = *(_DWORD *)(a2 + 120);
              if ( *(_DWORD *)(Token + 120) == v9 || v9 )
                goto LABEL_23;
            }
          }
          goto LABEL_29;
        }
        IsElevated = SeTokenIsElevated(a2, &v14);
        if ( IsElevated >= 0 )
        {
          if ( v14 )
          {
            IsElevated = SeTokenIsElevated(Token, &v14);
            if ( IsElevated < 0 )
              goto LABEL_23;
            if ( !v14 && (*(_DWORD *)(*(_QWORD *)(Token + 216) + 32LL) & 4) != 0 )
              goto LABEL_29;
          }
          if ( (*(_DWORD *)(*(_QWORD *)(Token + 216) + 32LL) & 4) == 0
            || (*(_DWORD *)(*(_QWORD *)(a2 + 216) + 32LL) & 4) != 0 )
          {
            goto LABEL_20;
          }
          SepLogUnmatchedSessionFlagImpersonationAttempt(Token, a2);
LABEL_29:
          IsElevated = -1073741727;
        }
      }
LABEL_23:
      SepReleaseOrderedReadLocks(Token, a2);
      return IsElevated;
    }
  }
  return 0;
}
