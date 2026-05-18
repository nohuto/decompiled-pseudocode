/*
 * XREFs of sub_1800926BC @ 0x1800926BC
 * Callers:
 *     sub_180091A2C @ 0x180091A2C (sub_180091A2C.c)
 *     sub_180091D48 @ 0x180091D48 (sub_180091D48.c)
 *     sub_1800921CC @ 0x1800921CC (sub_1800921CC.c)
 *     sub_180095F78 @ 0x180095F78 (sub_180095F78.c)
 * Callees:
 *     sub_180090DE8 @ 0x180090DE8 (sub_180090DE8.c)
 */

_QWORD *__fastcall sub_1800926BC(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 144);
  if ( v3 )
  {
    sub_180090DE8(v3, a2, a3);
  }
  else
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  return a2;
}
