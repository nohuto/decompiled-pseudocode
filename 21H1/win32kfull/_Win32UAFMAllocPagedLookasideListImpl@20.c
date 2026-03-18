/*
 * XREFs of _Win32UAFMAllocPagedLookasideListImpl@20 @ 0x183611
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocatePagedLookasideList@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SGPAXKIIIPAI@Z @ 0x1832CB (-AllocatePagedLookasideList@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumen.c)
 */

_DWORD *__stdcall Win32UAFMAllocPagedLookasideListImpl(unsigned int a1, ULONG a2, ULONG a3, USHORT a4, _DWORD *a5)
{
  return NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::AllocatePagedLookasideList(
           a1,
           a2,
           a3,
           a4,
           a5);
}
