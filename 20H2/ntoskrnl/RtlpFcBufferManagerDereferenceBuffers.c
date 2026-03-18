/*
 * XREFs of RtlpFcBufferManagerDereferenceBuffers @ 0x1403A648C
 * Callers:
 *     RtlQueryFeatureConfiguration @ 0x14038C0B0 (RtlQueryFeatureConfiguration.c)
 *     CmFcpManagerDrainUsageNotifications @ 0x1407C6990 (CmFcpManagerDrainUsageNotifications.c)
 *     CmFcManagerUpdateFeatureConfigurations @ 0x140880364 (CmFcManagerUpdateFeatureConfigurations.c)
 *     CmFcManagerUpdateFeatureUsageSubscriptions @ 0x1408806C0 (CmFcManagerUpdateFeatureUsageSubscriptions.c)
 *     RtlQueryAllFeatureConfigurations @ 0x14091B7F0 (RtlQueryAllFeatureConfigurations.c)
 *     CmFcManagerStartRuntimePhase @ 0x140A3B7B8 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     RtlReleaseSwapReference @ 0x1403A64C8 (RtlReleaseSwapReference.c)
 *     RtlpFcLeaveRegion @ 0x14078A3D4 (RtlpFcLeaveRegion.c)
 */

__int64 __fastcall RtlpFcBufferManagerDereferenceBuffers(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdx

  v2 = (__int64)((unsigned __int128)((a2 - a1 - 24) * (__int128)0xE38E38E38E38E39LL) >> 64) >> 2;
  RtlReleaseSwapReference(a1, (v2 >> 63) + v2);
  return RtlpFcLeaveRegion();
}
