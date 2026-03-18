/*
 * XREFs of HvpMapEntryGetBlockAddress @ 0x1407C9904
 * Callers:
 *     HvpFindNextDirtyBlock @ 0x14079AE04 (HvpFindNextDirtyBlock.c)
 *     HvpCopyModifiedData @ 0x14091AAA0 (HvpCopyModifiedData.c)
 * Callees:
 *     HvpMapEntryGetBinAddress @ 0x140AB451C (HvpMapEntryGetBinAddress.c)
 */

__int64 __fastcall HvpMapEntryGetBlockAddress(__int64 a1, _QWORD *a2, __int64 a3)
{
  return *a2 + HvpMapEntryGetBinAddress(a1, a2, a3);
}
