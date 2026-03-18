/*
 * XREFs of Win32UAFMFreePoolImpl @ 0x1C021FF80
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C012398C (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?FreeAssertPointerIsValid@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAXPEAXI@Z @ 0x1C021F564 (-FreeAssertPointerIsValid@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumenta.c)
 */

void __fastcall Win32UAFMFreePoolImpl(__int64 a1, int a2)
{
  NSInstrumentation::CLeakTrackingAllocator *DeviceContext; // rcx

  NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::FreeAssertPointerIsValid(a1, a2);
  DeviceContext = (NSInstrumentation::CLeakTrackingAllocator *)WPP_MAIN_CB.Queue.Wcb.DeviceContext;
  *(_DWORD *)(a1 - 4) = 0;
  NSInstrumentation::CLeakTrackingAllocator::Free(DeviceContext, (char *)(a1 - 16));
}
