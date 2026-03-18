/*
 * XREFs of VfZwCreateTransactionManager @ 0x1409E63D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     ViZwCheckObjectAttributes @ 0x1409E983C (ViZwCheckObjectAttributes.c)
 *     ViZwCheckUnicodeString @ 0x1409E988C (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x1409E9924 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x1409E9970 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwCreateTransactionManager(
        ULONG_PTR BugCheckParameter3,
        unsigned int a2,
        __int64 a3,
        ULONG_PTR a4,
        int a5,
        int a6)
{
  ULONG_PTR retaddr; // [rsp+48h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(BugCheckParameter3, retaddr);
    ViZwCheckObjectAttributes(a3, retaddr);
    ViZwCheckUnicodeString(a4, retaddr);
  }
  return ((__int64 (__fastcall *)(ULONG_PTR, _QWORD, __int64, ULONG_PTR, int, int))pXdvZwCreateTransactionManager)(
           BugCheckParameter3,
           a2,
           a3,
           a4,
           a5,
           a6);
}
