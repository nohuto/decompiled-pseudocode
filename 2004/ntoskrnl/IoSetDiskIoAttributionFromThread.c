/*
 * XREFs of IoSetDiskIoAttributionFromThread @ 0x140227FA0
 * Callers:
 *     IoPageReadEx @ 0x140227B50 (IoPageReadEx.c)
 *     IoSynchronousPageWriteEx @ 0x140227DC8 (IoSynchronousPageWriteEx.c)
 *     IoAsynchronousPageWrite @ 0x140326468 (IoAsynchronousPageWrite.c)
 *     IopBuildAsynchronousFsdRequest @ 0x14033D220 (IopBuildAsynchronousFsdRequest.c)
 *     IoSetIoAttributionIrp @ 0x140500E90 (IoSetIoAttributionIrp.c)
 *     IopSynchronousServiceTail @ 0x140675860 (IopSynchronousServiceTail.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140224640 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140228470 (ExAcquireSpinLockShared.c)
 *     ObDereferenceObjectDeferDelete @ 0x140286A70 (ObDereferenceObjectDeferDelete.c)
 *     ObfReferenceObjectWithTag @ 0x140296B50 (ObfReferenceObjectWithTag.c)
 *     IopSetDiskIoAttributionFromProcess @ 0x1402C8D40 (IopSetDiskIoAttributionFromProcess.c)
 *     IopSetDiskIoAttributionExtension @ 0x140326A58 (IopSetDiskIoAttributionExtension.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall IoSetDiskIoAttributionFromThread(__int64 a1, struct _KTHREAD *a2)
{
  _QWORD *Object; // rsi
  int v4; // edi
  _KPROCESS *Process; // rbx
  __int64 v7; // rbp
  int v8; // ebx
  KIRQL v10; // al
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // r12
  KIRQL v13; // al
  unsigned __int64 v14; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v18; // eax
  bool v19; // zf
  unsigned __int8 v20; // al
  struct _KPRCB *v21; // r9
  int v22; // eax
  _DWORD *v23; // r8

  Object = a2[1].WaitBlock[1].Object;
  v4 = 0;
  if ( !Object )
    goto LABEL_14;
  if ( a2 != KeGetCurrentThread() )
  {
    v13 = ExAcquireSpinLockShared(&PspThreadWorkOnBehalfLock);
    Object = a2[1].WaitBlock[1].Object;
    v14 = v13;
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
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v14 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
          v19 = (v18 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v18;
          if ( v19 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v14);
  }
  if ( Object )
  {
    Process = (_KPROCESS *)Object[68];
  }
  else
  {
LABEL_14:
    if ( a2 == KeGetCurrentThread()
      && a2->ApcState.Process != a2->Process
      && (int)IopSetDiskIoAttributionFromProcess(a1) >= 0 )
    {
LABEL_15:
      v8 = 0;
      goto LABEL_8;
    }
    Process = a2->Process;
  }
  v7 = 0LL;
  if ( Process[2].Affinity.Bitmap[18] )
  {
    v10 = ExAcquireSpinLockShared(&IopDiskIoAttributionLock);
    v11 = Process[2].Affinity.Bitmap[18];
    v12 = v10;
    if ( v11 )
      v7 = *(_QWORD *)(v11 + 24);
    ExReleaseSpinLockSharedFromDpcLevel(&IopDiskIoAttributionLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v20 = KeGetCurrentIrql();
        if ( v20 <= 0xFu && (unsigned __int8)v12 <= 0xFu && v20 >= 2u )
        {
          v21 = KeGetCurrentPrcb();
          v22 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
          v23 = v21->SchedulerAssist;
          v19 = (v22 & v23[5]) == 0;
          v23[5] &= v22;
          if ( v19 )
            KiRemoveSystemWorkPriorityKick(v21);
        }
      }
    }
    __writecr8(v12);
    if ( v11 )
    {
      v8 = IopSetDiskIoAttributionExtension(a1, v7, KeGetCurrentThread(), 0LL);
      if ( v8 >= 0 )
        v8 = 0;
    }
    else
    {
      v8 = -1073741275;
    }
  }
  else
  {
    v8 = -1073741275;
  }
  if ( v8 >= 0 )
    goto LABEL_15;
LABEL_8:
  if ( v4 )
    ObDereferenceObjectDeferDelete(Object);
  return (unsigned int)v8;
}
