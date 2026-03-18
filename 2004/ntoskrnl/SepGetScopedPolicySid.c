/*
 * XREFs of SepGetScopedPolicySid @ 0x140590BF8
 * Callers:
 *     SeComputeCreatorDeniedRights @ 0x14020B050 (SeComputeCreatorDeniedRights.c)
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x140294C80 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x14029BDD0 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x140370DB4 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x140627300 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 * Callees:
 *     RtlFindAceByType @ 0x140294780 (RtlFindAceByType.c)
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
