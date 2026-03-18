/*
 * XREFs of ?TelemetryUnrefAnimationScenario@CPartitionVerticalBlankScheduler@@UEAAXI_KPEBU_GUID@@@Z @ 0x180076F80
 * Callers:
 *     <none>
 * Callees:
 *     ?UnrefAnimationScenario@CAnimationTracking@@QEAAXI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z @ 0x180076FE8 (-UnrefAnimationScenario@CAnimationTracking@@QEAAXI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z.c)
 *     ?TelemetryFillFrameInfo@CPartitionVerticalBlankScheduler@@AEAAXPEAUTelFrameInfo@CAnimationTracking@@PEAVCFrameInfo@@@Z @ 0x180079298 (-TelemetryFillFrameInfo@CPartitionVerticalBlankScheduler@@AEAAXPEAUTelFrameInfo@CAnimationTracki.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::TelemetryUnrefAnimationScenario(
        CPartitionVerticalBlankScheduler *this,
        unsigned int a2,
        unsigned __int64 a3,
        const struct _GUID *a4)
{
  _BYTE v8[40]; // [rsp+30h] [rbp-28h] BYREF

  CPartitionVerticalBlankScheduler::TelemetryFillFrameInfo(this, (struct CAnimationTracking::TelFrameInfo *)v8, 0LL);
  CAnimationTracking::UnrefAnimationScenario(
    (CPartitionVerticalBlankScheduler *)((char *)this + 4864),
    a2,
    a3,
    a4,
    (const struct CAnimationTracking::TelFrameInfo *)v8);
}
