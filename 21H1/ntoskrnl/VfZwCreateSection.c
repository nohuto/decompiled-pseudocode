/*
 * XREFs of VfZwCreateSection @ 0x1409E6090
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     VfCheckPageProtection @ 0x1409C4C9C (VfCheckPageProtection.c)
 *     ViZwCheckObjectAttributes @ 0x1409E97DC (ViZwCheckObjectAttributes.c)
 *     ViZwCheckVirtualAddress @ 0x1409E98C4 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x1409E9910 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwCreateSection(
        ULONG_PTR BugCheckParameter3,
        unsigned int a2,
        __int64 a3,
        ULONG_PTR a4,
        unsigned int a5,
        int a6,
        __int64 a7)
{
  ULONG_PTR retaddr; // [rsp+58h] [rbp+0h]

  VfCheckPageProtection(a5, retaddr);
  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(BugCheckParameter3, retaddr);
    ViZwCheckObjectAttributes(a3, retaddr);
    ViZwCheckVirtualAddress(a4, retaddr);
  }
  return ((__int64 (__fastcall *)(ULONG_PTR, _QWORD, __int64, ULONG_PTR, unsigned int, int, __int64))pXdvZwCreateSection)(
           BugCheckParameter3,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7);
}
