/*
 * XREFs of ?DxgkpCalibrateGpuTimerDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C003DE80
 * Callers:
 *     <none>
 * Callees:
 *     ?PerformClockCalibration@ADAPTER_RENDER@@QEAAXXZ @ 0x1C003B02C (-PerformClockCalibration@ADAPTER_RENDER@@QEAAXXZ.c)
 */

void __fastcall DxgkpCalibrateGpuTimerDpc(
        struct _KDPC *Dpc,
        ADAPTER_RENDER *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  ADAPTER_RENDER::PerformClockCalibration(DeferredContext);
}
