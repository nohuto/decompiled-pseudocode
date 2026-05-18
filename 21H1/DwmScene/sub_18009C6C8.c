/*
 * XREFs of sub_18009C6C8 @ 0x18009C6C8
 * Callers:
 *     sub_18009EDAC @ 0x18009EDAC (sub_18009EDAC.c)
 *     sub_1800A0450 @ 0x1800A0450 (sub_1800A0450.c)
 *     sub_1800A3638 @ 0x1800A3638 (sub_1800A3638.c)
 *     sub_1800A3808 @ 0x1800A3808 (sub_1800A3808.c)
 *     sub_1800AAAB0 @ 0x1800AAAB0 (sub_1800AAAB0.c)
 *     sub_1800B9740 @ 0x1800B9740 (sub_1800B9740.c)
 *     sub_1800CF2C8 @ 0x1800CF2C8 (sub_1800CF2C8.c)
 *     sub_1800E5780 @ 0x1800E5780 (sub_1800E5780.c)
 *     sub_1800E8000 @ 0x1800E8000 (sub_1800E8000.c)
 *     sub_1800E8960 @ 0x1800E8960 (sub_1800E8960.c)
 *     sub_1800E8B04 @ 0x1800E8B04 (sub_1800E8B04.c)
 *     sub_1800F2EE8 @ 0x1800F2EE8 (sub_1800F2EE8.c)
 *     sub_1800F9464 @ 0x1800F9464 (sub_1800F9464.c)
 *     sub_180107BB0 @ 0x180107BB0 (sub_180107BB0.c)
 * Callees:
 *     sub_180065AF4 @ 0x180065AF4 (sub_180065AF4.c)
 *     sub_18009C7EC @ 0x18009C7EC (sub_18009C7EC.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_18009C6C8(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 *v5; // rdi
  __int64 *v6; // rbx

  v4 = *a1;
  v5 = *(__int64 **)(v4 + 8);
  if ( !*((_BYTE *)v5 + 25) )
  {
    do
    {
      sub_18009C7EC(a1, a2, v5[2]);
      v6 = v5;
      v5 = (__int64 *)*v5;
      sub_180065AF4(v6 + 4, 0);
      j_j__o_free(v6);
    }
    while ( !*((_BYTE *)v5 + 25) );
    v4 = *a1;
  }
  return j_j__o_free(v4);
}
