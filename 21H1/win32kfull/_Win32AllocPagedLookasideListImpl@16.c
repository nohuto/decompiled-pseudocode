/*
 * XREFs of _Win32AllocPagedLookasideListImpl@16 @ 0xE6268
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__thiscall Win32AllocPagedLookasideListImpl(
        NSInstrumentation::CLeakTrackingAllocator *this,
        SIZE_T a2,
        ULONG a3,
        ULONG a4,
        unsigned int a5)
{
  return NSInstrumentation::CLeakTrackingAllocator::AllocatePagedLookasideList(this, a2, a3, a4, a5);
}
