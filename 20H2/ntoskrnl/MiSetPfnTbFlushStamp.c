/*
 * XREFs of MiSetPfnTbFlushStamp @ 0x140290710
 * Callers:
 *     MiMapPageFileHash @ 0x14023BDF8 (MiMapPageFileHash.c)
 *     MiMigratePfn @ 0x140279DD0 (MiMigratePfn.c)
 *     MiCopyOnWrite @ 0x14028F8B0 (MiCopyOnWrite.c)
 *     MiInitializeHardFaultPfn @ 0x14029C7F0 (MiInitializeHardFaultPfn.c)
 *     MiSwapStackPage @ 0x14032576C (MiSwapStackPage.c)
 *     MiChangePageAttributeContiguous @ 0x14032DB94 (MiChangePageAttributeContiguous.c)
 *     MiGetPoolPages @ 0x140333D10 (MiGetPoolPages.c)
 *     MiGetPageTablePages @ 0x140336880 (MiGetPageTablePages.c)
 *     MiAllocateKernelStackPages @ 0x140348E30 (MiAllocateKernelStackPages.c)
 *     MiTradePage @ 0x14034AE80 (MiTradePage.c)
 *     MiFinalizePageAttribute @ 0x140350B14 (MiFinalizePageAttribute.c)
 *     MiUpdateLargePageSectionPfns @ 0x1403F2964 (MiUpdateLargePageSectionPfns.c)
 *     MiConvertLargePfnToSmall @ 0x1403F482C (MiConvertLargePfnToSmall.c)
 *     MiConvertLockedSmallPageToLarge @ 0x1403F48D0 (MiConvertLockedSmallPageToLarge.c)
 *     MiDeleteSubsectionLargePages @ 0x1403F4D98 (MiDeleteSubsectionLargePages.c)
 *     MiPurgeBadFileOnlyPages @ 0x14053FDF0 (MiPurgeBadFileOnlyPages.c)
 *     MiPerformFinalZeroing @ 0x14054D848 (MiPerformFinalZeroing.c)
 *     MiSwapNumaStandbyPage @ 0x14054F900 (MiSwapNumaStandbyPage.c)
 *     MiAllocateDummyPage @ 0x140A54590 (MiAllocateDummyPage.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiSetPfnTbFlushStamp(__int64 a1, char a2, int a3)
{
  unsigned __int64 v4; // r9
  unsigned __int64 result; // rax
  signed __int64 v6; // rdx
  signed __int64 v7; // r8
  signed __int64 v8; // rcx

  v4 = (unsigned __int64)(a2 & 0xF) << 56;
  if ( a3 == 1 )
  {
    result = v4 | *(_QWORD *)(a1 + 24) & 0xF0FFFFFFFFFFFFFFuLL;
    *(_QWORD *)(a1 + 24) = result;
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 24);
    result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v4 | v6 & 0xF0FFFFFFFFFFFFFFuLL, v6);
    v7 = result;
    if ( v6 != result )
    {
      do
      {
        v8 = v7;
        result = _InterlockedCompareExchange64(
                   (volatile signed __int64 *)(a1 + 24),
                   v4 | v7 & 0xF0FFFFFFFFFFFFFFuLL,
                   v7);
        v7 = result;
      }
      while ( v8 != result );
    }
  }
  return result;
}
