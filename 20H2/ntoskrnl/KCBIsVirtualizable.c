/*
 * XREFs of KCBIsVirtualizable @ 0x140210DA0
 * Callers:
 *     KCBNeedsVirtualImage @ 0x140319D18 (KCBNeedsVirtualImage.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x14060C6A0 (CmKeyBodyRemapToVirtualForEnum.c)
 * Callees:
 *     CmpIsKcbInsideVirtualizedHive @ 0x14060C930 (CmpIsKcbInsideVirtualizedHive.c)
 */

bool __fastcall KCBIsVirtualizable(__int64 a1)
{
  return CmpVEEnabled && (*(_DWORD *)(a1 + 184) & 0x2000000) == 0 && (unsigned __int8)CmpIsKcbInsideVirtualizedHive();
}
