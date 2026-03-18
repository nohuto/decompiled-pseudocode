/*
 * XREFs of sub_1C000ACF0 @ 0x1C000ACF0
 * Callers:
 *     sub_1C000A210 @ 0x1C000A210 (sub_1C000A210.c)
 *     sub_1C000A690 @ 0x1C000A690 (sub_1C000A690.c)
 * Callees:
 *     sub_1C00043E8 @ 0x1C00043E8 (sub_1C00043E8.c)
 *     sub_1C000AD70 @ 0x1C000AD70 (sub_1C000AD70.c)
 */

__int64 __fastcall sub_1C000ACF0(wchar_t *a1, wchar_t *a2, __int64 a3, char a4, _QWORD *a5)
{
  const wchar_t *v7; // rsi
  int v8; // ebx

  a1[63] = 0;
  v7 = a1;
  v8 = sub_1C000AD70(a1);
  if ( v8 < 0 || a4 && (a2[63] = 0, v7 = a2, v8 = sub_1C000AD70(a2), v8 < 0) )
  {
    if ( (HIDWORD(off_1C0007000->Timer) & 1) != 0 && BYTE1(off_1C0007000->Timer) >= 2u )
      sub_1C00043E8((__int64)off_1C0007000->AttachedDevice, 0xBu, (__int64)&unk_1C00053E8, v7, v8);
  }
  else
  {
    *a5 = 0LL;
  }
  return (unsigned int)v8;
}
