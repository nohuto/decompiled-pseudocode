/*
 * XREFs of sub_180022E8C @ 0x180022E8C
 * Callers:
 *     sub_180024E70 @ 0x180024E70 (sub_180024E70.c)
 * Callees:
 *     sub_180023E18 @ 0x180023E18 (sub_180023E18.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_180022E8C(_QWORD *a1, char a2)
{
  void (__fastcall ***v4)(_QWORD, __int64); // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  *a1 = &off_18004A650;
  a1[1] = off_18004A590;
  a1[10] = off_18004A548;
  a1[21] = off_18004A528;
  a1[22] = off_18004A4E0;
  a1[23] = off_18004A4C0;
  a1[24] = off_18004A4A0;
  a1[25] = off_18004A480;
  a1[26] = off_18004A460;
  v4 = (void (__fastcall ***)(_QWORD, __int64))a1[32];
  if ( v4 )
    (**v4)(v4, 1LL);
  a1[32] = 0LL;
  v5 = a1[40];
  if ( v5 )
  {
    a1[40] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = a1[38];
  if ( v6 )
  {
    a1[38] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = a1[37];
  if ( v7 )
  {
    a1[37] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  sub_180023E18(a1 + 1);
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1, 344LL);
  return a1;
}
