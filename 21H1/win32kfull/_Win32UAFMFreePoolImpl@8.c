/*
 * XREFs of _Win32UAFMFreePoolImpl@8 @ 0x18371B
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QAEXPAX@Z @ 0xD30EE (-Free@CLeakTrackingAllocator@NSInstrumentation@@QAEXPAX@Z.c)
 *     ?FreeAssertPointerIsValid@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SGXPAXI@Z @ 0x183323 (-FreeAssertPointerIsValid@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumenta.c)
 */

void __stdcall Win32UAFMFreePoolImpl(int a1, int a2)
{
  NSInstrumentation::CLeakTrackingAllocator *v2; // ecx

  NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::FreeAssertPointerIsValid(a1, a2);
  v2 = (NSInstrumentation::CLeakTrackingAllocator *)*((_DWORD *)&WPP_MAIN_CB.Queue.Wcb.1 + 3);
  *(_DWORD *)(a1 - 4) = 0;
  NSInstrumentation::CLeakTrackingAllocator::Free(v2, (char *)(a1 - 8));
}
