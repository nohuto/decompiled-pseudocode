/*
 * XREFs of _inc @ 0x1800956BC
 * Callers:
 *     ReadString @ 0x180095384 (ReadString.c)
 *     _input_l @ 0x1800956F0 (_input_l.c)
 * Callees:
 *     _filbuf @ 0x180096180 (_filbuf.c)
 */

__int64 __fastcall inc(FILE *a1)
{
  if ( --a1->_cnt < 0 )
    return (unsigned int)filbuf(a1);
  else
    return *(unsigned __int8 *)a1->_ptr++;
}
