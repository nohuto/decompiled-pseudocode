/*
 * XREFs of VfZwCreateSymbolicLinkObject @ 0x1409EC1D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     ViZwCheckObjectAttributes @ 0x1409EF85C (ViZwCheckObjectAttributes.c)
 *     ViZwCheckUnicodeString @ 0x1409EF8AC (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x1409EF944 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x1409EF990 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwCreateSymbolicLinkObject(
        ULONG_PTR BugCheckParameter3,
        unsigned int a2,
        __int64 a3,
        ULONG_PTR a4)
{
  ULONG_PTR retaddr; // [rsp+38h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(BugCheckParameter3, retaddr);
    ViZwCheckObjectAttributes(a3, retaddr);
    ViZwCheckUnicodeString(a4, retaddr);
  }
  return ((__int64 (__fastcall *)(ULONG_PTR, _QWORD, __int64, ULONG_PTR))pXdvZwCreateSymbolicLinkObject)(
           BugCheckParameter3,
           a2,
           a3,
           a4);
}
