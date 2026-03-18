/*
 * XREFs of MiIncreaseUsedPtesCount @ 0x1402AF310
 * Callers:
 *     MiCommitExistingVad @ 0x140218720 (MiCommitExistingVad.c)
 *     MiDecommitPages @ 0x14021CD20 (MiDecommitPages.c)
 *     MiReservePageFileSpaceForPage @ 0x140227DE0 (MiReservePageFileSpaceForPage.c)
 *     MiProtectPrivateMemory @ 0x1402ADD80 (MiProtectPrivateMemory.c)
 *     MiSplitPrivatePage @ 0x1402AE8B8 (MiSplitPrivatePage.c)
 *     MiInPagePageTable @ 0x1402B1DE0 (MiInPagePageTable.c)
 *     MiCompleteRestrictedImageFault @ 0x1402B4EE0 (MiCompleteRestrictedImageFault.c)
 *     MiInsertPhysicalPteMapping @ 0x1402FB198 (MiInsertPhysicalPteMapping.c)
 *     MiUpdatePageTableUseCount @ 0x140341598 (MiUpdatePageTableUseCount.c)
 *     MiUpdatePrivateDemandZeroView @ 0x140527878 (MiUpdatePrivateDemandZeroView.c)
 *     MiCommitHotPatchTable @ 0x140538DA0 (MiCommitHotPatchTable.c)
 *     MiUpdateAwePageTable @ 0x140548514 (MiUpdateAwePageTable.c)
 *     MiBuildForkPte @ 0x1405527CC (MiBuildForkPte.c)
 *     MiUpdateForkMaps @ 0x140555CB0 (MiUpdateForkMaps.c)
 *     MiInsertLargeUserMapping @ 0x140558A88 (MiInsertLargeUserMapping.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     MmIsAddressValidEx @ 0x1402B2510 (MmIsAddressValidEx.c)
 */

__int64 __fastcall MiIncreaseUsedPtesCount(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // edi
  __int64 result; // rax
  int v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0;
  v5 = a2;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v7, a2, a3, a4);
    while ( *(__int64 *)(a1 + 24) < 0 );
  }
  result = 0x7FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(a1 + 16) ^= ((unsigned int)*(_QWORD *)(a1 + 16) ^ ((unsigned int)*(_QWORD *)(a1 + 16)
                                                               + ((unsigned __int16)v5 << 16))) & 0x3FF0000;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v5 <= 1 )
    return MmIsAddressValidEx(*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL);
  return result;
}
