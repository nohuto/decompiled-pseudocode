/*
 * XREFs of sub_1800DC97C @ 0x1800DC97C
 * Callers:
 *     sub_180069F90 @ 0x180069F90 (sub_180069F90.c)
 *     sub_180124E87 @ 0x180124E87 (sub_180124E87.c)
 *     sub_180124E9A @ 0x180124E9A (sub_180124E9A.c)
 *     sub_180124EAD @ 0x180124EAD (sub_180124EAD.c)
 * Callees:
 *     sub_1800270E0 @ 0x1800270E0 (sub_1800270E0.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     _Mtx_destroy_in_situ @ 0x18011F9AC (_Mtx_destroy_in_situ.c)
 */

__int64 __fastcall sub_1800DC97C(__int64 a1)
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
      sub_1800270E0((__int64)v1, (__int64)v1, (__int64 *)v4[2]);
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
      sub_1800270E0(a1 + 184, a1 + 184, (__int64 *)v7[2]);
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
  return sub_1800DD1AC(a1);
}
