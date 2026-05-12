/*
 * XREFs of __report_rangecheckfailure @ 0x1C001A000
 * Callers:
 *     StorCompareScsiDeviceId @ 0x1C0010824 (StorCompareScsiDeviceId.c)
 *     WppInitGlobalLogger @ 0x1C00790A0 (WppInitGlobalLogger.c)
 * Callees:
 *     <none>
 */

void __noreturn _report_rangecheckfailure()
{
  __fastfail(8u);
}
