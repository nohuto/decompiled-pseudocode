/*
 * XREFs of sub_180062F50 @ 0x180062F50
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800626C4 @ 0x1800626C4 (sub_1800626C4.c)
 *     sub_1800635A8 @ 0x1800635A8 (sub_1800635A8.c)
 *     sub_18006AB3C @ 0x18006AB3C (sub_18006AB3C.c)
 */

char __fastcall sub_180062F50(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // eax
  char result; // al

  v4 = sub_18006AB3C(*a2);
  result = sub_1800626C4(a1, v4);
  if ( !result )
    return sub_1800635A8(a1, *a2);
  return result;
}
