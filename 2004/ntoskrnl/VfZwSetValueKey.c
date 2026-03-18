/*
 * XREFs of VfZwSetValueKey @ 0x1409E93A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     ViZwCheckUnicodeString @ 0x1409E988C (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x1409E9924 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x1409E9970 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwSetValueKey(
        __int64 a1,
        ULONG_PTR a2,
        unsigned int a3,
        unsigned int a4,
        ULONG_PTR BugCheckParameter3,
        int a6)
{
  ULONG_PTR retaddr; // [rsp+58h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckUnicodeString(a2, retaddr);
    ViZwCheckVirtualAddress(BugCheckParameter3, retaddr);
  }
  return ((__int64 (__fastcall *)(__int64, ULONG_PTR, _QWORD, _QWORD, ULONG_PTR, int))pXdvZwSetValueKey)(
           a1,
           a2,
           a3,
           a4,
           BugCheckParameter3,
           a6);
}
