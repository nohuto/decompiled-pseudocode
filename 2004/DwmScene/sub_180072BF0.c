/*
 * XREFs of sub_180072BF0 @ 0x180072BF0
 * Callers:
 *     sub_18007B51C @ 0x18007B51C (sub_18007B51C.c)
 *     sub_18007B904 @ 0x18007B904 (sub_18007B904.c)
 *     sub_1800A6544 @ 0x1800A6544 (sub_1800A6544.c)
 *     sub_1800A65B0 @ 0x1800A65B0 (sub_1800A65B0.c)
 *     sub_1800A6B2C @ 0x1800A6B2C (sub_1800A6B2C.c)
 *     sub_1800AE0A4 @ 0x1800AE0A4 (sub_1800AE0A4.c)
 *     sub_1800AE2D0 @ 0x1800AE2D0 (sub_1800AE2D0.c)
 *     sub_1800E3F08 @ 0x1800E3F08 (sub_1800E3F08.c)
 *     sub_1800E4268 @ 0x1800E4268 (sub_1800E4268.c)
 * Callees:
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

_QWORD *__fastcall sub_180072BF0(_QWORD *a1, char a2)
{
  unsigned __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  __int64 v7; // r8
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx

  v4 = a1[4];
  if ( v4 >= 0x10 )
  {
    v5 = a1[1];
    v6 = v4 + 1;
    if ( v6 >= 0x1000 )
    {
      v7 = *(_QWORD *)(v5 - 8);
      v8 = v6 + 39;
      v9 = v5 - v7;
      if ( (unsigned __int64)(v9 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v9, v8);
        JUMPOUT(0x180072C69LL);
      }
      v5 = v7;
    }
    j_j__o_free(v5);
  }
  a1[3] = 0LL;
  a1[4] = 15LL;
  *((_BYTE *)a1 + 8) = 0;
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
