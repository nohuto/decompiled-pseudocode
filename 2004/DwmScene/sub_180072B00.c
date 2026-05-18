/*
 * XREFs of sub_180072B00 @ 0x180072B00
 * Callers:
 *     <none>
 * Callees:
 *     sub_18007B7E8 @ 0x18007B7E8 (sub_18007B7E8.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

_QWORD *__fastcall sub_180072B00(_QWORD *a1, char a2)
{
  *a1 = &std::wstringbuf::`vftable';
  sub_18007B7E8(a1);
  std::wstreambuf::~wstreambuf<wchar_t,std::char_traits<wchar_t>>(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
