/*
 * XREFs of _Win32FreePagedLookasideListImpl@4 @ 0xD30BE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __thiscall Win32FreePagedLookasideListImpl(NSInstrumentation::CLeakTrackingAllocator *this, void *a2)
{
  NSInstrumentation::CLeakTrackingAllocator::FreePagedLookasideList(this, a2);
}
