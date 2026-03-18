/*
 * XREFs of NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_750ad41c39a49dc3eede39536ae3d7a9___lambda_26ec67435694390af4fa53f29b925eb3___ @ 0x249775
 * Callers:
 *     ?AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QAEPAXW4_POOL_TYPE@@II@Z @ 0x249BDD (-AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QAEPAXW4_POOL_TYPE@@II@Z.c)
 * Callees:
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AAE_NI@Z @ 0xE62FE (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AAE_NI@Z.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AAE_NPAXPAVCBackTrace@1@@Z @ 0x249945 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AAE_NPAXPAVCBa.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AAE_NPAXPAVCBackTrace@1@@Z @ 0x2499AB (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AAE_NPAXPAVCB.c)
 */

char *__thiscall NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_750ad41c39a49dc3eede39536ae3d7a9___lambda_26ec67435694390af4fa53f29b925eb3___(
        NSInstrumentation::CLeakTrackingAllocator *this,
        SIZE_T NumberOfBytes,
        unsigned int a3,
        int a4,
        _DWORD *a5,
        ULONG *a6)
{
  SIZE_T v7; // edx
  char v8; // bl
  char *PoolWithQuotaTag; // esi
  PVOID BackTrace[20]; // [esp+10h] [ebp-50h] BYREF

  if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(this, a3) )
    return (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)(*a5 | 8), NumberOfBytes, *a6);
  v7 = NumberOfBytes;
  v8 = 0;
  if ( NumberOfBytes < 0x1000 || (NumberOfBytes & 0xFFF) != 0 )
  {
    v8 = 1;
    v7 = NumberOfBytes + 8;
  }
  PoolWithQuotaTag = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)(*a5 | 8), v7, *a6);
  if ( PoolWithQuotaTag )
  {
    memset(BackTrace, 0, sizeof(BackTrace));
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0);
    if ( v8 && ((unsigned __int16)PoolWithQuotaTag & 0xFFFu) + 8 < 0x1000 )
    {
      if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                              PoolWithQuotaTag,
                              (struct NSInstrumentation::CBackTrace *)BackTrace) )
        return PoolWithQuotaTag + 8;
    }
    else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                 (char)PoolWithQuotaTag,
                                 (struct NSInstrumentation::CBackTrace *)BackTrace) )
    {
      return PoolWithQuotaTag;
    }
    ExFreePoolWithTag(PoolWithQuotaTag, 0);
  }
  return 0;
}
