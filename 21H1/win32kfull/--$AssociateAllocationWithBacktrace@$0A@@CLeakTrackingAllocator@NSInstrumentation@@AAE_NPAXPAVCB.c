/*
 * XREFs of ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AAE_NPAXPAVCBackTrace@1@@Z @ 0x2499AB
 * Callers:
 *     _Win32AllocPoolImpl@12 @ 0x83070 (_Win32AllocPoolImpl@12.c)
 *     _Win32AllocPoolWithQuotaImpl@12 @ 0x8D904 (_Win32AllocPoolWithQuotaImpl@12.c)
 *     ?AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QAEPAXIIII@Z @ 0xE6274 (-AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QAEPAXIIII@Z.c)
 *     NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_750ad41c39a49dc3eede39536ae3d7a9___lambda_26ec67435694390af4fa53f29b925eb3___ @ 0x249775 (NSInstrumentation--CLeakTrackingAllocator--AllocateCommon__lambda_750ad41c39a49dc3eede39536ae3d7.c)
 *     NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_c835e4d541cfe63f9322918de68711f0___lambda_2e36e9d35e34148bcbefefc56a67e536___ @ 0x24985A (NSInstrumentation--CLeakTrackingAllocator--AllocateCommon__lambda_c835e4d541cfe63f9322918de68711.c)
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QAEPAXW4_POOL_TYPE@@II@Z @ 0x249A1A (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QAEPAXW4_POOL_TYPE@@II@Z.c)
 * Callees:
 *     ?InitializeBackTraceStore@CLeakTrackingAllocator@NSInstrumentation@@AAEXPAPAVCBackTraceStoreEx@2@@Z @ 0x249E25 (-InitializeBackTraceStore@CLeakTrackingAllocator@NSInstrumentation@@AAEXPAPAVCBackTraceStoreEx@2.c)
 *     ?InitializeSortedVector@CLeakTrackingAllocator@NSInstrumentation@@AAEXPAPAV?$CSortedVector@PAXPAX@2@@Z @ 0x249EA7 (-InitializeSortedVector@CLeakTrackingAllocator@NSInstrumentation@@AAEXPAPAV-$CSortedVector@PAXPA.c)
 *     ?Insert@?$CSortedVector@PAXPAX@NSInstrumentation@@QAE_NABQAX0@Z @ 0x249EE0 (-Insert@-$CSortedVector@PAXPAX@NSInstrumentation@@QAE_NABQAX0@Z.c)
 *     ?AcquireBackTrace@CBackTraceStoreEx@NSInstrumentation@@QAEPAXPAVCBackTrace@2@PAI@Z @ 0x24A130 (-AcquireBackTrace@CBackTraceStoreEx@NSInstrumentation@@QAEPAXPAVCBackTrace@2@PAI@Z.c)
 *     ?Remove@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QAE_NQBVCBackTraceStorageUnit@2@@Z @ 0x24A4C4 (-Remove@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBa.c)
 */

char __thiscall NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
        _DWORD *this,
        char a2,
        struct NSInstrumentation::CBackTrace *Buf2)
{
  NSInstrumentation::CPrioritizedWriterLock **v4; // esi
  NSInstrumentation::CBackTraceStoreEx *v5; // ecx
  struct NSInstrumentation::CBackTrace *v6; // edi
  _DWORD *v7; // ebx

  v4 = (NSInstrumentation::CPrioritizedWriterLock **)(this + 14);
  v5 = (NSInstrumentation::CBackTraceStoreEx *)this[14];
  if ( v5 || (NSInstrumentation::CLeakTrackingAllocator::InitializeBackTraceStore(0, v4), (v5 = *v4) != 0) )
  {
    v6 = (struct NSInstrumentation::CBackTrace *)NSInstrumentation::CBackTraceStoreEx::AcquireBackTrace(
                                                   v5,
                                                   Buf2,
                                                   (unsigned int *)v5);
    Buf2 = v6;
    if ( v6 )
    {
      v7 = this + 13;
      if ( *v7 || (NSInstrumentation::CLeakTrackingAllocator::InitializeSortedVector(v7), *v7) )
      {
        if ( (unsigned __int8)NSInstrumentation::CSortedVector<void *,void *>::Insert(&a2, &Buf2) )
          return 1;
        v6 = Buf2;
      }
      NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(
        *v4,
        v6);
    }
  }
  return 0;
}
