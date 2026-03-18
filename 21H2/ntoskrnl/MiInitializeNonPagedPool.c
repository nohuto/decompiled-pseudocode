/*
 * XREFs of MiInitializeNonPagedPool @ 0x140B0681C
 * Callers:
 *     MiInitNucleus @ 0x140AF47DC (MiInitNucleus.c)
 * Callees:
 *     MiSystemVaToDynamicBitmap @ 0x14026CF08 (MiSystemVaToDynamicBitmap.c)
 *     MiGetAnyMultiplexedVm @ 0x14026DFC0 (MiGetAnyMultiplexedVm.c)
 *     MiConvertEntireLargePageToSmall @ 0x1402C6AA0 (MiConvertEntireLargePageToSmall.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     ExGenRandom @ 0x140363220 (ExGenRandom.c)
 *     MiBuildDynamicRegion @ 0x1403C289C (MiBuildDynamicRegion.c)
 *     MiInitializeNonPagedPoolThresholds @ 0x1403C315C (MiInitializeNonPagedPoolThresholds.c)
 *     MiAddExpansionNonPagedPool @ 0x1403C3290 (MiAddExpansionNonPagedPool.c)
 *     MiInitializeSystemWorkingSetList @ 0x1407F35F8 (MiInitializeSystemWorkingSetList.c)
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
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 *v16; // rax
  __int64 v17; // rdx
  unsigned __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 v21; // [rsp+70h] [rbp+8h] BYREF

  AnyMultiplexedVm = MiGetAnyMultiplexedVm(5);
  if ( !(unsigned int)MiInitializeSystemWorkingSetList(&MiSystemPartition, (__int64)AnyMultiplexedVm, 7, 0LL) )
    return 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  v2 = CurrentPrcb->InterruptTime ^ CurrentPrcb->KeSystemCalls ^ MEMORY[0xFFFFF78000000018] ^ __rdtsc() ^ ((unsigned __int64)MEMORY[0xFFFFF78000000014] << 32);
  v3 = (unsigned __int64)(unsigned int)ExGenRandom(0) << 32;
  v4 = ExGenRandom(0);
  v5 = qword_140C54060;
  v6 = v3 | v4;
  v7 = 0;
  v8 = v6 ^ v2;
  if ( !v8 )
    v8 = 1LL;
  qword_140C53430 = v8;
  v9 = MmPfnDatabase + (MxPfnAllocation << 12);
  v10 = ((_DWORD)MmPfnDatabase + ((_DWORD)MxPfnAllocation << 12)) & 0x1FFFFF;
  qword_140C534B0 = 0x100000000LL;
  v11 = (0x200000 - v10) & -(__int64)(v10 != 0);
  v12 = (0x800000uLL / (unsigned __int16)KeNumberNodes) << 21;
  if ( KeNumberNodes )
  {
    do
    {
      v13 = qword_140C506E0;
      v14 = 120LL * v7;
      v15 = v12 * v7 + v5;
      *(_QWORD *)(v14 + qword_140C506E0 + 96) = v15;
      *(_QWORD *)(v14 + v13 + 104) = v15 + v12;
      if ( !(unsigned int)MiBuildDynamicRegion((__int64 *)(v14 + qword_140C506E0), v15, v12) )
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
      v18 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v21) >> 12) & 0xFFFFFFFFFFLL;
      v19 = 48 * v18 - 0x220000000000LL;
      if ( _bittest64((const signed __int64 *)(v19 + 40), 0x28u) )
        MiConvertEntireLargePageToSmall(v19, 1, 0, 6, 0LL, 0LL, 0LL);
      MiAddExpansionNonPagedPool(v18 + (v10 >> 12), v11 >> 12);
    }
  }
  MiInitializeNonPagedPoolThresholds();
  return 1LL;
}
