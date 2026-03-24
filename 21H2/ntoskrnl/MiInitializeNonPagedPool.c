/*
 * XREFs of MiInitializeNonPagedPool @ 0x140A4E39C
 * Callers:
 *     MiInitNucleus @ 0x140A42F34 (MiInitNucleus.c)
 * Callees:
 *     ExGenRandom @ 0x14022C890 (ExGenRandom.c)
 *     MiSystemVaToDynamicBitmap @ 0x1402B407C (MiSystemVaToDynamicBitmap.c)
 *     MiGetAnyMultiplexedVm @ 0x1402FD0FC (MiGetAnyMultiplexedVm.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiBuildDynamicRegion @ 0x1403B5F84 (MiBuildDynamicRegion.c)
 *     MiInitializeNonPagedPoolThresholds @ 0x1403B6100 (MiInitializeNonPagedPoolThresholds.c)
 *     MiAddExpansionNonPagedPool @ 0x1403B6234 (MiAddExpansionNonPagedPool.c)
 *     MiConvertEntireLargePageToSmall @ 0x1403F5C28 (MiConvertEntireLargePageToSmall.c)
 *     MiInitializeSystemWorkingSetList @ 0x1407867BC (MiInitializeSystemWorkingSetList.c)
 */

__int64 MiInitializeNonPagedPool()
{
  char *AnyMultiplexedVm; // rax
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // rbx
  unsigned int v4; // eax
  __int64 v5; // r15
  unsigned __int64 v6; // rax
  unsigned int v7; // ebx
  __int64 v8; // rdi
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // r14
  PSLIST_HEADER v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // rdx
  __int64 *v16; // rax
  __int64 v17; // rdx
  unsigned __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 v21; // [rsp+60h] [rbp+8h] BYREF

  AnyMultiplexedVm = MiGetAnyMultiplexedVm(5);
  if ( !(unsigned int)MiInitializeSystemWorkingSetList(&MiSystemPartition, (__int64)AnyMultiplexedVm, 7u, 0LL) )
    return 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  v2 = CurrentPrcb->KeSystemCalls ^ CurrentPrcb->InterruptTime ^ MEMORY[0xFFFFF78000000018] ^ __rdtsc() ^ ((unsigned __int64)MEMORY[0xFFFFF78000000014] << 32);
  v3 = (unsigned __int64)(unsigned int)ExGenRandom(0) << 32;
  v4 = ExGenRandom(0);
  v5 = qword_140C4FAC8[0];
  v6 = v3 | v4;
  v7 = 0;
  v8 = v6 ^ v2;
  if ( !v8 )
    v8 = 1LL;
  qword_140C4EEC8 = v8;
  v9 = MmPfnDatabase + (MxPfnAllocation << 12);
  v10 = ((_DWORD)MmPfnDatabase + ((_DWORD)MxPfnAllocation << 12)) & 0x1FFFFF;
  qword_140C4EF30 = 0x100000000LL;
  v11 = (0x200000 - v10) & -(__int64)(v10 != 0);
  v12 = (0x800000uLL / (unsigned __int16)KeNumberNodes) << 21;
  if ( KeNumberNodes )
  {
    do
    {
      v13 = SListHead;
      v14 = 11LL * v7;
      v15 = v12 * v7 + v5;
      SListHead[v14 + 10].Alignment = v15;
      v13[v14 + 10].Region = v15 + v12;
      if ( !(unsigned int)MiBuildDynamicRegion((__int64 *)&SListHead[v14 + 4], v15, v12) )
        return 0LL;
    }
    while ( ++v7 < (unsigned __int16)KeNumberNodes );
  }
  v16 = MiSystemVaToDynamicBitmap(15);
  if ( !(unsigned int)MiBuildDynamicRegion(v16, v17, 0x8000000000uLL) )
    return 0LL;
  if ( v11 )
  {
    v21 = MI_READ_PTE_LOCK_FREE(((v9 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
    if ( (v21 & 0x80u) != 0LL )
    {
      v18 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v21) >> 12) & 0xFFFFFFFFFLL;
      v19 = 48 * v18 - 0x58000000000LL;
      if ( (*(_QWORD *)(v19 + 40) & 0x1000000000LL) != 0 )
        MiConvertEntireLargePageToSmall(v19, 1, 0LL, 6LL, 0LL, 0LL);
      MiAddExpansionNonPagedPool(v18 + (v10 >> 12), v11 >> 12);
    }
  }
  MiInitializeNonPagedPoolThresholds();
  return 1LL;
}
