/*
 * XREFs of IoSetDiskIoAttributionFromThread @ 0x1403437A0
 * Callers:
 *     IoAsynchronousPageWrite @ 0x14020C810 (IoAsynchronousPageWrite.c)
 *     IopBuildAsynchronousFsdRequest @ 0x14029BAD0 (IopBuildAsynchronousFsdRequest.c)
 *     IoSynchronousPageWriteEx @ 0x140340130 (IoSynchronousPageWriteEx.c)
 *     IoPageReadEx @ 0x140342C50 (IoPageReadEx.c)
 *     IoSetIoAttributionIrp @ 0x140557CE0 (IoSetIoAttributionIrp.c)
 *     IopSynchronousServiceTail @ 0x140731680 (IopSynchronousServiceTail.c)
 * Callees:
 *     IopSetDiskIoAttributionFromProcess @ 0x14020B7D4 (IopSetDiskIoAttributionFromProcess.c)
 *     IopSetDiskIoAttributionExtension @ 0x14020C178 (IopSetDiskIoAttributionExtension.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ObDereferenceObjectDeferDelete @ 0x140348920 (ObDereferenceObjectDeferDelete.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
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
    goto LABEL_18;
  if ( a2 == KeGetCurrentThread() )
    goto LABEL_11;
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
  if ( Object )
  {
LABEL_11:
    v7 = (_KPROCESS *)Object[68];
  }
  else
  {
LABEL_18:
    if ( a2 == KeGetCurrentThread() )
    {
      Process = (__int64)a2->ApcState.Process;
      if ( (_KPROCESS *)Process != a2->Process && (int)IopSetDiskIoAttributionFromProcess(a1, Process) >= 0 )
      {
LABEL_17:
        v9 = 0;
        goto LABEL_7;
      }
    }
    v7 = a2->Process;
  }
  v8 = 0LL;
  if ( !v7[2].Affinity.StaticBitmap[18] )
  {
    v9 = -1073741275;
    goto LABEL_7;
  }
  v11 = ExAcquireSpinLockShared(&IopDiskIoAttributionLock);
  v12 = v7[2].Affinity.StaticBitmap[18];
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
    v9 = IopSetDiskIoAttributionExtension(a1, v8, (__int64)KeGetCurrentThread(), 0);
    if ( v9 < 0 )
      goto LABEL_7;
    goto LABEL_17;
  }
  v9 = -1073741275;
LABEL_7:
  if ( v4 )
    ObDereferenceObjectDeferDelete(Object);
  return (unsigned int)v9;
}
