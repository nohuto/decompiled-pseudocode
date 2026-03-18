/*
 * XREFs of IoSetDiskIoAttributionFromThread @ 0x140280FF0
 * Callers:
 *     IoPageReadEx @ 0x140280BA0 (IoPageReadEx.c)
 *     IoSynchronousPageWriteEx @ 0x140280E18 (IoSynchronousPageWriteEx.c)
 *     IoAsynchronousPageWrite @ 0x1402ECB38 (IoAsynchronousPageWrite.c)
 *     IopBuildAsynchronousFsdRequest @ 0x1403401B0 (IopBuildAsynchronousFsdRequest.c)
 *     IoSetIoAttributionIrp @ 0x140500840 (IoSetIoAttributionIrp.c)
 *     IopSynchronousServiceTail @ 0x1405FD780 (IopSynchronousServiceTail.c)
 * Callees:
 *     IopSetDiskIoAttributionFromProcess @ 0x140235F10 (IopSetDiskIoAttributionFromProcess.c)
 *     ObDereferenceObjectDeferDelete @ 0x14024A1D0 (ObDereferenceObjectDeferDelete.c)
 *     ObfReferenceObjectWithTag @ 0x14025A2D0 (ObfReferenceObjectWithTag.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027D690 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1402814C0 (ExAcquireSpinLockShared.c)
 *     IopSetDiskIoAttributionExtension @ 0x1402ED128 (IopSetDiskIoAttributionExtension.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall IoSetDiskIoAttributionFromThread(__int64 a1, struct _KTHREAD *a2)
{
  _QWORD *Object; // rsi
  int v4; // edi
  __int64 Process; // rdx
  _KPROCESS *v7; // rbx
  __int64 v8; // rbp
  int v9; // ebx
  KIRQL v11; // al
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // r12
  KIRQL v14; // al
  unsigned __int64 v15; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v19; // eax
  bool v20; // zf
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r9
  int v23; // eax
  _DWORD *v24; // r8

  Object = a2[1].WaitBlock[1].Object;
  v4 = 0;
  if ( !Object )
    goto LABEL_14;
  if ( a2 != KeGetCurrentThread() )
  {
    v14 = ExAcquireSpinLockShared(&PspThreadWorkOnBehalfLock);
    Object = a2[1].WaitBlock[1].Object;
    v15 = v14;
    if ( Object )
    {
      ObfReferenceObjectWithTag(a2[1].WaitBlock[1].Object, 0x746C6644u);
      v4 = 1;
    }
    ExReleaseSpinLockSharedFromDpcLevel(&PspThreadWorkOnBehalfLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v15 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
          v20 = (v19 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v19;
          if ( v20 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v15);
  }
  if ( Object )
  {
    v7 = (_KPROCESS *)Object[68];
  }
  else
  {
LABEL_14:
    if ( a2 == KeGetCurrentThread() )
    {
      Process = (__int64)a2->ApcState.Process;
      if ( (_KPROCESS *)Process != a2->Process && (int)IopSetDiskIoAttributionFromProcess(a1, Process) >= 0 )
      {
LABEL_15:
        v9 = 0;
        goto LABEL_8;
      }
    }
    v7 = a2->Process;
  }
  v8 = 0LL;
  if ( v7[2].Affinity.Bitmap[18] )
  {
    v11 = ExAcquireSpinLockShared(&IopDiskIoAttributionLock);
    v12 = v7[2].Affinity.Bitmap[18];
    v13 = v11;
    if ( v12 )
      v8 = *(_QWORD *)(v12 + 24);
    ExReleaseSpinLockSharedFromDpcLevel(&IopDiskIoAttributionLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v21 = KeGetCurrentIrql();
        if ( v21 <= 0xFu && (unsigned __int8)v13 <= 0xFu && v21 >= 2u )
        {
          v22 = KeGetCurrentPrcb();
          v23 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
          v24 = v22->SchedulerAssist;
          v20 = (v23 & v24[5]) == 0;
          v24[5] &= v23;
          if ( v20 )
            KiRemoveSystemWorkPriorityKick(v22);
        }
      }
    }
    __writecr8(v13);
    if ( v12 )
    {
      v9 = IopSetDiskIoAttributionExtension(a1, v8, KeGetCurrentThread(), 0LL);
      if ( v9 >= 0 )
        v9 = 0;
    }
    else
    {
      v9 = -1073741275;
    }
  }
  else
  {
    v9 = -1073741275;
  }
  if ( v9 >= 0 )
    goto LABEL_15;
LABEL_8:
  if ( v4 )
    ObDereferenceObjectDeferDelete(Object);
  return (unsigned int)v9;
}
