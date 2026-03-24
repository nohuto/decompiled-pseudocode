/*
 * XREFs of IopCompleteUnloadOrDelete @ 0x140360FD0
 * Callers:
 *     IopDecrementDeviceObjectRef @ 0x140353B90 (IopDecrementDeviceObjectRef.c)
 *     IoDetachDevice @ 0x140360D00 (IoDetachDevice.c)
 *     IoDeleteDevice @ 0x140360D90 (IoDeleteDevice.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14023E750 (ExQueueWorkItem.c)
 *     IopGetDeviceAttachmentBase @ 0x14028360C (IopGetDeviceAttachmentBase.c)
 *     KeReleaseQueuedSpinLock @ 0x140310BD0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140310C70 (KeAcquireQueuedSpinLock.c)
 *     KeWaitForSingleObject @ 0x140345770 (KeWaitForSingleObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14034B140 (ObfDereferenceObjectWithTag.c)
 *     IopIncrementDeviceObjectRefCount @ 0x140354BA0 (IopIncrementDeviceObjectRefCount.c)
 *     IopInsertRemoveDevice @ 0x14036118C (IopInsertRemoveDevice.c)
 *     IopDecrementDeviceObjectRefCount @ 0x14036135C (IopDecrementDeviceObjectRefCount.c)
 *     PnpIsAnyDeviceInUse @ 0x14036DC98 (PnpIsAnyDeviceInUse.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     memset @ 0x140414200 (memset.c)
 *     ObMakeTemporaryObject @ 0x14062C010 (ObMakeTemporaryObject.c)
 *     ObDereferenceSecurityDescriptor @ 0x14065F6A0 (ObDereferenceSecurityDescriptor.c)
 *     PnpChainDereferenceComplete @ 0x140736488 (PnpChainDereferenceComplete.c)
 *     IopLoadUnloadDriver @ 0x140780820 (IopLoadUnloadDriver.c)
 *     VfFastIoCheckState @ 0x1409C99B4 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1409C9A8C (VfFastIoSnapState.c)
 */

char __fastcall IopCompleteUnloadOrDelete(ULONG_PTR BugCheckParameter2, unsigned __int8 a2, __int64 a3, _DWORD *a4)
{
  char v4; // bl
  __int64 v5; // rsi
  KIRQL v7; // r14
  char v8; // r13
  char v9; // r15
  int v10; // ecx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v14; // r13
  void (__fastcall *v15)(__int64, ULONG_PTR); // r13
  void *v16; // r14
  __int64 v17; // r8
  __int64 v18; // rdx
  int v19; // eax
  __int64 v20; // rdi
  __int64 v21; // rdx
  int v22; // r8d
  int IsAnyDeviceInUse; // ebx
  _BYTE WorkItem[80]; // [rsp+30h] [rbp-50h] BYREF
  __int64 DeviceAttachmentBase; // [rsp+C0h] [rbp+40h] BYREF
  unsigned __int8 v26; // [rsp+C8h] [rbp+48h]

  v26 = a2;
  v4 = 0;
  v5 = *(_QWORD *)(BugCheckParameter2 + 8);
  v7 = a3;
  v8 = 0;
  v9 = 1;
  v10 = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 32LL);
  if ( (v10 & 4) == 0 )
  {
    if ( (v10 & 2) != 0 )
    {
      if ( (v10 & 1) == 0 || (*(_DWORD *)(v5 + 16) & 1) != 0 )
        v9 = 0;
      v11 = *(_QWORD *)(BugCheckParameter2 + 24);
      DeviceAttachmentBase = v11;
      if ( v11 )
      {
        v14 = *(_QWORD *)(*(_QWORD *)(v11 + 8) + 80LL);
        IopIncrementDeviceObjectRefCount(BugCheckParameter2, 0, a3, a4);
        KeReleaseQueuedSpinLock(0xAuLL, v7);
        if ( v14 )
        {
          if ( *(_DWORD *)v14 > 0x68u )
          {
            v15 = *(void (__fastcall **)(__int64, ULONG_PTR))(v14 + 104);
            if ( v15 )
            {
              v16 = (MmVerifierData & 0x10) != 0 ? (void *)VfFastIoSnapState() : 0LL;
              v15(DeviceAttachmentBase, BugCheckParameter2);
              if ( v16 )
                VfFastIoCheckState(v16);
            }
          }
        }
        v7 = KeAcquireQueuedSpinLock(0xAuLL);
        IopDecrementDeviceObjectRefCount(BugCheckParameter2);
        if ( *(_QWORD *)(BugCheckParameter2 + 24) || *(_DWORD *)(BugCheckParameter2 + 4) )
          goto LABEL_18;
      }
      KeReleaseQueuedSpinLock(0xAuLL, v7);
      v12 = *(_QWORD *)(BugCheckParameter2 + 272);
      if ( v12 )
        ObDereferenceSecurityDescriptor(v12, 1LL);
      IopInsertRemoveDevice(*(_QWORD *)(BugCheckParameter2 + 8), BugCheckParameter2, 0LL);
      ObfDereferenceObjectWithTag((PVOID)BugCheckParameter2, 0x746C6644u);
      v8 = 1;
      if ( !v9 )
        return v8;
      v7 = KeAcquireQueuedSpinLock(0xAuLL);
      if ( (*(_DWORD *)(v5 + 16) & 1) != 0 )
      {
        v4 = 1;
LABEL_18:
        KeReleaseQueuedSpinLock(0xAuLL, v7);
        return v4;
      }
    }
    v17 = *(_QWORD *)(v5 + 8);
    v18 = v17;
    if ( v17 )
    {
      while ( !*(_DWORD *)(v18 + 4) && !*(_QWORD *)(v18 + 24) && (*(_DWORD *)(*(_QWORD *)(v18 + 312) + 32LL) & 6) == 0 )
      {
        v18 = *(_QWORD *)(v18 + 16);
        if ( !v18 )
          goto LABEL_24;
      }
      v9 = 0;
    }
LABEL_24:
    v19 = *(_DWORD *)(v5 + 16);
    if ( (v19 & 0x80u) != 0 && v17 )
      v9 = 0;
    if ( v9 )
      *(_DWORD *)(v5 + 16) = v19 | 1;
    KeReleaseQueuedSpinLock(0xAuLL, v7);
    if ( v9 )
    {
      memset(WorkItem, 0, sizeof(WorkItem));
      WorkItem[34] = 6;
      *(_QWORD *)&WorkItem[48] = &WorkItem[40];
      *(_DWORD *)&WorkItem[36] = 0;
      *(_QWORD *)&WorkItem[40] = &WorkItem[40];
      *(_QWORD *)&WorkItem[56] = v5;
      if ( v26 )
      {
        IopLoadUnloadDriver(WorkItem);
      }
      else
      {
        *(_QWORD *)WorkItem = 0LL;
        *(_QWORD *)&WorkItem[16] = IopLoadUnloadDriver;
        *(_QWORD *)&WorkItem[24] = WorkItem;
        ExQueueWorkItem((PWORK_QUEUE_ITEM)WorkItem, DelayedWorkQueue);
        KeWaitForSingleObject(&WorkItem[32], Executive, 0, 0, 0LL);
      }
      ObMakeTemporaryObject((PVOID)v5);
      ObfDereferenceObjectWithTag((PVOID)v5, 0x746C6644u);
    }
    return v8;
  }
  DeviceAttachmentBase = IopGetDeviceAttachmentBase(BugCheckParameter2);
  v20 = DeviceAttachmentBase;
  IsAnyDeviceInUse = PnpIsAnyDeviceInUse(&DeviceAttachmentBase, v21, 0LL);
  KeReleaseQueuedSpinLock((unsigned int)(v22 + 10), v7);
  if ( IsAnyDeviceInUse != 1 )
    PnpChainDereferenceComplete(v20, v26);
  return 0;
}
