/*
 * XREFs of NSInstrumentation::UAFMitigationAllocator_Win32UAFMAllocatorCollection_::AllocateWrapper__lambda_4f7eb985707f6c5d2acf3a41f3d88b59___ @ 0xF3F74
 * Callers:
 *     _Win32UAFMAllocPoolWithQuotaImpl@16 @ 0x183690 (_Win32UAFMAllocPoolWithQuotaImpl@16.c)
 * Callees:
 *     ?AdjustSize@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CGKK@Z @ 0x1832BB (-AdjustSize@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CGKK@Z.c)
 *     ?GenerateCookie@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CGIXZ @ 0x183337 (-GenerateCookie@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CGIX.c)
 *     ?AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QAEPAXW4_POOL_TYPE@@II@Z @ 0x249BDD (-AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QAEPAXW4_POOL_TYPE@@II@Z.c)
 */

_DWORD *__fastcall NSInstrumentation::UAFMitigationAllocator_Win32UAFMAllocatorCollection_::AllocateWrapper__lambda_4f7eb985707f6c5d2acf3a41f3d88b59___(
        int a1,
        _DWORD *a2,
        int a3,
        enum _POOL_TYPE a4,
        unsigned int a5)
{
  SIZE_T v6; // eax
  NSInstrumentation::CLeakTrackingAllocator *v7; // ecx
  _DWORD *Quota; // esi
  int Cookie; // eax

  v6 = NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::AdjustSize();
  if ( !v6 )
    return 0;
  Quota = NSInstrumentation::CLeakTrackingAllocator::AllocateQuota(v7, a4, v6, a5);
  if ( !Quota )
    return 0;
  Cookie = NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::GenerateCookie();
  Quota[1] = Cookie;
  *a2 = Cookie - 1;
  return Quota + 2;
}
