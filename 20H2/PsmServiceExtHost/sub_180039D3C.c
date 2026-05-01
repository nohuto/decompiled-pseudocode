/*
 * XREFs of sub_180039D3C @ 0x180039D3C
 * Callers:
 *     sub_180039BE0 @ 0x180039BE0 (sub_180039BE0.c)
 *     sub_1800659C8 @ 0x1800659C8 (sub_1800659C8.c)
 * Callees:
 *     sub_18003A29C @ 0x18003A29C (sub_18003A29C.c)
 */

__int64 __fastcall sub_180039D3C(_BYTE *a1, __int64 a2)
{
  __int64 result; // rax

  if ( a1[64] )
    result = sub_18003A29C(a2, a1 + 8);
  if ( a1[128] )
    result = sub_18003A29C(a2 + 64, a1 + 72);
  if ( a1[192] )
    return sub_18003A29C(a2 + 128, a1 + 136);
  return result;
}
