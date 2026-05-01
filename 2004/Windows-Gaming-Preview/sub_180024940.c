/*
 * XREFs of sub_180024940 @ 0x180024940
 * Callers:
 *     <none>
 * Callees:
 *     sub_180020BA0 @ 0x180020BA0 (sub_180020BA0.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180024940(__int64 a1, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx

  v4 = *(_QWORD *)(a1 + 112);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 112) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *(_QWORD *)(a1 + 96);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 96) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  sub_180020BA0(a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1, 136LL);
  return a1;
}
