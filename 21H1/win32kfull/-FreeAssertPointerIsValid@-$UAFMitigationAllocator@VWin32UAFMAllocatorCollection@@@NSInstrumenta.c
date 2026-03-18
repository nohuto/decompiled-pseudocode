/*
 * XREFs of ?FreeAssertPointerIsValid@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SGXPAXI@Z @ 0x183323
 * Callers:
 *     _Win32UAFMFreePagedLookasideListImpl@8 @ 0x1836E4 (_Win32UAFMFreePagedLookasideListImpl@8.c)
 *     _Win32UAFMFreePoolImpl@8 @ 0x18371B (_Win32UAFMFreePoolImpl@8.c)
 *     _Win32UAFMFreeToPagedLookasideListImpl@12 @ 0x18374B (_Win32UAFMFreeToPagedLookasideListImpl@12.c)
 * Callees:
 *     ?PlatformAbort@NSInstrumentation@@YGXW4PLATFORMABORTREASON@1@PAX11@Z @ 0x249680 (-PlatformAbort@NSInstrumentation@@YGXW4PLATFORMABORTREASON@1@PAX11@Z.c)
 */

int __fastcall NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::FreeAssertPointerIsValid(
        int a1,
        int a2)
{
  int result; // eax

  result = *(_DWORD *)(a1 - 4) - 1;
  if ( a2 != result )
    return NSInstrumentation::PlatformAbort(0, a1, a2, a1);
  return result;
}
