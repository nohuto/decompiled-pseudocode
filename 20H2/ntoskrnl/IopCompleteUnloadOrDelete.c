/*
 * XREFs of IopCompleteUnloadOrDelete @ 0x140203590
 * Callers:
 *     IoDetachDevice @ 0x1402032C0 (IoDetachDevice.c)
 *     IoDeleteDevice @ 0x140203350 (IoDeleteDevice.c)
 *     IopDecrementDeviceObjectRef @ 0x14020D560 (IopDecrementDeviceObjectRef.c)
 * Callees:
 *     IopInsertRemoveDevice @ 0x14020374C (IopInsertRemoveDevice.c)
 *     IopDecrementDeviceObjectRefCount @ 0x14020391C (IopDecrementDeviceObjectRefCount.c)
 *     IopIncrementDeviceObjectRefCount @ 0x14020DD20 (IopIncrementDeviceObjectRefCount.c)
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseQueuedSpinLock @ 0x1402981B0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140298250 (KeAcquireQueuedSpinLock.c)
 *     ExQueueWorkItem @ 0x1402D49A0 (ExQueueWorkItem.c)
 *     IopGetDeviceAttachmentBase @ 0x14036193C (IopGetDeviceAttachmentBase.c)
 *     PnpIsAnyDeviceInUse @ 0x1403700F0 (PnpIsAnyDeviceInUse.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     memset @ 0x140411300 (memset.c)
 *     ObMakeTemporaryObject @ 0x1405D6DB0 (ObMakeTemporaryObject.c)
 *     ObDereferenceSecurityDescriptor @ 0x1405F5900 (ObDereferenceSecurityDescriptor.c)
 *     PnpChainDereferenceComplete @ 0x140742A20 (PnpChainDereferenceComplete.c)
 *     IopLoadUnloadDriver @ 0x14077CA40 (IopLoadUnloadDriver.c)
 *     VfFastIoCheckState @ 0x1409CC9C4 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1409CCA9C (VfFastIoSnapState.c)
 */

char __fastcall IopCompleteUnloadOrDelete(ULONG_PTR BugCheckParameter2, unsigned __int8 a2, KIRQL a3)
{
  char v3; // bl
  __int64 v4; // rsi
  char v7; // r13
  char v8; // r15
  int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v13; // r13
  void (__fastcall *v14)(__int64, ULONG_PTR); // r13
  void *v15; // r14
  __int64 v16; // r8
  __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // rdi
  __int64 v20; // rdx
  int v21; // r8d
  int IsAnyDeviceInUse; // ebx
  _BYTE WorkItem[80]; // [rsp+30h] [rbp-50h] BYREF
  __int64 DeviceAttachmentBase; // [rsp+C0h] [rbp+40h] BYREF
  unsigned __int8 v25; // [rsp+C8h] [rbp+48h]

  v25 = a2;
  v3 = 0;
  v4 = *(_QWORD *)(BugCheckParameter2 + 8);
  v7 = 0;
  v8 = 1;
  v9 = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 32LL);
  if ( (v9 & 4) == 0 )
  {
    if ( (v9 & 2) != 0 )
    {
      if ( (v9 & 1) == 0 || (*(_DWORD *)(v4 + 16) & 1) != 0 )
        v8 = 0;
      v10 = *(_QWORD *)(BugCheckParameter2 + 24);
      DeviceAttachmentBase = v10;
      if ( v10 )
      {
        v13 = *(_QWORD *)(*(_QWORD *)(v10 + 8) + 80LL);
        IopIncrementDeviceObjectRefCount(BugCheckParameter2);
        KeReleaseQueuedSpinLock(0xAuLL, a3);
        if ( v13 )
        {
          if ( *(_DWORD *)v13 > 0x68u )
          {
            v14 = *(void (__fastcall **)(__int64, ULONG_PTR))(v13 + 104);
            if ( v14 )
            {
              v15 = (MmVerifierData & 0x10) != 0 ? (void *)VfFastIoSnapState() : 0LL;
              v14(DeviceAttachmentBase, BugCheckParameter2);
              if ( v15 )
                VfFastIoCheckState(v15);
            }
          }
        }
        a3 = KeAcquireQueuedSpinLock(0xAuLL);
        IopDecrementDeviceObjectRefCount(BugCheckParameter2);
        if ( *(_QWORD *)(BugCheckParameter2 + 24) || *(_DWORD *)(BugCheckParameter2 + 4) )
          goto LABEL_18;
      }
      KeReleaseQueuedSpinLock(0xAuLL, a3);
      v11 = *(_QWORD *)(BugCheckParameter2 + 272);
      if ( v11 )
        ObDereferenceSecurityDescriptor(v11, 1LL);
      IopInsertRemoveDevice(*(_QWORD *)(BugCheckParameter2 + 8), BugCheckParameter2, 0LL);
      ObfDereferenceObjectWithTag((PVOID)BugCheckParameter2, 0x746C6644u);
      v7 = 1;
      if ( !v8 )
        return v7;
      a3 = KeAcquireQueuedSpinLock(0xAuLL);
      if ( (*(_DWORD *)(v4 + 16) & 1) != 0 )
      {
        v3 = 1;
LABEL_18:
        KeReleaseQueuedSpinLock(0xAuLL, a3);
        return v3;
      }
    }
    v16 = *(_QWORD *)(v4 + 8);
    v17 = v16;
    if ( v16 )
    {
      while ( !*(_DWORD *)(v17 + 4) && !*(_QWORD *)(v17 + 24) && (*(_DWORD *)(*(_QWORD *)(v17 + 312) + 32LL) & 6) == 0 )
      {
        v17 = *(_QWORD *)(v17 + 16);
        if ( !v17 )
          goto LABEL_24;
      }
      v8 = 0;
    }
LABEL_24:
    v18 = *(_DWORD *)(v4 + 16);
    if ( (v18 & 0x80u) != 0 && v16 )
      v8 = 0;
    if ( v8 )
      *(_DWORD *)(v4 + 16) = v18 | 1;
    KeReleaseQueuedSpinLock(0xAuLL, a3);
    if ( v8 )
    {
      memset(WorkItem, 0, sizeof(WorkItem));
      WorkItem[34] = 6;
      *(_QWORD *)&WorkItem[48] = &WorkItem[40];
      *(_DWORD *)&WorkItem[36] = 0;
      *(_QWORD *)&WorkItem[40] = &WorkItem[40];
      *(_QWORD *)&WorkItem[56] = v4;
      if ( v25 )
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
      ObMakeTemporaryObject((PVOID)v4);
      ObfDereferenceObjectWithTag((PVOID)v4, 0x746C6644u);
    }
    return v7;
  }
  DeviceAttachmentBase = IopGetDeviceAttachmentBase(BugCheckParameter2);
  v19 = DeviceAttachmentBase;
  IsAnyDeviceInUse = PnpIsAnyDeviceInUse(&DeviceAttachmentBase, v20, 0LL);
  KeReleaseQueuedSpinLock((unsigned int)(v21 + 10), a3);
  if ( IsAnyDeviceInUse != 1 )
    PnpChainDereferenceComplete(v19, v25);
  return 0;
}
