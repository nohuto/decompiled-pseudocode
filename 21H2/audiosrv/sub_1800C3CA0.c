/*
 * XREFs of sub_1800C3CA0 @ 0x1800C3CA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800C3CA0(_QWORD **a1, _DWORD *a2)
{
  int v5; // ebx

  if ( !a2 )
    return 2147500035LL;
  v5 = (*(unsigned __int8 (__fastcall **)(_QWORD *))(*a1[30] + 56LL))(a1[30]) == 0;
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *))(*a1[31] + 56LL))(a1[31]) )
    v5 |= 2u;
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *))(*a1[32] + 56LL))(a1[32]) )
    v5 |= 4u;
  *a2 = v5;
  return 0LL;
}
