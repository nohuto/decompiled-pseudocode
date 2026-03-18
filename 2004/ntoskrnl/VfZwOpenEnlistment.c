/*
 * XREFs of VfZwOpenEnlistment @ 0x1409E6FD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     ViZwCheckObjectAttributes @ 0x1409E983C (ViZwCheckObjectAttributes.c)
 *     ViZwCheckVirtualAddress @ 0x1409E9924 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x1409E9970 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwOpenEnlistment(
        ULONG_PTR BugCheckParameter3,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  ULONG_PTR retaddr; // [rsp+48h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(BugCheckParameter3, retaddr);
    ViZwCheckObjectAttributes(a5, retaddr);
  }
  return ((__int64 (__fastcall *)(ULONG_PTR, _QWORD, __int64, __int64, __int64))pXdvZwOpenEnlistment)(
           BugCheckParameter3,
           a2,
           a3,
           a4,
           a5);
}
