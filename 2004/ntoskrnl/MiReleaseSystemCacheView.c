/*
 * XREFs of MiReleaseSystemCacheView @ 0x1402C220C
 * Callers:
 *     MmUnmapViewInSystemCache @ 0x140247350 (MmUnmapViewInSystemCache.c)
 *     MmFreeSystemCacheReserveView @ 0x1408C4E20 (MmFreeSystemCacheReserveView.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiReturnSystemVa @ 0x1402515AC (MiReturnSystemVa.c)
 *     MiLockWorkingSetOptimal @ 0x1402633AC (MiLockWorkingSetOptimal.c)
 *     MiUnlockPageTableInternal @ 0x140278B10 (MiUnlockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402A1770 (MiUnlockWorkingSetShared.c)
 *     InsertTailListPte @ 0x1402B60C0 (InsertTailListPte.c)
 *     MiGetPteLink @ 0x1402B9B90 (MiGetPteLink.c)
 *     MiGetSystemCacheReverseMap @ 0x1402BE040 (MiGetSystemCacheReverseMap.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402C0E10 (KeAcquireInStackQueuedSpinLock.c)
 *     MiDecrementSystemCacheViewCount @ 0x1402C2444 (MiDecrementSystemCacheViewCount.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiSetSystemCacheReverseMap @ 0x14033D688 (MiSetSystemCacheReverseMap.c)
 *     RemoveListEntryPte @ 0x14034B7E8 (RemoveListEntryPte.c)
 *     MiWaitForSystemCacheViewFlush @ 0x14037D9C0 (MiWaitForSystemCacheViewFlush.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x14040A280 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall MiReleaseSystemCacheView(unsigned __int64 a1)
{
  __int64 v2; // rsi
  unsigned __int64 v3; // r15
  __int64 v4; // r13
  unsigned __int64 OldIrql; // rbx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rbx
  int v9; // r13d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // rbx
  void *SystemCacheReverseMap; // rsi
  bool v18; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v22; // eax
  _QWORD *v23; // rbx
  __int64 v24; // rdi
  unsigned __int8 v25[8]; // [rsp+28h] [rbp-49h] BYREF
  __int64 v26; // [rsp+30h] [rbp-41h]
  __int64 v27; // [rsp+38h] [rbp-39h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-31h] BYREF
  _QWORD v29[8]; // [rsp+58h] [rbp-19h] BYREF

  v25[0] = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(v29, 0, sizeof(v29));
  v2 = 0LL;
  v3 = 0LL;
  v27 = 0LL;
  v4 = *(_QWORD *)(qword_140C4E448
                 + 8LL * ((*(_DWORD *)(MiGetSystemCacheReverseMap((__int64)(a1 << 25) >> 16) + 32) >> 6) & 0x3FF));
  v26 = v4;
  KeAcquireInStackQueuedSpinLock(qword_140C4E1A8, &LockHandle);
  if ( !(unsigned __int8)MiDecrementSystemCacheViewCount((__int64)(a1 << 25) >> 16) )
  {
    v3 = a1 & 0xFFFFFFFFFFFFF000uLL;
    v6 = a1 & 0xFFFFFFFFFFFFF000uLL;
    v7 = (a1 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    if ( (a1 & 0xFFFFFFFFFFFFF000uLL) >= v7 )
      goto LABEL_3;
    while ( 1 )
    {
      if ( v6 != a1 )
      {
        RemoveListEntryPte(v4 + 1784, v6);
        if ( MiGetPteLink(*(_QWORD *)(v6 + 24)) != 1 )
        {
          v8 = ZeroPte;
          v9 = 0;
          if ( !MiPteInShadowRange(v6 + 24) )
          {
LABEL_10:
            *(_QWORD *)(v6 + 24) = v8;
            if ( v9 )
              MiWritePteShadow(v6 + 24, v8);
            v4 = v26;
            v7 = v3 + 4096;
            goto LABEL_13;
          }
          if ( (unsigned int)MiPteHasShadow(v11, v10, v12, v13) )
          {
            v9 = 1;
            if ( HIBYTE(word_140C4DE08) )
              goto LABEL_10;
            v18 = (ZeroPte & 1) == 0;
          }
          else
          {
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
              goto LABEL_10;
            v18 = (ZeroPte & 1) == 0;
          }
          if ( !v18 )
            v8 = ZeroPte | 0x8000000000000000uLL;
          goto LABEL_10;
        }
        v29[v2] = v6;
        v2 = (unsigned int)(v2 + 1);
      }
LABEL_13:
      v6 += 512LL;
      if ( v6 >= v7 )
        goto LABEL_3;
    }
  }
  InsertTailListPte((struct _KTHREAD **)(v4 + 1784), (unsigned __int64 *)a1);
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
        v22 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v18 = (v22 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v22;
        if ( v18 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  if ( v3 )
  {
    if ( (_DWORD)v2 )
    {
      v23 = v29;
      v24 = (unsigned int)v2;
      do
      {
        MiWaitForSystemCacheViewFlush(*v23++);
        --v24;
      }
      while ( v24 );
    }
    v14 = v3 << 25;
    v15 = (__int64)(v14 - v27) >> 16;
    v16 = MiLockWorkingSetOptimal(v4 + 7232, a1, v25);
    SystemCacheReverseMap = (void *)MiGetSystemCacheReverseMap(v15);
    MiSetSystemCacheReverseMap(v15, 0LL);
    MiUnlockPageTableInternal(v4 + 7232, v16);
    MiUnlockWorkingSetShared(v4 + 7232, v25[0]);
    MiReturnSystemVa(v15, (__int64)(v14 - v27 + 0x2000000000LL) >> 16, 8);
    ExFreePoolWithTag(SystemCacheReverseMap, 0);
  }
}
