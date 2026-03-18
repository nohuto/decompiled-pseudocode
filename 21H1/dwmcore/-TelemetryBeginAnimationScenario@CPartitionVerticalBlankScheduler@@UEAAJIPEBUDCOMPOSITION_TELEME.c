/*
 * XREFs of ?TelemetryBeginAnimationScenario@CPartitionVerticalBlankScheduler@@UEAAJIPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@PEBG@Z @ 0x180089960
 * Callers:
 *     <none>
 * Callees:
 *     ?TelemetryFillFrameInfo@CPartitionVerticalBlankScheduler@@AEAAXPEAUTelFrameInfo@CAnimationTracking@@PEAVCFrameInfo@@@Z @ 0x18003D7DC (-TelemetryFillFrameInfo@CPartitionVerticalBlankScheduler@@AEAAXPEAUTelFrameInfo@CAnimationTracki.c)
 *     ?BeginAnimationScenario@CAnimationTracking@@QEAAJIPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@PEBGAEBUTelFrameInfo@1@@Z @ 0x1800899CC (-BeginAnimationScenario@CAnimationTracking@@QEAAJIPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::TelemetryBeginAnimationScenario(
        CPartitionVerticalBlankScheduler *this,
        unsigned int a2,
        const struct DCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO *a3,
        const unsigned __int16 *a4)
{
  _BYTE v9[24]; // [rsp+30h] [rbp-48h] BYREF

  CPartitionVerticalBlankScheduler::TelemetryFillFrameInfo(this, (struct CAnimationTracking::TelFrameInfo *)v9, 0LL);
  return CAnimationTracking::BeginAnimationScenario(
           (CPartitionVerticalBlankScheduler *)((char *)this + 5376),
           a2,
           a3,
           a4,
           (const struct CAnimationTracking::TelFrameInfo *)v9);
}
