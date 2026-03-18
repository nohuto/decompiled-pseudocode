/*
 * XREFs of ?AllocatePriority@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXW4_POOL_TYPE@@_KIW4_EX_POOL_PRIORITY@@@Z @ 0x1C02DC3F0
 * Callers:
 *     Win32AllocPoolWithPriorityImpl @ 0x1C021FD20 (Win32AllocPoolWithPriorityImpl.c)
 *     Win32UAFMAllocPoolWithPriorityImpl @ 0x1C021FDF0 (Win32UAFMAllocPoolWithPriorityImpl.c)
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_d3bf7150635fe7f290e2f1d66af772bb___lambda_fb1d754a87bb4379b691d90d9f0cbdb4___ @ 0x1C02DC054 (NSInstrumentation--CLeakTrackingAllocator--AllocateCommon__lambda_d3bf7150635fe7f290e2f1d66af772.c)
 */

char *__fastcall NSInstrumentation::CLeakTrackingAllocator::AllocatePriority(
        NSInstrumentation::CLeakTrackingAllocator *this,
        enum _POOL_TYPE a2,
        __int64 a3,
        int a4)
{
  return NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_d3bf7150635fe7f290e2f1d66af772bb___lambda_fb1d754a87bb4379b691d90d9f0cbdb4___(
           (NSInstrumentation::CLeakTrackingAllocator *)WPP_MAIN_CB.Queue.Wcb.DeviceContext,
           a3,
           a4);
}
