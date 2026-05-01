/*
 * XREFs of ??8winrt@@YA_NAEBUhstring@0@0@Z @ 0x1801C457C
 * Callers:
 *     ?UpdateTileGuid@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1800C9008 (-UpdateTileGuid@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ?CheckAndUpdateHostedAumid@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1801C4890 (-CheckAndUpdateHostedAumid@CScreenClippingExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??Bhstring@winrt@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1801C45C8 (--Bhstring@winrt@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@@XZ.c)
 */

char __fastcall winrt::operator==(__int64 a1, __int64 a2)
{
  unsigned __int16 *v4[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5[3]; // [rsp+30h] [rbp-18h] BYREF

  winrt::hstring::operator std::basic_string_view<unsigned short>(a2, v4);
  winrt::hstring::operator std::basic_string_view<unsigned short>(a1, v5);
  return std::_Traits_equal<std::char_traits<unsigned short>>(v5[0], v5[1], v4[0], (__int64)v4[1]);
}
