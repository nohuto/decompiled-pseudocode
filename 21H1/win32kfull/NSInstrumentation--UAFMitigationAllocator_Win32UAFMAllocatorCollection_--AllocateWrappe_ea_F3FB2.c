/*
 * XREFs of NSInstrumentation::UAFMitigationAllocator_Win32UAFMAllocatorCollection_::AllocateWrapper__lambda_828817a7f4498484fe04ee355465d50d___ @ 0xF3FB2
 * Callers:
 *     _Win32UAFMAllocPoolWithPriorityImpl@20 @ 0x183653 (_Win32UAFMAllocPoolWithPriorityImpl@20.c)
 * Callees:
 *     ?AdjustSize@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CGKK@Z @ 0x1832BB (-AdjustSize@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CGKK@Z.c)
 *     ?GenerateCookie@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CGIXZ @ 0x183337 (-GenerateCookie@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CGIX.c)
 *     ?AllocatePriority@CLeakTrackingAllocator@NSInstrumentation@@QAEPAXW4_POOL_TYPE@@IIW4_EX_POOL_PRIORITY@@@Z @ 0x249B98 (-AllocatePriority@CLeakTrackingAllocator@NSInstrumentation@@QAEPAXW4_POOL_TYPE@@IIW4_EX_POOL_PRI.c)
 */

_DWORD *__fastcall NSInstrumentation::UAFMitigationAllocator_Win32UAFMAllocatorCollection_::AllocateWrapper__lambda_828817a7f4498484fe04ee355465d50d___(
        int a1,
        _DWORD *a2,
        enum _POOL_TYPE a3,
        unsigned int a4,
        enum _EX_POOL_PRIORITY a5,
        int a6)
{
  SIZE_T v7; // eax
  NSInstrumentation::CLeakTrackingAllocator *v8; // ecx
  _DWORD *Priority; // esi
  int Cookie; // eax

  v7 = NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::AdjustSize();
  if ( !v7 )
    return 0;
  Priority = NSInstrumentation::CLeakTrackingAllocator::AllocatePriority(v8, a3, v7, a4, a5);
  if ( !Priority )
    return 0;
  Cookie = NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::GenerateCookie();
  Priority[1] = Cookie;
  *a2 = Cookie - 1;
  return Priority + 2;
}
