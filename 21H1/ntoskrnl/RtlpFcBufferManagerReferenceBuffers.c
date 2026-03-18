/*
 * XREFs of RtlpFcBufferManagerReferenceBuffers @ 0x1403A3578
 * Callers:
 *     RtlQueryFeatureConfiguration @ 0x140764540 (RtlQueryFeatureConfiguration.c)
 *     CmFcpManagerDrainUsageNotifications @ 0x1407B4F90 (CmFcpManagerDrainUsageNotifications.c)
 *     CmFcManagerUpdateFeatureConfigurations @ 0x140879504 (CmFcManagerUpdateFeatureConfigurations.c)
 *     CmFcManagerUpdateFeatureUsageSubscriptions @ 0x140879860 (CmFcManagerUpdateFeatureUsageSubscriptions.c)
 *     RtlQueryAllFeatureConfigurations @ 0x140914930 (RtlQueryAllFeatureConfigurations.c)
 *     CmFcManagerStartRuntimePhase @ 0x140A357B8 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     RtlAcquireSwapReference @ 0x1403A35C8 (RtlAcquireSwapReference.c)
 *     RtlpFcEnterRegion @ 0x14077965C (RtlpFcEnterRegion.c)
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
