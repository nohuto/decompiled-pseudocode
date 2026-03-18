/*
 * XREFs of MiIncreaseUsedPtesCount @ 0x1402CEA34
 * Callers:
 *     MiProtectPrivateMemory @ 0x1402349C0 (MiProtectPrivateMemory.c)
 *     MiSplitPrivatePage @ 0x1402354F8 (MiSplitPrivatePage.c)
 *     MiUpdatePageTableUseCount @ 0x14023C700 (MiUpdatePageTableUseCount.c)
 *     MiInsertPhysicalPteMapping @ 0x14025F5F8 (MiInsertPhysicalPteMapping.c)
 *     MiCommitExistingVad @ 0x14027A570 (MiCommitExistingVad.c)
 *     MiCompleteRestrictedImageFault @ 0x1402A07F0 (MiCompleteRestrictedImageFault.c)
 *     MiDecommitPages @ 0x1402B7A70 (MiDecommitPages.c)
 *     MiInPagePageTable @ 0x1402CBBA0 (MiInPagePageTable.c)
 *     MiReservePageFileSpaceForPage @ 0x1403486C0 (MiReservePageFileSpaceForPage.c)
 *     MiUpdatePrivateDemandZeroView @ 0x14052B898 (MiUpdatePrivateDemandZeroView.c)
 *     MiCommitHotPatchTable @ 0x14053CDC0 (MiCommitHotPatchTable.c)
 *     MiUpdateAwePageTable @ 0x14054C534 (MiUpdateAwePageTable.c)
 *     MiBuildForkPte @ 0x1405567EC (MiBuildForkPte.c)
 *     MiUpdateForkMaps @ 0x140559CD0 (MiUpdateForkMaps.c)
 *     MiInsertLargeUserMapping @ 0x14055CAA8 (MiInsertLargeUserMapping.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x1402CC2D0 (MmIsAddressValidEx.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 */

char __fastcall MiIncreaseUsedPtesCount(__int64 a1, unsigned int a2)
{
  char result; // al
  int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v5);
    while ( *(__int64 *)(a1 + 24) < 0 );
  }
  result = -1;
  *(_QWORD *)(a1 + 16) ^= ((unsigned int)*(_QWORD *)(a1 + 16) ^ ((unsigned int)*(_QWORD *)(a1 + 16)
                                                               + ((unsigned __int16)a2 << 16))) & 0x3FF0000;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( a2 <= 1 )
    return MmIsAddressValidEx(*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL);
  return result;
}
