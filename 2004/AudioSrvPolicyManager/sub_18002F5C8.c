/*
 * XREFs of sub_18002F5C8 @ 0x18002F5C8
 * Callers:
 *     sub_18002F510 @ 0x18002F510 (sub_18002F510.c)
 *     sub_18002F8CC @ 0x18002F8CC (sub_18002F8CC.c)
 *     sub_18002FB78 @ 0x18002FB78 (sub_18002FB78.c)
 * Callees:
 *     sub_180009CF0 @ 0x180009CF0 (sub_180009CF0.c)
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18002F5C8(__int64 a1, _QWORD *a2, _QWORD **a3)
{
  _QWORD *v5; // rdi
  _QWORD *v6; // rsi
  __int64 v7; // rcx

  v5 = *a3;
  *a3[1] = *a3;
  (*a3)[1] = a3[1];
  --*(_QWORD *)(a1 + 8);
  v6 = a3[6];
  if ( v6 )
  {
    if ( *((_BYTE *)v6 + 32) )
      (*(void (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)v6[3] + 240LL))(v6[3], v6 + 5);
    v7 = v6[3];
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    sub_180039D98(v6);
  }
  sub_180009CF0((__int64)(a3 + 2));
  sub_180039D98(a3);
  *a2 = v5;
  return a2;
}
