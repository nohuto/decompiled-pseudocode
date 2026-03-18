/*
 * XREFs of _Win32AllocPoolWithPriorityImpl@16 @ 0x183601
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__thiscall Win32AllocPoolWithPriorityImpl(
        NSInstrumentation::CLeakTrackingAllocator *this,
        enum _POOL_TYPE a2,
        SIZE_T a3,
        unsigned int a4,
        enum _EX_POOL_PRIORITY a5)
{
  return NSInstrumentation::CLeakTrackingAllocator::AllocatePriority(this, a2, a3, a4, a5);
}
