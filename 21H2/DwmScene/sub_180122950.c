/*
 * XREFs of sub_180122950 @ 0x180122950
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006E8C4 @ 0x18006E8C4 (sub_18006E8C4.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     _Mtx_destroy_in_situ @ 0x18012527C (_Mtx_destroy_in_situ.c)
 */

__int64 __fastcall sub_180122950(__int64 a1, char a2)
{
  _QWORD *v2; // rbx

  v2 = (_QWORD *)(a1 + 96);
  sub_18006E8C4(a1 + 96, a1 + 96, *(__int64 **)(*(_QWORD *)(a1 + 96) + 8LL));
  j_j__o_free(*v2);
  Mtx_destroy_in_situ((_Mtx_t)(a1 + 8));
  *(_QWORD *)a1 = &Spectre::Utils::ICancellationToken::`vftable';
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
