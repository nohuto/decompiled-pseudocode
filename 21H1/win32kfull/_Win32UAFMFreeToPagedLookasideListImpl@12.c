/*
 * XREFs of _Win32UAFMFreeToPagedLookasideListImpl@12 @ 0x18374B
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeAssertPointerIsValid@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SGXPAXI@Z @ 0x183323 (-FreeAssertPointerIsValid@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumenta.c)
 *     ?FreeToPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QAEXPAX0@Z @ 0x249D9A (-FreeToPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QAEXPAX0@Z.c)
 */

void __stdcall Win32UAFMFreeToPagedLookasideListImpl(void **a1, int a2, int a3)
{
  NSInstrumentation::CLeakTrackingAllocator *v3; // ecx

  NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::FreeAssertPointerIsValid(a2, a3);
  *(_DWORD *)(a2 - 4) = 0;
  NSInstrumentation::CLeakTrackingAllocator::FreeToPagedLookasideList(v3, *a1, (void *)(a2 - 8));
}
