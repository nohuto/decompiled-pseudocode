/*
 * XREFs of sub_1800A2258 @ 0x1800A2258
 * Callers:
 *     sub_1800A36A8 @ 0x1800A36A8 (sub_1800A36A8.c)
 *     sub_1800A3808 @ 0x1800A3808 (sub_1800A3808.c)
 * Callees:
 *     sub_18001FFEC @ 0x18001FFEC (sub_18001FFEC.c)
 *     sub_18007B8A0 @ 0x18007B8A0 (sub_18007B8A0.c)
 *     sub_1800A22DC @ 0x1800A22DC (sub_1800A22DC.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_1800A2258(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 *v5; // r14
  __int64 *v6; // rdi

  v4 = *a1;
  v5 = *(__int64 **)(v4 + 8);
  if ( !*((_BYTE *)v5 + 25) )
  {
    do
    {
      sub_1800A22DC(a1, a2, v5[2]);
      v6 = v5;
      v5 = (__int64 *)*v5;
      sub_18001FFEC(v6 + 7, (__int64)(v6 + 7));
      sub_18007B8A0(v6 + 5);
      j_j__o_free(v6);
    }
    while ( !*((_BYTE *)v5 + 25) );
    v4 = *a1;
  }
  return j_j__o_free(v4);
}
