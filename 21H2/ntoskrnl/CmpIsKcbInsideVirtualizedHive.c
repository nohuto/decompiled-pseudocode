/*
 * XREFs of CmpIsKcbInsideVirtualizedHive @ 0x1407CA920
 * Callers:
 *     KCBIsVirtualizable @ 0x14023BDB4 (KCBIsVirtualizable.c)
 *     KCBNeedsVirtualImage_0 @ 0x14053F084 (KCBNeedsVirtualImage_0.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1407CA1C0 (CmKeyBodyRemapToVirtualForEnum.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpIsKcbInsideVirtualizedHive(__int64 a1)
{
  return (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 4112LL) & 0x10) != 0;
}
