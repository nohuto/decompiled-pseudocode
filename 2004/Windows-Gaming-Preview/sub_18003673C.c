/*
 * XREFs of sub_18003673C @ 0x18003673C
 * Callers:
 *     sub_180037270 @ 0x180037270 (sub_180037270.c)
 * Callees:
 *     sub_180036BDC @ 0x180036BDC (sub_180036BDC.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_18003673C(_QWORD *a1, char a2)
{
  void (__fastcall ***v4)(_QWORD, __int64); // rcx
  __int64 v5; // rcx

  *a1 = &off_18004A650;
  a1[1] = off_18004B9D0;
  a1[10] = off_18004B988;
  a1[21] = off_18004B968;
  a1[22] = off_18004B920;
  a1[23] = off_18004B900;
  a1[24] = off_18004B8E0;
  a1[25] = off_18004B8C0;
  a1[26] = off_18004B8A0;
  v4 = (void (__fastcall ***)(_QWORD, __int64))a1[32];
  if ( v4 )
    (**v4)(v4, 1LL);
  a1[32] = 0LL;
  v5 = a1[38];
  if ( v5 )
  {
    a1[38] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  sub_180036BDC(a1 + 1);
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1, 328LL);
  return a1;
}
