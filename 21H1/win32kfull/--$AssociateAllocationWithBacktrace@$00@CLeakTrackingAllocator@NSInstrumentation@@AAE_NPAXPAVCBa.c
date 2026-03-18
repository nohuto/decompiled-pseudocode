/*
 * XREFs of ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AAE_NPAXPAVCBackTrace@1@@Z @ 0x249945
 * Callers:
 *     _Win32AllocPoolImpl@12 @ 0x83070 (_Win32AllocPoolImpl@12.c)
 *     _Win32AllocPoolWithQuotaImpl@12 @ 0x8D904 (_Win32AllocPoolWithQuotaImpl@12.c)
 *     _Win32AllocateFromPagedLookasideListImpl@4 @ 0x91FD2 (_Win32AllocateFromPagedLookasideListImpl@4.c)
 *     ?AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QAEPAXIIII@Z @ 0xE6274 (-AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QAEPAXIIII@Z.c)
 *     NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_750ad41c39a49dc3eede39536ae3d7a9___lambda_26ec67435694390af4fa53f29b925eb3___ @ 0x249775 (NSInstrumentation--CLeakTrackingAllocator--AllocateCommon__lambda_750ad41c39a49dc3eede39536ae3d7.c)
 *     NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_c835e4d541cfe63f9322918de68711f0___lambda_2e36e9d35e34148bcbefefc56a67e536___ @ 0x24985A (NSInstrumentation--CLeakTrackingAllocator--AllocateCommon__lambda_c835e4d541cfe63f9322918de68711.c)
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QAEPAXW4_POOL_TYPE@@II@Z @ 0x249A1A (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QAEPAXW4_POOL_TYPE@@II@Z.c)
 *     ?AllocateFromPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QAEPAXPAX@Z @ 0x249AF2 (-AllocateFromPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QAEPAXPAX@Z.c)
 * Callees:
 *     ?Insert@CPointerHashTable@NSInstrumentation@@QAE_NPBX0@Z @ 0x8D01C (-Insert@CPointerHashTable@NSInstrumentation@@QAE_NPBX0@Z.c)
 *     ?InitializeBackTraceStore@CLeakTrackingAllocator@NSInstrumentation@@AAEXPAPAVCBackTraceStoreEx@2@@Z @ 0x249E25 (-InitializeBackTraceStore@CLeakTrackingAllocator@NSInstrumentation@@AAEXPAPAVCBackTraceStoreEx@2.c)
 *     ?InitializePointerHashTable@CLeakTrackingAllocator@NSInstrumentation@@AAEXPAPAVCPointerHashTable@2@_N@Z @ 0x249E79 (-InitializePointerHashTable@CLeakTrackingAllocator@NSInstrumentation@@AAEXPAPAVCPointerHashTable.c)
 *     ?AcquireBackTrace@CBackTraceStoreEx@NSInstrumentation@@QAEPAXPAVCBackTrace@2@PAI@Z @ 0x24A130 (-AcquireBackTrace@CBackTraceStoreEx@NSInstrumentation@@QAEPAXPAVCBackTrace@2@PAI@Z.c)
 *     ?Remove@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QAE_NQBVCBackTraceStorageUnit@2@@Z @ 0x24A4C4 (-Remove@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBa.c)
 */

char __thiscall NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
        struct NSInstrumentation::CPointerHashTable **this,
        void *a2,
        struct NSInstrumentation::CBackTrace *Buf2)
{
  NSInstrumentation::CPrioritizedWriterLock **v4; // esi
  NSInstrumentation::CBackTraceStoreEx *v5; // ecx
  void *v6; // ebx
  struct NSInstrumentation::CPointerHashTable **v7; // edi
  NSInstrumentation::CPointerHashTable *v8; // ecx

  v4 = this + 14;
  v5 = this[14];
  if ( v5 || (NSInstrumentation::CLeakTrackingAllocator::InitializeBackTraceStore(0, v4), (v5 = *v4) != 0) )
  {
    v6 = NSInstrumentation::CBackTraceStoreEx::AcquireBackTrace(v5, Buf2, (unsigned int *)v5);
    if ( v6 )
    {
      v7 = this + 12;
      v8 = *v7;
      if ( *v7 || (NSInstrumentation::CLeakTrackingAllocator::InitializePointerHashTable(0, v7, 0), (v8 = *v7) != 0) )
      {
        if ( NSInstrumentation::CPointerHashTable::Insert(v8, a2, v6) )
          return 1;
      }
      NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(
        *v4,
        (struct NSInstrumentation::CBackTraceStorageUnit *)v6);
    }
  }
  return 0;
}
