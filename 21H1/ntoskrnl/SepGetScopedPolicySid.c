/*
 * XREFs of SepGetScopedPolicySid @ 0x140590508
 * Callers:
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x1402092C0 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x140258400 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SeComputeCreatorDeniedRights @ 0x140263F30 (SeComputeCreatorDeniedRights.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x140370184 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1405E1B90 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 * Callees:
 *     RtlFindAceByType @ 0x140257F00 (RtlFindAceByType.c)
 */

unsigned __int8 *__fastcall SepGetScopedPolicySid(__int64 a1)
{
  unsigned __int8 *result; // rax
  unsigned int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  while ( 1 )
  {
    result = RtlFindAceByType(a1, 19, &v3);
    if ( result )
    {
      if ( (result[1] & 8) == 0 )
        break;
    }
    ++v3;
    if ( !result )
      return result;
  }
  result += 8;
  return result;
}
