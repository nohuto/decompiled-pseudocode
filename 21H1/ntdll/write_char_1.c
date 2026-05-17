/*
 * XREFs of write_char_1 @ 0x4B3028FC
 * Callers:
 *     __woutput_s @ 0x4B301F94 (__woutput_s.c)
 *     write_multi_char_1 @ 0x4B302952 (write_multi_char_1.c)
 *     write_string_2 @ 0x4B302980 (write_string_2.c)
 * Callees:
 *     <none>
 */

_DWORD *__cdecl write_char_1(__int16 a1, int a2, _DWORD *a3)
{
  int v3; // eax
  bool v4; // sf
  __int16 v5; // ax
  _DWORD *result; // eax

  v3 = *(_DWORD *)(a2 + 12);
  if ( ((v3 & 0x40) == 0 || *(_DWORD *)(a2 + 8))
    && ((v4 = *(_DWORD *)(a2 + 4) - 2 < 0, *(_DWORD *)(a2 + 4) -= 2, v4)
      ? (*(_DWORD *)(a2 + 12) = v3 | 0x20, v5 = -1)
      : (**(_WORD **)a2 = a1, *(_DWORD *)a2 += 2, v5 = a1),
        v5 == -1 && (*(_BYTE *)(a2 + 12) & 0x20) != 0) )
  {
    result = a3;
    *a3 = -1;
  }
  else
  {
    result = a3;
    ++*a3;
  }
  return result;
}
