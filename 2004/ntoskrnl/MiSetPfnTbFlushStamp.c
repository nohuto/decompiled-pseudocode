/*
 * XREFs of MiSetPfnTbFlushStamp @ 0x1402B7890
 * Callers:
 *     MiTradePage @ 0x140224F90 (MiTradePage.c)
 *     MiCopyOnWrite @ 0x140238700 (MiCopyOnWrite.c)
 *     MiMigratePfn @ 0x1402AAA90 (MiMigratePfn.c)
 *     MiAllocateKernelStackPages @ 0x1402B7180 (MiAllocateKernelStackPages.c)
 *     MiInitializeHardFaultPfn @ 0x1402B9C80 (MiInitializeHardFaultPfn.c)
 *     MiGetPoolPages @ 0x1402E1A7C (MiGetPoolPages.c)
 *     MiGetPageTablePages @ 0x1402E2D70 (MiGetPageTablePages.c)
 *     MiMapPageFileHash @ 0x1403129A0 (MiMapPageFileHash.c)
 *     MiFinalizePageAttribute @ 0x14031CC14 (MiFinalizePageAttribute.c)
 *     MiSwapStackPage @ 0x140354AAC (MiSwapStackPage.c)
 *     MiChangePageAttributeContiguous @ 0x14035D13C (MiChangePageAttributeContiguous.c)
 *     MiUpdateLargePageSectionPfns @ 0x1403EE4FC (MiUpdateLargePageSectionPfns.c)
 *     MiConvertLargePfnToSmall @ 0x1403F0318 (MiConvertLargePfnToSmall.c)
 *     MiConvertLockedSmallPageToLarge @ 0x1403F03BC (MiConvertLockedSmallPageToLarge.c)
 *     MiDeleteSubsectionLargePages @ 0x1403F0884 (MiDeleteSubsectionLargePages.c)
 *     MiPurgeBadFileOnlyPages @ 0x14053C420 (MiPurgeBadFileOnlyPages.c)
 *     MiPerformFinalZeroing @ 0x140549E78 (MiPerformFinalZeroing.c)
 *     MiSwapNumaStandbyPage @ 0x14054BF30 (MiSwapNumaStandbyPage.c)
 *     MiAllocateDummyPage @ 0x140A53F10 (MiAllocateDummyPage.c)
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
