/*
 * XREFs of ?CleanupCallback@CLeakTrackingAllocator@NSInstrumentation@@CGXPAX00@Z @ 0x249C07
 * Callers:
 *     <none>
 * Callees:
 *     ?Remove@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QAE_NQBVCBackTraceStorageUnit@2@@Z @ 0x24A4C4 (-Remove@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBa.c)
 */

void __stdcall NSInstrumentation::CLeakTrackingAllocator::CleanupCallback(
        PVOID P,
        struct NSInstrumentation::CBackTraceStorageUnit *a2,
        NSInstrumentation::CPrioritizedWriterLock **a3)
{
  NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(
    a3[14],
    a2);
  ExFreePoolWithTag(P, 0);
}
