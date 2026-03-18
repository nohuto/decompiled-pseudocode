/*
 * XREFs of SepFreeResourceInfo @ 0x14025829C
 * Callers:
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x1402092C0 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     SepFilterCheck @ 0x14020A2B0 (SepFilterCheck.c)
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x140258400 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x140370184 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1405E1B90 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 * Callees:
 *     AuthzBasepFreeSecurityAttributesList @ 0x140231230 (AuthzBasepFreeSecurityAttributesList.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall SepFreeResourceInfo(_DWORD *P)
{
  if ( P )
  {
    AuthzBasepFreeSecurityAttributesList(P);
    ExFreePoolWithTag(P, 0);
  }
}
