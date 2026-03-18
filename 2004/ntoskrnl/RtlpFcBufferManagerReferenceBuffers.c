/*
 * XREFs of RtlpFcBufferManagerReferenceBuffers @ 0x1403A3CD8
 * Callers:
 *     RtlQueryFeatureConfiguration @ 0x140389E10 (RtlQueryFeatureConfiguration.c)
 *     CmFcpManagerDrainUsageNotifications @ 0x1407B8100 (CmFcpManagerDrainUsageNotifications.c)
 *     CmFcManagerUpdateFeatureConfigurations @ 0x14087A7F4 (CmFcManagerUpdateFeatureConfigurations.c)
 *     CmFcManagerUpdateFeatureUsageSubscriptions @ 0x14087AB50 (CmFcManagerUpdateFeatureUsageSubscriptions.c)
 *     RtlQueryAllFeatureConfigurations @ 0x14090CDC0 (RtlQueryAllFeatureConfigurations.c)
 *     CmFcManagerStartRuntimePhase @ 0x140A357B8 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     RtlAcquireSwapReference @ 0x1403A3D28 (RtlAcquireSwapReference.c)
 *     RtlpFcEnterRegion @ 0x14077BA6C (RtlpFcEnterRegion.c)
 */

__int64 __fastcall RtlpFcBufferManagerReferenceBuffers(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // r10
  __int64 result; // rax
  _QWORD *v7; // r11

  RtlpFcEnterRegion();
  v5 = (unsigned int)RtlAcquireSwapReference();
  result = *(_QWORD *)(a1 + 8 * v5 + 168);
  *v7 = result;
  *a3 = a1 + 8 * (v5 + 8 * v5 + 3);
  return result;
}
