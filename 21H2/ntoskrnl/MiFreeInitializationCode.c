/*
 * XREFs of MiFreeInitializationCode @ 0x14075EC6C
 * Callers:
 *     MiFreeDriverInitialization @ 0x14075EBB4 (MiFreeDriverInitialization.c)
 *     MiFreeKernelPadSections @ 0x140A6B26C (MiFreeKernelPadSections.c)
 *     MmDiscardDriverSection @ 0x140A92E70 (MmDiscardDriverSection.c)
 * Callees:
 *     RtlClearBits @ 0x140206E00 (RtlClearBits.c)
 *     MiGetControlAreaPartition @ 0x14025B3A4 (MiGetControlAreaPartition.c)
 *     MiReturnResident @ 0x140296E9C (MiReturnResident.c)
 *     MiVaToPfn @ 0x1402A8874 (MiVaToPfn.c)
 *     MiUnlockLoaderEntry @ 0x1402E74F0 (MiUnlockLoaderEntry.c)
 *     MiLockLoaderEntry @ 0x1402E7728 (MiLockLoaderEntry.c)
 *     MiGetAnyMultiplexedVm @ 0x1402FD0FC (MiGetAnyMultiplexedVm.c)
 *     MiDeleteSystemPagableVm @ 0x140305A80 (MiDeleteSystemPagableVm.c)
 *     MiSectionControlArea @ 0x140315260 (MiSectionControlArea.c)
 *     MiGetPteAddress @ 0x140318100 (MiGetPteAddress.c)
 *     MiReturnCommit @ 0x1403182A0 (MiReturnCommit.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14031CBD0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiFreeLargeInitializationCodePages @ 0x1403BD280 (MiFreeLargeInitializationCodePages.c)
 *     MiBadRefCount @ 0x1403F48DC (MiBadRefCount.c)
 *     MiFreeBootDriverPages @ 0x140A50050 (MiFreeBootDriverPages.c)
 */

void __fastcall MiFreeInitializationCode(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v6; // rsi
  __int64 v7; // rbp
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rdi
  __int64 PteAddress; // rax
  ULONG_PTR *ControlAreaPartition; // r12
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  char *AnyMultiplexedVm; // rax
  __int64 v16; // r10
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int128 v21; // [rsp+30h] [rbp-58h] BYREF
  __int128 v22; // [rsp+40h] [rbp-48h]
  __int128 v23; // [rsp+50h] [rbp-38h]

  v6 = a1;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  if ( a4 )
  {
    v8 = 0LL;
    v7 = 0LL;
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 48);
    v7 = a1 + 160;
    v8 = a1;
  }
  v9 = (__int64)(a2 << 25) >> 16;
  v10 = (__int64)(a3 - a2 + 8) >> 3;
  if ( !a4 )
  {
    MiLockLoaderEntry(v7, 0LL);
    PteAddress = MiGetPteAddress(v6);
    RtlClearBits(*(PRTL_BITMAP *)(v7 + 112), (__int64)(a2 - PteAddress) >> 3, v10);
    MiUnlockLoaderEntry(v7, 0);
  }
  ControlAreaPartition = &MiSystemPartition;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS((__int64)(a2 << 25) >> 16) )
  {
    for ( ; v10; v10 -= v20 )
    {
      v18 = MiVaToPfn(v9);
      v19 = 48 * v18 - 0x58000000000LL;
      if ( *(_WORD *)(v19 + 32) != 1 )
        MiBadRefCount(v19);
      v20 = v10;
      if ( 512 - (v18 & 0x1FF) <= v10 )
        v20 = 512 - (v18 & 0x1FF);
      MiFreeLargeInitializationCodePages(v19, v18, v20);
      v9 += v20 << 12;
    }
  }
  else if ( a4 )
  {
    MiFreeBootDriverPages(v6, a2, v10, 1, 0LL);
    if ( v6 == PsNtosImageBase )
      MxKernelFreedGapCharges += v10;
    else
      MxHalFreedGapCharges += v10;
  }
  else
  {
    v13 = *(_QWORD *)(v8 + 112);
    if ( v13 )
    {
      v14 = MiSectionControlArea(v13);
      ControlAreaPartition = (ULONG_PTR *)MiGetControlAreaPartition(v14);
    }
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
    MiDeleteSystemPagableVm((__int64)AnyMultiplexedVm, v16, a2, v10, 1, &v21);
  }
  v17 = *((_QWORD *)&v22 + 1);
  if ( *((_QWORD *)&v22 + 1) )
  {
    *(_QWORD *)(v7 + 40) -= *((_QWORD *)&v22 + 1);
    *(_QWORD *)(v7 + 48) -= v17;
    if ( v6 == PsHalImageBase || v6 == PsNtosImageBase )
      qword_140C4EFB0 -= *((_QWORD *)&v22 + 1);
    else
      _InterlockedExchangeAdd(&dword_140C4EFD0, -(int)v17);
    MiReturnResident((__int64)ControlAreaPartition, v17);
    MiReturnCommit((__int64)ControlAreaPartition, v17 - *((_QWORD *)&v21 + 1));
  }
}
