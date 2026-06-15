/*
 * XREFs of sub_1800DBF88 @ 0x1800DBF88
 * Callers:
 *     sub_1800DCB80 @ 0x1800DCB80 (sub_1800DCB80.c)
 *     sub_180120660 @ 0x180120660 (sub_180120660.c)
 *     sub_180120700 @ 0x180120700 (sub_180120700.c)
 *     sub_180120850 @ 0x180120850 (sub_180120850.c)
 *     sub_180120960 @ 0x180120960 (sub_180120960.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_1800DBF88(_DWORD *a1)
{
  _BOOL8 result; // rax

  result = 0LL;
  if ( !*a1 && !a1[1] && a1[2] == 192 )
    return a1[3] == 1174405120;
  return result;
}
