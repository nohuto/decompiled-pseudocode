/*
 * XREFs of MiDeleteBootRange @ 0x1403B1188
 * Callers:
 *     MmFreeBootRegistry @ 0x14078762C (MmFreeBootRegistry.c)
 *     MmFreeLoaderBlock @ 0x140A44F90 (MmFreeLoaderBlock.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402090B0 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     MiUnlockWorkingSetExclusive @ 0x140213300 (MiUnlockWorkingSetExclusive.c)
 *     MiReturnCommit @ 0x140224390 (MiReturnCommit.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiGetAnyMultiplexedVm @ 0x140250128 (MiGetAnyMultiplexedVm.c)
 *     MiReturnSystemVa @ 0x1402515AC (MiReturnSystemVa.c)
 *     MiDeleteSystemPagableVm @ 0x140252640 (MiDeleteSystemPagableVm.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MiGetSharedVm @ 0x1402AD3F0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
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
  struct _KPRCB *CurrentPrcb; // r9
  unsigned __int64 v30; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v32; // zf
  signed __int32 v33; // eax
  __int64 v34; // rdi
  __int64 result; // rax
  __int64 v36; // rbx
  unsigned __int64 v37; // rsi
  unsigned __int64 i; // rbp
  __int16 v39; // ax
  PVOID *v40; // rdx
  unsigned __int64 v41; // rbx
  unsigned __int64 v42; // r8
  unsigned __int64 v43; // rcx
  unsigned __int64 v44; // rcx
  LONG *v45; // rbx
  KIRQL v46; // al
  __int64 v47; // rax
  __int64 v48; // rax
  char *AnyMultiplexedVm; // [rsp+30h] [rbp-98h]
  unsigned __int64 v50; // [rsp+38h] [rbp-90h]
  _QWORD v51[16]; // [rsp+48h] [rbp-80h] BYREF
  int v54; // [rsp+E0h] [rbp+18h] BYREF
  int v55; // [rsp+E8h] [rbp+20h] BYREF

  v54 = a3;
  v3 = a1;
  v4 = a2;
  memset(v51, 0, 48);
  v5 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = v5;
  v7 = (((a1 + 8 * a2 - 8) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v50 = v7;
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
          v47 = *(_QWORD *)(Flink + 8 * ((v6 >> 3) & 0x1FF));
          Flink = v12 | 0x20;
          if ( (v47 & 0x20) == 0 )
            Flink = v12;
          v12 = Flink;
          if ( (v47 & 0x42) != 0 )
            v12 = Flink | 0x42;
        }
      }
      v16 = 48 * ((v12 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      v54 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v54, Flink, v14, v15);
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
  MiDeleteSystemPagableVm((__int64)AnyMultiplexedVm, 0LL, v3, v4, 1, v51);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  v20 = MiGetSharedVm((__int64)AnyMultiplexedVm);
  v21 = ExAcquireSpinLockExclusive(v20);
  v20[1] = 0;
  v22 = v21;
  if ( v5 <= v50 )
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
          v48 = *(_QWORD *)(v25 + 8 * ((v5 >> 3) & 0x1FF));
          v25 = v24 | 0x20;
          if ( (v48 & 0x20) == 0 )
            v25 = v24;
          v24 = v25;
          if ( (v48 & 0x42) != 0 )
            v24 = v25 | 0x42;
        }
      }
      v28 = 48 * ((v24 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      v55 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v28 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v55, v25, v26, v27);
        while ( *(__int64 *)(v28 + 24) < 0 );
      }
      *(_QWORD *)(v28 + 24) ^= ((*(_QWORD *)(v28 + 24) - 1LL) ^ *(_QWORD *)(v28 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (*(_QWORD *)(v28 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
      {
        v36 = (__int64)(v5 << 25) >> 16;
        v37 = v36;
        for ( i = v36 + 4096; v37 < i; v37 += 8LL )
        {
          v39 = MI_READ_PTE_LOCK_FREE(v37);
          if ( (v39 & 0xC01) != 0 || (v39 & 0x3E0) != 0 && (v39 & 0x3E0) != 0x300LL )
            break;
        }
        if ( v37 == i )
        {
          v40 = (PVOID *)PsLoadedModuleList;
          v41 = v36 << 25 >> 16;
          while ( 1 )
          {
            v42 = (unsigned __int64)v40[6];
            v43 = v42
                + (((unsigned int)dword_140C4CAB0 + 4095LL) & 0xFFFFFFFFFFFFF000uLL)
                + (unsigned int)(*((_DWORD *)v40 + 16) - 1);
            if ( (PVOID)v42 != PsNtosImageBase && (PVOID)v42 != PsHalImageBase )
              v43 += (unsigned __int64)(unsigned int)dword_140C4CA4C << 12;
            v44 = ((v43 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
            if ( v5 >= ((v42 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL && v5 <= v44 )
              break;
            v40 = (PVOID *)*v40;
            if ( v40 == &PsLoadedModuleList )
              goto LABEL_44;
          }
          v40 = 0LL;
LABEL_44:
          v18 = (__int64)AnyMultiplexedVm;
          if ( v40 )
          {
            MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v22);
            MiReturnSystemVa(v41, v41 + 0x200000, 12);
            v45 = MiGetSharedVm((__int64)AnyMultiplexedVm);
            v46 = ExAcquireSpinLockExclusive(v45);
            v45[1] = 0;
            v22 = v46;
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
    while ( v5 <= v50 );
    v4 = a2;
  }
  MiUnlockWorkingSetExclusive(v18, v22);
  ExReleaseResourceLite(&PsLoadedModuleResource);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  CurrentPrcb = KeGetCurrentPrcb();
  v30 = v4;
  CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
  if ( (_DWORD)CachedResidentAvailable != -1 )
  {
    if ( v4 + CachedResidentAvailable <= 0x100 )
    {
      do
      {
        if ( v4 >= 0x80000 )
          break;
        v33 = _InterlockedCompareExchange(
                (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                v4 + CachedResidentAvailable,
                CachedResidentAvailable);
        v32 = (_DWORD)CachedResidentAvailable == v33;
        LODWORD(CachedResidentAvailable) = v33;
        if ( v32 )
          goto LABEL_20;
      }
      while ( v33 != -1 && v4 + v33 <= 0x100 );
    }
    if ( (int)CachedResidentAvailable > 192
      && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                              (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                              192,
                                              CachedResidentAvailable) )
    {
      v30 = v4 + (int)CachedResidentAvailable - 192;
    }
  }
  if ( v30 )
    _InterlockedExchangeAdd64(&qword_140C52780, v30);
LABEL_20:
  v34 = v4 - v51[1];
  MiReturnCommit((__int64)&MiSystemPartition, v34);
  result = qword_140C4EDB0 - v34;
  qword_140C4EDB0 -= v34;
  return result;
}
