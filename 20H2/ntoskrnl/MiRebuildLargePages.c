/*
 * XREFs of MiRebuildLargePages @ 0x14038CFA0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x1402202E0 (KeAbPreAcquire.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140226AC0 (KxAcquireQueuedSpinLock.c)
 *     MiNodeFreeZeroPages @ 0x140231044 (MiNodeFreeZeroPages.c)
 *     MiNodeLargeFreeZeroPages @ 0x1402311E0 (MiNodeLargeFreeZeroPages.c)
 *     PsDereferencePartition @ 0x140263688 (PsDereferencePartition.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiGetNodeStandbyPageCount @ 0x14054EC88 (MiGetNodeStandbyPageCount.c)
 *     MiRebuildLargePage @ 0x140550C08 (MiRebuildLargePage.c)
 */

void __fastcall MiRebuildLargePages(unsigned __int64 a1)
{
  __int64 v1; // rbx
  unsigned __int64 v2; // r13
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // r14
  unsigned int v7; // ebp
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // r15
  unsigned int i; // edi
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  unsigned __int64 *v13; // rbp
  __int64 v14; // rax
  bool v15; // cf
  unsigned int v16; // ebp
  unsigned __int64 v17; // r11
  __int64 j; // r8
  __int64 NodeStandbyPageCount; // rax
  __int64 v20; // r11
  int v21; // r8d
  unsigned __int64 v22; // rdx
  char v23; // al
  unsigned __int8 v24; // al
  struct _KPRCB *CurrentPrcb; // r11
  _DWORD *v26; // r10
  int v27; // eax
  bool v28; // zf
  __int64 v29; // rsi
  _DWORD *v30; // r10
  unsigned __int8 v31; // al
  unsigned __int8 v32; // al
  struct _KPRCB *v33; // r9
  _DWORD *v34; // r8
  int v35; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v37; // [rsp+90h] [rbp+8h]
  char v38; // [rsp+98h] [rbp+10h]
  unsigned __int64 v39; // [rsp+A0h] [rbp+18h]

  v37 = a1 >> 53;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v39 = 16 * (a1 | 0xFFE0000000000000uLL);
  v1 = *(_QWORD *)(v39 + 0x10) + 4544 * (a1 >> 53);
  v2 = *(_QWORD *)(v1 + 4176);
  v38 = *(_BYTE *)(v1 + 3251);
  v3 = v2 / 0xC8;
  if ( v2 / 0xC8 < (-(__int64)(v38 != 0) & 0xFFFFFFFFFFFFE100uLL) + 0x2000
    || (v4 = MiNodeLargeFreeZeroPages((_QWORD *)v1, 4u, 2), v5 = v4, v4 >= v3) )
  {
    v6 = v39;
    goto LABEL_4;
  }
  v7 = MmNumberOfChannels;
  v8 = v3 - v4;
  v9 = 0LL;
  for ( i = 0; i < v7; ++i )
    v9 += MiNodeFreeZeroPages(v1, i, 0);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  LockHandle.LockQueue.Next = 0LL;
  v13 = (unsigned __int64 *)(v1 + 4328);
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v1 + 4328);
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v1 + 4328));
  v14 = KeAbPreAcquire(v1, 0LL, 0);
  if ( v14 )
    *(_BYTE *)(v14 + 26) |= 1u;
  if ( v9 >= v8 )
  {
    v6 = v39;
LABEL_25:
    *(_BYTE *)(v1 + 3251) = 0;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v24 = KeGetCurrentIrql();
        if ( v24 <= 0xFu && CurrentIrql <= 0xFu && v24 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v26 = CurrentPrcb->SchedulerAssist;
          v27 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v28 = (v27 & v26[5]) == 0;
          v26[5] &= v27;
          if ( v28 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    v29 = MiRebuildLargePage(v6, (unsigned int)v37, 2LL, v9);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v30 = KeGetCurrentPrcb()->SchedulerAssist;
      v30[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = v13;
    KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)v13);
    if ( v29 )
    {
      v23 = 8;
    }
    else
    {
      if ( v38 )
        *(_BYTE *)(v1 + 3251) = 1;
      v31 = *(_BYTE *)(v1 + 3250);
      if ( v31 >= 0x80u )
        v23 = -1;
      else
        v23 = 2 * v31;
    }
    goto LABEL_43;
  }
  v15 = v5 < 0x400;
  v6 = v39;
  if ( v15 )
  {
    v16 = MmNumberOfChannels;
    v17 = 0LL;
    for ( j = 0LL; (unsigned int)j < v16; j = (unsigned int)(v21 + 1) )
    {
      NodeStandbyPageCount = MiGetNodeStandbyPageCount(v39, (unsigned int)v37, j);
      v17 = NodeStandbyPageCount + v20;
    }
    if ( v2 < 0x5000A )
      v22 = 0x8000LL;
    else
      v22 = v2 / 0xA;
    v13 = (unsigned __int64 *)(v1 + 4328);
    if ( v17 > v22 )
      v9 += (v17 - v22) / 0xC8;
  }
  if ( v9 >= v8 )
    goto LABEL_25;
  v23 = 8;
LABEL_43:
  *(_BYTE *)(v1 + 3250) = v23;
  *(_BYTE *)(v1 + 3248) = v23;
  *(_BYTE *)(v1 + 3249) = 0;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v32 = KeGetCurrentIrql();
      if ( v32 <= 0xFu && CurrentIrql <= 0xFu && v32 >= 2u )
      {
        v33 = KeGetCurrentPrcb();
        v34 = v33->SchedulerAssist;
        v35 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v28 = (v35 & v34[5]) == 0;
        v34[5] &= v35;
        if ( v28 )
          KiRemoveSystemWorkPriorityKick(v33);
      }
    }
  }
  __writecr8(CurrentIrql);
  KeAbPostRelease(v1);
LABEL_4:
  PsDereferencePartition(*(_QWORD *)(v6 + 176));
}
