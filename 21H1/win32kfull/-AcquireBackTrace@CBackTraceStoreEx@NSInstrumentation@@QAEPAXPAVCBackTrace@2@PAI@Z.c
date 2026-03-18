/*
 * XREFs of ?AcquireBackTrace@CBackTraceStoreEx@NSInstrumentation@@QAEPAXPAVCBackTrace@2@PAI@Z @ 0x24A130
 * Callers:
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AAE_NPAXPAVCBackTrace@1@@Z @ 0x249945 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AAE_NPAXPAVCBa.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AAE_NPAXPAVCBackTrace@1@@Z @ 0x2499AB (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AAE_NPAXPAVCB.c)
 * Callees:
 *     ?Insert@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QAEPAVCBackTraceStorageUnit@2@QBVCBackTrace@2@@Z @ 0x24A2AF (-Insert@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBa.c)
 *     ?Lookup@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QBEPAVCBackTraceStorageUnit@2@QBVCBackTrace@2@@Z @ 0x24A3E8 (-Lookup@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBa.c)
 */

void *__thiscall NSInstrumentation::CBackTraceStoreEx::AcquireBackTrace(
        NSInstrumentation::CBackTraceStoreEx *this,
        struct NSInstrumentation::CBackTrace *Buf2,
        unsigned int *a3)
{
  void *result; // eax

  if ( !Buf2 )
    return 0;
  result = (void *)NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Lookup(
                     this,
                     Buf2);
  if ( !result )
    return (void *)NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Insert(
                     this,
                     Buf2);
  return result;
}
