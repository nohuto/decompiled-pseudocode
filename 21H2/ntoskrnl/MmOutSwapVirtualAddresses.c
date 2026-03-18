/*
 * XREFs of MmOutSwapVirtualAddresses @ 0x140375974
 * Callers:
 *     SmPerformStoreSwapOperation @ 0x14037592C (SmPerformStoreSwapOperation.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MiFindBestOutswapPagefile @ 0x14025FE60 (MiFindBestOutswapPagefile.c)
 *     MiOutSwapWorkingSet @ 0x1402608AC (MiOutSwapWorkingSet.c)
 *     MiReAllocateWorkingSetSwapSupport @ 0x14026099C (MiReAllocateWorkingSetSwapSupport.c)
 *     MiAllocateWorkingSetSwapSupport @ 0x1402609F4 (MiAllocateWorkingSetSwapSupport.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14030EA00 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiLocateAddress @ 0x1403126F0 (MiLocateAddress.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiFreeReservationRuns @ 0x1406EC288 (MiFreeReservationRuns.c)
 *     EtwTraceWorkingSetSwap @ 0x1406EC338 (EtwTraceWorkingSetSwap.c)
 *     MiValidateMemoryRangeEntries @ 0x140753A88 (MiValidateMemoryRangeEntries.c)
 *     MiReserveWorkingSetSwapSpace @ 0x1407F71B0 (MiReserveWorkingSetSwapSpace.c)
 *     MiExtendWorkingSetSwapPagefile @ 0x14097FF04 (MiExtendWorkingSetSwapPagefile.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmOutSwapVirtualAddresses(PEPROCESS Process, unsigned __int64 *a2, __int64 a3, _QWORD *a4)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 v8; // rcx
  __int64 v9; // rsi
  unsigned int BestOutswapPagefile; // r12d
  __int64 v11; // r8
  unsigned __int64 v12; // r13
  unsigned int v13; // r15d
  int v14; // eax
  unsigned int v15; // r12d
  int v16; // esi
  unsigned __int64 *WorkingSetSwapSupport; // rax
  _QWORD *v18; // r13
  PEPROCESS v19; // rsi
  unsigned __int64 *v20; // r12
  ULONG_PTR v21; // r15
  unsigned __int64 *v22; // rsi
  __int64 **Address; // rax
  int v24; // ecx
  struct _KTHREAD *v25; // rsi
  unsigned int SessionId; // ecx
  __int64 p_Process; // rdi
  unsigned int v28; // edx
  bool v29; // zf
  __int64 v30; // rdi
  __int64 v31; // rdi
  ULONG_PTR v32; // r15
  struct _KTHREAD *v33; // rdi
  __int64 v34; // rbx
  unsigned int v35; // ecx
  int v37; // r8d
  int v38; // r8d
  ULONG_PTR v39; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v40; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v41; // [rsp+40h] [rbp-C0h]
  PEPROCESS Processa; // [rsp+48h] [rbp-B8h]
  __int64 v43; // [rsp+50h] [rbp-B0h]
  _QWORD *v44; // [rsp+58h] [rbp-A8h]
  _OWORD v45[10]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v46; // [rsp+100h] [rbp+0h]
  __int128 v47; // [rsp+110h] [rbp+10h]
  __int64 v48; // [rsp+120h] [rbp+20h]

  v40 = 0LL;
  LODWORD(v39) = 0;
  v48 = 0LL;
  v46 = 0LL;
  Processa = Process;
  v47 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v8 = Process[1].IdealProcessor[25];
  v44 = a4;
  v43 = a3;
  v9 = *(_QWORD *)(qword_140C51F48 + 8 * v8);
  v41 = v9;
  BestOutswapPagefile = MiFindBestOutswapPagefile(v9, (unsigned int *)&v39);
  if ( BestOutswapPagefile == 16 )
    return 3221225799LL;
  LODWORD(v46) = 2;
  EtwTraceWorkingSetSwap(Process);
  MiValidateMemoryRangeEntries(a2, a3, &v40);
  memset(v45, 0, 0x98uLL);
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx(v9 + 1152, 0LL);
  v12 = v40;
  v13 = v39;
  while ( 1 )
  {
    v14 = MiReserveWorkingSetSwapSpace(v9, (char *)&v45[2] + 8, v11, BestOutswapPagefile);
    v15 = -1;
    v16 = v14;
    if ( v14 >= 0 )
      break;
    if ( v13 >= 0x10 )
      goto LABEL_32;
    BestOutswapPagefile = v13;
    v16 = MiExtendWorkingSetSwapPagefile(v41, v12, v13);
    if ( v16 < 0 )
    {
      v15 = -1;
      goto LABEL_32;
    }
    v9 = v41;
  }
  WorkingSetSwapSupport = MiAllocateWorkingSetSwapSupport(v12);
  v18 = WorkingSetSwapSupport;
  if ( WorkingSetSwapSupport )
  {
    v19 = Processa;
    *(_QWORD *)&v45[0] = WorkingSetSwapSupport;
    *((_QWORD *)&v45[1] + 1) = v41;
    v20 = &Processa[1].ActiveProcessors.StaticBitmap[26];
    *(_QWORD *)&v45[1] = (char *)Processa + 1664;
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&v19[1].Affinity.StaticBitmap[7], 0LL);
    LOBYTE(CurrentThread[1].Queue) |= 2u;
    --CurrentThread->SpecialApcDisable;
    v21 = (ULONG_PTR)&v19[1].Affinity.StaticBitmap[8];
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&v19[1].Affinity.StaticBitmap[8], 0LL);
    v22 = &a2[2 * v43];
    while ( a2 < v22 )
    {
      Address = MiLocateAddress(*a2);
      if ( Address )
      {
        v24 = *((_DWORD *)Address + 12);
        if ( (v24 & 0x70) == 0
          && (v24 & 0x200000) != 0
          && (v24 & 0x800000) == 0
          && (v24 & 0x180000u) < 0x100000
          && (*((unsigned int *)Address + 7) | ((unsigned __int64)*((unsigned __int8 *)Address + 33) << 32)) >= (*a2 + a2[1] - 1) >> 12 )
        {
          MiOutSwapWorkingSet((__int64)v20, (__int64)Address, *a2, *a2 + a2[1] - 1, (__int64)v45);
        }
      }
      a2 += 2;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v21, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v21);
    v25 = KeGetCurrentThread();
    if ( v21 - qword_140C50630 >= 0x8000000000LL )
    {
      v15 = -1;
      SessionId = -1;
    }
    else
    {
      SessionId = MmGetSessionIdEx((__int64)v25->ApcState.Process);
      v15 = -1;
    }
    _disable();
    p_Process = (__int64)&v25[1].Process;
    v28 = 0;
    while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != (v21 & 0x7FFFFFFFFFFFFFFCLL)
         || !*(_BYTE *)(p_Process + 18)
         || (*(_DWORD *)p_Process & 1) != 0
         || *(_DWORD *)(p_Process + 8) != SessionId )
    {
      ++v28;
      p_Process += 96LL;
      if ( v28 >= 6 )
        goto LABEL_25;
    }
    *(_BYTE *)(p_Process + 18) = 0;
    if ( !p_Process )
    {
LABEL_25:
      if ( (*((_DWORD *)&v25->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v25, v21, SessionId, 0LL);
      _enable();
      goto LABEL_27;
    }
    if ( *(__int64 *)p_Process < 0 )
    {
      *(_BYTE *)p_Process |= 2u;
      _enable();
      KiAbEntryRemoveFromTree(p_Process);
      _disable();
    }
    v37 = *(_DWORD *)(p_Process + 88);
    *(_DWORD *)(p_Process + 88) = 0;
    *(_BYTE *)(p_Process + 17) = 0;
    *(_QWORD *)p_Process = 0LL;
    v25->AbEntrySummary |= 1 << *(_BYTE *)(p_Process + 16);
    _enable();
    if ( v37 )
      KiAbThreadRemoveBoostsSlow((ULONG_PTR)v25, v21, v37);
LABEL_27:
    v29 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v29 && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)Processa);
    if ( v18[2] < v40 )
    {
      v30 = MiReAllocateWorkingSetSwapSupport((__int64)v18);
      if ( v30 )
      {
        ExFreePoolWithTag(v18, 0);
        v18 = (_QWORD *)v30;
      }
    }
    v16 = 0;
    v40 = v18[3];
    *v44 = v18;
  }
  else
  {
    v16 = -1073741670;
  }
LABEL_32:
  v31 = v41;
  MiFreeReservationRuns(v41, (char *)&v45[2] + 8);
  v32 = v31 + 1152;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v31 + 1152), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v31 + 1152);
  v33 = KeGetCurrentThread();
  if ( v32 - qword_140C50630 < 0x8000000000LL )
    v15 = MmGetSessionIdEx((__int64)v33->ApcState.Process);
  _disable();
  v34 = (__int64)&v33[1].Process;
  v35 = 0;
  while ( (*(_QWORD *)v34 & 0x7FFFFFFFFFFFFFFCLL) != (v32 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(v34 + 18)
       || (*(_DWORD *)v34 & 1) != 0
       || *(_DWORD *)(v34 + 8) != v15 )
  {
    ++v35;
    v34 += 96LL;
    if ( v35 >= 6 )
      goto LABEL_42;
  }
  *(_BYTE *)(v34 + 18) = 0;
  if ( !v34 )
  {
LABEL_42:
    if ( (*((_DWORD *)&v33->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v33, v32, v15, 0LL);
    _enable();
    goto LABEL_44;
  }
  if ( *(__int64 *)v34 < 0 )
  {
    *(_BYTE *)v34 |= 2u;
    _enable();
    KiAbEntryRemoveFromTree(v34);
    _disable();
  }
  v38 = *(_DWORD *)(v34 + 88);
  *(_DWORD *)(v34 + 88) = 0;
  *(_BYTE *)(v34 + 17) = 0;
  *(_QWORD *)v34 = 0LL;
  v33->AbEntrySummary |= 1 << *(_BYTE *)(v34 + 16);
  _enable();
  if ( v38 )
    KiAbThreadRemoveBoostsSlow((ULONG_PTR)v33, v32, v38);
LABEL_44:
  v29 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v29 && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  *(_QWORD *)&v46 = v40;
  *((_QWORD *)&v46 + 1) = *((_QWORD *)&v45[7] + 1);
  v47 = v45[8];
  LODWORD(v48) = v16;
  EtwTraceWorkingSetSwap(Processa);
  return (unsigned int)v16;
}
