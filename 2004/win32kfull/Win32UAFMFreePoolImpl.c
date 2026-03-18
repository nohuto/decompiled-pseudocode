/*
 * XREFs of Win32UAFMFreePoolImpl @ 0x1C0220E10
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C012250C (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?FreeAssertPointerIsValid@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAXPEAXI@Z @ 0x1C02203F4 (-FreeAssertPointerIsValid@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumenta.c)
 */

void __fastcall Win32UAFMFreePoolImpl(__int64 a1, int a2)
{
  NSInstrumentation::CLeakTrackingAllocator *DeviceRoutine; // rcx

  NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::FreeAssertPointerIsValid(a1, a2);
  DeviceRoutine = (NSInstrumentation::CLeakTrackingAllocator *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine;
  *(_DWORD *)(a1 - 4) = 0;
  NSInstrumentation::CLeakTrackingAllocator::Free(DeviceRoutine, (char *)(a1 - 16));
}
