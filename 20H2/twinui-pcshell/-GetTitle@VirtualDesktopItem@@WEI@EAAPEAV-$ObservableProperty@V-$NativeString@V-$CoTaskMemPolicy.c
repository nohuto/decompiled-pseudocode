/*
 * XREFs of ?GetTitle@VirtualDesktopItem@@WEI@EAAPEAV?$ObservableProperty@V?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@@XZ @ 0x1800FE6F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VirtualDesktopItem::GetTitle(__int64 a1)
{
  return SwitchItem::GetTitle(a1 - 72);
}
