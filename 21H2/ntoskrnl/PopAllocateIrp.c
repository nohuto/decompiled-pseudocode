/*
 * XREFs of PopAllocateIrp @ 0x14036E0F0
 * Callers:
 *     PopRequestPowerIrp @ 0x14036DED0 (PopRequestPowerIrp.c)
 *     PopNotifyDevice @ 0x14099390C (PopNotifyDevice.c)
 * Callees:
 *     IoReuseIrp @ 0x14020D600 (IoReuseIrp.c)
 *     ExAllocateFromNPagedLookasideList @ 0x140213400 (ExAllocateFromNPagedLookasideList.c)
 *     ExFreeToNPagedLookasideList @ 0x14021A938 (ExFreeToNPagedLookasideList.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14027171C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     KeDelayExecutionThread @ 0x140278A00 (KeDelayExecutionThread.c)
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402D1E50 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     IovUtilWatermarkIrp @ 0x1402F759C (IovUtilWatermarkIrp.c)
 *     IoAllocateIrp @ 0x1402F76C0 (IoAllocateIrp.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x1402F76F0 (IoGetAttachedDeviceReferenceWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     PopFxLockDevice @ 0x14036E434 (PopFxLockDevice.c)
 *     PopFxAllocatePowerIrp @ 0x140399B60 (PopFxAllocatePowerIrp.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall PopAllocateIrp(
        struct _DEVICE_OBJECT *a1,
        __int64 a2,
        char a3,
        int a4,
        int a5,
        char a6,
        char a7,
        __int64 a8,
        __int64 a9,
        IRP **a10,
        _QWORD *a11)
{
  ULONG_PTR BugCheckParameter4; // rdi
  int v12; // ebx
  IRP *v14; // r14
  _QWORD *v15; // rsi
  PDEVICE_OBJECT AttachedDeviceReferenceWithTag; // r13
  _QWORD *DeviceAttachmentBaseRefWithTag; // rax
  __int64 v18; // r12
  char v19; // al
  int PowerIrp; // eax
  int v21; // r15d
  unsigned int v22; // r12d
  unsigned int v23; // r12d
  __int64 v24; // r15
  _QWORD *v25; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IO_STACK_LOCATION *v27; // rax
  _QWORD *v28; // rax
  void *v29; // r12
  LONG SpinLock[2]; // [rsp+48h] [rbp-41h] BYREF
  __int64 Irp; // [rsp+50h] [rbp-39h] BYREF
  LARGE_INTEGER Interval; // [rsp+58h] [rbp-31h] BYREF
  __int64 v34; // [rsp+60h] [rbp-29h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-21h] BYREF
  void *v37; // [rsp+E0h] [rbp+57h]

  BugCheckParameter4 = 0LL;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  Irp = 0LL;
  v12 = a4;
  *(_QWORD *)SpinLock = 0LL;
  v14 = 0LL;
  *a10 = 0LL;
  v15 = 0LL;
  LockHandle.LockQueue = 0LL;
  *a11 = 0LL;
  AttachedDeviceReferenceWithTag = IoGetAttachedDeviceReferenceWithTag(a1, 0x72496F50u);
  DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag((__int64)a1, 0x72496F50u);
  v37 = DeviceAttachmentBaseRefWithTag;
  if ( DeviceAttachmentBaseRefWithTag )
    v18 = *(_QWORD *)(DeviceAttachmentBaseRefWithTag[39] + 40LL);
  else
    v18 = 0LL;
  if ( !v18 )
  {
    v29 = DeviceAttachmentBaseRefWithTag;
    v21 = -1073741808;
LABEL_37:
    if ( a6 && v21 != 259 )
    {
      LOBYTE(BugCheckParameter4) = v12 != 0;
      KeBugCheckEx(0xA0u, 1uLL, 6uLL, (ULONG_PTR)AttachedDeviceReferenceWithTag, BugCheckParameter4);
    }
    goto LABEL_24;
  }
  v19 = a3;
  if ( a4 == 1 && a3 == 2 )
  {
    PowerIrp = PopFxAllocatePowerIrp(v18, (int)a1, a5, a8, a9, a7, (__int64)&Irp, SpinLock);
    v21 = PowerIrp;
    if ( PowerIrp >= 0 || PowerIrp == -1073741130 )
    {
      v14 = (IRP *)Irp;
      v15 = *(_QWORD **)SpinLock;
      if ( PowerIrp != 259 )
      {
        v19 = 2;
        goto LABEL_11;
      }
    }
    else
    {
      v14 = (IRP *)Irp;
      v15 = *(_QWORD **)SpinLock;
    }
LABEL_41:
    v29 = v37;
LABEL_23:
    if ( v14 )
      goto LABEL_24;
LABEL_34:
    v12 = a4;
    goto LABEL_37;
  }
  v21 = -1073741130;
LABEL_11:
  if ( v21 >= 0 )
  {
    v24 = *(_QWORD *)(v18 + 80);
    if ( AttachedDeviceReferenceWithTag->StackSize > *(_BYTE *)(*(_QWORD *)(v24 + 16) + 66LL) )
    {
      ObfDereferenceObjectWithTag(AttachedDeviceReferenceWithTag, 0x72496F50u);
      ObfReferenceObjectWithTag(*(PVOID *)(v24 + 104), 0x72496F50u);
      AttachedDeviceReferenceWithTag = *(PDEVICE_OBJECT *)(v24 + 104);
    }
LABEL_21:
    IoReuseIrp(v14, -1073741637);
    IovUtilWatermarkIrp();
    v14->IoStatus.Information = 0LL;
    v14->Tail.Overlay.ListEntry.Blink = &v14->Tail.Overlay.ListEntry;
    v14->Tail.Overlay.ListEntry.Flink = &v14->Tail.Overlay.ListEntry;
    memset(v15, 0, 0x100uLL);
    v15[4] = AttachedDeviceReferenceWithTag;
    v15[3] = v37;
    *((_BYTE *)v15 + 184) = a3;
    *((_DWORD *)v15 + 47) = a4;
    *((_DWORD *)v15 + 48) = a5;
    v15[2] = v14;
    v15[25] = v24;
    v25 = *(_QWORD **)SpinLock;
    v14 = (IRP *)Irp;
    *(_DWORD *)(*(_QWORD *)SpinLock + 212LL) = _InterlockedIncrement(&PopCurrentIrpSequenceID);
    v25[27] = a8;
    v25[28] = a9;
    v25[29] = a1;
    CurrentStackLocation = v14->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].DeviceObject = 0LL;
    CurrentStackLocation[-1].Context = v25;
    v27 = --v14->Tail.Overlay.CurrentStackLocation;
    --v14->CurrentLocation;
    v27[-1].MajorFunction = 22;
    v27[-1].MinorFunction = a3;
    v27[-1].DeviceObject = AttachedDeviceReferenceWithTag;
    KeAcquireInStackQueuedSpinLock(&PopIrpLock, &LockHandle);
    v28 = (_QWORD *)qword_140C22FC8;
    if ( *(__int64 **)qword_140C22FC8 != &PopIrpList )
      __fastfail(3u);
    *v25 = &PopIrpList;
    v25[1] = v28;
    *v28 = v25;
    qword_140C22FC8 = (__int64)v25;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    AttachedDeviceReferenceWithTag = 0LL;
    v29 = 0LL;
    v15 = 0LL;
    v21 = 0;
    *a10 = v14;
    *a11 = v25;
    goto LABEL_23;
  }
  if ( v19 )
    v34 = 0LL;
  else
    v34 = PopFxLockDevice(v18, 0LL);
  Interval.QuadPart = -500000LL;
  v22 = 0;
  while ( 1 )
  {
    if ( v22 && KeGetCurrentIrql() <= 1u )
      KeDelayExecutionThread(0, 0, &Interval);
    ++v22;
    *(_QWORD *)SpinLock = ExAllocateFromNPagedLookasideList(&PopIrpDataLookaside);
    v15 = *(_QWORD **)SpinLock;
    if ( *(_QWORD *)SpinLock )
      break;
    if ( !a6 || v22 >= 0xA )
      goto LABEL_41;
  }
  v23 = 0;
  while ( 1 )
  {
    if ( v23 && KeGetCurrentIrql() <= 1u )
      KeDelayExecutionThread(0, 0, &Interval);
    ++v23;
    Irp = (__int64)IoAllocateIrp(AttachedDeviceReferenceWithTag->StackSize + 1, 0);
    v14 = (IRP *)Irp;
    if ( Irp )
    {
      v24 = v34;
      goto LABEL_21;
    }
    if ( !a6 )
      break;
    if ( v23 >= 0xA )
    {
      v29 = v37;
      goto LABEL_34;
    }
  }
  v29 = v37;
LABEL_24:
  if ( v15 )
    ExFreeToNPagedLookasideList(&PopIrpDataLookaside, v15);
  if ( AttachedDeviceReferenceWithTag )
    ObfDereferenceObjectWithTag(AttachedDeviceReferenceWithTag, 0x72496F50u);
  if ( v29 )
    ObfDereferenceObjectWithTag(v29, 0x72496F50u);
  return (unsigned int)v21;
}
