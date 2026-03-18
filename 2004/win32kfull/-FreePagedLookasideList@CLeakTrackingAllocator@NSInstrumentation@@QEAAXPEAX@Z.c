/*
 * XREFs of ?FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C01224C8
 * Callers:
 *     Win32FreePagedLookasideListImpl @ 0x1C01224B0 (Win32FreePagedLookasideListImpl.c)
 *     Win32UAFMAllocPagedLookasideListImpl @ 0x1C0220BE0 (Win32UAFMAllocPagedLookasideListImpl.c)
 *     Win32UAFMFreePagedLookasideListImpl @ 0x1C0220DC0 (Win32UAFMFreePagedLookasideListImpl.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C012250C (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall NSInstrumentation::CLeakTrackingAllocator::FreePagedLookasideList(
        NSInstrumentation::CLeakTrackingAllocator *this,
        char *a2)
{
  NSInstrumentation::CLeakTrackingAllocator *DeviceRoutine; // rbx

  DeviceRoutine = (NSInstrumentation::CLeakTrackingAllocator *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine;
  ExDeletePagedLookasideList((PPAGED_LOOKASIDE_LIST)(a2 + 16));
  NSInstrumentation::CLeakTrackingAllocator::Free(DeviceRoutine, a2);
}
