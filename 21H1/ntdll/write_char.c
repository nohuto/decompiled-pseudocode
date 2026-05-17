/*
 * XREFs of write_char @ 0x4B2FC2B8
 * Callers:
 *     __output_l @ 0x4B2FB9B0 (__output_l.c)
 *     write_multi_char @ 0x4B2FC302 (write_multi_char.c)
 *     write_string @ 0x4B2FC330 (write_string.c)
 *     __output_s @ 0x4B3008FA (__output_s.c)
 *     write_string_1 @ 0x4B30138C (write_string_1.c)
 * Callees:
 *     __flsbuf_s @ 0x4B2FB99A (__flsbuf_s.c)
 */

_DWORD *__cdecl write_char(unsigned __int8 a1, int a2, _DWORD *a3)
{
  bool v3; // sf
  int v4; // eax
  _DWORD *result; // eax

  if ( ((*(_BYTE *)(a2 + 12) & 0x40) == 0 || *(_DWORD *)(a2 + 8))
    && ((v3 = *(_DWORD *)(a2 + 4) - 1 < 0, --*(_DWORD *)(a2 + 4), v3)
      ? (v4 = _flsbuf_s((char)a1, a2))
      : (**(_BYTE **)a2 = a1, ++*(_DWORD *)a2, v4 = a1),
        v4 == -1) )
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
