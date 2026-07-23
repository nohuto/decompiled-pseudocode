/*
 * XREFs of MiFreeInitializationCode @ 0x14075EE2C
 * Callers:
 *     MiFreeDriverInitialization @ 0x14075ED74 (MiFreeDriverInitialization.c)
 *     MiFreeKernelPadSections @ 0x140A6C26C (MiFreeKernelPadSections.c)
 *     MmDiscardDriverSection @ 0x140A93E70 (MmDiscardDriverSection.c)
 * Callees:
 *     MiVaToPfn @ 0x1402269B4 (MiVaToPfn.c)
 *     MiReturnResident @ 0x140273F7C (MiReturnResident.c)
 *     MiGetControlAreaPartition @ 0x14027C914 (MiGetControlAreaPartition.c)
 *     MiUnlockLoaderEntry @ 0x140298840 (MiUnlockLoaderEntry.c)
 *     MiLockLoaderEntry @ 0x140298A78 (MiLockLoaderEntry.c)
 *     RtlClearBits @ 0x1402AB730 (RtlClearBits.c)
 *     MiGetAnyMultiplexedVm @ 0x140307E4C (MiGetAnyMultiplexedVm.c)
 *     MiDeleteSystemPagableVm @ 0x1403107D0 (MiDeleteSystemPagableVm.c)
 *     MiSectionControlArea @ 0x14031FFB0 (MiSectionControlArea.c)
 *     MiGetPteAddress @ 0x140322E50 (MiGetPteAddress.c)
 *     MiReturnCommit @ 0x140322FF0 (MiReturnCommit.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140327920 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiFreeLargeInitializationCodePages @ 0x1403BD3F0 (MiFreeLargeInitializationCodePages.c)
 *     MiBadRefCount @ 0x1403F48DC (MiBadRefCount.c)
 *     MiFreeBootDriverPages @ 0x140A51050 (MiFreeBootDriverPages.c)
 */

void __fastcall MiFreeInitializationCode(_QWORD *a1, unsigned __int64 a2, __int64 a3, int a4)
{
  PVOID v6; // rsi
  __int64 v7; // rbp
  _QWORD *v8; // r13
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
    v6 = (PVOID)a1[6];
    v7 = (__int64)(a1 + 20);
    v8 = a1;
  }
  v9 = (__int64)(a2 << 25) >> 16;
  v10 = (__int64)(a3 - a2 + 8) >> 3;
  if ( !a4 )
  {
    MiLockLoaderEntry(v7, 0LL);
    PteAddress = MiGetPteAddress((unsigned __int64)v6);
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
    MiFreeBootDriverPages((_DWORD)v6, a2, v10, 1, 0LL);
    if ( v6 == PsNtosImageBase )
      MxKernelFreedGapCharges += v10;
    else
      MxHalFreedGapCharges += v10;
  }
  else
  {
    v13 = v8[14];
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
      qword_140C4EFF0 -= *((_QWORD *)&v22 + 1);
    else
      _InterlockedExchangeAdd(&dword_140C4F010, -(int)v17);
    MiReturnResident((__int64)ControlAreaPartition, v17);
    MiReturnCommit((__int64)ControlAreaPartition, v17 - *((_QWORD *)&v21 + 1));
  }
}
