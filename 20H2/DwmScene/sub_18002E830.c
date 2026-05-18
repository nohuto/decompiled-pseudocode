/*
 * XREFs of sub_18002E830 @ 0x18002E830
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800318C4 @ 0x1800318C4 (sub_1800318C4.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

_QWORD *__fastcall sub_18002E830(_QWORD *a1, char a2)
{
  *a1 = &std::stringbuf::`vftable';
  sub_1800318C4(a1);
  std::streambuf::~streambuf<char,std::char_traits<char>>(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
