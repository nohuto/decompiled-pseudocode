/*
 * XREFs of KCBIsVirtualizable @ 0x14026A510
 * Callers:
 *     KCBNeedsVirtualImage @ 0x14023A1EC (KCBNeedsVirtualImage.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x14064A4D0 (CmKeyBodyRemapToVirtualForEnum.c)
 * Callees:
 *     CmpIsKcbInsideVirtualizedHive @ 0x14064A930 (CmpIsKcbInsideVirtualizedHive.c)
 */

bool __fastcall KCBIsVirtualizable(__int64 a1)
{
  return CmpVEEnabled && (*(_DWORD *)(a1 + 184) & 0x2000000) == 0 && (unsigned __int8)CmpIsKcbInsideVirtualizedHive();
}
