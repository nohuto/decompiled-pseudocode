/*
 * XREFs of MiSetPfnTbFlushStamp @ 0x1402E49B0
 * Callers:
 *     MiSwapStackPage @ 0x14024483C (MiSwapStackPage.c)
 *     MiMapPageFileHash @ 0x14024C338 (MiMapPageFileHash.c)
 *     MiChangePageAttributeContiguous @ 0x14024DC38 (MiChangePageAttributeContiguous.c)
 *     MiFinalizePageAttribute @ 0x14025C3D4 (MiFinalizePageAttribute.c)
 *     MiGetPoolPages @ 0x1402629AC (MiGetPoolPages.c)
 *     MiGetPageTablePages @ 0x140296CF0 (MiGetPageTablePages.c)
 *     MiMigratePfn @ 0x1402BCEF0 (MiMigratePfn.c)
 *     MiInitializeHardFaultPfn @ 0x1402E2DF0 (MiInitializeHardFaultPfn.c)
 *     MiAllocateKernelStackPages @ 0x1402E3050 (MiAllocateKernelStackPages.c)
 *     MiCopyOnWrite @ 0x1402E3B50 (MiCopyOnWrite.c)
 *     MiTradePage @ 0x14030B930 (MiTradePage.c)
 *     MiUpdateLargePageSectionPfns @ 0x1403F41AC (MiUpdateLargePageSectionPfns.c)
 *     MiConvertLargePfnToSmall @ 0x1403F5FC8 (MiConvertLargePfnToSmall.c)
 *     MiConvertLockedSmallPageToLarge @ 0x1403F606C (MiConvertLockedSmallPageToLarge.c)
 *     MiDeleteSubsectionLargePages @ 0x1403F6534 (MiDeleteSubsectionLargePages.c)
 *     MiPurgeBadFileOnlyPages @ 0x140541B30 (MiPurgeBadFileOnlyPages.c)
 *     MiPerformFinalZeroing @ 0x14054F588 (MiPerformFinalZeroing.c)
 *     MiSwapNumaStandbyPage @ 0x140551610 (MiSwapNumaStandbyPage.c)
 *     MiAllocateDummyPage @ 0x140A56B98 (MiAllocateDummyPage.c)
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
