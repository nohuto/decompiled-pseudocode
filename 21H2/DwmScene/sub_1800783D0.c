/*
 * XREFs of sub_1800783D0 @ 0x1800783D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800810B8 @ 0x1800810B8 (sub_1800810B8.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

_QWORD *__fastcall sub_1800783D0(_QWORD *a1, char a2)
{
  *a1 = &std::wstringbuf::`vftable';
  sub_1800810B8(a1);
  std::wstreambuf::~wstreambuf<wchar_t,std::char_traits<wchar_t>>(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
