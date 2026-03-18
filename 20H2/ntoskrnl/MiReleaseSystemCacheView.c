/*
 * XREFs of MiReleaseSystemCacheView @ 0x14029AFD0
 * Callers:
 *     MmUnmapViewInSystemCache @ 0x14029B2F0 (MmUnmapViewInSystemCache.c)
 *     MmFreeSystemCacheReserveView @ 0x1408CAC60 (MmFreeSystemCacheReserveView.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiReturnSystemVa @ 0x14024F3A8 (MiReturnSystemVa.c)
 *     MiUnlockWorkingSetShared @ 0x140270AB0 (MiUnlockWorkingSetShared.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140295000 (KeAcquireInStackQueuedSpinLock.c)
 *     MiGetSystemCacheReverseMap @ 0x140299590 (MiGetSystemCacheReverseMap.c)
 *     InsertTailListPte @ 0x140299880 (InsertTailListPte.c)
 *     MiGetPteLink @ 0x14029A1C0 (MiGetPteLink.c)
 *     MiDecrementSystemCacheViewCount @ 0x14029B208 (MiDecrementSystemCacheViewCount.c)
 *     MiLockWorkingSetOptimal @ 0x14029C0FC (MiLockWorkingSetOptimal.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     RemoveListEntryPte @ 0x14031C7A8 (RemoveListEntryPte.c)
 *     MiSetSystemCacheReverseMap @ 0x14031DE2C (MiSetSystemCacheReverseMap.c)
 *     MiUnlockPageTableInternal @ 0x14035B910 (MiUnlockPageTableInternal.c)
 *     MiWaitForSystemCacheViewFlush @ 0x14037F6F0 (MiWaitForSystemCacheViewFlush.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140411300 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall MiReleaseSystemCacheView(unsigned __int64 *a1)
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
  v4 = *(_QWORD *)(qword_140C4E4C8
                 + 8LL
                 * ((*(_DWORD *)(MiGetSystemCacheReverseMap((__int64)((_QWORD)a1 << 25) >> 16) + 32) >> 6) & 0x3FF));
  v25 = v4;
  KeAcquireInStackQueuedSpinLock(qword_140C4E228, &LockHandle);
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
          v8 = ZeroPte;
          v9 = 0;
          if ( !MiPteInShadowRange(v6 + 24) )
          {
LABEL_10:
            *(_QWORD *)(v6 + 24) = v8;
            if ( v9 )
              MiWritePteShadow(v6 + 24, v8);
            v4 = v25;
            v7 = v3 + 4096;
            goto LABEL_13;
          }
          if ( (unsigned int)MiPteHasShadow(v11, v10, v12, v13) )
          {
            v9 = 1;
            if ( HIBYTE(word_140C4DE88) )
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
            v8 = ZeroPte | 0x8000000000000000uLL;
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
    v14 = v3 << 25;
    v15 = (__int64)(v14 - v26) >> 16;
    MiLockWorkingSetOptimal(v4 + 7232, a1, v24);
    SystemCacheReverseMap = (void *)MiGetSystemCacheReverseMap(v15);
    MiSetSystemCacheReverseMap(v15, 0LL);
    MiUnlockPageTableInternal(v4 + 7232);
    MiUnlockWorkingSetShared(v4 + 7232, v24[0]);
    MiReturnSystemVa(v15, (__int64)(v14 - v26 + 0x2000000000LL) >> 16, 8);
    ExFreePoolWithTag(SystemCacheReverseMap, 0);
  }
}
