/*
 * XREFs of CmpMarkCurrentProfileDirty @ 0x1407A59BC
 * Callers:
 *     CmInitSystem1 @ 0x140A5AF78 (CmInitSystem1.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwOpenKey @ 0x1403FA7C0 (ZwOpenKey.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     CmpFindValueByName @ 0x14065E45C (CmpFindValueByName.c)
 *     CmpLockRegistryExclusive @ 0x1406679BC (CmpLockRegistryExclusive.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     CmpUnlockRegistry @ 0x14070D2B0 (CmpUnlockRegistry.c)
 *     HvpMarkCellDirty @ 0x14071F800 (HvpMarkCellDirty.c)
 *     CmpOpenDevicesControlSet @ 0x1407A6964 (CmpOpenDevicesControlSet.c)
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
                          (__int64)v4->DmaOperations->AllocateAdapterChannel,
                          v5,
                          (__int64)&CmpCurrentConfigString);
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
