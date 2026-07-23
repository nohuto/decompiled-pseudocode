/*
 * XREFs of IopProcessSetInterfaceState @ 0x14073452C
 * Callers:
 *     IopDoDeferredSetInterfaceState @ 0x14073430C (IopDoDeferredSetInterfaceState.c)
 *     IoSetDeviceInterfaceState @ 0x1407344B0 (IoSetDeviceInterfaceState.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140202C20 (RtlInitUnicodeStringEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     ZwCreateSymbolicLinkObject @ 0x1403F4DC0 (ZwCreateSymbolicLinkObject.c)
 *     ZwOpenSymbolicLinkObject @ 0x1403F5B60 (ZwOpenSymbolicLinkObject.c)
 *     PnpUnicodeStringToWstrFree @ 0x1405D90E4 (PnpUnicodeStringToWstrFree.c)
 *     PiDmGetObject @ 0x1405DA3BC (PiDmGetObject.c)
 *     PiDmObjectRelease @ 0x1405DA740 (PiDmObjectRelease.c)
 *     PnpUnicodeStringToWstr @ 0x1405DAEAC (PnpUnicodeStringToWstr.c)
 *     _PnpGetObjectProperty @ 0x1405DB4CC (_PnpGetObjectProperty.c)
 *     IoGetDeviceProperty @ 0x1405DCC50 (IoGetDeviceProperty.c)
 *     RtlFreeAnsiString @ 0x14065EA70 (RtlFreeAnsiString.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x1406A5D5C (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     _CmGetDeviceInterfaceClassGuid @ 0x1406C0BE8 (_CmGetDeviceInterfaceClassGuid.c)
 *     _PnpObjectRaisePropertyChangeEvent @ 0x140726584 (_PnpObjectRaisePropertyChangeEvent.c)
 *     PiDeferSetInterfaceState @ 0x1407343C8 (PiDeferSetInterfaceState.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x1407349E4 (IopBuildGlobalSymbolicLinkString.c)
 *     PiDmObjectReleaseLock @ 0x140734C38 (PiDmObjectReleaseLock.c)
 *     KsepCacheLock @ 0x140734C60 (KsepCacheLock.c)
 *     PnpSetDeviceClassChange @ 0x140734DBC (PnpSetDeviceClassChange.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x14073546C (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x1407357C4 (PiDmAddCacheReferenceForObject.c)
 *     PiRemoveDeferredSetInterfaceState @ 0x14076EC5C (PiRemoveDeferredSetInterfaceState.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall IopProcessSetInterfaceState(UNICODE_STRING *a1, unsigned __int8 a2, char a3)
{
  PVOID v5; // r12
  __int64 v6; // rdi
  struct _DEVICE_OBJECT *v7; // r13
  __int16 *v8; // r14
  __int16 v9; // kr00_2
  int v10; // eax
  __int64 v11; // rcx
  int DeviceInterfaceClassGuid; // ebx
  const WCHAR *PoolWithTag; // rax
  int ObjectProperty; // eax
  struct _DEVICE_OBJECT *v15; // rax
  __int64 DeviceNode; // r8
  int v17; // eax
  GUID *v18; // rcx
  void *v20; // rcx
  char v21; // [rsp+68h] [rbp-A0h]
  __int16 v22; // [rsp+69h] [rbp-9Fh]
  SIZE_T NumberOfBytes; // [rsp+6Ch] [rbp-9Ch] BYREF
  __int64 v24; // [rsp+78h] [rbp-90h] BYREF
  int v25; // [rsp+80h] [rbp-88h] BYREF
  __int16 *v26; // [rsp+88h] [rbp-80h] BYREF
  PCWSTR SourceString; // [rsp+90h] [rbp-78h]
  UNICODE_STRING UnicodeString; // [rsp+98h] [rbp-70h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-60h] BYREF
  UNICODE_STRING DestinationString; // [rsp+D8h] [rbp-30h] BYREF
  UNICODE_STRING LinkTarget; // [rsp+E8h] [rbp-20h] BYREF
  GUID v32; // [rsp+F8h] [rbp-10h] BYREF

  v22 = a2;
  SourceString = 0LL;
  NumberOfBytes = 0LL;
  v5 = 0LL;
  v24 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v25 = 0;
  v8 = 0LL;
  v26 = 0LL;
  v21 = 0;
  LinkTarget = 0LL;
  UnicodeString = 0LL;
  v32 = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  DestinationString = 0LL;
  v9 = a2;
  if ( !a1 || !a1->Buffer || !a1->Length )
  {
    DeviceInterfaceClassGuid = -1073741811;
    goto LABEL_38;
  }
  v10 = PnpUnicodeStringToWstr(&v26, 0LL, &a1->Length);
  v8 = v26;
  DeviceInterfaceClassGuid = v10;
  if ( v10 < 0 )
    goto LABEL_44;
  DeviceInterfaceClassGuid = CmGetDeviceInterfaceClassGuid(v11, (__int64)v26, &v32);
  if ( DeviceInterfaceClassGuid < 0 )
    goto LABEL_44;
  DeviceInterfaceClassGuid = IopBuildGlobalSymbolicLinkString(a1, &UnicodeString);
  if ( DeviceInterfaceClassGuid < 0 )
    goto LABEL_44;
  PoolWithTag = (const WCHAR *)ExAllocatePoolWithTag(PagedPool, 0x190uLL, 0x20207050u);
  SourceString = PoolWithTag;
  if ( !PoolWithTag )
  {
    DeviceInterfaceClassGuid = -1073741670;
    goto LABEL_44;
  }
  ObjectProperty = PnpGetObjectProperty(
                     *(__int64 *)&PiPnpRtlCtx,
                     (__int64)v8,
                     3LL,
                     0LL,
                     0LL,
                     (__int64)&DEVPKEY_Device_InstanceId,
                     (__int64)&NumberOfBytes + 4,
                     (__int64)PoolWithTag,
                     400,
                     (__int64)&v25,
                     0);
  DeviceInterfaceClassGuid = ObjectProperty;
  if ( ObjectProperty == -1073741275 )
    goto LABEL_64;
  if ( ObjectProperty < 0 )
    goto LABEL_44;
  if ( HIDWORD(NumberOfBytes) != 18 )
    goto LABEL_64;
  DeviceInterfaceClassGuid = RtlInitUnicodeStringEx(&DestinationString, SourceString);
  if ( DeviceInterfaceClassGuid < 0 )
    goto LABEL_44;
  v15 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstanceWithTag((__int64)&DestinationString, 0x49706E50u);
  v7 = v15;
  if ( !v15 )
  {
    if ( !(_BYTE)v22 )
    {
      DeviceNode = 0LL;
      goto LABEL_14;
    }
LABEL_64:
    DeviceInterfaceClassGuid = -1073741808;
    goto LABEL_44;
  }
  DeviceNode = (__int64)v15->DeviceObjectExtension->DeviceNode;
LABEL_14:
  if ( (_BYTE)v22 )
  {
    v17 = *(_DWORD *)(DeviceNode + 300);
    if ( v17 <= 769 || v17 > 781 && v17 != 784 )
      goto LABEL_64;
  }
  if ( a3 && DeviceNode && (v7->DeviceObjectExtension->ExtensionFlags & 0x10) != 0 )
  {
    if ( (_BYTE)v22 )
      DeviceInterfaceClassGuid = PiDeferSetInterfaceState(DeviceNode, a1);
    else
      PiRemoveDeferredSetInterfaceState(DeviceNode, a1);
    goto LABEL_44;
  }
  if ( !(_BYTE)v22 )
  {
    DeviceInterfaceClassGuid = PiDmGetObject(3LL, (__int64)v8, &v24);
    if ( DeviceInterfaceClassGuid >= 0 )
    {
      v6 = v24;
      KsepCacheLock(v24);
      v20 = *(void **)(v6 + 40);
      if ( !v20 )
      {
        DeviceInterfaceClassGuid = -1073741772;
        goto LABEL_37;
      }
      ZwClose(v20);
      *(_QWORD *)(v6 + 40) = 0LL;
      HIBYTE(v22) = 1;
LABEL_57:
      v21 = 1;
LABEL_37:
      PiDmObjectReleaseLock(v6);
      v9 = v22;
LABEL_38:
      if ( HIBYTE(v9) )
      {
        v18 = &GUID_DEVICE_INTERFACE_ARRIVAL;
        if ( !(_BYTE)v9 )
          v18 = &GUID_DEVICE_INTERFACE_REMOVAL;
        PnpSetDeviceClassChange(v18, &v32, a1);
        PnpObjectRaisePropertyChangeEvent(
          *(__int64 *)&PiPnpRtlCtx,
          (__int64)v8,
          3LL,
          0LL,
          0LL,
          (__int64)&DEVPKEY_DeviceInterface_Enabled);
      }
      if ( v21 )
        PiDmRemoveCacheReferenceForObject(3LL, v8);
      goto LABEL_44;
    }
LABEL_60:
    v6 = v24;
    goto LABEL_44;
  }
  LODWORD(NumberOfBytes) = 512;
  while ( 1 )
  {
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
    v5 = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x20207050u);
    if ( !v5 )
      break;
    DeviceInterfaceClassGuid = IoGetDeviceProperty(
                                 v7,
                                 DevicePropertyPhysicalDeviceObjectName,
                                 NumberOfBytes,
                                 v5,
                                 (PULONG)&NumberOfBytes);
    if ( DeviceInterfaceClassGuid != -1073741789 )
      goto LABEL_28;
  }
  DeviceInterfaceClassGuid = -1073741670;
LABEL_28:
  if ( DeviceInterfaceClassGuid >= 0 && (_DWORD)NumberOfBytes )
  {
    RtlInitUnicodeString(&LinkTarget, (PCWSTR)v5);
    DeviceInterfaceClassGuid = PiDmAddCacheReferenceForObject(3LL, v8, &v24);
    if ( DeviceInterfaceClassGuid >= 0 )
    {
      v6 = v24;
      KsepCacheLock(v24);
      if ( (*(_DWORD *)(v6 + 32) & 1) != 0 )
      {
        if ( !*(_QWORD *)(v6 + 40) )
        {
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.ObjectName = &UnicodeString;
          ObjectAttributes.SecurityQualityOfService = 0LL;
          ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
          ObjectAttributes.Length = 48;
          ObjectAttributes.Attributes = 576;
          DeviceInterfaceClassGuid = ZwOpenSymbolicLinkObject((PHANDLE)(v6 + 40), 0xF0001u, &ObjectAttributes);
          if ( DeviceInterfaceClassGuid == -1073741772 )
            DeviceInterfaceClassGuid = ZwCreateSymbolicLinkObject(
                                         (PHANDLE)(v6 + 40),
                                         0xF0001u,
                                         &ObjectAttributes,
                                         &LinkTarget);
          if ( DeviceInterfaceClassGuid >= 0 )
            HIBYTE(v22) = 1;
          goto LABEL_37;
        }
        DeviceInterfaceClassGuid = 0x40000000;
      }
      else
      {
        DeviceInterfaceClassGuid = -1073741772;
      }
      goto LABEL_57;
    }
    goto LABEL_60;
  }
LABEL_44:
  RtlFreeAnsiString(&UnicodeString);
  PnpUnicodeStringToWstrFree(v8, (__int64)a1);
  if ( v7 )
    ObfDereferenceObjectWithTag(v7, 0x49706E50u);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  if ( SourceString )
    ExFreePoolWithTag((PVOID)SourceString, 0);
  if ( v6 )
    PiDmObjectRelease((unsigned int *)v6);
  return (unsigned int)DeviceInterfaceClassGuid;
}
