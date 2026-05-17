/*
 * XREFs of write_multi_char @ 0x4B2FC302
 * Callers:
 *     __output_l @ 0x4B2FB9B0 (__output_l.c)
 *     __output_s @ 0x4B3008FA (__output_s.c)
 * Callees:
 *     write_char @ 0x4B2FC2B8 (write_char.c)
 */

_DWORD *__cdecl write_multi_char(unsigned __int8 a1, int a2, int a3, _DWORD *a4)
{
  int v4; // esi
  _DWORD *result; // eax

  v4 = a2;
  if ( a2 > 0 )
  {
    do
    {
      --v4;
      result = write_char(a1, a3, a4);
    }
    while ( *a4 != -1 && v4 > 0 );
  }
  return result;
}
