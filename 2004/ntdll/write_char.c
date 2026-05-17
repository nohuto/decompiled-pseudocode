/*
 * XREFs of write_char @ 0x180093010
 * Callers:
 *     _output_l @ 0x1800927B0 (_output_l.c)
 *     write_multi_char @ 0x180093060 (write_multi_char.c)
 *     write_string @ 0x1800930B8 (write_string.c)
 * Callees:
 *     _flsbuf @ 0x18009279C (_flsbuf.c)
 */

void __fastcall write_char(unsigned __int8 a1, __int64 a2, _DWORD *a3)
{
  int v5; // eax

  if ( (*(_BYTE *)(a2 + 24) & 0x40) == 0 || *(_QWORD *)(a2 + 16) )
  {
    if ( --*(_DWORD *)(a2 + 8) < 0 )
    {
      v5 = flsbuf((char)a1, (FILE *)a2);
    }
    else
    {
      *(_BYTE *)(*(_QWORD *)a2)++ = a1;
      v5 = a1;
    }
    if ( v5 == -1 )
      *a3 = -1;
    else
      ++*a3;
  }
  else
  {
    ++*a3;
  }
}
