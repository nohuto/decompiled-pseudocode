/*
 * XREFs of VfZwQueryFullAttributesFile @ 0x1409E7ED0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     ViZwCheckObjectAttributes @ 0x1409E983C (ViZwCheckObjectAttributes.c)
 *     ViZwCheckVirtualAddress @ 0x1409E9924 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x1409E9970 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwQueryFullAttributesFile(__int64 a1, ULONG_PTR a2)
{
  ULONG_PTR retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckObjectAttributes(a1, retaddr);
    ViZwCheckVirtualAddress(a2, retaddr);
  }
  return ((__int64 (__fastcall *)(__int64, ULONG_PTR))pXdvZwQueryFullAttributesFile)(a1, a2);
}
