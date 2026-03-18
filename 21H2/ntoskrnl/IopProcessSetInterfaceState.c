/*
 * XREFs of IopProcessSetInterfaceState @ 0x140769170
 * Callers:
 *     IopDoDeferredSetInterfaceState @ 0x140768F5C (IopDoDeferredSetInterfaceState.c)
 *     IoSetDeviceInterfaceState @ 0x140769100 (IoSetDeviceInterfaceState.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwCreateSymbolicLinkObject @ 0x14041D000 (ZwCreateSymbolicLinkObject.c)
 *     ZwOpenSymbolicLinkObject @ 0x14041DDE0 (ZwOpenSymbolicLinkObject.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     PiDeferSetInterfaceState @ 0x140769010 (PiDeferSetInterfaceState.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x140769668 (IopBuildGlobalSymbolicLinkString.c)
 *     PnpSetDeviceClassChange @ 0x1407699F8 (PnpSetDeviceClassChange.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x14076A0A8 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x14076A3C4 (PiDmAddCacheReferenceForObject.c)
 *     _PnpObjectRaisePropertyChangeEvent @ 0x1407720B8 (_PnpObjectRaisePropertyChangeEvent.c)
 *     IoGetDeviceProperty @ 0x140773C30 (IoGetDeviceProperty.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x140779C10 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PnpUnicodeStringToWstr @ 0x140779CA0 (PnpUnicodeStringToWstr.c)
 *     PiDmGetObject @ 0x14077B0A4 (PiDmGetObject.c)
 *     PiDmObjectRelease @ 0x14077B394 (PiDmObjectRelease.c)
 *     PnpUnicodeStringToWstrFree @ 0x14077BAB8 (PnpUnicodeStringToWstrFree.c)
 *     _PnpGetObjectProperty @ 0x14077DA5C (_PnpGetObjectProperty.c)
 *     _CmGetDeviceInterfaceClassGuid @ 0x140787558 (_CmGetDeviceInterfaceClassGuid.c)
 *     PiRemoveDeferredSetInterfaceState @ 0x1408111C8 (PiRemoveDeferredSetInterfaceState.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall IopProcessSetInterfaceState(const UNICODE_STRING *a1, char a2, char a3)
{
  WCHAR *v4; // r13
  void *v5; // r14
  ULONG_PTR v6; // rdi
  struct _DEVICE_OBJECT *v7; // r15
  __int64 v8; // rsi
  int v9; // eax
  __int64 v10; // rcx
  int DeviceInterfaceClassGuid; // ebx
  __int64 Pool2; // rax
  int ObjectProperty; // eax
  __int64 v14; // rax
  __int64 v15; // r8
  int v16; // eax
  NTSTATUS DeviceProperty; // eax
  struct _KTHREAD *CurrentThread; // rax
  GUID *v19; // rcx
  struct _KTHREAD *v21; // rax
  void *v22; // rcx
  __int16 v23; // [rsp+68h] [rbp-A0h]
  ULONG BufferLength; // [rsp+6Ch] [rbp-9Ch] BYREF
  __int64 v27; // [rsp+70h] [rbp-98h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp-90h] BYREF
  __int64 v29; // [rsp+80h] [rbp-88h] BYREF
  int v30; // [rsp+88h] [rbp-80h] BYREF
  WCHAR *v31; // [rsp+90h] [rbp-78h]
  struct _DEVICE_OBJECT *v32; // [rsp+98h] [rbp-70h]
  UNICODE_STRING UnicodeString; // [rsp+A0h] [rbp-68h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B0h] [rbp-58h] BYREF
  UNICODE_STRING DestinationString; // [rsp+E0h] [rbp-28h] BYREF
  UNICODE_STRING v36; // [rsp+F0h] [rbp-18h] BYREF
  __int128 v37; // [rsp+100h] [rbp-8h] BYREF

  BufferLength = 0;
  BugCheckParameter2 = 0LL;
  v4 = 0LL;
  LODWORD(v27) = 0;
  v5 = 0LL;
  v30 = 0;
  v6 = 0LL;
  v29 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v23 = 0;
  v36 = 0LL;
  UnicodeString = 0LL;
  v37 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  DestinationString = 0LL;
  if ( !a1 || !a1->Buffer || !a1->Length )
  {
    DeviceInterfaceClassGuid = -1073741811;
    goto LABEL_42;
  }
  v9 = PnpUnicodeStringToWstr(&v29, 0LL, a1);
  v8 = v29;
  DeviceInterfaceClassGuid = v9;
  if ( v9 < 0 )
    goto LABEL_42;
  DeviceInterfaceClassGuid = CmGetDeviceInterfaceClassGuid(v10, v29, &v37);
  if ( DeviceInterfaceClassGuid < 0 )
    goto LABEL_42;
  DeviceInterfaceClassGuid = IopBuildGlobalSymbolicLinkString(a1, &UnicodeString);
  if ( DeviceInterfaceClassGuid < 0 )
    goto LABEL_42;
  Pool2 = ExAllocatePool2(256LL, 400LL, 538996816LL);
  v31 = (WCHAR *)Pool2;
  v4 = (WCHAR *)Pool2;
  if ( !Pool2 )
  {
LABEL_59:
    DeviceInterfaceClassGuid = -1073741670;
    goto LABEL_42;
  }
  ObjectProperty = PnpGetObjectProperty(
                     PiPnpRtlCtx,
                     v8,
                     3,
                     0,
                     0LL,
                     (__int64)&DEVPKEY_Device_InstanceId,
                     (__int64)&v27,
                     Pool2,
                     400,
                     (__int64)&v30,
                     0);
  DeviceInterfaceClassGuid = ObjectProperty;
  if ( ObjectProperty == -1073741275 )
    goto LABEL_62;
  if ( ObjectProperty < 0 )
    goto LABEL_42;
  if ( (_DWORD)v27 != 18 )
    goto LABEL_62;
  DeviceInterfaceClassGuid = RtlInitUnicodeStringEx(&DestinationString, v4);
  if ( DeviceInterfaceClassGuid < 0 )
    goto LABEL_42;
  v14 = PnpDeviceObjectFromDeviceInstanceWithTag(&DestinationString, 1232105040LL);
  v7 = (struct _DEVICE_OBJECT *)v14;
  v32 = (struct _DEVICE_OBJECT *)v14;
  if ( v14 )
  {
    v15 = *(_QWORD *)(*(_QWORD *)(v14 + 312) + 40LL);
    if ( !a2 )
      goto LABEL_16;
    v16 = *(_DWORD *)(v15 + 300);
    if ( v16 > 770 && (v16 <= 783 || v16 == 786) )
      goto LABEL_16;
LABEL_62:
    DeviceInterfaceClassGuid = -1073741808;
    goto LABEL_42;
  }
  if ( a2 )
    goto LABEL_62;
  v15 = 0LL;
LABEL_16:
  if ( a3 && v15 && (v7->DeviceObjectExtension->ExtensionFlags & 0x10) != 0 )
  {
    if ( a2 )
      DeviceInterfaceClassGuid = PiDeferSetInterfaceState(v15, a1);
    else
      PiRemoveDeferredSetInterfaceState(v15, a1);
    goto LABEL_42;
  }
  if ( a2 )
  {
    BufferLength = 512;
    while ( 1 )
    {
      if ( v5 )
        ExFreePoolWithTag(v5, 0);
      v5 = (void *)ExAllocatePool2(256LL, BufferLength, 538996816LL);
      if ( !v5 )
        goto LABEL_59;
      DeviceProperty = IoGetDeviceProperty(v7, DevicePropertyPhysicalDeviceObjectName, BufferLength, v5, &BufferLength);
      DeviceInterfaceClassGuid = DeviceProperty;
      if ( DeviceProperty != -1073741789 )
      {
        if ( DeviceProperty < 0 || !BufferLength )
          goto LABEL_42;
        RtlInitUnicodeString(&v36, (PCWSTR)v5);
        DeviceInterfaceClassGuid = PiDmAddCacheReferenceForObject(3LL, v8, &BugCheckParameter2);
        if ( DeviceInterfaceClassGuid < 0 )
          goto LABEL_58;
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v6 = BugCheckParameter2;
        ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
        if ( (*(_DWORD *)(v6 + 32) & 1) == 0 )
        {
          DeviceInterfaceClassGuid = -1073741772;
          goto LABEL_55;
        }
        if ( *(_QWORD *)(v6 + 40) )
        {
          DeviceInterfaceClassGuid = 0x40000000;
          goto LABEL_55;
        }
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &UnicodeString;
        ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 576;
        ObjectAttributes.SecurityQualityOfService = 0LL;
        DeviceInterfaceClassGuid = ZwOpenSymbolicLinkObject((PHANDLE)(v6 + 40), 0xF0001u, &ObjectAttributes);
        if ( DeviceInterfaceClassGuid == -1073741772 )
          DeviceInterfaceClassGuid = ZwCreateSymbolicLinkObject(v6 + 40, 983041LL);
        if ( DeviceInterfaceClassGuid >= 0 )
          HIBYTE(v23) = 1;
        goto LABEL_36;
      }
    }
  }
  DeviceInterfaceClassGuid = PiDmGetObject(3LL, v8, &BugCheckParameter2);
  if ( DeviceInterfaceClassGuid < 0 )
  {
LABEL_58:
    v6 = BugCheckParameter2;
  }
  else
  {
    v21 = KeGetCurrentThread();
    --v21->KernelApcDisable;
    v6 = BugCheckParameter2;
    ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
    v22 = *(void **)(v6 + 40);
    if ( v22 )
    {
      ZwClose(v22);
      *(_QWORD *)(v6 + 40) = 0LL;
      HIBYTE(v23) = 1;
LABEL_55:
      LOBYTE(v23) = 1;
    }
    else
    {
      DeviceInterfaceClassGuid = -1073741772;
    }
LABEL_36:
    ExReleasePushLockEx(v6, 0LL);
    KeLeaveCriticalRegion();
    v4 = v31;
    v7 = v32;
    v8 = v29;
    if ( HIBYTE(v23) )
    {
      v19 = &GUID_DEVICE_INTERFACE_ARRIVAL;
      if ( !a2 )
        v19 = &GUID_DEVICE_INTERFACE_REMOVAL;
      PnpSetDeviceClassChange(v19, &v37, a1);
      PnpObjectRaisePropertyChangeEvent(PiPnpRtlCtx, v8, 3, 0, 0LL, (__int64)&DEVPKEY_DeviceInterface_Enabled);
    }
    if ( (_BYTE)v23 )
      PiDmRemoveCacheReferenceForObject(3LL, v8);
  }
LABEL_42:
  RtlFreeUnicodeString(&UnicodeString);
  PnpUnicodeStringToWstrFree(v8, a1);
  if ( v7 )
    ObfDereferenceObjectWithTag(v7, 0x49706E50u);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( v6 )
    PiDmObjectRelease((PVOID)v6);
  return (unsigned int)DeviceInterfaceClassGuid;
}
