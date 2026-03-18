/*
 * XREFs of NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_5a5c26db124383813a4ad6aa9f2996d5___lambda_f46a24200fa13ebf3509176f7b31ac85___ @ 0x1C02DBF20
 * Callers:
 *     ?AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXW4_POOL_TYPE@@_KI@Z @ 0x1C02DC440 (-AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXW4_POOL_TYPE@@_KI@Z.c)
 * Callees:
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C011F114 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     memset @ 0x1C015F880 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C02DC194 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C02DC234 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

char *__fastcall NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_5a5c26db124383813a4ad6aa9f2996d5___lambda_f46a24200fa13ebf3509176f7b31ac85___(
        NSInstrumentation::CLeakTrackingAllocator *a1,
        __int64 a2,
        int a3)
{
  _DWORD **v4; // r9
  SIZE_T v5; // r10
  char v7; // si
  char *PoolWithQuotaTag; // rbx
  PVOID BackTrace[20]; // [rsp+20h] [rbp-A8h] BYREF

  if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(a1, a3) )
    return (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)(**v4 | 8), v5, *v4[1]);
  v7 = 0;
  if ( v5 < 0x1000 || (v5 & 0xFFF) != 0 )
  {
    v7 = 1;
    v5 += 16LL;
  }
  PoolWithQuotaTag = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)(**v4 | 8), v5, *v4[1]);
  if ( PoolWithQuotaTag )
  {
    memset(BackTrace, 0, sizeof(BackTrace));
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( v7 && (unsigned __int64)((unsigned __int16)PoolWithQuotaTag & 0xFFF) + 16 < 0x1000 )
    {
      if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                              a1,
                              PoolWithQuotaTag,
                              BackTrace) )
        return PoolWithQuotaTag + 16;
    }
    else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                 a1,
                                 PoolWithQuotaTag,
                                 BackTrace) )
    {
      return PoolWithQuotaTag;
    }
    ExFreePoolWithTag(PoolWithQuotaTag, 0);
  }
  return 0LL;
}
