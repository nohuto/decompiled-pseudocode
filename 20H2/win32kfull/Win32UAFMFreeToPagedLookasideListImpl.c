/*
 * XREFs of Win32UAFMFreeToPagedLookasideListImpl @ 0x1C021FFB0
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeAssertPointerIsValid@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAXPEAXI@Z @ 0x1C021F564 (-FreeAssertPointerIsValid@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumenta.c)
 *     ?FreeToPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX0@Z @ 0x1C02DC6DC (-FreeToPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX0@Z.c)
 */

void __fastcall Win32UAFMFreeToPagedLookasideListImpl(void **a1, __int64 a2, int a3)
{
  NSInstrumentation::CLeakTrackingAllocator *v5; // rcx

  NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::FreeAssertPointerIsValid(a2, a3);
  *(_DWORD *)(a2 - 4) = 0;
  NSInstrumentation::CLeakTrackingAllocator::FreeToPagedLookasideList(v5, *a1, (void *)(a2 - 16));
}
