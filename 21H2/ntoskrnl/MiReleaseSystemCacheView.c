/*
 * XREFs of MiReleaseSystemCacheView @ 0x14031AA4C
 * Callers:
 *     MmUnmapViewInSystemCache @ 0x14031E830 (MmUnmapViewInSystemCache.c)
 *     MmFreeSystemCacheReserveView @ 0x1408C8580 (MmFreeSystemCacheReserveView.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiSetSystemCacheReverseMap @ 0x140231284 (MiSetSystemCacheReverseMap.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     RemoveListEntryPte @ 0x14023C638 (RemoveListEntryPte.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     MiReturnSystemVa @ 0x140305338 (MiReturnSystemVa.c)
 *     MiLockWorkingSetOptimal @ 0x14031A9E4 (MiLockWorkingSetOptimal.c)
 *     MiGetSystemCacheReverseMap @ 0x14031CD00 (MiGetSystemCacheReverseMap.c)
 *     InsertTailListPte @ 0x14031CFF0 (InsertTailListPte.c)
 *     MiGetPteLink @ 0x14031D930 (MiGetPteLink.c)
 *     MiDecrementSystemCacheViewCount @ 0x14031E740 (MiDecrementSystemCacheViewCount.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiWaitForSystemCacheViewFlush @ 0x14037FA80 (MiWaitForSystemCacheViewFlush.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall MiReleaseSystemCacheView(unsigned __int64 a1)
{
  __int64 v2; // rsi
  unsigned __int64 v3; // r15
  __int64 v4; // r13
  _DWORD *SchedulerAssist; // r9
  unsigned __int64 OldIrql; // rbx
  __int64 *v7; // rdi
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rbx
  int v10; // r13d
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rbx
  void *SystemCacheReverseMap; // rsi
  bool v15; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v18; // eax
  _QWORD *v19; // rbx
  __int64 v20; // rdi
  unsigned __int8 v21[8]; // [rsp+28h] [rbp-49h] BYREF
  __int64 v22; // [rsp+30h] [rbp-41h]
  __int64 v23; // [rsp+38h] [rbp-39h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-31h] BYREF
  _QWORD v25[8]; // [rsp+58h] [rbp-19h] BYREF

  v21[0] = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(v25, 0, sizeof(v25));
  v2 = 0LL;
  v3 = 0LL;
  v23 = 0LL;
  v4 = *(_QWORD *)(qword_140C4E688
                 + 8LL * ((*(_DWORD *)(MiGetSystemCacheReverseMap((__int64)(a1 << 25) >> 16) + 32) >> 6) & 0x3FF));
  v22 = v4;
  KeAcquireInStackQueuedSpinLock(&qword_140C4E3E8, &LockHandle);
  if ( !(unsigned __int8)MiDecrementSystemCacheViewCount((__int64)(a1 << 25) >> 16) )
  {
    v3 = a1 & 0xFFFFFFFFFFFFF000uLL;
    v7 = (__int64 *)(a1 & 0xFFFFFFFFFFFFF000uLL);
    v8 = (a1 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    if ( (a1 & 0xFFFFFFFFFFFFF000uLL) >= v8 )
      goto LABEL_3;
    while ( 1 )
    {
      if ( v7 != (__int64 *)a1 )
      {
        RemoveListEntryPte((__int64 *)(v4 + 1784), v7);
        if ( MiGetPteLink(v7[3]) != 1 )
        {
          v9 = ZeroPte;
          v10 = 0;
          if ( !(unsigned int)MiPteInShadowRange(v7 + 3) )
          {
LABEL_10:
            v7[3] = v9;
            if ( v10 )
              MiWritePteShadow((__int64)(v7 + 3), v9);
            v4 = v22;
            v8 = v3 + 4096;
            goto LABEL_13;
          }
          if ( (unsigned int)MiPteHasShadow() )
          {
            v10 = 1;
            if ( HIBYTE(word_140C4E048) )
              goto LABEL_10;
            v15 = (ZeroPte & 1) == 0;
          }
          else
          {
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
              goto LABEL_10;
            v15 = (ZeroPte & 1) == 0;
          }
          if ( !v15 )
            v9 = ZeroPte | 0x8000000000000000uLL;
          goto LABEL_10;
        }
        v25[v2] = v7;
        v2 = (unsigned int)(v2 + 1);
      }
LABEL_13:
      v7 += 64;
      if ( (unsigned __int64)v7 >= v8 )
        goto LABEL_3;
    }
  }
  InsertTailListPte(v4 + 1784, a1);
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
        v18 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v15 = (v18 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v18;
        if ( v15 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  if ( v3 )
  {
    if ( (_DWORD)v2 )
    {
      v19 = v25;
      v20 = (unsigned int)v2;
      do
      {
        MiWaitForSystemCacheViewFlush(*v19++);
        --v20;
      }
      while ( v20 );
    }
    v11 = v3 << 25;
    v12 = (__int64)(v11 - v23) >> 16;
    v13 = MiLockWorkingSetOptimal(v4 + 7232, a1, v21, SchedulerAssist);
    SystemCacheReverseMap = (void *)MiGetSystemCacheReverseMap(v12);
    MiSetSystemCacheReverseMap(v12, 0LL);
    MiUnlockPageTableInternal(v4 + 7232, v13);
    MiUnlockWorkingSetShared(v4 + 7232, v21[0]);
    MiReturnSystemVa(v12, (__int64)(v11 - v23 + 0x2000000000LL) >> 16, 8);
    ExFreePoolWithTag(SystemCacheReverseMap, 0);
  }
}
