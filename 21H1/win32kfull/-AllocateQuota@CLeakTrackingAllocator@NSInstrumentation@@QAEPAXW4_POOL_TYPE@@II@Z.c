/*
 * XREFs of ?AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QAEPAXW4_POOL_TYPE@@II@Z @ 0x249BDD
 * Callers:
 *     NSInstrumentation::UAFMitigationAllocator_Win32UAFMAllocatorCollection_::AllocateWrapper__lambda_4f7eb985707f6c5d2acf3a41f3d88b59___ @ 0xF3F74 (NSInstrumentation--UAFMitigationAllocator_Win32UAFMAllocatorCollection_--AllocateWrapper__lambda.c)
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_750ad41c39a49dc3eede39536ae3d7a9___lambda_26ec67435694390af4fa53f29b925eb3___ @ 0x249775 (NSInstrumentation--CLeakTrackingAllocator--AllocateCommon__lambda_750ad41c39a49dc3eede39536ae3d7.c)
 */

char *__thiscall NSInstrumentation::CLeakTrackingAllocator::AllocateQuota(
        NSInstrumentation::CLeakTrackingAllocator *this,
        enum _POOL_TYPE a2,
        SIZE_T NumberOfBytes,
        unsigned int a4)
{
  LOBYTE(this) = 0;
  return NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_750ad41c39a49dc3eede39536ae3d7a9___lambda_26ec67435694390af4fa53f29b925eb3___(
           *((NSInstrumentation::CLeakTrackingAllocator **)&WPP_MAIN_CB.Queue.Wcb.1 + 3),
           NumberOfBytes,
           a4,
           (int)this,
           &a2,
           &a4);
}
