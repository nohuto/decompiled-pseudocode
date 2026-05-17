/*
 * XREFs of write_string @ 0x4B2FC330
 * Callers:
 *     __output_l @ 0x4B2FB9B0 (__output_l.c)
 * Callees:
 *     write_char @ 0x4B2FC2B8 (write_char.c)
 *     __errno @ 0x4B33D420 (__errno.c)
 */

void __cdecl write_string(unsigned __int8 *a1, int a2, int a3, _DWORD *a4)
{
  int v4; // edi
  unsigned __int8 *v5; // eax

  if ( (*(_BYTE *)(a3 + 12) & 0x40) == 0 || *(_DWORD *)(a3 + 8) )
  {
    v4 = a2;
    if ( a2 > 0 )
    {
      v5 = a1;
      do
      {
        --v4;
        write_char(*v5, a3, a4);
        v5 = ++a1;
        if ( *a4 == -1 )
        {
          if ( *_errno() != 42 )
            return;
          write_char(0x3Fu, a3, a4);
          v5 = a1;
        }
      }
      while ( v4 > 0 );
    }
  }
  else
  {
    *a4 += a2;
  }
}
