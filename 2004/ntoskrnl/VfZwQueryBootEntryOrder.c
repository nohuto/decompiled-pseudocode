/*
 * XREFs of VfZwQueryBootEntryOrder @ 0x1409E7A40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     ViZwCheckVirtualAddress @ 0x1409E9924 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x1409E9970 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwQueryBootEntryOrder(ULONG_PTR BugCheckParameter3, ULONG_PTR a2)
{
  ULONG_PTR retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(BugCheckParameter3, retaddr);
    ViZwCheckVirtualAddress(a2, retaddr);
  }
  return ((__int64 (__fastcall *)(ULONG_PTR, ULONG_PTR))pXdvZwQueryBootEntryOrder)(BugCheckParameter3, a2);
}
