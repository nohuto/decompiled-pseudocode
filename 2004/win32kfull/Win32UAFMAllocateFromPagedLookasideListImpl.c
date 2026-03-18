/*
 * XREFs of Win32UAFMAllocateFromPagedLookasideListImpl @ 0x1C0220D70
 * Callers:
 *     <none>
 * Callees:
 *     ?GenerateCookie@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CAIXZ @ 0x1C022041C (-GenerateCookie@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CAIX.c)
 *     ?AllocateFromPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXPEAX@Z @ 0x1C02DD77C (-AllocateFromPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXPEAX@Z.c)
 */

char *__fastcall Win32UAFMAllocateFromPagedLookasideListImpl(NSInstrumentation::CLeakTrackingAllocator *a1, _DWORD *a2)
{
  _DWORD *v3; // rbx
  char *result; // rax
  ULONG Cookie; // eax

  v3 = NSInstrumentation::CLeakTrackingAllocator::AllocateFromPagedLookasideList(a1, *(void **)a1);
  result = 0LL;
  if ( v3 )
  {
    Cookie = NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::GenerateCookie();
    v3[3] = Cookie;
    *a2 = Cookie - 1;
    return (char *)(v3 + 4);
  }
  return result;
}
