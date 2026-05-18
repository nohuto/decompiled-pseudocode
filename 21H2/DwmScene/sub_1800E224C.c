/*
 * XREFs of sub_1800E224C @ 0x1800E224C
 * Callers:
 *     sub_18006F860 @ 0x18006F860 (sub_18006F860.c)
 *     sub_18012A79F @ 0x18012A79F (sub_18012A79F.c)
 *     sub_18012A7B2 @ 0x18012A7B2 (sub_18012A7B2.c)
 *     sub_18012A7C5 @ 0x18012A7C5 (sub_18012A7C5.c)
 * Callees:
 *     sub_18002C9B0 @ 0x18002C9B0 (sub_18002C9B0.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     _Mtx_destroy_in_situ @ 0x18012527C (_Mtx_destroy_in_situ.c)
 */

__int64 __fastcall sub_1800E224C(__int64 a1)
{
  __int64 *v1; // rsi
  __int64 v3; // rcx
  __int64 *v4; // rdi
  __int64 *v5; // rcx
  __int64 v6; // rcx
  __int64 *v7; // rdi
  __int64 *v8; // rcx

  v1 = (__int64 *)(a1 + 200);
  v3 = *(_QWORD *)(a1 + 200);
  v4 = *(__int64 **)(v3 + 8);
  if ( !*((_BYTE *)v4 + 25) )
  {
    do
    {
      sub_18002C9B0((__int64)v1, (__int64)v1, (__int64 *)v4[2]);
      v5 = v4;
      v4 = (__int64 *)*v4;
      j_j__o_free(v5);
    }
    while ( !*((_BYTE *)v4 + 25) );
    v3 = *v1;
  }
  j_j__o_free(v3);
  v6 = *(_QWORD *)(a1 + 184);
  v7 = *(__int64 **)(v6 + 8);
  if ( !*((_BYTE *)v7 + 25) )
  {
    do
    {
      sub_18002C9B0(a1 + 184, a1 + 184, (__int64 *)v7[2]);
      v8 = v7;
      v7 = (__int64 *)*v7;
      j_j__o_free(v8);
    }
    while ( !*((_BYTE *)v7 + 25) );
    v6 = *(_QWORD *)(a1 + 184);
  }
  j_j__o_free(v6);
  Mtx_destroy_in_situ((_Mtx_t)(a1 + 104));
  Mtx_destroy_in_situ((_Mtx_t)(a1 + 24));
  return sub_1800E2A7C(a1);
}
