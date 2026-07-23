/*
 * XREFs of MiDeleteBootRange @ 0x1403B52E8
 * Callers:
 *     MmFreeBootRegistry @ 0x14079FA5C (MmFreeBootRegistry.c)
 *     MmFreeLoaderBlock @ 0x140A4D7D0 (MmFreeLoaderBlock.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     MiGetSharedVm @ 0x1402BF850 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402C13E0 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiReturnSystemVa @ 0x140305338 (MiReturnSystemVa.c)
 *     MiGetAnyMultiplexedVm @ 0x140307E4C (MiGetAnyMultiplexedVm.c)
 *     MiDeleteSystemPagableVm @ 0x1403107D0 (MiDeleteSystemPagableVm.c)
 *     MiReturnCommit @ 0x140322FF0 (MiReturnCommit.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140356CB0 (ExAcquireResourceSharedLite.c)
 */

__int64 __fastcall MiDeleteBootRange(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // r15
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r12
  LONG *SharedVm; // rbx
  KIRQL v9; // al
  KIRQL v10; // r14
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rbx
  __int64 Flink; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbx
  unsigned __int8 v17; // dl
  __int64 v18; // r14
  struct _KTHREAD *CurrentThread; // r13
  LONG *v20; // rbx
  KIRQL v21; // al
  unsigned __int8 v22; // r12
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  struct _KPRCB *CurrentPrcb; // r9
  unsigned __int64 v33; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v35; // zf
  signed __int32 v36; // eax
  __int64 v37; // rdi
  __int64 result; // rax
  __int64 v39; // rbx
  unsigned __int64 v40; // rsi
  unsigned __int64 i; // rbp
  __int16 v42; // ax
  PVOID *v43; // rdx
  unsigned __int64 v44; // rbx
  unsigned __int64 v45; // r8
  unsigned __int64 v46; // rcx
  unsigned __int64 v47; // rcx
  LONG *v48; // rbx
  KIRQL v49; // al
  __int64 v50; // rax
  __int64 v51; // rax
  char *AnyMultiplexedVm; // [rsp+30h] [rbp-98h]
  unsigned __int64 v53; // [rsp+38h] [rbp-90h]
  _QWORD v54[16]; // [rsp+48h] [rbp-80h] BYREF
  int v57; // [rsp+E0h] [rbp+18h] BYREF
  int v58; // [rsp+E8h] [rbp+20h] BYREF

  v57 = a3;
  v3 = a1;
  v4 = a2;
  memset(v54, 0, 48);
  v5 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = v5;
  v7 = (((a1 + 8 * a2 - 8) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v53 = v7;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
  v9 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v10 = v9;
  if ( v5 <= v7 )
  {
    v11 = v5;
    do
    {
      v12 = *(_QWORD *)v6;
      if ( MiPteInShadowRange(v11)
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v12 & 1) != 0
        && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
      {
        Flink = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v50 = *(_QWORD *)(Flink + 8 * ((v6 >> 3) & 0x1FF));
          Flink = v12 | 0x20;
          if ( (v50 & 0x20) == 0 )
            Flink = v12;
          v12 = Flink;
          if ( (v50 & 0x42) != 0 )
            v12 = Flink | 0x42;
        }
      }
      v16 = 48 * ((v12 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      v57 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v57, Flink, v14, v15);
        while ( *(__int64 *)(v16 + 24) < 0 );
      }
      *(_QWORD *)(v16 + 24) ^= ((*(_QWORD *)(v16 + 24) + 1LL) ^ *(_QWORD *)(v16 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v6 += 8LL;
      v11 = v6;
    }
    while ( v6 <= v7 );
    v4 = a2;
    v3 = a1;
  }
  v17 = v10;
  v18 = (__int64)AnyMultiplexedVm;
  MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v17);
  MiDeleteSystemPagableVm((__int64)AnyMultiplexedVm, 0LL, v3, v4, 1, v54);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  v20 = MiGetSharedVm((__int64)AnyMultiplexedVm);
  v21 = ExAcquireSpinLockExclusive(v20);
  v20[1] = 0;
  v22 = v21;
  if ( v5 <= v53 )
  {
    v23 = v5;
    do
    {
      v24 = *(_QWORD *)v5;
      if ( MiPteInShadowRange(v23)
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v24 & 1) != 0
        && ((v24 & 0x20) == 0 || (v24 & 0x42) == 0) )
      {
        v25 = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v25 )
        {
          v51 = *(_QWORD *)(v25 + 8 * ((v5 >> 3) & 0x1FF));
          v25 = v24 | 0x20;
          if ( (v51 & 0x20) == 0 )
            v25 = v24;
          v24 = v25;
          if ( (v51 & 0x42) != 0 )
            v24 = v25 | 0x42;
        }
      }
      v28 = 48 * ((v24 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      v58 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v28 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v58, v25, v26, v27);
        while ( *(__int64 *)(v28 + 24) < 0 );
      }
      *(_QWORD *)(v28 + 24) ^= ((*(_QWORD *)(v28 + 24) - 1LL) ^ *(_QWORD *)(v28 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (*(_QWORD *)(v28 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
      {
        v39 = (__int64)(v5 << 25) >> 16;
        v40 = v39;
        for ( i = v39 + 4096; v40 < i; v40 += 8LL )
        {
          v42 = MI_READ_PTE_LOCK_FREE(v40);
          if ( (v42 & 0xC01) != 0 || (v42 & 0x3E0) != 0 && (v42 & 0x3E0) != 0x300LL )
            break;
        }
        if ( v40 == i )
        {
          v43 = (PVOID *)PsLoadedModuleList;
          v44 = v39 << 25 >> 16;
          while ( 1 )
          {
            v45 = (unsigned __int64)v43[6];
            v46 = v45
                + (((unsigned int)dword_140C4CCF0 + 4095LL) & 0xFFFFFFFFFFFFF000uLL)
                + (unsigned int)(*((_DWORD *)v43 + 16) - 1);
            if ( (PVOID)v45 != PsNtosImageBase && (PVOID)v45 != PsHalImageBase )
              v46 += (unsigned __int64)(unsigned int)dword_140C4CC8C << 12;
            v47 = ((v46 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
            if ( v5 >= ((v45 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL && v5 <= v47 )
              break;
            v43 = (PVOID *)*v43;
            if ( v43 == &PsLoadedModuleList )
              goto LABEL_44;
          }
          v43 = 0LL;
LABEL_44:
          v18 = (__int64)AnyMultiplexedVm;
          if ( v43 )
          {
            MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v22);
            MiReturnSystemVa(v44, v44 + 0x200000, 12);
            v48 = MiGetSharedVm((__int64)AnyMultiplexedVm);
            v49 = ExAcquireSpinLockExclusive(v48);
            v48[1] = 0;
            v22 = v49;
          }
        }
        else
        {
          v18 = (__int64)AnyMultiplexedVm;
        }
      }
      v5 += 8LL;
      v23 = v5;
    }
    while ( v5 <= v53 );
    v4 = a2;
  }
  MiUnlockWorkingSetExclusive(v18, v22);
  ExReleaseResourceLite(&PsLoadedModuleResource);
  KeLeaveCriticalRegionThread((__int64)CurrentThread, v29, v30, v31);
  CurrentPrcb = KeGetCurrentPrcb();
  v33 = v4;
  CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
  if ( (_DWORD)CachedResidentAvailable != -1 )
  {
    if ( v4 + CachedResidentAvailable <= 0x100 )
    {
      do
      {
        if ( v4 >= 0x80000 )
          break;
        v36 = _InterlockedCompareExchange(
                (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                v4 + CachedResidentAvailable,
                CachedResidentAvailable);
        v35 = (_DWORD)CachedResidentAvailable == v36;
        LODWORD(CachedResidentAvailable) = v36;
        if ( v35 )
          goto LABEL_20;
      }
      while ( v36 != -1 && v4 + v36 <= 0x100 );
    }
    if ( (int)CachedResidentAvailable > 192
      && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                              (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                              192,
                                              CachedResidentAvailable) )
    {
      v33 = v4 + (int)CachedResidentAvailable - 192;
    }
  }
  if ( v33 )
    _InterlockedExchangeAdd64(&qword_140C529C0, v33);
LABEL_20:
  v37 = v4 - v54[1];
  MiReturnCommit((__int64)&MiSystemPartition, v37);
  result = qword_140C4EFF0 - v37;
  qword_140C4EFF0 -= v37;
  return result;
}
