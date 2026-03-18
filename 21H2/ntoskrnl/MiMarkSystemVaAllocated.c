/*
 * XREFs of MiMarkSystemVaAllocated @ 0x140599050
 * Callers:
 *     MiReservePoolMemory @ 0x14024D0D4 (MiReservePoolMemory.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MiSystemVaToDynamicBitmap @ 0x14026CF08 (MiSystemVaToDynamicBitmap.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     RtlSetBitsEx @ 0x14030B740 (RtlSetBitsEx.c)
 *     RtlClearBitsEx @ 0x14030BB30 (RtlClearBitsEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     MiExtendDynamicBitMap @ 0x1403D8D00 (MiExtendDynamicBitMap.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiMarkSystemVaAllocated(int a1, __int64 a2, __int64 a3, int a4, int a5)
{
  unsigned __int64 v5; // rbp
  unsigned int v6; // r13d
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rsi
  __int64 *v9; // r15
  unsigned __int64 v10; // r12
  __int64 v11; // r14
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // r8
  int v14; // r12d
  __int64 v15; // rcx
  __int64 *v16; // rdx
  __int64 v17; // r9
  __int64 *v18; // r8
  bool v19; // zf
  bool i; // zf
  unsigned __int64 v21; // rdi
  struct _KTHREAD *v22; // rsi
  unsigned int SessionId; // ecx
  __int64 p_Process; // rbx
  unsigned int v25; // edx
  int v26; // r8d
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v31; // edx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+98h] [rbp+10h]

  CurrentThread = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = 0LL;
  v6 = 1;
  v7 = (a3 - a2) >> 3;
  v8 = a2 << 25 >> 16 << 25 >> 16;
  if ( a1 == 1 )
  {
    v9 = 0LL;
    v10 = qword_140C4F608;
    CurrentThread = KeGetCurrentThread();
    v5 = CurrentThread->ApcState.Process[1].Affinity.StaticBitmap[25];
    --CurrentThread->SpecialApcDisable;
    v11 = v5 + 760;
    ExAcquirePushLockExclusiveEx(KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25] + 752, 0LL);
  }
  else
  {
    v9 = MiSystemVaToDynamicBitmap(a1);
    v11 = (__int64)v9;
    v10 = v9[4];
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v9 + 8, &LockHandle);
  }
  if ( v8 < v10 )
    goto LABEL_9;
  v12 = (v8 - v10) >> 21;
  if ( a5 && (v13 = v12 + v7 - 1, v13 >= *(_QWORD *)v11) )
  {
    if ( v13 >= v9[2] )
      goto LABEL_9;
    v14 = a1;
    if ( !(unsigned int)MiExtendDynamicBitMap(
                          v9,
                          (unsigned __int64 *)v11,
                          (v13 - *(_QWORD *)v11 + 0x8000) & 0xFFFFFFFFFFFF8000uLL,
                          a1,
                          1) )
      goto LABEL_9;
  }
  else
  {
    v14 = a1;
  }
  if ( !a4 )
  {
    RtlClearBitsEx(v11, v12, v7);
    if ( v5 )
    {
      *(_DWORD *)(v5 + 800) -= v7;
      goto LABEL_33;
    }
    _InterlockedExchangeAdd64(&MiState[v14 + 2513], -(__int64)v7);
LABEL_56:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v31 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v19 = (v31 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v31;
          if ( v19 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    return v6;
  }
  if ( v12 >= *(_QWORD *)v11 )
    goto LABEL_9;
  if ( v7 <= 1 )
  {
    if ( v7 == 1 && !_bittest64(*(const signed __int64 **)(v11 + 8), v12) )
      goto LABEL_28;
LABEL_9:
    v6 = 0;
    goto LABEL_10;
  }
  if ( *(_QWORD *)v11 - v12 < v7 )
    goto LABEL_9;
  v15 = *(_QWORD *)(v11 + 8);
  v16 = (__int64 *)(v15 + 8 * (v12 >> 6));
  v17 = *v16;
  v18 = (__int64 *)(v15 + 8 * ((v12 + v7 - 1) >> 6));
  if ( v16 != v18 )
  {
    for ( i = (v17 & (-1LL << v12)) == 0; i; i = *v16 == 0 )
    {
      if ( ++v16 == v18 )
      {
        v19 = ((0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v12 + (unsigned __int8)v7 - 1)) & *v16) == 0;
        goto LABEL_27;
      }
    }
    goto LABEL_9;
  }
  v19 = (v17 & (0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v7) << v12)) == 0;
LABEL_27:
  if ( !v19 )
    goto LABEL_9;
LABEL_28:
  RtlSetBitsEx(v11, v12, v7);
  if ( v5 )
  {
    *(_DWORD *)(v5 + 800) += v7;
    goto LABEL_33;
  }
  _InterlockedExchangeAdd64(&MiState[v14 + 2513], v7);
LABEL_10:
  if ( !v5 )
    goto LABEL_56;
LABEL_33:
  v21 = KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25] + 752;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v21, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v21);
  v22 = KeGetCurrentThread();
  if ( v21 - qword_140C50630 >= 0x8000000000LL )
    SessionId = -1;
  else
    SessionId = MmGetSessionIdEx((__int64)v22->ApcState.Process);
  _disable();
  p_Process = (__int64)&v22[1].Process;
  v25 = 0;
  while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != (v21 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(p_Process + 18)
       || (*(_DWORD *)p_Process & 1) != 0
       || *(_DWORD *)(p_Process + 8) != SessionId )
  {
    ++v25;
    p_Process += 96LL;
    if ( v25 >= 6 )
      goto LABEL_44;
  }
  *(_BYTE *)(p_Process + 18) = 0;
  if ( !p_Process )
  {
LABEL_44:
    if ( (*((_DWORD *)&v22->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v22, v21, SessionId, 0LL);
    _enable();
    goto LABEL_52;
  }
  if ( *(__int64 *)p_Process < 0 )
  {
    *(_BYTE *)p_Process |= 2u;
    _enable();
    KiAbEntryRemoveFromTree(p_Process);
    _disable();
  }
  v26 = *(_DWORD *)(p_Process + 88);
  *(_DWORD *)(p_Process + 88) = 0;
  *(_BYTE *)(p_Process + 17) = 0;
  *(_QWORD *)p_Process = 0LL;
  v22->AbEntrySummary |= 1 << *(_BYTE *)(p_Process + 16);
  _enable();
  if ( v26 )
    KiAbThreadRemoveBoostsSlow((ULONG_PTR)v22, v21, v26);
LABEL_52:
  v19 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v19 && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return v6;
}
