/*
 * XREFs of KCBIsVirtualizable @ 0x1402064A0
 * Callers:
 *     KCBNeedsVirtualImage @ 0x14030B554 (KCBNeedsVirtualImage.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1405EACD0 (CmKeyBodyRemapToVirtualForEnum.c)
 * Callees:
 *     CmpIsKcbInsideVirtualizedHive @ 0x1405EAF50 (CmpIsKcbInsideVirtualizedHive.c)
 */

bool __fastcall KCBIsVirtualizable(__int64 a1)
{
  return CmpVEEnabled && (*(_DWORD *)(a1 + 184) & 0x2000000) == 0 && (unsigned __int8)CmpIsKcbInsideVirtualizedHive();
}
