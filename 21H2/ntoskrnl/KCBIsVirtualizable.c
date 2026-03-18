/*
 * XREFs of KCBIsVirtualizable @ 0x14023BDB4
 * Callers:
 *     KCBNeedsVirtualImage @ 0x14023BD7C (KCBNeedsVirtualImage.c)
 * Callees:
 *     CmpIsKcbInsideVirtualizedHive @ 0x1407CA920 (CmpIsKcbInsideVirtualizedHive.c)
 */

bool __fastcall KCBIsVirtualizable(__int64 a1)
{
  return CmpVEEnabled && (*(_DWORD *)(a1 + 184) & 0x2000000) == 0 && (unsigned __int8)CmpIsKcbInsideVirtualizedHive();
}
