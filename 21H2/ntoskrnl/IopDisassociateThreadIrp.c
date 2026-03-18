/*
 * XREFs of IopDisassociateThreadIrp @ 0x1405566C0
 * Callers:
 *     IoCancelThreadIo @ 0x14079FC78 (IoCancelThreadIo.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x140285C80 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402A3F30 (KeReleaseQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     IoAllocateErrorLogEntry @ 0x1403A70E0 (IoAllocateErrorLogEntry.c)
 *     IoWriteErrorLogEntry @ 0x1403A7210 (IoWriteErrorLogEntry.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

LONG_PTR IopDisassociateThreadIrp()
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
  LONG_PTR result; // rax
  _QWORD *v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax
  void *v16; // rdi
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r10
  _DWORD *v19; // r8
  int v20; // eax
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
    result = CurrentIrql;
    __writecr8(CurrentIrql);
    return result;
  }
  ObfReferenceObjectWithTag((PVOID)v3[15], 0x746C6644u);
  v11 = *(_QWORD **)p_SystemCallNumber;
  v12 = **(_QWORD **)p_SystemCallNumber;
  if ( *(unsigned int **)(*(_QWORD *)p_SystemCallNumber + 8LL) != p_SystemCallNumber
    || *(_QWORD **)(v12 + 8) != v11
    || (*(_QWORD *)p_SystemCallNumber = v12,
        *(_QWORD *)(v12 + 8) = p_SystemCallNumber,
        v3[1] = v3,
        *v3 = v3,
        v13 = (_QWORD *)qword_140C471A8,
        *(__int64 **)qword_140C471A8 != &IopDeadIrps) )
  {
    __fastfail(3u);
  }
  *v11 = &IopDeadIrps;
  v11[1] = v13;
  *v13 = v11;
  qword_140C471A8 = (__int64)v11;
  if ( *((_BYTE *)v3 + 35) <= *((_BYTE *)v3 + 34)
    && (v15 = v3[20]) != 0
    && (v14 = v3[19], v16 = *(void **)(v14 + 40), *(void **)(v15 + 8) == v16) )
  {
    ObfReferenceObjectWithTag(*(PVOID *)(v14 + 40), 0x746C6644u);
  }
  else
  {
    v16 = 0LL;
  }
  KeReleaseQueuedSpinLock(0xBuLL, v4);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v17 = KeGetCurrentIrql();
      if ( v17 <= 0xFu && CurrentIrql <= 0xFu && v17 >= 2u )
      {
        v18 = KeGetCurrentPrcb();
        v19 = v18->SchedulerAssist;
        v20 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v9 = (v20 & v19[5]) == 0;
        v19[5] &= v20;
        if ( v9 )
          KiRemoveSystemWorkPriorityKick((__int64)v18);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  if ( v16 )
  {
    ErrorLogEntry = IoAllocateErrorLogEntry(v16, 0x30u);
    if ( ErrorLogEntry )
    {
      ErrorLogEntry[3] = -2147221450;
      IoWriteErrorLogEntry(ErrorLogEntry);
    }
    return ObfDereferenceObject(v16);
  }
  return result;
}
