/*
 * XREFs of ?duplicate_string@impl@winrt@@YAPEAXPEAX@Z @ 0x1801C834C
 * Callers:
 *     ?TileId@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAA?AUhstring@6@XZ @ 0x1800C8F70 (-TileId@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAA-AUhstring@6@XZ.c)
 *     ??4hstring@winrt@@QEAAAEAU01@AEBU01@@Z @ 0x1801C4478 (--4hstring@winrt@@QEAAAEAU01@AEBU01@@Z.c)
 * Callees:
 *     WindowsDuplicateString_0 @ 0x18008E13A (WindowsDuplicateString_0.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18018E8E8 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
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
