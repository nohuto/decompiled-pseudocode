/*
 * XREFs of MiSetPfnNodeBlinkLow @ 0x1402393AC
 * Callers:
 *     MiExclusiveInsertPfnChainInList @ 0x14022DBD4 (MiExclusiveInsertPfnChainInList.c)
 *     MiUpdatePfnOnSlabStandbyList @ 0x14024253C (MiUpdatePfnOnSlabStandbyList.c)
 *     MiConvertSmallPageRangeToLarge @ 0x14028CF90 (MiConvertSmallPageRangeToLarge.c)
 *     MiInsertPageInList @ 0x1402BF9C0 (MiInsertPageInList.c)
 *     MiReplaceNumaStandbyPage @ 0x1402E851C (MiReplaceNumaStandbyPage.c)
 *     MiUnlinkNumaStandbyPage @ 0x1403AC4E0 (MiUnlinkNumaStandbyPage.c)
 *     MiUpdateLargePageSectionPfns @ 0x14058D990 (MiUpdateLargePageSectionPfns.c)
 *     MI_SET_SLAB_STANDBY_PAGE_SLAB_ENTRY @ 0x1405B0AC0 (MI_SET_SLAB_STANDBY_PAGE_SLAB_ENTRY.c)
 *     MiInsertNumaStandbyPage @ 0x1405B3384 (MiInsertNumaStandbyPage.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall MiSetPfnNodeBlinkLow(__int64 a1, int a2)
{
  signed __int64 v2; // r9
  unsigned __int64 v3; // r11
  signed __int64 result; // rax
  bool i; // zf
  signed __int64 v7; // rcx

  v2 = *(_QWORD *)(a1 + 24);
  v3 = (unsigned __int64)(a2 & 0x7FFFF) << 40;
  result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v3 | v2 & 0xF80000FFFFFFFFFFuLL, v2);
  for ( i = v2 == result; !i; i = v7 == result )
  {
    v7 = result;
    result = _InterlockedCompareExchange64(
               (volatile signed __int64 *)(a1 + 24),
               v3 | result & 0xF80000FFFFFFFFFFuLL,
               result);
  }
  return result;
}
