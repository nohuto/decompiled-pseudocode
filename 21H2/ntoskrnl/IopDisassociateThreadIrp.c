/*
 * XREFs of IopDisassociateThreadIrp @ 0x1405006AC
 * Callers:
 *     IoCancelThreadIo @ 0x1406417D0 (IoCancelThreadIo.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseQueuedSpinLock @ 0x14031B920 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x14031B9C0 (KeAcquireQueuedSpinLock.c)
 *     IoAllocateErrorLogEntry @ 0x140380100 (IoAllocateErrorLogEntry.c)
 *     IoWriteErrorLogEntry @ 0x1403805D0 (IoWriteErrorLogEntry.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

void IopDisassociateThreadIrp()
{
  unsigned __int8 CurrentIrql; // bl
  unsigned int *p_SystemCallNumber; // rsi
  KIRQL v2; // al
  _QWORD *v3; // rdi
  KIRQL v4; // bp
  unsigned __int8 v5; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v8; // eax
  bool v9; // zf
  _QWORD *v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  struct _DMA_ADAPTER *v15; // rdi
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r10
  _DWORD *v18; // r8
  int v19; // eax
  _DWORD *ErrorLogEntry; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  p_SystemCallNumber = &KeGetCurrentThread()[1].SystemCallNumber;
  if ( *(unsigned int **)p_SystemCallNumber == p_SystemCallNumber )
    goto LABEL_4;
  v2 = KeAcquireQueuedSpinLock(0xBuLL);
  v3 = *(_QWORD **)p_SystemCallNumber;
  v4 = v2;
  if ( *(char *)(*(_QWORD *)p_SystemCallNumber + 35LL) == *(char *)(*(_QWORD *)p_SystemCallNumber + 34LL) + 2 )
  {
    KeReleaseQueuedSpinLock(0xBuLL, v2);
LABEL_4:
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v5 = KeGetCurrentIrql();
        if ( v5 <= 0xFu && CurrentIrql <= 0xFu && v5 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v8 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v9 = (v8 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v8;
          if ( v9 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    return;
  }
  ObfReferenceObjectWithTag((PVOID)v3[15], 0x746C6644u);
  v10 = *(_QWORD **)p_SystemCallNumber;
  v11 = **(_QWORD **)p_SystemCallNumber;
  if ( *(unsigned int **)(*(_QWORD *)p_SystemCallNumber + 8LL) != p_SystemCallNumber
    || *(_QWORD **)(v11 + 8) != v10
    || (*(_QWORD *)p_SystemCallNumber = v11,
        *(_QWORD *)(v11 + 8) = p_SystemCallNumber,
        v3[1] = v3,
        *v3 = v3,
        v12 = (_QWORD *)qword_140C45CA8,
        *(__int64 **)qword_140C45CA8 != &IopDeadIrps) )
  {
    __fastfail(3u);
  }
  *v10 = &IopDeadIrps;
  v10[1] = v12;
  *v12 = v10;
  qword_140C45CA8 = (__int64)v10;
  if ( *((_BYTE *)v3 + 35) <= *((_BYTE *)v3 + 34)
    && (v14 = v3[20]) != 0
    && (v13 = v3[19], v15 = *(struct _DMA_ADAPTER **)(v13 + 40), *(struct _DMA_ADAPTER **)(v14 + 8) == v15) )
  {
    ObfReferenceObjectWithTag(*(PVOID *)(v13 + 40), 0x746C6644u);
  }
  else
  {
    v15 = 0LL;
  }
  KeReleaseQueuedSpinLock(0xBuLL, v4);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v16 = KeGetCurrentIrql();
      if ( v16 <= 0xFu && CurrentIrql <= 0xFu && v16 >= 2u )
      {
        v17 = KeGetCurrentPrcb();
        v18 = v17->SchedulerAssist;
        v19 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v9 = (v19 & v18[5]) == 0;
        v18[5] &= v19;
        if ( v9 )
          KiRemoveSystemWorkPriorityKick((__int64)v17);
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( v15 )
  {
    ErrorLogEntry = IoAllocateErrorLogEntry(v15, 0x30u);
    if ( ErrorLogEntry )
    {
      ErrorLogEntry[3] = -2147221450;
      IoWriteErrorLogEntry(ErrorLogEntry);
    }
    HalPutDmaAdapter(v15);
  }
}
