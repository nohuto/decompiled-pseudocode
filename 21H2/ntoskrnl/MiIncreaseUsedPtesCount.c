/*
 * XREFs of MiIncreaseUsedPtesCount @ 0x1403097D4
 * Callers:
 *     MiCommitExistingVad @ 0x140218D90 (MiCommitExistingVad.c)
 *     MiReservePageFileSpaceForPage @ 0x14023D660 (MiReservePageFileSpaceForPage.c)
 *     MiInsertPhysicalPteMapping @ 0x140298318 (MiInsertPhysicalPteMapping.c)
 *     MiUpdatePageTableUseCount @ 0x1402CF7F4 (MiUpdatePageTableUseCount.c)
 *     MiInPagePageTable @ 0x14030BDC0 (MiInPagePageTable.c)
 *     MiSplitPrivatePage @ 0x14030CFB0 (MiSplitPrivatePage.c)
 *     MiProtectPrivateMemory @ 0x14030DA00 (MiProtectPrivateMemory.c)
 *     MiCompleteRestrictedImageFault @ 0x14031D0A0 (MiCompleteRestrictedImageFault.c)
 *     MiDecommitPages @ 0x140334820 (MiDecommitPages.c)
 *     MiUpdatePrivateDemandZeroView @ 0x14052D398 (MiUpdatePrivateDemandZeroView.c)
 *     MiCommitHotPatchTable @ 0x14053E8C0 (MiCommitHotPatchTable.c)
 *     MiUpdateAwePageTable @ 0x14054E034 (MiUpdateAwePageTable.c)
 *     MiBuildForkPte @ 0x1405582BC (MiBuildForkPte.c)
 *     MiUpdateForkMaps @ 0x14055B7A0 (MiUpdateForkMaps.c)
 *     MiInsertLargeUserMapping @ 0x14055E578 (MiInsertLargeUserMapping.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     MmIsAddressValidEx @ 0x14030C4F0 (MmIsAddressValidEx.c)
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
