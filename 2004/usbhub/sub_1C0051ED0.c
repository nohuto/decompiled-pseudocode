/*
 * XREFs of sub_1C0051ED0 @ 0x1C0051ED0
 * Callers:
 *     sub_1C0038340 @ 0x1C0038340 (sub_1C0038340.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0051DDC @ 0x1C0051DDC (sub_1C0051DDC.c)
 */

_DWORD *__fastcall sub_1C0051ED0(__int64 a1, __int64 a2)
{
  _DWORD *result; // rax

  sub_1C000F050(a1);
  result = sub_1C0011220(a2);
  if ( dword_1C006B634 )
    result = sub_1C0051DDC(a1, a2, 3);
  if ( dword_1C006B638 )
    return sub_1C0051DDC(a1, a2, 4);
  return result;
}
