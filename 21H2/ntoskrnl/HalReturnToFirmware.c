/*
 * XREFs of HalReturnToFirmware @ 0x1404BE1A0
 * Callers:
 *     HaliAcpiSleep @ 0x140385F30 (HaliAcpiSleep.c)
 *     HalpLegacyShutdown @ 0x1404BE2F0 (HalpLegacyShutdown.c)
 *     HalpShutdownReset @ 0x1404BE660 (HalpShutdownReset.c)
 *     KeBugCheck2 @ 0x140516AD0 (KeBugCheck2.c)
 *     ExRebootSystemForRecovery @ 0x1405B2614 (ExRebootSystemForRecovery.c)
 *     PopInvokeSystemStateHandler @ 0x140992A68 (PopInvokeSystemStateHandler.c)
 *     PopShutdownSystem @ 0x1409B2624 (PopShutdownSystem.c)
 *     KdpSendWaitContinue @ 0x1409B84F4 (KdpSendWaitContinue.c)
 *     HdlspBugCheckProcessing @ 0x1409EED54 (HdlspBugCheckProcessing.c)
 * Callees:
 *     DbgPrint @ 0x140284160 (DbgPrint.c)
 *     HalpAcquireCmosSpinLock @ 0x1402B612C (HalpAcquireCmosSpinLock.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     HalpTimerStopAllTimers @ 0x1404B6AEC (HalpTimerStopAllTimers.c)
 *     HalpPowerWriteResetCommand @ 0x1404BE30C (HalpPowerWriteResetCommand.c)
 *     HalpShutdown @ 0x1404BE490 (HalpShutdown.c)
 *     HalpInterruptResetAllProcessors @ 0x1404D2BEC (HalpInterruptResetAllProcessors.c)
 *     KdPowerTransitionEx @ 0x140510FC0 (KdPowerTransitionEx.c)
 */

void __fastcall __noreturn HalReturnToFirmware(int a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8

  if ( a1 )
  {
    if ( a1 == 1 )
    {
      KdPowerTransitionEx(4LL, 0LL);
      HalpShutdown();
    }
    else if ( a1 <= 1 || a1 > 3 )
    {
      DbgPrint("HalReturnToFirmware called\n");
      __debugbreak();
    }
  }
  KdPowerTransitionEx(4LL, 0LL);
  if ( HalpRebootHandler )
    off_140C00950[0]();
  _disable();
  if ( !HalpHvCpuManager || HalpEnlightenment )
    HalpTimerStopAllTimers();
  HalpAcquireCmosSpinLock(v2, v1, v3);
  if ( HalpResetParkDisposition )
    HalpInterruptResetAllProcessors();
  HalpPowerWriteResetCommand(0LL, 0LL);
  JUMPOUT(0x1404BE22BLL);
}
