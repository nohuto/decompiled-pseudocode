/*
 * XREFs of sub_1800144D0 @ 0x1800144D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000CDD4 @ 0x18000CDD4 (sub_18000CDD4.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800144D0(__int64 a1, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx

  v4 = *(_QWORD *)(a1 + 168);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 168) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  Mtx_destroy_in_situ((_Mtx_t)(a1 + 88));
  v5 = *(_QWORD *)(a1 + 80);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 80) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *(_QWORD *)(a1 + 72);
  if ( v6 )
  {
    *(_QWORD *)(a1 + 72) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  sub_18000CDD4(a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1, 176LL);
  return a1;
}
