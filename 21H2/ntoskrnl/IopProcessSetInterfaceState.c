/*
 * XREFs of IopProcessSetInterfaceState @ 0x14074929C
 * Callers:
 *     IopDoDeferredSetInterfaceState @ 0x14073DF70 (IopDoDeferredSetInterfaceState.c)
 *     IoSetDeviceInterfaceState @ 0x140749220 (IoSetDeviceInterfaceState.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140253A90 (RtlInitUnicodeStringEx.c)
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwCreateSymbolicLinkObject @ 0x1403FBDA0 (ZwCreateSymbolicLinkObject.c)
 *     ZwOpenSymbolicLinkObject @ 0x1403FCB40 (ZwOpenSymbolicLinkObject.c)
 *     PnpUnicodeStringToWstrFree @ 0x14062A5A4 (PnpUnicodeStringToWstrFree.c)
 *     PiDmGetObject @ 0x14062B87C (PiDmGetObject.c)
 *     PiDmObjectRelease @ 0x14062BC00 (PiDmObjectRelease.c)
 *     PnpUnicodeStringToWstr @ 0x14062C36C (PnpUnicodeStringToWstr.c)
 *     _PnpGetObjectProperty @ 0x14062C98C (_PnpGetObjectProperty.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14062D4E0 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     _CmGetDeviceInterfaceClassGuid @ 0x140632D04 (_CmGetDeviceInterfaceClassGuid.c)
 *     IoGetDeviceProperty @ 0x140634AA0 (IoGetDeviceProperty.c)
 *     RtlFreeAnsiString @ 0x14063DA40 (RtlFreeAnsiString.c)
 *     _PnpObjectRaisePropertyChangeEvent @ 0x140746274 (_PnpObjectRaisePropertyChangeEvent.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x140748AB8 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x140748B68 (PiDmAddCacheReferenceForObject.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x140749754 (IopBuildGlobalSymbolicLinkString.c)
 *     PiDmObjectReleaseLock @ 0x1407499A8 (PiDmObjectReleaseLock.c)
 *     KsepCacheLock @ 0x1407499D0 (KsepCacheLock.c)
 *     PnpSetDeviceClassChange @ 0x140749B2C (PnpSetDeviceClassChange.c)
 *     PiDeferSetInterfaceState @ 0x14074B940 (PiDeferSetInterfaceState.c)
 *     PiRemoveDeferredSetInterfaceState @ 0x14078162C (PiRemoveDeferredSetInterfaceState.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall IopProcessSetInterfaceState(__int64 a1, unsigned __int8 a2, char a3)
{
  PVOID v5; // r12
  volatile signed __int32 *v6; // rdi
  struct _DEVICE_OBJECT *v7; // r13
  wchar_t *v8; // r14
  __int16 v9; // kr00_2
  int v10; // eax
  __int64 v11; // rcx
  int DeviceInterfaceClassGuid; // ebx
  const WCHAR *PoolWithTag; // rax
  int ObjectProperty; // eax
  struct _DEVICE_OBJECT *v15; // rax
  _DWORD *DeviceNode; // r8
  int v17; // eax
  GUID *v18; // rcx
  void *v20; // rcx
  char v21; // [rsp+68h] [rbp-A0h]
  __int16 v22; // [rsp+69h] [rbp-9Fh]
  SIZE_T NumberOfBytes; // [rsp+6Ch] [rbp-9Ch] BYREF
  volatile signed __int32 *v24; // [rsp+78h] [rbp-90h] BYREF
  int v25; // [rsp+80h] [rbp-88h] BYREF
  wchar_t *v26; // [rsp+88h] [rbp-80h] BYREF
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
  if ( !a1 || !*(_QWORD *)(a1 + 8) || !*(_WORD *)a1 )
  {
    DeviceInterfaceClassGuid = -1073741811;
    goto LABEL_38;
  }
  v10 = PnpUnicodeStringToWstr((__int16 **)&v26, 0LL, (unsigned __int16 *)a1);
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
  DeviceNode = v15->DeviceObjectExtension->DeviceNode;
LABEL_14:
  if ( (_BYTE)v22 )
  {
    v17 = DeviceNode[75];
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
    DeviceInterfaceClassGuid = PiDmGetObject(3LL, (__int64)v8, (__int64 *)&v24);
    if ( DeviceInterfaceClassGuid >= 0 )
    {
      v6 = v24;
      KsepCacheLock(v24);
      v20 = (void *)*((_QWORD *)v6 + 5);
      if ( !v20 )
      {
        DeviceInterfaceClassGuid = -1073741772;
        goto LABEL_37;
      }
      ZwClose(v20);
      *((_QWORD *)v6 + 5) = 0LL;
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
        PiDmRemoveCacheReferenceForObject(3, (__int64)v8, 0LL);
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
    DeviceInterfaceClassGuid = PiDmAddCacheReferenceForObject(3u, v8, &v24);
    if ( DeviceInterfaceClassGuid >= 0 )
    {
      v6 = v24;
      KsepCacheLock(v24);
      if ( (v6[8] & 1) != 0 )
      {
        if ( !*((_QWORD *)v6 + 5) )
        {
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.ObjectName = &UnicodeString;
          ObjectAttributes.SecurityQualityOfService = 0LL;
          ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
          ObjectAttributes.Length = 48;
          ObjectAttributes.Attributes = 576;
          DeviceInterfaceClassGuid = ZwOpenSymbolicLinkObject((PHANDLE)v6 + 5, 0xF0001u, &ObjectAttributes);
          if ( DeviceInterfaceClassGuid == -1073741772 )
            DeviceInterfaceClassGuid = ZwCreateSymbolicLinkObject(
                                         (PHANDLE)v6 + 5,
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
  PnpUnicodeStringToWstrFree(v8, a1);
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
