/*
 * XREFs of NSInstrumentation::UAFMitigationAllocator_Win32UAFMAllocatorCollection_::AllocateWrapper__lambda_aceb5b600a42fcee516b896182f9bfd9___ @ 0xF3FF4
 * Callers:
 *     ?AllocatePagedLookasideList@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SGPAXKIIIPAI@Z @ 0x1832CB (-AllocatePagedLookasideList@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumen.c)
 *     _Win32UAFMAllocPoolImpl@16 @ 0x183633 (_Win32UAFMAllocPoolImpl@16.c)
 * Callees:
 *     ?AdjustSize@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CGKK@Z @ 0x1832BB (-AdjustSize@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CGKK@Z.c)
 *     ?GenerateCookie@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CGIXZ @ 0x183337 (-GenerateCookie@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CGIX.c)
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QAEPAXW4_POOL_TYPE@@II@Z @ 0x249A1A (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QAEPAXW4_POOL_TYPE@@II@Z.c)
 */

_DWORD *__fastcall NSInstrumentation::UAFMitigationAllocator_Win32UAFMAllocatorCollection_::AllocateWrapper__lambda_aceb5b600a42fcee516b896182f9bfd9___(
        int a1,
        _DWORD *a2,
        int a3,
        unsigned int a4,
        POOL_TYPE PoolType)
{
  SIZE_T v6; // eax
  _DWORD *v7; // esi
  int Cookie; // eax

  v6 = NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::AdjustSize();
  if ( !v6 )
    return 0;
  v7 = NSInstrumentation::CLeakTrackingAllocator::Allocate(
         *((NSInstrumentation::CLeakTrackingAllocator **)&WPP_MAIN_CB.Queue.Wcb.1 + 3),
         PoolType,
         v6,
         a4);
  if ( !v7 )
    return 0;
  Cookie = NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::GenerateCookie();
  v7[1] = Cookie;
  *a2 = Cookie - 1;
  return v7 + 2;
}
