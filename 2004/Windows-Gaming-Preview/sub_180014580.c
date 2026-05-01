/*
 * XREFs of sub_180014580 @ 0x180014580
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E744 @ 0x18000E744 (sub_18000E744.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180014580(__int64 a1, char a2)
{
  __int64 v4; // rcx

  v4 = *(_QWORD *)(a1 + 64);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 64) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  sub_18000E744(a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1, 80LL);
  return a1;
}
