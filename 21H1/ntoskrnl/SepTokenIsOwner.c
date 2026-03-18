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
  __int64 v5; // rax
  void *v6; // rbx
  __int64 v7; // rax

  if ( *(__int16 *)(a2 + 2) >= 0 )
  {
    v6 = *(void **)(a2 + 8);
  }
  else
  {
    v5 = *(unsigned int *)(a2 + 4);
    if ( (_DWORD)v5 )
      v6 = (void *)(a2 + v5);
    else
      v6 = 0LL;
  }
  if ( a4 && v6 && RtlEqualSid(SeAliasAdminsSid, v6) )
    return 0;
  v7 = RtlSidHashLookup(a1 + 232, v6);
  if ( !v7 || (v7 != *(_QWORD *)(a1 + 240) || (*(_DWORD *)(v7 + 8) & 0x10) != 0) && (*(_DWORD *)(v7 + 8) & 4) == 0 )
    return 0;
  if ( *(_DWORD *)(a1 + 128) )
    return SepSidInToken(a1, 0LL, (__int64)v6, 0LL, 1);
  return 1;
}
