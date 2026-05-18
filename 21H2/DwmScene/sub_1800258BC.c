/*
 * XREFs of sub_1800258BC @ 0x1800258BC
 * Callers:
 *     sub_1800279B8 @ 0x1800279B8 (sub_1800279B8.c)
 *     sub_180043F08 @ 0x180043F08 (sub_180043F08.c)
 *     sub_1800686B8 @ 0x1800686B8 (sub_1800686B8.c)
 *     sub_180077CDC @ 0x180077CDC (sub_180077CDC.c)
 *     sub_18008B58C @ 0x18008B58C (sub_18008B58C.c)
 *     sub_180096EA4 @ 0x180096EA4 (sub_180096EA4.c)
 *     sub_18009F15C @ 0x18009F15C (sub_18009F15C.c)
 *     sub_1800A0B14 @ 0x1800A0B14 (sub_1800A0B14.c)
 *     sub_1800A47E8 @ 0x1800A47E8 (sub_1800A47E8.c)
 *     sub_1800A4904 @ 0x1800A4904 (sub_1800A4904.c)
 *     sub_1800A7B28 @ 0x1800A7B28 (sub_1800A7B28.c)
 *     sub_1800A7BAC @ 0x1800A7BAC (sub_1800A7BAC.c)
 *     sub_1800A83E0 @ 0x1800A83E0 (sub_1800A83E0.c)
 *     sub_1800AB19C @ 0x1800AB19C (sub_1800AB19C.c)
 *     sub_1800ACF68 @ 0x1800ACF68 (sub_1800ACF68.c)
 *     sub_1800BDB3C @ 0x1800BDB3C (sub_1800BDB3C.c)
 *     sub_1800D0338 @ 0x1800D0338 (sub_1800D0338.c)
 *     sub_1800D1D94 @ 0x1800D1D94 (sub_1800D1D94.c)
 *     sub_1800D2A04 @ 0x1800D2A04 (sub_1800D2A04.c)
 *     sub_1800D3680 @ 0x1800D3680 (sub_1800D3680.c)
 *     sub_1800F60B0 @ 0x1800F60B0 (sub_1800F60B0.c)
 *     sub_1800F6CE4 @ 0x1800F6CE4 (sub_1800F6CE4.c)
 *     sub_18012D6B1 @ 0x18012D6B1 (sub_18012D6B1.c)
 * Callees:
 *     sub_180025970 @ 0x180025970 (sub_180025970.c)
 *     sub_1800288B0 @ 0x1800288B0 (sub_1800288B0.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_1800258BC(__int64 *a1, __int64 a2)
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
      sub_180025970(a1, a2, v5[2]);
      v6 = v5;
      v5 = (__int64 *)*v5;
      sub_1800288B0(v6 + 4, 0LL);
      j_j__o_free(v6);
    }
    while ( !*((_BYTE *)v5 + 25) );
    v4 = *a1;
  }
  return j_j__o_free(v4);
}
