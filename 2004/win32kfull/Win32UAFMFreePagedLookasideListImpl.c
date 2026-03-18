/*
 * XREFs of Win32UAFMFreePagedLookasideListImpl @ 0x1C0220DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C01224C8 (-FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C012250C (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?FreeAssertPointerIsValid@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAXPEAXI@Z @ 0x1C02203F4 (-FreeAssertPointerIsValid@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumenta.c)
 */

void __fastcall Win32UAFMFreePagedLookasideListImpl(NSInstrumentation::CLeakTrackingAllocator *a1, int a2)
{
  NSInstrumentation::CLeakTrackingAllocator *DeviceRoutine; // rcx

  NSInstrumentation::CLeakTrackingAllocator::FreePagedLookasideList(a1, *(char **)a1);
  NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::FreeAssertPointerIsValid((__int64)a1, a2);
  DeviceRoutine = (NSInstrumentation::CLeakTrackingAllocator *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine;
  *((_DWORD *)a1 - 1) = 0;
  NSInstrumentation::CLeakTrackingAllocator::Free(DeviceRoutine, (char *)a1 - 16);
}
