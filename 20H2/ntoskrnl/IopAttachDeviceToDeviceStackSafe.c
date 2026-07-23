/*
 * XREFs of IopAttachDeviceToDeviceStackSafe @ 0x140361624
 * Callers:
 *     IoAttachDeviceToDeviceStackSafe @ 0x140361600 (IoAttachDeviceToDeviceStackSafe.c)
 *     IoAttachDeviceToDeviceStack @ 0x140380A50 (IoAttachDeviceToDeviceStack.c)
 *     IoAttachDeviceByPointer @ 0x140503D80 (IoAttachDeviceByPointer.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402089E0 (ObfReferenceObjectWithTag.c)
 *     IoGetAttachedDevice @ 0x14020D8F0 (IoGetAttachedDevice.c)
 *     EtwWriteEx @ 0x14020E0B0 (EtwWriteEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     EtwEventEnabled @ 0x14027E3D0 (EtwEventEnabled.c)
 *     KeReleaseQueuedSpinLock @ 0x1402981B0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140298250 (KeAcquireQueuedSpinLock.c)
 *     IopGetDeviceAttachmentBase @ 0x14036193C (IopGetDeviceAttachmentBase.c)
 *     PnpRequestDeviceAction @ 0x14036E774 (PnpRequestDeviceAction.c)
 *     IoGetDiskDeviceObject @ 0x1403945C0 (IoGetDiskDeviceObject.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     IopIsKnownGoodLegacyFsFilter @ 0x140504F98 (IopIsKnownGoodLegacyFsFilter.c)
 *     ObQueryNameString @ 0x140634AC0 (ObQueryNameString.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 *     IovAttachDeviceToDeviceStack @ 0x1409C7A5C (IovAttachDeviceToDeviceStack.c)
 */

PDEVICE_OBJECT __fastcall IopAttachDeviceToDeviceStackSafe(__int64 a1, struct _DEVICE_OBJECT *a2, PDEVICE_OBJECT *a3)
{
  __int64 v3; // r15
  struct _DEVICE_OBJECT *v6; // r14
  KIRQL v7; // r12
  PDEVICE_OBJECT AttachedDevice; // rbx
  __int64 DeviceAttachmentBase; // rax
  char v10; // dl
  struct _DEVICE_OBJECT *v11; // r13
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  CCHAR StackSize; // al
  PVOID *DeviceNode; // rcx
  char v16; // si
  unsigned int DeviceType; // eax
  int v18; // r8d
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  _OBJECT_NAME_INFORMATION *p_ObjectNameInfo; // rsi
  _OBJECT_NAME_INFORMATION *v24; // r15
  __int16 v25; // cx
  NTSTATUS v26; // r14d
  _OBJECT_NAME_INFORMATION *PoolWithTag; // rax
  bool v28; // sf
  unsigned __int16 Length; // ax
  __int64 v30; // rax
  int v31; // ecx
  __int64 v32; // rax
  wchar_t *Buffer; // rax
  char v34; // [rsp+40h] [rbp-C0h]
  ULONG ReturnLength; // [rsp+44h] [rbp-BCh] BYREF
  __int16 v36; // [rsp+48h] [rbp-B8h] BYREF
  __int16 v37; // [rsp+4Ch] [rbp-B4h] BYREF
  __int16 v38; // [rsp+50h] [rbp-B0h] BYREF
  PDEVICE_OBJECT DiskDeviceObject; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v40[2]; // [rsp+60h] [rbp-A0h] BYREF
  struct _DEVICE_OBJECT *v41; // [rsp+70h] [rbp-90h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+78h] [rbp-88h] BYREF
  __int64 v43; // [rsp+88h] [rbp-78h]
  int v44; // [rsp+90h] [rbp-70h]
  int v45; // [rsp+94h] [rbp-6Ch]
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v47; // [rsp+B0h] [rbp-50h]
  int v48; // [rsp+B8h] [rbp-48h]
  int v49; // [rsp+BCh] [rbp-44h]
  __int16 *v50; // [rsp+C0h] [rbp-40h]
  int v51; // [rsp+C8h] [rbp-38h]
  int v52; // [rsp+CCh] [rbp-34h]
  wchar_t *v53; // [rsp+D0h] [rbp-30h]
  int v54; // [rsp+D8h] [rbp-28h]
  int v55; // [rsp+DCh] [rbp-24h]
  _OBJECT_NAME_INFORMATION ObjectNameInfo; // [rsp+E0h] [rbp-20h] BYREF

  v3 = *(_QWORD *)(a1 + 312);
  v41 = a2;
  v6 = a2;
  v7 = KeAcquireQueuedSpinLock(0xAuLL);
  if ( (MmVerifierData & 0x10) != 0 )
    IovAttachDeviceToDeviceStack(a1, v6);
  AttachedDevice = IoGetAttachedDevice(v6);
  DeviceAttachmentBase = IopGetDeviceAttachmentBase(v6);
  v10 = 0;
  v11 = (struct _DEVICE_OBJECT *)DeviceAttachmentBase;
  v34 = 0;
  v12 = *(unsigned int *)(DeviceAttachmentBase + 72);
  if ( (unsigned int)v12 <= 0x35 )
  {
    v13 = 0x20000100100108LL;
    if ( _bittest64(&v13, v12) )
    {
      if ( (v11->Flags & 0x10000000) != 0 || IopBlockLegacyFsFilters )
      {
        v34 = 1;
        if ( (unsigned __int8)IopIsKnownGoodLegacyFsFilter(*(_QWORD *)(a1 + 8) + 56LL) )
        {
          v10 = 0;
          v34 = 0;
        }
        else
        {
          ObfReferenceObjectWithTag(v11, 0x746C6644u);
          v10 = 1;
        }
      }
    }
  }
  if ( (AttachedDevice->Flags & 0x80u) != 0
    || (AttachedDevice->DeviceObjectExtension->ExtensionFlags & 0xF) != 0
    || (StackSize = AttachedDevice->StackSize, (unsigned __int8)StackSize >= 0x7Du)
    || v10 )
  {
    AttachedDevice = 0LL;
    if ( a3 )
      *a3 = 0LL;
  }
  else
  {
    if ( a3 )
    {
      *a3 = AttachedDevice;
      StackSize = AttachedDevice->StackSize;
    }
    *(_BYTE *)(a1 + 76) = StackSize + 1;
    *(_DWORD *)(a1 + 152) = AttachedDevice->AlignmentRequirement;
    *(_WORD *)(a1 + 304) = AttachedDevice->SectorSize;
    if ( (AttachedDevice->DeviceObjectExtension->ExtensionFlags & 0x10) != 0 )
      *(_DWORD *)(*(_QWORD *)(a1 + 312) + 32LL) |= 0x10u;
    if ( (AttachedDevice->Flags & 0x8000000) != 0 )
      *(_DWORD *)(a1 + 48) |= 0x8000000u;
    _InterlockedExchange64((volatile __int64 *)&AttachedDevice->AttachedDevice, a1);
    ++AttachedDevice->Spare1;
    *(_QWORD *)(v3 + 48) = AttachedDevice;
    DeviceNode = (PVOID *)v11->DeviceObjectExtension->DeviceNode;
    if ( DeviceNode && *((int *)DeviceNode + 99) < 0 )
      PnpRequestDeviceAction(DeviceNode[4], 0LL, 0LL, 0LL);
  }
  KeReleaseQueuedSpinLock(0xAuLL, v7);
  v16 = v34;
  if ( v34 )
  {
    if ( IopBlockLegacyFsFilters )
    {
      if ( EtwEventEnabled(IoMgrTraceHandle, &IoMgr_LegacyFsFilterBlockedByPolicy) )
      {
        v20 = *(_QWORD *)(a1 + 8);
        v36 = *(_WORD *)(v20 + 56) >> 1;
        UserData.Ptr = (ULONGLONG)&v36;
        *(_QWORD *)&UserData.Size = 2LL;
        v21 = *(_QWORD *)(v20 + 64);
        v44 = *(unsigned __int16 *)(v20 + 56);
        v43 = v21;
        v45 = 0;
        EtwWriteEx(
          IoMgrTraceHandle,
          &IoMgr_LegacyFsFilterBlockedByPolicy,
          0LL,
          0,
          (LPCGUID)KeGetCurrentThread()[1].WaitBlock[1].WaitListEntry.Flink,
          0LL,
          2u,
          &UserData);
      }
    }
    else if ( EtwEventEnabled(IoMgrTraceHandle, &IoMgr_LegacyFsFilterBlockedOnScm) )
    {
      v22 = *(_QWORD *)(a1 + 8);
      p_ObjectNameInfo = &ObjectNameInfo;
      v40[0] = 1835034LL;
      v24 = (_OBJECT_NAME_INFORMATION *)v40;
      v25 = *(_WORD *)(v22 + 56) >> 1;
      DiskDeviceObject = 0LL;
      v37 = v25;
      v40[1] = L"(Unavailable)";
      ReturnLength = 64;
      if ( KeGetCurrentIrql() < 2u && IoGetDiskDeviceObject(v11, &DiskDeviceObject) >= 0 )
      {
        v26 = ObQueryNameString(DiskDeviceObject, &ObjectNameInfo, ReturnLength, &ReturnLength);
        if ( v26 == -1073741820 )
        {
          PoolWithTag = (_OBJECT_NAME_INFORMATION *)ExAllocatePoolWithTag(PagedPool, ReturnLength, 0x6E4F6F49u);
          p_ObjectNameInfo = PoolWithTag;
          if ( PoolWithTag )
            v26 = ObQueryNameString(DiskDeviceObject, PoolWithTag, ReturnLength, &ReturnLength);
          else
            v26 = -1073741670;
        }
        ObfDereferenceObjectWithTag(DiskDeviceObject, 0x746C6644u);
        v28 = v26 < 0;
        v6 = v41;
        if ( !v28 )
          v24 = p_ObjectNameInfo;
      }
      Length = v24->Name.Length;
      v46.Reserved = 0;
      v38 = Length >> 1;
      v46.Ptr = (ULONGLONG)&v37;
      v30 = *(_QWORD *)(a1 + 8);
      v46.Size = 2;
      v31 = *(unsigned __int16 *)(v30 + 56);
      v32 = *(_QWORD *)(v30 + 64);
      v49 = 0;
      v52 = 0;
      v48 = v31;
      v47 = v32;
      v50 = &v38;
      v51 = 2;
      Buffer = v24->Name.Buffer;
      v54 = v24->Name.Length;
      v55 = 0;
      v53 = Buffer;
      EtwWriteEx(
        IoMgrTraceHandle,
        &IoMgr_LegacyFsFilterBlockedOnScm,
        0LL,
        0,
        (LPCGUID)KeGetCurrentThread()[1].WaitBlock[1].WaitListEntry.Flink,
        0LL,
        4u,
        &v46);
      if ( p_ObjectNameInfo && p_ObjectNameInfo != &ObjectNameInfo )
        ExFreePoolWithTag(p_ObjectNameInfo, 0);
      v16 = v34;
    }
    if ( v16 )
      ObfDereferenceObjectWithTag(v11, 0x746C6644u);
  }
  DeviceType = v6->DeviceType;
  if ( DeviceType <= 0x14 )
  {
    v18 = 1048840;
    if ( _bittest(&v18, DeviceType) )
    {
      if ( FltMgrCallbacks )
        (*(void (__fastcall **)(__int64, struct _DEVICE_OBJECT *))(FltMgrCallbacks + 40))(a1, v6);
    }
  }
  return AttachedDevice;
}
