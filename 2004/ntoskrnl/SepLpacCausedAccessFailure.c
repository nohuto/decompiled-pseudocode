/*
 * XREFs of SepLpacCausedAccessFailure @ 0x1403564A8
 * Callers:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x140294C80 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x140370DB4 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x140627300 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 * Callees:
 *     <none>
 */

bool __fastcall SepLpacCausedAccessFailure(__int64 a1, int a2)
{
  bool result; // al
  int v3; // r8d

  result = 0;
  if ( *(_BYTE *)(a1 + 24) )
  {
    v3 = a2 & ~(*(_DWORD *)(a1 + 4) | *(_DWORD *)(a1 + 8) | 0x2000000);
    if ( (v3 & *(_DWORD *)(a1 + 16)) == v3 )
      return 1;
  }
  return result;
}
