/*
 * XREFs of ?FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C0123948
 * Callers:
 *     Win32FreePagedLookasideListImpl @ 0x1C0123930 (Win32FreePagedLookasideListImpl.c)
 *     Win32UAFMAllocPagedLookasideListImpl @ 0x1C021FD50 (Win32UAFMAllocPagedLookasideListImpl.c)
 *     Win32UAFMFreePagedLookasideListImpl @ 0x1C021FF30 (Win32UAFMFreePagedLookasideListImpl.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C012398C (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall NSInstrumentation::CLeakTrackingAllocator::FreePagedLookasideList(
        NSInstrumentation::CLeakTrackingAllocator *this,
        char *a2)
{
  NSInstrumentation::CLeakTrackingAllocator *DeviceContext; // rbx

  DeviceContext = (NSInstrumentation::CLeakTrackingAllocator *)WPP_MAIN_CB.Queue.Wcb.DeviceContext;
  ExDeletePagedLookasideList((PPAGED_LOOKASIDE_LIST)(a2 + 16));
  NSInstrumentation::CLeakTrackingAllocator::Free(DeviceContext, a2);
}
