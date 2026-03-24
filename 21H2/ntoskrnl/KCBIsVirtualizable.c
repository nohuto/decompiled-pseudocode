/*
 * XREFs of KCBIsVirtualizable @ 0x14027C570
 * Callers:
 *     KCBNeedsVirtualImage @ 0x1402BBFDC (KCBNeedsVirtualImage.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1406556B0 (CmKeyBodyRemapToVirtualForEnum.c)
 * Callees:
 *     CmpIsKcbInsideVirtualizedHive @ 0x140655B10 (CmpIsKcbInsideVirtualizedHive.c)
 */

bool __fastcall KCBIsVirtualizable(__int64 a1)
{
  return CmpVEEnabled && (*(_DWORD *)(a1 + 184) & 0x2000000) == 0 && (unsigned __int8)CmpIsKcbInsideVirtualizedHive();
}
