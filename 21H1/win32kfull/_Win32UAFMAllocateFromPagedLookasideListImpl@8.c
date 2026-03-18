/*
 * XREFs of _Win32UAFMAllocateFromPagedLookasideListImpl@8 @ 0x1836B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GenerateCookie@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CGIXZ @ 0x183337 (-GenerateCookie@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CGIX.c)
 *     ?AllocateFromPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QAEPAXPAX@Z @ 0x249AF2 (-AllocateFromPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QAEPAXPAX@Z.c)
 */

char *__thiscall Win32UAFMAllocateFromPagedLookasideListImpl(
        NSInstrumentation::CLeakTrackingAllocator *this,
        void **a2,
        _DWORD *a3)
{
  char *v3; // eax
  char *v4; // esi
  ULONG Cookie; // eax

  v3 = (char *)NSInstrumentation::CLeakTrackingAllocator::AllocateFromPagedLookasideList(this, *a2);
  v4 = v3;
  if ( v3 )
  {
    v4 = v3 + 8;
    Cookie = NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::GenerateCookie();
    *((_DWORD *)v4 - 1) = Cookie;
    *a3 = Cookie - 1;
  }
  return v4;
}
