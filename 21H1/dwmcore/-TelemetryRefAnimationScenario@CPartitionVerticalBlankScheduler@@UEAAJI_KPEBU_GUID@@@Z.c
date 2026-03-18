/*
 * XREFs of ?TelemetryRefAnimationScenario@CPartitionVerticalBlankScheduler@@UEAAJI_KPEBU_GUID@@@Z @ 0x180089D50
 * Callers:
 *     <none>
 * Callees:
 *     ?TelemetryFillFrameInfo@CPartitionVerticalBlankScheduler@@AEAAXPEAUTelFrameInfo@CAnimationTracking@@PEAVCFrameInfo@@@Z @ 0x18003D7DC (-TelemetryFillFrameInfo@CPartitionVerticalBlankScheduler@@AEAAXPEAUTelFrameInfo@CAnimationTracki.c)
 *     ?RefAnimationScenario@CAnimationTracking@@QEAAJI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z @ 0x180089DB8 (-RefAnimationScenario@CAnimationTracking@@QEAAJI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::TelemetryRefAnimationScenario(
        CPartitionVerticalBlankScheduler *this,
        unsigned int a2,
        unsigned __int64 a3,
        const struct _GUID *a4)
{
  _BYTE v9[40]; // [rsp+30h] [rbp-28h] BYREF

  CPartitionVerticalBlankScheduler::TelemetryFillFrameInfo(this, (struct CAnimationTracking::TelFrameInfo *)v9, 0LL);
  return CAnimationTracking::RefAnimationScenario(
           (CPartitionVerticalBlankScheduler *)((char *)this + 5376),
           a2,
           a3,
           a4,
           (const struct CAnimationTracking::TelFrameInfo *)v9);
}
