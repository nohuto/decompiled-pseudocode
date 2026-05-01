/*
 * XREFs of ??4hstring@winrt@@QEAAAEAU01@AEBU01@@Z @ 0x1801E7F38
 * Callers:
 *     ?GetIconFromGlyphForSize@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1?DestroyIcon@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@UtagSIZE@@@Z @ 0x1800D4A20 (-GetIconFromGlyphForSize@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$un.c)
 *     ?CheckAndUpdateHostedAumid@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1801E8350 (-CheckAndUpdateHostedAumid@CScreenClippingExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18008C628 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?duplicate_string@impl@winrt@@YAPEAXPEAX@Z @ 0x1801EBE0C (-duplicate_string@impl@winrt@@YAPEAXPEAX@Z.c)
 */

HSTRING *__fastcall winrt::hstring::operator=(HSTRING *a1, winrt::impl **a2)
{
  HSTRING v3; // rbx

  v3 = (HSTRING)winrt::impl::duplicate_string(*a2, a2);
  winrt::handle_type<winrt::impl::hstring_traits>::close(a1);
  *a1 = v3;
  return a1;
}
