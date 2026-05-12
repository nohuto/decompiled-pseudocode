/*
 * XREFs of __report_rangecheckfailure @ 0x1C001CB50
 * Callers:
 *     StorCompareScsiDeviceId @ 0x1C0013BF4 (StorCompareScsiDeviceId.c)
 *     WppInitGlobalLogger @ 0x1C007A4CC (WppInitGlobalLogger.c)
 * Callees:
 *     <none>
 */

void __noreturn _report_rangecheckfailure()
{
  __fastfail(8u);
}
