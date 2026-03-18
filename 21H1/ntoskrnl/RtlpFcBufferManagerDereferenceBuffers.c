/*
 * XREFs of RtlpFcBufferManagerDereferenceBuffers @ 0x1403A3900
 * Callers:
 *     RtlQueryFeatureConfiguration @ 0x140764540 (RtlQueryFeatureConfiguration.c)
 *     CmFcpManagerDrainUsageNotifications @ 0x1407B4F90 (CmFcpManagerDrainUsageNotifications.c)
 *     CmFcManagerUpdateFeatureConfigurations @ 0x140879504 (CmFcManagerUpdateFeatureConfigurations.c)
 *     CmFcManagerUpdateFeatureUsageSubscriptions @ 0x140879860 (CmFcManagerUpdateFeatureUsageSubscriptions.c)
 *     RtlQueryAllFeatureConfigurations @ 0x140914930 (RtlQueryAllFeatureConfigurations.c)
 *     CmFcManagerStartRuntimePhase @ 0x140A357B8 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     RtlReleaseSwapReference @ 0x1403A393C (RtlReleaseSwapReference.c)
 *     RtlpFcLeaveRegion @ 0x1407799C4 (RtlpFcLeaveRegion.c)
 */

__int64 __fastcall RtlpFcBufferManagerDereferenceBuffers(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdx

  v2 = (__int64)((unsigned __int128)((a2 - a1 - 24) * (__int128)0xE38E38E38E38E39LL) >> 64) >> 2;
  RtlReleaseSwapReference(a1, (v2 >> 63) + v2);
  return RtlpFcLeaveRegion();
}
