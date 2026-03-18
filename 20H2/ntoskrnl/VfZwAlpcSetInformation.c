/*
 * XREFs of VfZwAlpcSetInformation @ 0x1409EBA40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     ViZwCheckVirtualAddress @ 0x1409EF944 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x1409EF990 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwAlpcSetInformation(__int64 a1, unsigned int a2, ULONG_PTR a3, unsigned int a4)
{
  ULONG_PTR retaddr; // [rsp+38h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
    ViZwCheckVirtualAddress(a3, retaddr);
  return ((__int64 (__fastcall *)(__int64, _QWORD, ULONG_PTR, _QWORD))pXdvZwAlpcSetInformation)(a1, a2, a3, a4);
}
