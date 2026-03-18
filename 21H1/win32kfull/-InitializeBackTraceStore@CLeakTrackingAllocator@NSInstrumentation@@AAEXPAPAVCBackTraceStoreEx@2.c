/*
 * XREFs of ?InitializeBackTraceStore@CLeakTrackingAllocator@NSInstrumentation@@AAEXPAPAVCBackTraceStoreEx@2@@Z @ 0x249E25
 * Callers:
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AAE_NPAXPAVCBackTrace@1@@Z @ 0x249945 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AAE_NPAXPAVCBa.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AAE_NPAXPAVCBackTrace@1@@Z @ 0x2499AB (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AAE_NPAXPAVCB.c)
 * Callees:
 *     ?Create@CBackTraceStoreEx@NSInstrumentation@@SGPAV12@XZ @ 0x24A1AF (-Create@CBackTraceStoreEx@NSInstrumentation@@SGPAV12@XZ.c)
 *     ?DestroyBuckets@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@CGXPAVCHashBucket@12@I@Z @ 0x24A20C (-DestroyBuckets@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUni.c)
 */

void __thiscall NSInstrumentation::CLeakTrackingAllocator::InitializeBackTraceStore(
        NSInstrumentation::CLeakTrackingAllocator *this,
        struct NSInstrumentation::CBackTraceStoreEx **a2)
{
  struct NSInstrumentation::CBackTraceStoreEx *v2; // eax
  struct NSInstrumentation::CBackTraceStoreEx *v3; // esi
  void *v4; // eax

  v2 = NSInstrumentation::CBackTraceStoreEx::Create();
  v3 = v2;
  if ( v2 && _InterlockedCompareExchange((volatile signed __int32 *)a2, (signed __int32)v2, 0) )
  {
    NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::DestroyBuckets(*((PVOID *)v2 + 8));
    v4 = (void *)*((_DWORD *)v3 + 7);
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
    *((_DWORD *)v3 + 8) = 0;
    *((_DWORD *)v3 + 5) = 0;
    *((_DWORD *)v3 + 6) = 0;
    ExFreePoolWithTag(v3, 0);
  }
}
