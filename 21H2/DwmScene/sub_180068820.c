/*
 * XREFs of sub_180068820 @ 0x180068820
 * Callers:
 *     <none>
 * Callees:
 *     sub_180067F94 @ 0x180067F94 (sub_180067F94.c)
 *     sub_180068E78 @ 0x180068E78 (sub_180068E78.c)
 *     sub_18007040C @ 0x18007040C (sub_18007040C.c)
 */

char __fastcall sub_180068820(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // eax
  char result; // al

  v4 = sub_18007040C(*a2);
  result = sub_180067F94(a1, v4);
  if ( !result )
    return sub_180068E78(a1, *a2);
  return result;
}
