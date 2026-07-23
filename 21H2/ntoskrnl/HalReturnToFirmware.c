/*
 * XREFs of HalReturnToFirmware @ 0x1404BE3E0
 * Callers:
 *     HaliAcpiSleep @ 0x140386080 (HaliAcpiSleep.c)
 *     HalpLegacyShutdown @ 0x1404BE530 (HalpLegacyShutdown.c)
 *     HalpShutdownReset @ 0x1404BE8A0 (HalpShutdownReset.c)
 *     KeBugCheck2 @ 0x140516D10 (KeBugCheck2.c)
 *     ExRebootSystemForRecovery @ 0x1405B2844 (ExRebootSystemForRecovery.c)
 *     PopInvokeSystemStateHandler @ 0x140993A68 (PopInvokeSystemStateHandler.c)
 *     PopShutdownSystem @ 0x1409B3554 (PopShutdownSystem.c)
 *     KdpSendWaitContinue @ 0x1409B94F4 (KdpSendWaitContinue.c)
 *     HdlspBugCheckProcessing @ 0x1409EFD54 (HdlspBugCheckProcessing.c)
 * Callees:
 *     HalpAcquireCmosSpinLock @ 0x14023430C (HalpAcquireCmosSpinLock.c)
 *     DbgPrint @ 0x140272780 (DbgPrint.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     HalpTimerStopAllTimers @ 0x1404B6D2C (HalpTimerStopAllTimers.c)
 *     HalpPowerWriteResetCommand @ 0x1404BE54C (HalpPowerWriteResetCommand.c)
 *     HalpShutdown @ 0x1404BE6D0 (HalpShutdown.c)
 *     HalpInterruptResetAllProcessors @ 0x1404D2E2C (HalpInterruptResetAllProcessors.c)
 *     KdPowerTransitionEx @ 0x140511200 (KdPowerTransitionEx.c)
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
  JUMPOUT(0x1404BE46BLL);
}
