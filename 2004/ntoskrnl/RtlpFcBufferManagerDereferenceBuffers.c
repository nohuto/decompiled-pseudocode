/*
 * XREFs of RtlpFcBufferManagerDereferenceBuffers @ 0x1403A4060
 * Callers:
 *     RtlQueryFeatureConfiguration @ 0x140389E10 (RtlQueryFeatureConfiguration.c)
 *     CmFcpManagerDrainUsageNotifications @ 0x1407B8100 (CmFcpManagerDrainUsageNotifications.c)
 *     CmFcManagerUpdateFeatureConfigurations @ 0x14087A7F4 (CmFcManagerUpdateFeatureConfigurations.c)
 *     CmFcManagerUpdateFeatureUsageSubscriptions @ 0x14087AB50 (CmFcManagerUpdateFeatureUsageSubscriptions.c)
 *     RtlQueryAllFeatureConfigurations @ 0x14090CDC0 (RtlQueryAllFeatureConfigurations.c)
 *     CmFcManagerStartRuntimePhase @ 0x140A357B8 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     RtlReleaseSwapReference @ 0x1403A409C (RtlReleaseSwapReference.c)
 *     RtlpFcLeaveRegion @ 0x14077BDD4 (RtlpFcLeaveRegion.c)
 */

__int64 __fastcall RtlpFcBufferManagerDereferenceBuffers(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdx

  v2 = (__int64)((unsigned __int128)((a2 - a1 - 24) * (__int128)0xE38E38E38E38E39LL) >> 64) >> 2;
  RtlReleaseSwapReference(a1, (v2 >> 63) + v2);
  return RtlpFcLeaveRegion();
}
