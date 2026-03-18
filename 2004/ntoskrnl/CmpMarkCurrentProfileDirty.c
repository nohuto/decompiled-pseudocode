/*
 * XREFs of CmpMarkCurrentProfileDirty @ 0x14078ED4C
 * Callers:
 *     CmInitSystem1 @ 0x140A582D4 (CmInitSystem1.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     ZwOpenKey @ 0x1403F3800 (ZwOpenKey.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     CmpUnlockRegistry @ 0x1405F3D20 (CmpUnlockRegistry.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     CmpLockRegistryExclusive @ 0x1406400FC (CmpLockRegistryExclusive.c)
 *     CmpFindValueByName @ 0x140655740 (CmpFindValueByName.c)
 *     HvpMarkCellDirty @ 0x14069FC00 (HvpMarkCellDirty.c)
 *     CmpOpenDevicesControlSet @ 0x14078FCF4 (CmpOpenDevicesControlSet.c)
 */

void __fastcall CmpMarkCurrentProfileDirty(__int64 a1)
{
  HANDLE v1; // rdi
  NTSTATUS v2; // ebx
  NTSTATUS v3; // ebx
  struct _DMA_ADAPTER *v4; // rbx
  __int64 v5; // rax
  unsigned int ValueByName; // edi
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+80h] [rbp+20h] BYREF
  int v9; // [rsp+88h] [rbp+28h] BYREF
  int v10; // [rsp+8Ch] [rbp+2Ch]
  HANDLE Handle; // [rsp+90h] [rbp+30h] BYREF

  Handle = 0LL;
  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v9 = -1;
  v10 = 0;
  if ( (int)CmpOpenDevicesControlSet(a1, &Handle, 0LL) >= 0 )
  {
    v1 = Handle;
    ObjectAttributes.RootDirectory = Handle;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)L"$&";
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v2 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    ZwClose(v1);
    if ( v2 >= 0 )
    {
      Handle = 0LL;
      v3 = ObReferenceObjectByHandle(KeyHandle, 0x20019u, (POBJECT_TYPE)CmKeyObjectType, 0, &Handle, 0LL);
      ZwClose(KeyHandle);
      if ( v3 >= 0 )
      {
        CmpLockRegistryExclusive();
        v4 = (struct _DMA_ADAPTER *)Handle;
        v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)(*((_QWORD *)Handle + 1) + 32LL) + 8LL))(
               *(_QWORD *)(*((_QWORD *)Handle + 1) + 32LL),
               *(unsigned int *)(*((_QWORD *)Handle + 1) + 40LL),
               &v9);
        if ( v5 )
        {
          ValueByName = CmpFindValueByName(
                          (int)v4->DmaOperations->AllocateAdapterChannel,
                          v5,
                          (int)&CmpCurrentConfigString);
          (*((void (__fastcall **)(int (__fastcall *)(_DMA_ADAPTER *, _DEVICE_OBJECT *, unsigned int, _IO_ALLOCATION_ACTION (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *, void *), void *), int *))v4->DmaOperations->AllocateAdapterChannel
           + 2))(
            v4->DmaOperations->AllocateAdapterChannel,
            &v9);
          if ( ValueByName != -1 )
            HvpMarkCellDirty((ULONG_PTR)v4->DmaOperations->AllocateAdapterChannel, ValueByName, 1);
        }
        CmpUnlockRegistry();
        HalPutDmaAdapter(v4);
      }
    }
  }
}
