/*
 * XREFs of MiReleaseSystemCacheView @ 0x14022F3DC
 * Callers:
 *     MmUnmapViewInSystemCache @ 0x1402A0380 (MmUnmapViewInSystemCache.c)
 *     MmFreeSystemCacheReserveView @ 0x1408C3AD0 (MmFreeSystemCacheReserveView.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     InsertTailListPte @ 0x140223440 (InsertTailListPte.c)
 *     MiGetPteLink @ 0x140226F10 (MiGetPteLink.c)
 *     MiGetSystemCacheReverseMap @ 0x14022B3C0 (MiGetSystemCacheReverseMap.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14022DFE0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiDecrementSystemCacheViewCount @ 0x14022F614 (MiDecrementSystemCacheViewCount.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiReturnSystemVa @ 0x1402AA5DC (MiReturnSystemVa.c)
 *     MiLockWorkingSetOptimal @ 0x1402BC3DC (MiLockWorkingSetOptimal.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiSetSystemCacheReverseMap @ 0x140300B40 (MiSetSystemCacheReverseMap.c)
 *     RemoveListEntryPte @ 0x14030E308 (RemoveListEntryPte.c)
 *     MiWaitForSystemCacheViewFlush @ 0x14037CF00 (MiWaitForSystemCacheViewFlush.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140408F80 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall MiReleaseSystemCacheView(unsigned __int64 *a1)
{
  __int64 v2; // rsi
  unsigned __int64 v3; // r15
  __int64 v4; // r13
  unsigned __int64 OldIrql; // rbx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rbx
  __int64 v8; // rdx
  unsigned __int64 v9; // rbx
  int v10; // r13d
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // r14
  __int64 v15; // rbx
  void *SystemCacheReverseMap; // rsi
  bool v17; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v21; // eax
  _QWORD *v22; // rbx
  __int64 v23; // rdi
  unsigned __int8 v24[8]; // [rsp+28h] [rbp-49h] BYREF
  __int64 v25; // [rsp+30h] [rbp-41h]
  __int64 v26; // [rsp+38h] [rbp-39h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-31h] BYREF
  _QWORD v28[8]; // [rsp+58h] [rbp-19h] BYREF

  v24[0] = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(v28, 0, sizeof(v28));
  v2 = 0LL;
  v3 = 0LL;
  v26 = 0LL;
  v4 = *(_QWORD *)(qword_140C4E588
                 + 8LL
                 * ((*(_DWORD *)(MiGetSystemCacheReverseMap((__int64)((_QWORD)a1 << 25) >> 16) + 32) >> 6) & 0x3FF));
  v25 = v4;
  KeAcquireInStackQueuedSpinLock(qword_140C4E2E8, &LockHandle);
  if ( !(unsigned __int8)MiDecrementSystemCacheViewCount((__int64)((_QWORD)a1 << 25) >> 16) )
  {
    v3 = (unsigned __int64)a1 & 0xFFFFFFFFFFFFF000uLL;
    v6 = (unsigned __int64)a1 & 0xFFFFFFFFFFFFF000uLL;
    v7 = ((unsigned __int64)a1 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    if ( ((unsigned __int64)a1 & 0xFFFFFFFFFFFFF000uLL) >= v7 )
      goto LABEL_3;
    while ( 1 )
    {
      if ( (unsigned __int64 *)v6 != a1 )
      {
        RemoveListEntryPte(v4 + 1784, v6);
        if ( MiGetPteLink(*(_QWORD *)(v6 + 24)) != 1 )
        {
          v9 = ZeroPte;
          v10 = 0;
          if ( !(unsigned int)MiPteInShadowRange(v6 + 24, v8) )
          {
LABEL_10:
            *(_QWORD *)(v6 + 24) = v9;
            if ( v10 )
              MiWritePteShadow(v6 + 24, v9);
            v4 = v25;
            v7 = v3 + 4096;
            goto LABEL_13;
          }
          if ( (unsigned int)MiPteHasShadow(v12, v11) )
          {
            v10 = 1;
            if ( HIBYTE(word_140C4DF48) )
              goto LABEL_10;
            v17 = (ZeroPte & 1) == 0;
          }
          else
          {
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
              goto LABEL_10;
            v17 = (ZeroPte & 1) == 0;
          }
          if ( !v17 )
            v9 = ZeroPte | 0x8000000000000000uLL;
          goto LABEL_10;
        }
        v28[v2] = v6;
        v2 = (unsigned int)(v2 + 1);
      }
LABEL_13:
      v6 += 512LL;
      if ( v6 >= v7 )
        goto LABEL_3;
    }
  }
  InsertTailListPte((struct _KTHREAD **)(v4 + 1784), a1);
LABEL_3:
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
        v21 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v17 = (v21 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v21;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  if ( v3 )
  {
    if ( (_DWORD)v2 )
    {
      v22 = v28;
      v23 = (unsigned int)v2;
      do
      {
        MiWaitForSystemCacheViewFlush(*v22++);
        --v23;
      }
      while ( v23 );
    }
    v13 = v3 << 25;
    v14 = (__int64)(v13 - v26) >> 16;
    v15 = MiLockWorkingSetOptimal(v4 + 7232, a1, v24);
    SystemCacheReverseMap = (void *)MiGetSystemCacheReverseMap(v14);
    MiSetSystemCacheReverseMap(v14, 0LL);
    MiUnlockPageTableInternal(v4 + 7232, v15);
    MiUnlockWorkingSetShared(v4 + 7232, v24[0]);
    MiReturnSystemVa(v14, (__int64)(v13 - v26 + 0x2000000000LL) >> 16, 8LL);
    ExFreePoolWithTag(SystemCacheReverseMap, 0);
  }
}
