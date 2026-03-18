/*
 * XREFs of SepFreeResourceInfo @ 0x14022A7D8
 * Callers:
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x140223E30 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     SepFilterCheck @ 0x140224E20 (SepFilterCheck.c)
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x140229080 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x140372D04 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1405E3AB0 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 * Callees:
 *     AuthzBasepFreeSecurityAttributesList @ 0x14029DCC0 (AuthzBasepFreeSecurityAttributesList.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall SepFreeResourceInfo(PVOID P)
{
  if ( P )
  {
    AuthzBasepFreeSecurityAttributesList(P);
    ExFreePoolWithTag(P, 0);
  }
}
