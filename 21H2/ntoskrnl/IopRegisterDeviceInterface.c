/*
 * XREFs of IopRegisterDeviceInterface @ 0x140769C24
 * Callers:
 *     PiDevCfgConfigureDeviceInterfaces @ 0x140697BE0 (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiSwIrpInterfaceRegister @ 0x14076308C (PiSwIrpInterfaceRegister.c)
 *     IoRegisterDeviceInterface @ 0x140769AD0 (IoRegisterDeviceInterface.c)
 *     PiCMRegisterDeviceInterface @ 0x140955EF8 (PiCMRegisterDeviceInterface.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x14076A0A8 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmListAddObject @ 0x14076A134 (PiDmListAddObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x14076A3C4 (PiDmAddCacheReferenceForObject.c)
 *     PipCheckForDenyExecute @ 0x14076A520 (PipCheckForDenyExecute.c)
 *     _CmCreateDeviceInterface @ 0x14076A680 (_CmCreateDeviceInterface.c)
 *     _PnpSetObjectProperty @ 0x14077198C (_PnpSetObjectProperty.c)
 *     _PnpStringFromGuid @ 0x140773030 (_PnpStringFromGuid.c)
 *     PnpIsNullGuid @ 0x140776274 (PnpIsNullGuid.c)
 *     PiPnpRtlEndOperation @ 0x140779A50 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x140779DC4 (PiPnpRtlBeginOperation.c)
 *     PiDmGetObject @ 0x14077B0A4 (PiDmGetObject.c)
 *     PiDmObjectRelease @ 0x14077B394 (PiDmObjectRelease.c)
 *     _PnpGetObjectProperty @ 0x14077DA5C (_PnpGetObjectProperty.c)
 *     _CmSetDeviceInterfacePathFormat @ 0x140788E8C (_CmSetDeviceInterfacePathFormat.c)
 *     _CmGetDeviceInterfaceName @ 0x140789718 (_CmGetDeviceInterfaceName.c)
 *     _CmDeleteDeviceInterface @ 0x140A237D0 (_CmDeleteDeviceInterface.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall IopRegisterDeviceInterface(__int64 a1, __int64 a2, __int64 a3, char a4, PVOID *a5, __int64 a6)
{
  _QWORD *v6; // rdi
  HANDLE v7; // r12
  _QWORD *v8; // rsi
  _DWORD *v9; // r14
  _QWORD *v10; // r13
  int DeviceInterfaceName; // ebx
  __int64 Pool2; // rax
  _DWORD *v13; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v15; // rdi
  char v16; // si
  int v17; // eax
  __int64 v18; // r12
  int ObjectProperty; // eax
  int Object; // eax
  char v21; // si
  __int64 v22; // r8
  struct _KTHREAD *v24; // rax
  int v25; // esi
  unsigned int v26; // ebx
  __int64 v27; // rax
  int v28; // [rsp+20h] [rbp-E0h]
  __int64 v29; // [rsp+38h] [rbp-C8h]
  char v30; // [rsp+60h] [rbp-A0h] BYREF
  char v31; // [rsp+61h] [rbp-9Fh]
  unsigned int v32; // [rsp+64h] [rbp-9Ch] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp-98h] BYREF
  PVOID v34; // [rsp+70h] [rbp-90h] BYREF
  PVOID v35; // [rsp+78h] [rbp-88h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp-80h] BYREF
  int v37; // [rsp+88h] [rbp-78h]
  int v38; // [rsp+8Ch] [rbp-74h] BYREF
  int v39; // [rsp+90h] [rbp-70h] BYREF
  __int64 v40; // [rsp+98h] [rbp-68h]
  __int64 v41; // [rsp+A0h] [rbp-60h]
  PVOID v42; // [rsp+A8h] [rbp-58h] BYREF
  PVOID P; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v44; // [rsp+B8h] [rbp-48h]
  __int128 Source2; // [rsp+C0h] [rbp-40h] BYREF
  wchar_t Str2[40]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v47[80]; // [rsp+120h] [rbp+20h] BYREF

  v40 = a1;
  v44 = a6;
  v6 = 0LL;
  v34 = 0LL;
  v7 = 0LL;
  Handle = 0LL;
  v8 = 0LL;
  v35 = 0LL;
  LOBYTE(v37) = 0;
  v9 = 0LL;
  P = 0LL;
  v10 = 0LL;
  v30 = 0;
  BugCheckParameter2 = 0LL;
  v42 = 0LL;
  v39 = 0;
  v38 = 0;
  *a5 = 0LL;
  v31 = a4;
  v41 = a3;
  Source2 = 0LL;
  DeviceInterfaceName = PnpStringFromGuid(a2, Str2);
  if ( DeviceInterfaceName < 0 )
    goto LABEL_44;
  v32 = 512;
  Pool2 = ExAllocatePool2(256LL, 1024LL, 538996816LL);
  *a5 = (PVOID)Pool2;
  if ( !Pool2 )
    goto LABEL_43;
  DeviceInterfaceName = CmGetDeviceInterfaceName(&v32, Str2, v40, v41, 0, Pool2, 512, &v32);
  if ( DeviceInterfaceName != -1073741789 )
    goto LABEL_4;
  ExFreePoolWithTag(*a5, 0);
  v26 = v32;
  v27 = ExAllocatePool2(256LL, 2LL * v32, 538996816LL);
  *a5 = (PVOID)v27;
  if ( !v27 )
  {
LABEL_43:
    DeviceInterfaceName = -1073741670;
    goto LABEL_44;
  }
  LOBYTE(v28) = 0;
  DeviceInterfaceName = CmGetDeviceInterfaceName(&v32, Str2, v40, v41, v28, v27, v26, &v32);
LABEL_4:
  if ( DeviceInterfaceName < 0 )
    goto LABEL_44;
  v13 = (_DWORD *)v44;
  if ( v44 )
    *v13 = (unsigned __int8)PipCheckForDenyExecute(Str2) != 0 ? 0x800000 : 0;
  CurrentThread = KeGetCurrentThread();
  v15 = -1LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  if ( (int)PiDmGetObject(3LL, *a5, &BugCheckParameter2) >= 0 )
  {
    v24 = KeGetCurrentThread();
    --v24->KernelApcDisable;
    v9 = (_DWORD *)BugCheckParameter2;
    ExAcquirePushLockSharedEx(BugCheckParameter2, 0LL);
    v25 = v9[8];
    ExReleasePushLockEx((ULONG_PTR)v9, 0LL);
    KeLeaveCriticalRegion();
    v16 = v25 & 1;
  }
  else
  {
    v9 = (_DWORD *)BugCheckParameter2;
    v16 = v37;
  }
  v17 = PiDmAddCacheReferenceForObject(4LL, Str2, &v42);
  v10 = v42;
  DeviceInterfaceName = v17;
  if ( v17 < 0 )
    goto LABEL_51;
  v18 = v40;
  DeviceInterfaceName = PiDmAddCacheReferenceForObject(1LL, v40, &v35);
  if ( DeviceInterfaceName < 0 )
    goto LABEL_51;
  ObjectProperty = PnpGetObjectProperty(
                     PiPnpRtlCtx,
                     v18,
                     1,
                     0,
                     0LL,
                     (__int64)&DEVPKEY_Device_ContainerId,
                     (__int64)&v39,
                     (__int64)&Source2,
                     16,
                     (__int64)&v38,
                     0);
  DeviceInterfaceName = ObjectProperty;
  if ( ObjectProperty == -1073741275 )
  {
    Source2 = 0LL;
  }
  else if ( ObjectProperty < 0 )
  {
LABEL_51:
    v7 = Handle;
LABEL_52:
    v8 = v35;
    v6 = v34;
    goto LABEL_26;
  }
  if ( !(unsigned __int8)PnpIsNullGuid(&Source2) )
  {
    DeviceInterfaceName = PnpStringFromGuid(&Source2, v47);
    if ( DeviceInterfaceName < 0 )
      goto LABEL_51;
    DeviceInterfaceName = PiDmAddCacheReferenceForObject(5LL, v47, &v34);
    if ( DeviceInterfaceName < 0 )
      goto LABEL_51;
  }
  if ( !v16 )
  {
    DeviceInterfaceName = PiPnpRtlBeginOperation(&P);
    if ( DeviceInterfaceName < 0 )
      goto LABEL_51;
    DeviceInterfaceName = CmCreateDeviceInterface(
                            PiPnpRtlCtx,
                            (unsigned int)*a5,
                            2,
                            (unsigned int)&Handle,
                            (__int64)&v30,
                            0);
    if ( DeviceInterfaceName < 0 )
      goto LABEL_51;
  }
  if ( !v9 )
  {
    Object = PiDmGetObject(3LL, *a5, &BugCheckParameter2);
    v9 = (_DWORD *)BugCheckParameter2;
    DeviceInterfaceName = Object;
    if ( Object < 0 )
      goto LABEL_51;
  }
  PiDmListAddObject(0LL, v10, v9, 0LL);
  v21 = v30;
  do
    ++v15;
  while ( *(_WORD *)(v18 + 2 * v15) );
  v29 = v18;
  v7 = Handle;
  DeviceInterfaceName = PnpSetObjectProperty(
                          PiPnpRtlCtx,
                          (unsigned int)*a5,
                          3,
                          0LL,
                          (__int64)&DEVPKEY_Device_InstanceId,
                          18,
                          v29,
                          2 * (int)v15 + 2,
                          v30 != 0 ? 0x20000 : 0);
  if ( DeviceInterfaceName < 0 )
  {
    if ( v21 )
      CmDeleteDeviceInterface(*(_QWORD *)&PiPnpRtlCtx, *a5, 0LL);
    goto LABEL_52;
  }
  v8 = v35;
  PiDmListAddObject(1LL, v35, v9, 0LL);
  v6 = v34;
  if ( v34 )
    PiDmListAddObject(2LL, v34, v9, 0LL);
LABEL_26:
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegion();
  if ( DeviceInterfaceName >= 0 )
  {
    if ( !v31 )
    {
      LOBYTE(v22) = 1;
      DeviceInterfaceName = CmSetDeviceInterfacePathFormat(0LL, *a5, v22);
    }
    goto LABEL_29;
  }
LABEL_44:
  if ( *a5 )
  {
    ExFreePoolWithTag(*a5, 0);
    *a5 = 0LL;
  }
LABEL_29:
  if ( v7 )
    ZwClose(v7);
  if ( P )
    PiPnpRtlEndOperation(P);
  if ( v9 )
    PiDmObjectRelease(v9);
  if ( v10 )
  {
    PiDmRemoveCacheReferenceForObject(*((unsigned int *)v10 + 7), v10[2]);
    PiDmObjectRelease(v10);
  }
  if ( v8 )
  {
    PiDmRemoveCacheReferenceForObject(*((unsigned int *)v8 + 7), v8[2]);
    PiDmObjectRelease(v8);
  }
  if ( v6 )
  {
    PiDmRemoveCacheReferenceForObject(*((unsigned int *)v6 + 7), v6[2]);
    PiDmObjectRelease(v6);
  }
  return (unsigned int)DeviceInterfaceName;
}
