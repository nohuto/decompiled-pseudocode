/*
 * XREFs of VfZwSetBootOptions @ 0x1409EED20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     ViZwCheckVirtualAddress @ 0x1409EF944 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x1409EF990 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwSetBootOptions(ULONG_PTR BugCheckParameter3, unsigned int a2)
{
  ULONG_PTR retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
    ViZwCheckVirtualAddress(BugCheckParameter3, retaddr);
  return ((__int64 (__fastcall *)(ULONG_PTR, _QWORD))pXdvZwSetBootOptions)(BugCheckParameter3, a2);
}
