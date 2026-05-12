/*
 * XREFs of __report_rangecheckfailure @ 0x1C001BEB0
 * Callers:
 *     StorCompareScsiDeviceId @ 0x1C0012694 (StorCompareScsiDeviceId.c)
 *     WppInitGlobalLogger @ 0x1C0078FC4 (WppInitGlobalLogger.c)
 * Callees:
 *     <none>
 */

void __noreturn _report_rangecheckfailure()
{
  __fastfail(8u);
}
