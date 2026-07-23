/*
 * XREFs of SepTokenIsOwner @ 0x140204D30
 * Callers:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x140258400 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SeComputeCreatorDeniedRights @ 0x140263F30 (SeComputeCreatorDeniedRights.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x140370184 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1405E1B90 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 * Callees:
 *     SepSidInToken @ 0x140204C10 (SepSidInToken.c)
 *     RtlSidHashLookup @ 0x140204E00 (RtlSidHashLookup.c)
 *     RtlEqualSid @ 0x140206340 (RtlEqualSid.c)
 */

char __fastcall SepTokenIsOwner(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v6; // rax
  void *v7; // rbx
  PSID_AND_ATTRIBUTES v8; // rax

  if ( *(__int16 *)(a2 + 2) >= 0 )
  {
    v7 = *(void **)(a2 + 8);
  }
  else
  {
    v6 = *(unsigned int *)(a2 + 4);
    if ( (_DWORD)v6 )
      v7 = (void *)(a2 + v6);
    else
      v7 = 0LL;
  }
  if ( a4 && v7 && RtlEqualSid(SeAliasAdminsSid, v7) )
    return 0;
  v8 = RtlSidHashLookup((PSID_AND_ATTRIBUTES_HASH)(a1 + 232), v7);
  if ( !v8 || (v8 != *(PSID_AND_ATTRIBUTES *)(a1 + 240) || (v8->Attributes & 0x10) != 0) && (v8->Attributes & 4) == 0 )
    return 0;
  if ( *(_DWORD *)(a1 + 128) )
    return SepSidInToken(a1, 0LL, (__int64)v7, 0LL, 1, 0, a4);
  return 1;
}
