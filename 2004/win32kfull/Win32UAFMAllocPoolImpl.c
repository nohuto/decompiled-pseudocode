/*
 * XREFs of Win32UAFMAllocPoolImpl @ 0x1C0220C60
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocatePool@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAPEAXW4_POOL_TYPE@@_KIPEAI@Z @ 0x1C022037C (-AllocatePool@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAPEAX.c)
 */

char *__fastcall Win32UAFMAllocPoolImpl(enum _POOL_TYPE a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  return NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::AllocatePool(a1, a2, a3, a4);
}
