/*
 * XREFs of MiSetPfnTbFlushStamp @ 0x14033C33C
 * Callers:
 *     MiSwapStackPage @ 0x140249930 (MiSwapStackPage.c)
 *     MiUpdatePageAttributeStamp @ 0x14024DD20 (MiUpdatePageAttributeStamp.c)
 *     MiTradePage @ 0x140277580 (MiTradePage.c)
 *     MiGetPageTablePages @ 0x14027D03C (MiGetPageTablePages.c)
 *     MiConvertSmallPageRangeToLarge @ 0x14028CF90 (MiConvertSmallPageRangeToLarge.c)
 *     MiFinalizePageAttribute @ 0x1402E5708 (MiFinalizePageAttribute.c)
 *     MiCopyOnWrite @ 0x140316400 (MiCopyOnWrite.c)
 *     MiAllocateKernelStackPages @ 0x14033B770 (MiAllocateKernelStackPages.c)
 *     MiMapPageFileHash @ 0x14037E338 (MiMapPageFileHash.c)
 *     MiCreatePfnTemplate @ 0x1403B770C (MiCreatePfnTemplate.c)
 *     MiConvertLargePfnToSmall @ 0x1403C9B18 (MiConvertLargePfnToSmall.c)
 *     MiUpdateLargePageSectionPfns @ 0x14058D990 (MiUpdateLargePageSectionPfns.c)
 *     MiPurgeBadFileOnlyPages @ 0x1405A032C (MiPurgeBadFileOnlyPages.c)
 *     MiPerformFinalZeroing @ 0x1405ADCD4 (MiPerformFinalZeroing.c)
 *     MiDeleteSubsectionLargePages @ 0x1405AED7C (MiDeleteSubsectionLargePages.c)
 *     MiAllocateSlabEntry @ 0x1405B0B24 (MiAllocateSlabEntry.c)
 *     MiSwapNumaStandbyPage @ 0x1405B4024 (MiSwapNumaStandbyPage.c)
 *     MiAllocateDummyPage @ 0x140B09B18 (MiAllocateDummyPage.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiSetPfnTbFlushStamp(__int64 a1, char a2, int a3)
{
  unsigned __int64 v4; // r9
  unsigned __int64 result; // rax
  signed __int64 v6; // rdx
  bool i; // zf
  unsigned __int64 v8; // rcx

  v4 = (unsigned __int64)(a2 & 7) << 59;
  if ( a3 )
  {
    result = v4 | *(_QWORD *)(a1 + 24) & 0xC7FFFFFFFFFFFFFFuLL;
    *(_QWORD *)(a1 + 24) = result;
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 24);
    result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v4 | v6 & 0xC7FFFFFFFFFFFFFFuLL, v6);
    for ( i = v6 == result; !i; i = v8 == result )
    {
      v8 = result;
      result = _InterlockedCompareExchange64(
                 (volatile signed __int64 *)(a1 + 24),
                 v4 | result & 0xC7FFFFFFFFFFFFFFuLL,
                 result);
    }
  }
  return result;
}
