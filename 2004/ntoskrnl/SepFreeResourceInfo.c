/*
 * XREFs of SepFreeResourceInfo @ 0x140294B1C
 * Callers:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x140294C80 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x14029BDD0 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     SepFilterCheck @ 0x14029CDC0 (SepFilterCheck.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x140370DB4 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x140627300 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 * Callees:
 *     AuthzBasepFreeSecurityAttributesList @ 0x1402C4060 (AuthzBasepFreeSecurityAttributesList.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall SepFreeResourceInfo(PVOID P)
{
  if ( P )
  {
    AuthzBasepFreeSecurityAttributesList(P);
    ExFreePoolWithTag(P, 0);
  }
}
