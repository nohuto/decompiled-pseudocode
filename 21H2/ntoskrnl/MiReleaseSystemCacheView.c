/*
 * XREFs of MiReleaseSystemCacheView @ 0x14030FCFC
 * Callers:
 *     MmUnmapViewInSystemCache @ 0x140313AE0 (MmUnmapViewInSystemCache.c)
 *     MmFreeSystemCacheReserveView @ 0x1408C8420 (MmFreeSystemCacheReserveView.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020F790 (MiUnlockWorkingSetShared.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14022EE10 (KeAcquireInStackQueuedSpinLock.c)
 *     MiUnlockPageTableInternal @ 0x1402855F0 (MiUnlockPageTableInternal.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140287110 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiSetSystemCacheReverseMap @ 0x1402B30D4 (MiSetSystemCacheReverseMap.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     RemoveListEntryPte @ 0x1402BDFF8 (RemoveListEntryPte.c)
 *     MiReturnSystemVa @ 0x1402FA5E8 (MiReturnSystemVa.c)
 *     MiLockWorkingSetOptimal @ 0x14030FC94 (MiLockWorkingSetOptimal.c)
 *     MiGetSystemCacheReverseMap @ 0x140311FB0 (MiGetSystemCacheReverseMap.c)
 *     InsertTailListPte @ 0x1403122A0 (InsertTailListPte.c)
 *     MiGetPteLink @ 0x140312BE0 (MiGetPteLink.c)
 *     MiDecrementSystemCacheViewCount @ 0x1403139F0 (MiDecrementSystemCacheViewCount.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     MiWaitForSystemCacheViewFlush @ 0x14037FF30 (MiWaitForSystemCacheViewFlush.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140414200 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
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
  __int64 v9; // rdx
  unsigned __int64 v10; // rbx
  int v11; // r13d
  __int64 v12; // r8
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // rbx
  void *SystemCacheReverseMap; // rsi
  bool v17; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v20; // eax
  _QWORD *v21; // rbx
  __int64 v22; // rdi
  unsigned __int8 v23[8]; // [rsp+28h] [rbp-49h] BYREF
  __int64 v24; // [rsp+30h] [rbp-41h]
  __int64 v25; // [rsp+38h] [rbp-39h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-31h] BYREF
  _QWORD v27[8]; // [rsp+58h] [rbp-19h] BYREF

  v23[0] = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(v27, 0, sizeof(v27));
  v2 = 0LL;
  v3 = 0LL;
  v25 = 0LL;
  v4 = *(_QWORD *)(qword_140C4E648
                 + 8LL * ((*(_DWORD *)(MiGetSystemCacheReverseMap((__int64)(a1 << 25) >> 16) + 32) >> 6) & 0x3FF));
  v24 = v4;
  KeAcquireInStackQueuedSpinLock(&qword_140C4E3A8, &LockHandle);
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
          v10 = ZeroPte;
          v11 = 0;
          if ( !(unsigned int)MiPteInShadowRange(v7 + 3, v9) )
          {
LABEL_10:
            v7[3] = v10;
            if ( v11 )
              MiWritePteShadow((__int64)(v7 + 3), v10, v12);
            v4 = v24;
            v8 = v3 + 4096;
            goto LABEL_13;
          }
          if ( (unsigned int)MiPteHasShadow() )
          {
            v11 = 1;
            if ( HIBYTE(word_140C4E008) )
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
            v10 = ZeroPte | 0x8000000000000000uLL;
          goto LABEL_10;
        }
        v27[v2] = v7;
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
        v20 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v17 = (v20 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v20;
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
      v21 = v27;
      v22 = (unsigned int)v2;
      do
      {
        MiWaitForSystemCacheViewFlush(*v21++);
        --v22;
      }
      while ( v22 );
    }
    v13 = v3 << 25;
    v14 = (__int64)(v13 - v25) >> 16;
    v15 = MiLockWorkingSetOptimal(v4 + 7232, a1, v23, SchedulerAssist);
    SystemCacheReverseMap = (void *)MiGetSystemCacheReverseMap(v14);
    MiSetSystemCacheReverseMap(v14, 0LL);
    MiUnlockPageTableInternal(v4 + 7232, v15);
    MiUnlockWorkingSetShared(v4 + 7232, v23[0]);
    MiReturnSystemVa(v14, (__int64)(v13 - v25 + 0x2000000000LL) >> 16, 8);
    ExFreePoolWithTag(SystemCacheReverseMap, 0);
  }
}
