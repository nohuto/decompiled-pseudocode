/*
 * XREFs of sub_180034100 @ 0x180034100
 * Callers:
 *     <none>
 * Callees:
 *     sub_180037194 @ 0x180037194 (sub_180037194.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

_QWORD *__fastcall sub_180034100(_QWORD *a1, char a2)
{
  *a1 = &std::stringbuf::`vftable';
  sub_180037194(a1);
  std::streambuf::~streambuf<char,std::char_traits<char>>(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
