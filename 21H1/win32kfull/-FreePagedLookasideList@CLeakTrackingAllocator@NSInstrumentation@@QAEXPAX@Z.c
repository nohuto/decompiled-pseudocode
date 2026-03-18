/*
 * XREFs of ?FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QAEXPAX@Z @ 0xD30C4
 * Callers:
 *     _Win32FreePagedLookasideListImpl@4 @ 0xD30BE (_Win32FreePagedLookasideListImpl@4.c)
 *     ?AllocatePagedLookasideList@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SGPAXKIIIPAI@Z @ 0x1832CB (-AllocatePagedLookasideList@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumen.c)
 *     _Win32UAFMFreePagedLookasideListImpl@8 @ 0x1836E4 (_Win32UAFMFreePagedLookasideListImpl@8.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QAEXPAX@Z @ 0xD30EE (-Free@CLeakTrackingAllocator@NSInstrumentation@@QAEXPAX@Z.c)
 */

void __thiscall NSInstrumentation::CLeakTrackingAllocator::FreePagedLookasideList(
        NSInstrumentation::CLeakTrackingAllocator *this,
        char *a2)
{
  NSInstrumentation::CLeakTrackingAllocator *v2; // edi

  v2 = (NSInstrumentation::CLeakTrackingAllocator *)*((_DWORD *)&WPP_MAIN_CB.Queue.Wcb.1 + 3);
  ExDeletePagedLookasideList((PPAGED_LOOKASIDE_LIST)(a2 + 8));
  NSInstrumentation::CLeakTrackingAllocator::Free(v2, a2);
}
