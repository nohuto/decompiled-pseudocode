/*
 * XREFs of ?AllocatePriority@CLeakTrackingAllocator@NSInstrumentation@@QAEPAXW4_POOL_TYPE@@IIW4_EX_POOL_PRIORITY@@@Z @ 0x249B98
 * Callers:
 *     NSInstrumentation::UAFMitigationAllocator_Win32UAFMAllocatorCollection_::AllocateWrapper__lambda_828817a7f4498484fe04ee355465d50d___ @ 0xF3FB2 (NSInstrumentation--UAFMitigationAllocator_Win32UAFMAllocatorCollection_--AllocateWrappe_ea_F3FB2.c)
 *     _Win32AllocPoolWithPriorityImpl@16 @ 0x183601 (_Win32AllocPoolWithPriorityImpl@16.c)
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_c835e4d541cfe63f9322918de68711f0___lambda_2e36e9d35e34148bcbefefc56a67e536___ @ 0x24985A (NSInstrumentation--CLeakTrackingAllocator--AllocateCommon__lambda_c835e4d541cfe63f9322918de68711.c)
 */

char *__thiscall NSInstrumentation::CLeakTrackingAllocator::AllocatePriority(
        NSInstrumentation::CLeakTrackingAllocator *this,
        enum _POOL_TYPE a2,
        SIZE_T NumberOfBytes,
        unsigned int a4,
        enum _EX_POOL_PRIORITY a5)
{
  int v6; // [esp+14h] [ebp-4h]

  LOBYTE(v6) = 0;
  return NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_c835e4d541cfe63f9322918de68711f0___lambda_2e36e9d35e34148bcbefefc56a67e536___(
           *((NSInstrumentation::CLeakTrackingAllocator **)&WPP_MAIN_CB.Queue.Wcb.1 + 3),
           NumberOfBytes,
           a4,
           &a2,
           &a4,
           &a5,
           v6);
}
