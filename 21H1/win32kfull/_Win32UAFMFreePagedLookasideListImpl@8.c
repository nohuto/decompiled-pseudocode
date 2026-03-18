/*
 * XREFs of _Win32UAFMFreePagedLookasideListImpl@8 @ 0x1836E4
 * Callers:
 *     <none>
 * Callees:
 *     ?FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QAEXPAX@Z @ 0xD30C4 (-FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QAEXPAX@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QAEXPAX@Z @ 0xD30EE (-Free@CLeakTrackingAllocator@NSInstrumentation@@QAEXPAX@Z.c)
 *     ?FreeAssertPointerIsValid@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SGXPAXI@Z @ 0x183323 (-FreeAssertPointerIsValid@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumenta.c)
 */

void __thiscall Win32UAFMFreePagedLookasideListImpl(NSInstrumentation::CLeakTrackingAllocator *this, char **a2, int a3)
{
  NSInstrumentation::CLeakTrackingAllocator *v3; // ecx

  NSInstrumentation::CLeakTrackingAllocator::FreePagedLookasideList(this, *a2);
  NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::FreeAssertPointerIsValid((int)a2, a3);
  v3 = (NSInstrumentation::CLeakTrackingAllocator *)*((_DWORD *)&WPP_MAIN_CB.Queue.Wcb.1 + 3);
  *(a2 - 1) = 0;
  NSInstrumentation::CLeakTrackingAllocator::Free(v3, (char *)a2 - 8);
}
