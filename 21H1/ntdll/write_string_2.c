/*
 * XREFs of write_string_2 @ 0x4B302980
 * Callers:
 *     __woutput_s @ 0x4B301F94 (__woutput_s.c)
 * Callees:
 *     write_char_1 @ 0x4B3028FC (write_char_1.c)
 */

void __cdecl write_string_2(__int16 *a1, int a2, int a3, _DWORD *a4)
{
  int v4; // edi
  _DWORD *v5; // eax

  if ( (*(_BYTE *)(a3 + 12) & 0x40) == 0 || *(_DWORD *)(a3 + 8) )
  {
    v4 = a2;
    if ( a2 > 0 )
    {
      v5 = a4;
      do
      {
        --v4;
        write_char_1(*a1, a3, v5);
        v5 = a4;
        ++a1;
      }
      while ( *a4 != -1 && v4 > 0 );
    }
  }
  else
  {
    *a4 += a2;
  }
}
