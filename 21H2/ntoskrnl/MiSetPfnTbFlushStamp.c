/*
 * XREFs of MiSetPfnTbFlushStamp @ 0x140240160
 * Callers:
 *     MiMigratePfn @ 0x1402185F0 (MiMigratePfn.c)
 *     MiInitializeHardFaultPfn @ 0x14023E5A0 (MiInitializeHardFaultPfn.c)
 *     MiAllocateKernelStackPages @ 0x14023E800 (MiAllocateKernelStackPages.c)
 *     MiCopyOnWrite @ 0x14023F300 (MiCopyOnWrite.c)
 *     MiFinalizePageAttribute @ 0x14026E434 (MiFinalizePageAttribute.c)
 *     MiGetPoolPages @ 0x140274A0C (MiGetPoolPages.c)
 *     MiSwapStackPage @ 0x1402C605C (MiSwapStackPage.c)
 *     MiMapPageFileHash @ 0x1402CDE38 (MiMapPageFileHash.c)
 *     MiChangePageAttributeContiguous @ 0x1402CF8B8 (MiChangePageAttributeContiguous.c)
 *     MiGetPageTablePages @ 0x1402E59A0 (MiGetPageTablePages.c)
 *     MiTradePage @ 0x140300BE0 (MiTradePage.c)
 *     MiUpdateLargePageSectionPfns @ 0x1403F41AC (MiUpdateLargePageSectionPfns.c)
 *     MiConvertLargePfnToSmall @ 0x1403F5FC8 (MiConvertLargePfnToSmall.c)
 *     MiConvertLockedSmallPageToLarge @ 0x1403F606C (MiConvertLockedSmallPageToLarge.c)
 *     MiDeleteSubsectionLargePages @ 0x1403F6534 (MiDeleteSubsectionLargePages.c)
 *     MiPurgeBadFileOnlyPages @ 0x1405418F0 (MiPurgeBadFileOnlyPages.c)
 *     MiPerformFinalZeroing @ 0x14054F348 (MiPerformFinalZeroing.c)
 *     MiSwapNumaStandbyPage @ 0x1405513D0 (MiSwapNumaStandbyPage.c)
 *     MiAllocateDummyPage @ 0x140A55B98 (MiAllocateDummyPage.c)
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
