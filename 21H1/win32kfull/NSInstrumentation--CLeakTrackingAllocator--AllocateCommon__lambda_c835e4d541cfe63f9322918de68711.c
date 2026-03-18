/*
 * XREFs of NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_c835e4d541cfe63f9322918de68711f0___lambda_2e36e9d35e34148bcbefefc56a67e536___ @ 0x24985A
 * Callers:
 *     ?AllocatePriority@CLeakTrackingAllocator@NSInstrumentation@@QAEPAXW4_POOL_TYPE@@IIW4_EX_POOL_PRIORITY@@@Z @ 0x249B98 (-AllocatePriority@CLeakTrackingAllocator@NSInstrumentation@@QAEPAXW4_POOL_TYPE@@IIW4_EX_POOL_PRI.c)
 * Callees:
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AAE_NI@Z @ 0xE62FE (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AAE_NI@Z.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AAE_NPAXPAVCBackTrace@1@@Z @ 0x249945 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AAE_NPAXPAVCBa.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AAE_NPAXPAVCBackTrace@1@@Z @ 0x2499AB (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AAE_NPAXPAVCB.c)
 */

char *__thiscall NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_c835e4d541cfe63f9322918de68711f0___lambda_2e36e9d35e34148bcbefefc56a67e536___(
        NSInstrumentation::CLeakTrackingAllocator *this,
        SIZE_T NumberOfBytes,
        unsigned int a3,
        POOL_TYPE *a4,
        ULONG *a5,
        EX_POOL_PRIORITY *a6,
        int a7)
{
  SIZE_T v8; // esi
  char v9; // bl
  char *PoolWithTagPriority; // esi
  PVOID BackTrace[20]; // [esp+10h] [ebp-50h] BYREF

  if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(this, a3) )
    return (char *)ExAllocatePoolWithTagPriority(*a4, NumberOfBytes, *a5, *a6);
  v8 = NumberOfBytes;
  v9 = 0;
  if ( NumberOfBytes < 0x1000 || (NumberOfBytes & 0xFFF) != 0 )
  {
    v9 = 1;
    v8 = NumberOfBytes + 8;
  }
  PoolWithTagPriority = (char *)ExAllocatePoolWithTagPriority(*a4, v8, *a5, *a6);
  if ( PoolWithTagPriority )
  {
    memset(BackTrace, 0, sizeof(BackTrace));
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0);
    if ( v9 && ((unsigned __int16)PoolWithTagPriority & 0xFFFu) + 8 < 0x1000 )
    {
      if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                              PoolWithTagPriority,
                              (struct NSInstrumentation::CBackTrace *)BackTrace) )
        return PoolWithTagPriority + 8;
    }
    else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                 (char)PoolWithTagPriority,
                                 (struct NSInstrumentation::CBackTrace *)BackTrace) )
    {
      return PoolWithTagPriority;
    }
    ExFreePoolWithTag(PoolWithTagPriority, 0);
  }
  return 0;
}
