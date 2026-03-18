/*
 * XREFs of PopAllocateIrp @ 0x1403A3F0C
 * Callers:
 *     PopRequestPowerIrp @ 0x1403A3C90 (PopRequestPowerIrp.c)
 *     PopNotifyDevice @ 0x140A4ADB0 (PopNotifyDevice.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x140202234 (ExAllocateFromNPagedLookasideList.c)
 *     ExFreeToNPagedLookasideList @ 0x140203D88 (ExFreeToNPagedLookasideList.c)
 *     IoReuseIrp @ 0x14020BE20 (IoReuseIrp.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     IoAllocateIrp @ 0x1402AAB20 (IoAllocateIrp.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402B0DF0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     IovUtilWatermarkIrp @ 0x1402D3080 (IovUtilWatermarkIrp.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x1402D30A0 (IoGetAttachedDeviceReferenceWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14036B86C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     PopFxAllocatePowerIrp @ 0x1403A46E4 (PopFxAllocatePowerIrp.c)
 *     PopFxLockDevice @ 0x1403A4868 (PopFxLockDevice.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
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
        __int64 *a10,
        _QWORD *a11)
{
  ULONG_PTR BugCheckParameter4; // rdi
  __int64 v14; // r13
  _QWORD *v15; // rsi
  PDEVICE_OBJECT AttachedDeviceReferenceWithTag; // r15
  _QWORD *DeviceAttachmentBaseRefWithTag; // rax
  __int64 v18; // rax
  __int64 v19; // r12
  int v20; // ebx
  unsigned int v21; // r14d
  int PowerIrp; // eax
  unsigned int v23; // r12d
  unsigned int v24; // r12d
  IRP *v25; // r13
  int v26; // eax
  char v27; // cl
  __int64 v28; // rax
  _QWORD *v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rax
  _QWORD *v32; // rax
  void *v33; // r12
  __int64 v35; // rsi
  void *v36; // [rsp+48h] [rbp-41h]
  LONG SpinLock[2]; // [rsp+50h] [rbp-39h] BYREF
  __int64 v38; // [rsp+58h] [rbp-31h]
  LARGE_INTEGER Interval; // [rsp+60h] [rbp-29h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-21h] BYREF
  __int64 Irp; // [rsp+E0h] [rbp+57h] BYREF
  char v43; // [rsp+E8h] [rbp+5Fh]
  int v44; // [rsp+F0h] [rbp+67h]

  v44 = a4;
  v43 = a3;
  BugCheckParameter4 = 0LL;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  Irp = 0LL;
  *(_QWORD *)SpinLock = 0LL;
  v14 = 0LL;
  *a10 = 0LL;
  v15 = 0LL;
  LockHandle.LockQueue = 0LL;
  *a11 = 0LL;
  AttachedDeviceReferenceWithTag = IoGetAttachedDeviceReferenceWithTag(a1, 0x72496F50u);
  DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag((__int64)a1, 0x72496F50u);
  v36 = DeviceAttachmentBaseRefWithTag;
  if ( DeviceAttachmentBaseRefWithTag )
  {
    v18 = DeviceAttachmentBaseRefWithTag[39];
    v19 = *(_QWORD *)(v18 + 40);
    if ( v19 )
    {
      v20 = a5;
      if ( v44 == 1 && a3 == 2 )
      {
        PowerIrp = PopFxAllocatePowerIrp(v19, (int)a1, a5, a8, a9, a7, (__int64)&Irp, SpinLock);
        v21 = PowerIrp;
        if ( PowerIrp < 0 && PowerIrp != -1073741130 || PowerIrp == 259 )
        {
          v14 = Irp;
          v15 = *(_QWORD **)SpinLock;
LABEL_33:
          v33 = v36;
LABEL_21:
          if ( v14 )
            goto LABEL_22;
          goto LABEL_46;
        }
        if ( PowerIrp >= 0 )
        {
          v35 = *(_QWORD *)(v19 + 80);
          v38 = v35;
          if ( AttachedDeviceReferenceWithTag->StackSize > *(_BYTE *)(*(_QWORD *)(v35 + 16) + 66LL) )
          {
            ObfDereferenceObjectWithTag(AttachedDeviceReferenceWithTag, 0x72496F50u);
            ObfReferenceObjectWithTag(*(PVOID *)(v35 + 104), 0x72496F50u);
            AttachedDeviceReferenceWithTag = *(PDEVICE_OBJECT *)(v35 + 104);
          }
          v25 = (IRP *)Irp;
          v15 = *(_QWORD **)SpinLock;
LABEL_19:
          IoReuseIrp(v25, -1073741637);
          IovUtilWatermarkIrp();
          v25->IoStatus.Information = 0LL;
          v25->Tail.Overlay.ListEntry.Blink = &v25->Tail.Overlay.ListEntry;
          v25->Tail.Overlay.ListEntry.Flink = &v25->Tail.Overlay.ListEntry;
          memset(v15, 0, 0x120uLL);
          v26 = v44;
          v27 = v43;
          v15[4] = AttachedDeviceReferenceWithTag;
          v15[3] = v36;
          *((_BYTE *)v15 + 184) = v27;
          *((_DWORD *)v15 + 47) = v26;
          v28 = v38;
          *((_DWORD *)v15 + 48) = v20;
          v15[2] = v25;
          v15[25] = v28;
          v29 = *(_QWORD **)SpinLock;
          v14 = Irp;
          *(_DWORD *)(*(_QWORD *)SpinLock + 212LL) = _InterlockedIncrement(&PopCurrentIrpSequenceID);
          v29[27] = a8;
          v29[28] = a9;
          v29[29] = a1;
          v29[33] = PopHandleDevicePowerIrpCompletion;
          v29[34] = v29;
          v29[31] = 0LL;
          v30 = *(_QWORD *)(v14 + 184);
          *(_QWORD *)(v30 - 32) = 0LL;
          *(_QWORD *)(v30 - 8) = v29;
          *(_QWORD *)(v14 + 184) -= 72LL;
          v31 = *(_QWORD *)(v14 + 184);
          --*(_BYTE *)(v14 + 67);
          *(_BYTE *)(v31 - 71) = v27;
          *(_BYTE *)(v31 - 72) = 22;
          *(_QWORD *)(v31 - 32) = AttachedDeviceReferenceWithTag;
          KeAcquireInStackQueuedSpinLock(&PopIrpLock, &LockHandle);
          v32 = (_QWORD *)qword_140C22FB8;
          if ( *(__int64 **)qword_140C22FB8 != &PopIrpList )
            __fastfail(3u);
          *v29 = &PopIrpList;
          v29[1] = v32;
          *v32 = v29;
          qword_140C22FB8 = (__int64)v29;
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          AttachedDeviceReferenceWithTag = 0LL;
          v33 = 0LL;
          v15 = 0LL;
          v21 = 0;
          *a10 = v14;
          *a11 = v29;
          goto LABEL_21;
        }
        v14 = Irp;
      }
      else
      {
        v21 = -1073741130;
        if ( !v43 )
        {
          v38 = PopFxLockDevice(*(_QWORD *)(v18 + 40), 0LL);
          goto LABEL_13;
        }
      }
      v38 = 0LL;
LABEL_13:
      Interval.QuadPart = -500000LL;
      v23 = 0;
      while ( 1 )
      {
        if ( v23 && KeGetCurrentIrql() <= 1u )
          KeDelayExecutionThread(0, 0, &Interval);
        ++v23;
        *(_QWORD *)SpinLock = ExAllocateFromNPagedLookasideList(&PopIrpDataLookaside);
        v15 = *(_QWORD **)SpinLock;
        if ( *(_QWORD *)SpinLock )
          break;
        if ( !a6 || v23 >= 0xA )
          goto LABEL_33;
      }
      v24 = 0;
      while ( 1 )
      {
        if ( v24 && KeGetCurrentIrql() <= 1u )
          KeDelayExecutionThread(0, 0, &Interval);
        ++v24;
        Irp = (__int64)IoAllocateIrp(AttachedDeviceReferenceWithTag->StackSize + 1, 0);
        v25 = (IRP *)Irp;
        if ( Irp )
          goto LABEL_19;
        if ( !a6 )
        {
          v33 = v36;
          goto LABEL_22;
        }
        if ( v24 >= 0xA )
        {
          v33 = v36;
          goto LABEL_47;
        }
      }
    }
  }
  v33 = v36;
  v21 = -1073741808;
LABEL_46:
  if ( a6 )
  {
LABEL_47:
    if ( v21 != 259 )
    {
      LOBYTE(BugCheckParameter4) = v44 != 0;
      KeBugCheckEx(0xA0u, 1uLL, 6uLL, (ULONG_PTR)AttachedDeviceReferenceWithTag, BugCheckParameter4);
    }
  }
LABEL_22:
  if ( v15 )
    ExFreeToNPagedLookasideList(&PopIrpDataLookaside, v15);
  if ( AttachedDeviceReferenceWithTag )
    ObfDereferenceObjectWithTag(AttachedDeviceReferenceWithTag, 0x72496F50u);
  if ( v33 )
    ObfDereferenceObjectWithTag(v33, 0x72496F50u);
  return v21;
}
