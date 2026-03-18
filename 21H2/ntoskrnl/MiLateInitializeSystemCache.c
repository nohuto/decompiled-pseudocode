/*
 * XREFs of MiLateInitializeSystemCache @ 0x1403C3BF8
 * Callers:
 *     MiObtainSystemCacheView @ 0x140286210 (MiObtainSystemCacheView.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     MiInitializeSystemCache @ 0x14082BCA0 (MiInitializeSystemCache.c)
 */

__int64 __fastcall MiLateInitializeSystemCache(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  ULONG_PTR v3; // rdi
  unsigned __int64 OldIrql; // r14
  char v5; // bl
  struct _KTHREAD *v6; // r14
  unsigned int v7; // ecx
  __int64 v8; // rbx
  unsigned int v9; // edx
  int v11; // r8d
  bool v12; // zf
  struct _KTHREAD *v13; // r14
  unsigned int SessionId; // ecx
  __int64 p_Process; // rbx
  unsigned int v16; // edx
  int v17; // r8d
  struct _KTHREAD *v18; // r14
  unsigned int v19; // ecx
  __int64 v20; // rbx
  unsigned int v21; // edx
  int v22; // r8d
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v26; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v3 = a1 + 2016;
  ExAcquirePushLockExclusiveEx(a1 + 2016, 0LL);
  if ( *(_BYTE *)(a1 + 16732) )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v3);
    v13 = KeGetCurrentThread();
    if ( v3 - qword_140C50630 >= 0x8000000000LL )
      SessionId = -1;
    else
      SessionId = MmGetSessionIdEx((__int64)v13->ApcState.Process);
    _disable();
    p_Process = (__int64)&v13[1].Process;
    v16 = 0;
    while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != (v3 & 0x7FFFFFFFFFFFFFFCLL)
         || !*(_BYTE *)(p_Process + 18)
         || (*(_DWORD *)p_Process & 1) != 0
         || *(_DWORD *)(p_Process + 8) != SessionId )
    {
      ++v16;
      p_Process += 96LL;
      if ( v16 >= 6 )
        goto LABEL_42;
    }
    *(_BYTE *)(p_Process + 18) = 0;
    if ( p_Process )
    {
      if ( *(__int64 *)p_Process < 0 )
      {
        *(_BYTE *)p_Process |= 2u;
        _enable();
        KiAbEntryRemoveFromTree(p_Process);
        _disable();
      }
      v17 = *(_DWORD *)(p_Process + 88);
      *(_DWORD *)(p_Process + 88) = 0;
      *(_BYTE *)(p_Process + 17) = 0;
      *(_QWORD *)p_Process = 0LL;
      v13->AbEntrySummary |= 1 << *(_BYTE *)(p_Process + 16);
      _enable();
      if ( v17 )
        KiAbThreadRemoveBoostsSlow((ULONG_PTR)v13, v3, v17);
      goto LABEL_45;
    }
LABEL_42:
    if ( (*((_DWORD *)&v13->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v13, v3, SessionId, 0LL);
    _enable();
LABEL_45:
    v12 = CurrentThread->SpecialApcDisable++ == -1;
    if ( !v12 )
      return 1LL;
    v12 = CurrentThread->ApcState.ApcListHead[0].Flink == CurrentThread->ApcState.ApcListHead;
    goto LABEL_23;
  }
  if ( (unsigned int)MiInitializeSystemCache(a1) )
  {
    KeAcquireInStackQueuedSpinLock(&qword_140C51C30, &LockHandle);
    *(_BYTE *)(a1 + 16732) = 1;
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
          v26 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v12 = (v26 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v26;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    v5 = _InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v5 & 2) != 0 && (v5 & 4) == 0 )
      ExfTryToWakePushLock(v3);
    v6 = KeGetCurrentThread();
    if ( v3 - qword_140C50630 >= 0x8000000000LL )
      v7 = -1;
    else
      v7 = MmGetSessionIdEx((__int64)v6->ApcState.Process);
    _disable();
    v8 = (__int64)&v6[1].Process;
    v9 = 0;
    while ( (*(_QWORD *)v8 & 0x7FFFFFFFFFFFFFFCLL) != (v3 & 0x7FFFFFFFFFFFFFFCLL)
         || !*(_BYTE *)(v8 + 18)
         || (*(_DWORD *)v8 & 1) != 0
         || *(_DWORD *)(v8 + 8) != v7 )
    {
      ++v9;
      v8 += 96LL;
      if ( v9 >= 6 )
        goto LABEL_13;
    }
    *(_BYTE *)(v8 + 18) = 0;
    if ( !v8 )
    {
LABEL_13:
      if ( (*((_DWORD *)&v6->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v6, v3, v7, 0LL);
      _enable();
      goto LABEL_15;
    }
    if ( *(__int64 *)v8 < 0 )
    {
      *(_BYTE *)v8 |= 2u;
      _enable();
      KiAbEntryRemoveFromTree(v8);
      _disable();
    }
    v11 = *(_DWORD *)(v8 + 88);
    *(_DWORD *)(v8 + 88) = 0;
    *(_BYTE *)(v8 + 17) = 0;
    *(_QWORD *)v8 = 0LL;
    v6->AbEntrySummary |= 1 << *(_BYTE *)(v8 + 16);
    _enable();
    if ( v11 )
      KiAbThreadRemoveBoostsSlow((ULONG_PTR)v6, v3, v11);
LABEL_15:
    v12 = CurrentThread->SpecialApcDisable++ == -1;
    if ( !v12 )
      return 1LL;
    v12 = CurrentThread->ApcState.ApcListHead[0].Flink == CurrentThread->ApcState.ApcListHead;
LABEL_23:
    if ( !v12 )
      KiCheckForKernelApcDelivery();
    return 1LL;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v3);
  v18 = KeGetCurrentThread();
  if ( v3 - qword_140C50630 >= 0x8000000000LL )
    v19 = -1;
  else
    v19 = MmGetSessionIdEx((__int64)v18->ApcState.Process);
  _disable();
  v20 = (__int64)&v18[1].Process;
  v21 = 0;
  while ( (*(_QWORD *)v20 & 0x7FFFFFFFFFFFFFFCLL) != (v3 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(v20 + 18)
       || (*(_DWORD *)v20 & 1) != 0
       || *(_DWORD *)(v20 + 8) != v19 )
  {
    ++v21;
    v20 += 96LL;
    if ( v21 >= 6 )
      goto LABEL_63;
  }
  *(_BYTE *)(v20 + 18) = 0;
  if ( v20 )
  {
    if ( *(__int64 *)v20 < 0 )
    {
      *(_BYTE *)v20 |= 2u;
      _enable();
      KiAbEntryRemoveFromTree(v20);
      _disable();
    }
    v22 = *(_DWORD *)(v20 + 88);
    *(_DWORD *)(v20 + 88) = 0;
    *(_BYTE *)(v20 + 17) = 0;
    *(_QWORD *)v20 = 0LL;
    v18->AbEntrySummary |= 1 << *(_BYTE *)(v20 + 16);
    _enable();
    if ( v22 )
      KiAbThreadRemoveBoostsSlow((ULONG_PTR)v18, v3, v22);
    goto LABEL_66;
  }
LABEL_63:
  if ( (*((_DWORD *)&v18->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v18, v3, v19, 0LL);
  _enable();
LABEL_66:
  v12 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v12 && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return 0LL;
}
