/*
 * XREFs of ?duplicate_string@impl@winrt@@YAPEAXPEAX@Z @ 0x1801EB04C
 * Callers:
 *     ?TileId@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAA?AUhstring@6@XZ @ 0x1800DCD6C (-TileId@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAA-AUhstring@6@XZ.c)
 *     ??4hstring@winrt@@QEAAAEAU01@AEBU01@@Z @ 0x1801E74E0 (--4hstring@winrt@@QEAAAEAU01@AEBU01@@Z.c)
 * Callees:
 *     WindowsDuplicateString_0 @ 0x18008E59A (WindowsDuplicateString_0.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1801B21D8 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

HSTRING __fastcall winrt::impl::duplicate_string(winrt::impl *this, void *a2)
{
  HRESULT v2; // eax
  HSTRING newString; // [rsp+38h] [rbp+10h] BYREF

  newString = 0LL;
  v2 = WindowsDuplicateString_0((HSTRING)this, &newString);
  if ( v2 < 0 )
    winrt::throw_hresult(v2);
  return newString;
}
