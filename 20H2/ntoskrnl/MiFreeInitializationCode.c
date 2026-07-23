/*
 * XREFs of MiFreeInitializationCode @ 0x140757DAC
 * Callers:
 *     MiFreeDriverInitialization @ 0x140757CF4 (MiFreeDriverInitialization.c)
 *     MiFreeKernelPadSections @ 0x140A6E030 (MiFreeKernelPadSections.c)
 *     MmDiscardDriverSection @ 0x140A96000 (MmDiscardDriverSection.c)
 * Callees:
 *     MiSectionControlArea @ 0x14022C010 (MiSectionControlArea.c)
 *     MiGetControlAreaPartition @ 0x14022C1C4 (MiGetControlAreaPartition.c)
 *     MiGetPteAddress @ 0x140230160 (MiGetPteAddress.c)
 *     MiReturnCommit @ 0x140230300 (MiReturnCommit.c)
 *     MiDeleteSystemPagableVm @ 0x140236D90 (MiDeleteSystemPagableVm.c)
 *     MiGetAnyMultiplexedVm @ 0x14024EF1C (MiGetAnyMultiplexedVm.c)
 *     MiUnlockLoaderEntry @ 0x140252F08 (MiUnlockLoaderEntry.c)
 *     MiLockLoaderEntry @ 0x140253140 (MiLockLoaderEntry.c)
 *     MiReturnResident @ 0x14026307C (MiReturnResident.c)
 *     RtlClearBits @ 0x140268180 (RtlClearBits.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140295510 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiVaToPfn @ 0x1402FE694 (MiVaToPfn.c)
 *     MiFreeLargeInitializationCodePages @ 0x1403BC770 (MiFreeLargeInitializationCodePages.c)
 *     MiBadRefCount @ 0x1403F3094 (MiBadRefCount.c)
 *     MiFreeBootDriverPages @ 0x140A4E704 (MiFreeBootDriverPages.c)
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
      qword_140C4EE30 -= *((_QWORD *)&v22 + 1);
    else
      _InterlockedExchangeAdd(&dword_140C4EE50, -(int)v17);
    MiReturnResident((__int64)ControlAreaPartition, v17);
    MiReturnCommit((__int64)ControlAreaPartition, v17 - *((_QWORD *)&v21 + 1));
  }
}
