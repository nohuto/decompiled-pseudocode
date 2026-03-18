/*
 * XREFs of Win32UAFMFreePagedLookasideListImpl @ 0x1C021FF30
 * Callers:
 *     <none>
 * Callees:
 *     ?FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C0123948 (-FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C012398C (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?FreeAssertPointerIsValid@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAXPEAXI@Z @ 0x1C021F564 (-FreeAssertPointerIsValid@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumenta.c)
 */

void __fastcall Win32UAFMFreePagedLookasideListImpl(NSInstrumentation::CLeakTrackingAllocator *a1, int a2)
{
  NSInstrumentation::CLeakTrackingAllocator *DeviceContext; // rcx

  NSInstrumentation::CLeakTrackingAllocator::FreePagedLookasideList(a1, *(char **)a1);
  NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::FreeAssertPointerIsValid((__int64)a1, a2);
  DeviceContext = (NSInstrumentation::CLeakTrackingAllocator *)WPP_MAIN_CB.Queue.Wcb.DeviceContext;
  *((_DWORD *)a1 - 1) = 0;
  NSInstrumentation::CLeakTrackingAllocator::Free(DeviceContext, (char *)a1 - 16);
}
