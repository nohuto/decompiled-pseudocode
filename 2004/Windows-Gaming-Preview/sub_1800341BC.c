/*
 * XREFs of sub_1800341BC @ 0x1800341BC
 * Callers:
 *     sub_1800370F0 @ 0x1800370F0 (sub_1800370F0.c)
 * Callees:
 *     sub_1800351CC @ 0x1800351CC (sub_1800351CC.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_1800341BC(_QWORD *a1, char a2)
{
  void (__fastcall ***v4)(_QWORD, __int64); // rcx
  __int64 v5; // rcx

  *a1 = &off_18004C240;
  a1[1] = off_18004C180;
  a1[10] = off_18004C138;
  a1[21] = off_18004C118;
  a1[22] = off_18004C0D0;
  a1[23] = off_18004C0B0;
  a1[24] = off_18004C090;
  a1[25] = off_18004C070;
  a1[26] = off_18004C050;
  v4 = (void (__fastcall ***)(_QWORD, __int64))a1[32];
  if ( v4 )
    (**v4)(v4, 1LL);
  a1[32] = 0LL;
  v5 = a1[37];
  if ( v5 )
  {
    a1[37] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  sub_1800351CC(a1 + 1);
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1, 320LL);
  return a1;
}
