/*
 * XREFs of sub_1800344B0 @ 0x1800344B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000CDD4 @ 0x18000CDD4 (sub_18000CDD4.c)
 *     sub_18000D490 @ 0x18000D490 (sub_18000D490.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_1800344B0(_QWORD *a1, char a2)
{
  __int64 v4; // rcx
  volatile signed __int64 *v5; // rcx
  volatile signed __int64 *v6; // rcx

  v4 = a1[12];
  if ( v4 )
  {
    a1[12] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = (volatile signed __int64 *)a1[11];
  if ( v5 )
  {
    a1[11] = 0LL;
    sub_18000D490(v5);
  }
  v6 = (volatile signed __int64 *)a1[10];
  if ( v6 )
  {
    a1[10] = 0LL;
    sub_18000D490(v6);
  }
  sub_18000CDD4((__int64)a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1, 112LL);
  return a1;
}
