/*
 * XREFs of _inc @ 0x1403D5AA4
 * Callers:
 *     ReadString @ 0x1403D5774 (ReadString.c)
 *     _input_s @ 0x1403D5AD4 (_input_s.c)
 * Callees:
 *     _filbuf_s @ 0x1403D739C (_filbuf_s.c)
 */

__int64 __fastcall inc(FILE *a1)
{
  if ( --a1->_cnt < 0 )
    return (unsigned int)filbuf_s(a1);
  else
    return *(unsigned __int8 *)a1->_ptr++;
}
