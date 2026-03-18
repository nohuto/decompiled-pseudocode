/*
 * XREFs of MiSetPfnIdentity @ 0x14033C300
 * Callers:
 *     MiFreePagesFromMdl @ 0x140221A30 (MiFreePagesFromMdl.c)
 *     MiClearPfnImageVerified @ 0x14023CC50 (MiClearPfnImageVerified.c)
 *     MiSwapStackPageNoDpc @ 0x14024A0FC (MiSwapStackPageNoDpc.c)
 *     MiInitializeMdlBatchPages @ 0x1402655A0 (MiInitializeMdlBatchPages.c)
 *     MiMarkPfnVerified @ 0x14026C644 (MiMarkPfnVerified.c)
 *     MiOutPageSingleKernelStack @ 0x1402704A0 (MiOutPageSingleKernelStack.c)
 *     MiDeleteClusterSection @ 0x140276E5C (MiDeleteClusterSection.c)
 *     MiInPageSingleKernelStack @ 0x14029A2A0 (MiInPageSingleKernelStack.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402C6EB0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiDeletePteRun @ 0x1402C8FD0 (MiDeletePteRun.c)
 *     MiReplaceTransitionPage @ 0x1402E7704 (MiReplaceTransitionPage.c)
 *     MiCopyPfnEntryEx @ 0x1402E8154 (MiCopyPfnEntryEx.c)
 *     MiStealPage @ 0x1402E97D4 (MiStealPage.c)
 *     MiUpdateSlabPagePlaceholderState @ 0x1402EB8BC (MiUpdateSlabPagePlaceholderState.c)
 *     MiCompletePrivateZeroFault @ 0x140321F70 (MiCompletePrivateZeroFault.c)
 *     MiMigratePfn @ 0x140327C60 (MiMigratePfn.c)
 *     MiAllocateKernelStackPages @ 0x14033B770 (MiAllocateKernelStackPages.c)
 *     MiDeleteValidSystemPage @ 0x14033BEC0 (MiDeleteValidSystemPage.c)
 *     MiRestoreTransitionPte @ 0x14033FAA4 (MiRestoreTransitionPte.c)
 *     MiCreatePfnTemplate @ 0x1403B770C (MiCreatePfnTemplate.c)
 *     MiMarkKernelStack @ 0x1403C2D6C (MiMarkKernelStack.c)
 *     MiAddExpansionNonPagedPool @ 0x1403C3290 (MiAddExpansionNonPagedPool.c)
 *     MiInitializeMdlPfn @ 0x140589CEC (MiInitializeMdlPfn.c)
 *     MmFreeNonChargedSecurePages @ 0x14058A2D8 (MmFreeNonChargedSecurePages.c)
 *     MiCopyKstack @ 0x140590A18 (MiCopyKstack.c)
 *     MiSwitchKstackPages @ 0x140591040 (MiSwitchKstackPages.c)
 *     MiClearFileOnlyPfn @ 0x14059DA64 (MiClearFileOnlyPfn.c)
 *     MiDeleteKernelShadowStack @ 0x1405A511C (MiDeleteKernelShadowStack.c)
 *     MiAllocateSlabEntry @ 0x1405B0B24 (MiAllocateSlabEntry.c)
 *     MiFreeSlabEntry @ 0x1405B0E30 (MiFreeSlabEntry.c)
 *     MmFreeSecureKernelPages @ 0x1405B1D98 (MmFreeSecureKernelPages.c)
 *     MiSwapNumaStandbyPage @ 0x1405B4024 (MiSwapNumaStandbyPage.c)
 *     MiPrepareLargePageSubPageForFree @ 0x1405C30B0 (MiPrepareLargePageSubPageForFree.c)
 *     MiSwapHardFaultPage @ 0x1405C4C94 (MiSwapHardFaultPage.c)
 *     MxInsertEnclaveBootPages @ 0x140B5273C (MxInsertEnclaveBootPages.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall MiSetPfnIdentity(__int64 a1, char a2)
{
  signed __int64 v2; // r9
  unsigned __int64 v3; // rdx
  signed __int64 result; // rax
  signed __int64 v5; // r8

  v2 = *(_QWORD *)(a1 + 40);
  v3 = (unsigned __int64)(a2 & 7) << 60;
  result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 40), v3 | v2 & 0x8FFFFFFFFFFFFFFFuLL, v2);
  if ( v2 != result )
  {
    do
    {
      v5 = result;
      result = _InterlockedCompareExchange64(
                 (volatile signed __int64 *)(a1 + 40),
                 v3 | result & 0x8FFFFFFFFFFFFFFFuLL,
                 result);
    }
    while ( v5 != result );
  }
  return result;
}
