/*
 * XREFs of sub_18002F7F0 @ 0x18002F7F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E744 @ 0x18000E744 (sub_18000E744.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_18002F7F0(_QWORD *a1, char a2)
{
  volatile signed __int32 *v4; // rcx
  __int64 v5; // rcx

  *a1 = &off_18004D340;
  a1[1] = off_18004BEF0;
  a1[2] = off_18004BEA8;
  v4 = (volatile signed __int32 *)a1[10];
  if ( _InterlockedExchangeAdd(v4, 0xFFFFFFFF) == 1 )
    j_j__o_free(v4, 4LL);
  v5 = a1[8];
  if ( v5 )
  {
    a1[8] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  sub_18000E744((__int64)a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1, 88LL);
  return a1;
}
