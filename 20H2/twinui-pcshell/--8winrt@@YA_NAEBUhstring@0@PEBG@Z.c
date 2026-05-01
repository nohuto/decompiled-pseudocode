/*
 * XREFs of ??8winrt@@YA_NAEBUhstring@0@PEBG@Z @ 0x1800C9874
 * Callers:
 *     ?FindAllTileNotifications@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1800CB868 (-FindAllTileNotifications@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 * Callees:
 *     ??Bhstring@winrt@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1801E7564 (--Bhstring@winrt@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@@XZ.c)
 */

char __fastcall winrt::operator==(__int64 a1, unsigned __int16 *a2)
{
  __int64 v3; // rbx
  __int64 v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = -1LL;
  do
    ++v3;
  while ( a2[v3] );
  winrt::hstring::operator std::basic_string_view<unsigned short>(a1, v5);
  return std::_Traits_equal<std::char_traits<unsigned short>>(v5[0], v5[1], a2, v3);
}
