/*
 * XREFs of HUBDSM_BugcheckingSystemOnBootDeviceEnumerationFailure @ 0x1C001CB60
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_BugcheckSystemOnBootDeviceEnumerationFailure @ 0x1C00311A8 (HUBMISC_BugcheckSystemOnBootDeviceEnumerationFailure.c)
 */

void __fastcall __noreturn HUBDSM_BugcheckingSystemOnBootDeviceEnumerationFailure(__int64 a1)
{
  HUBMISC_BugcheckSystemOnBootDeviceEnumerationFailure(*(_QWORD *)(a1 + 960));
}
