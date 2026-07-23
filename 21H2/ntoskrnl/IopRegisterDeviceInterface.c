/*
 * XREFs of IopRegisterDeviceInterface @ 0x140748630
 * Callers:
 *     IoRegisterDeviceInterface @ 0x140749090 (IoRegisterDeviceInterface.c)
 *     PiSwIrpInterfaceRegister @ 0x14074D2D8 (PiSwIrpInterfaceRegister.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x140767B64 (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiCMRegisterDeviceInterface @ 0x1408B0E7C (PiCMRegisterDeviceInterface.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     PiPnpRtlEndOperation @ 0x140628F64 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x140629498 (PiPnpRtlBeginOperation.c)
 *     PiDmGetObject @ 0x14062B87C (PiDmGetObject.c)
 *     PiDmObjectRelease @ 0x14062BC00 (PiDmObjectRelease.c)
 *     _PnpGetObjectProperty @ 0x14062C98C (_PnpGetObjectProperty.c)
 *     _PnpStringFromGuid @ 0x14062D230 (_PnpStringFromGuid.c)
 *     _CmSetDeviceInterfacePathFormat @ 0x14062F75C (_CmSetDeviceInterfacePathFormat.c)
 *     PnpIsNullGuid @ 0x1406FEAA0 (PnpIsNullGuid.c)
 *     _CmDeleteDeviceInterface @ 0x14072BE74 (_CmDeleteDeviceInterface.c)
 *     PiDmListAddObject @ 0x140735694 (PiDmListAddObject.c)
 *     _PnpSetObjectProperty @ 0x140745DE4 (_PnpSetObjectProperty.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x140748AB8 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x140748B68 (PiDmAddCacheReferenceForObject.c)
 *     PipCheckForDenyExecute @ 0x140748CD0 (PipCheckForDenyExecute.c)
 *     _CmGetDeviceInterfaceName @ 0x140748E30 (_CmGetDeviceInterfaceName.c)
 *     _CmCreateDeviceInterface @ 0x14074B9EC (_CmCreateDeviceInterface.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall IopRegisterDeviceInterface(__int64 a1, int *a2, __int64 a3, char a4, PVOID *a5, _DWORD *a6)
{
  unsigned int *v7; // rdi
  unsigned int *v8; // rsi
  unsigned int *v9; // r14
  int DeviceInterfaceName; // ebx
  PVOID PoolWithTag; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v13; // rsi
  char v14; // di
  int ObjectProperty; // eax
  ULONG_PTR v16; // rdi
  char v17; // r14
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  struct _KTHREAD *v23; // rax
  ULONG_PTR v24; // rbx
  int v25; // edi
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned int v29; // ebx
  PVOID v30; // rax
  int v31; // [rsp+20h] [rbp-E0h]
  char v32; // [rsp+60h] [rbp-A0h] BYREF
  char v33; // [rsp+61h] [rbp-9Fh]
  unsigned int v34; // [rsp+64h] [rbp-9Ch] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp-98h] BYREF
  PVOID v36; // [rsp+70h] [rbp-90h] BYREF
  PVOID v37; // [rsp+78h] [rbp-88h] BYREF
  PVOID v38; // [rsp+80h] [rbp-80h] BYREF
  int v39; // [rsp+88h] [rbp-78h]
  int v40; // [rsp+8Ch] [rbp-74h] BYREF
  int v41; // [rsp+90h] [rbp-70h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp-68h] BYREF
  __int64 v43; // [rsp+A0h] [rbp-60h]
  PVOID P; // [rsp+A8h] [rbp-58h] BYREF
  __int128 Source2; // [rsp+B0h] [rbp-50h] BYREF
  wchar_t Str2[40]; // [rsp+C0h] [rbp-40h] BYREF
  wchar_t v47[40]; // [rsp+110h] [rbp+10h] BYREF

  v36 = 0LL;
  Handle = 0LL;
  *a5 = 0LL;
  v7 = 0LL;
  v37 = 0LL;
  v8 = 0LL;
  LOBYTE(v39) = 0;
  P = 0LL;
  v9 = 0LL;
  v32 = 0;
  BugCheckParameter2 = 0LL;
  v38 = 0LL;
  v41 = 0;
  v40 = 0;
  v33 = a4;
  v43 = a3;
  Source2 = 0LL;
  DeviceInterfaceName = PnpStringFromGuid(a2, Str2);
  if ( DeviceInterfaceName < 0 )
    goto LABEL_46;
  v34 = 512;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x400uLL, 0x20207050u);
  *a5 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_45;
  DeviceInterfaceName = CmGetDeviceInterfaceName(&v34, Str2, a1, v43, 0, PoolWithTag, 512, &v34);
  if ( DeviceInterfaceName != -1073741789 )
    goto LABEL_4;
  ExFreePoolWithTag(*a5, 0);
  v29 = v34;
  v30 = ExAllocatePoolWithTag(PagedPool, 2LL * v34, 0x20207050u);
  *a5 = v30;
  if ( !v30 )
  {
LABEL_45:
    DeviceInterfaceName = -1073741670;
    goto LABEL_46;
  }
  LOBYTE(v31) = 0;
  DeviceInterfaceName = CmGetDeviceInterfaceName(&v34, Str2, a1, v43, v31, v30, v29, &v34);
LABEL_4:
  if ( DeviceInterfaceName < 0 )
    goto LABEL_46;
  if ( a6 )
    *a6 = (unsigned __int8)PipCheckForDenyExecute(Str2) != 0 ? 0x800000 : 0;
  CurrentThread = KeGetCurrentThread();
  v13 = -1LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  if ( (int)PiDmGetObject(3LL, (__int64)*a5, (__int64 *)&BugCheckParameter2) >= 0 )
  {
    v23 = KeGetCurrentThread();
    --v23->KernelApcDisable;
    v24 = BugCheckParameter2;
    ExAcquirePushLockSharedEx(BugCheckParameter2, 0LL);
    v25 = *(_DWORD *)(v24 + 32);
    ExReleasePushLockEx(v24, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v26, v27, v28);
    v14 = v25 & 1;
  }
  else
  {
    v14 = v39;
  }
  DeviceInterfaceName = PiDmAddCacheReferenceForObject(4LL, Str2, &v38);
  if ( DeviceInterfaceName < 0 )
    goto LABEL_27;
  DeviceInterfaceName = PiDmAddCacheReferenceForObject(1LL, a1, &v37);
  if ( DeviceInterfaceName < 0 )
    goto LABEL_27;
  ObjectProperty = PnpGetObjectProperty(
                     *(__int64 *)&PiPnpRtlCtx,
                     a1,
                     1LL,
                     0LL,
                     0LL,
                     (__int64)&DEVPKEY_Device_ContainerId,
                     (__int64)&v41,
                     (__int64)&Source2,
                     16,
                     (__int64)&v40,
                     0);
  DeviceInterfaceName = ObjectProperty;
  if ( ObjectProperty == -1073741275 )
  {
    Source2 = 0LL;
  }
  else if ( ObjectProperty < 0 )
  {
    goto LABEL_27;
  }
  if ( PnpIsNullGuid(&Source2)
    || (DeviceInterfaceName = PnpStringFromGuid((int *)&Source2, v47), DeviceInterfaceName >= 0)
    && (DeviceInterfaceName = PiDmAddCacheReferenceForObject(5LL, v47, &v36), DeviceInterfaceName >= 0) )
  {
    if ( v14
      || (DeviceInterfaceName = PiPnpRtlBeginOperation(&P), DeviceInterfaceName >= 0)
      && (DeviceInterfaceName = CmCreateDeviceInterface(
                                  PiPnpRtlCtx,
                                  (unsigned int)*a5,
                                  2,
                                  (unsigned int)&Handle,
                                  (__int64)&v32,
                                  0),
          DeviceInterfaceName >= 0) )
    {
      v16 = BugCheckParameter2;
      if ( BugCheckParameter2 )
      {
LABEL_22:
        PiDmListAddObject(0, (ULONG_PTR)v38, v16, 0LL);
        v17 = v32;
        do
          ++v13;
        while ( *(_WORD *)(a1 + 2 * v13) );
        DeviceInterfaceName = PnpSetObjectProperty(
                                *(__int64 *)&PiPnpRtlCtx,
                                (__int64)*a5,
                                3u,
                                (__int64)Handle,
                                0LL,
                                (__int64)&DEVPKEY_Device_InstanceId,
                                18,
                                a1,
                                2 * (int)v13 + 2,
                                v32 != 0 ? 0x20000 : 0);
        if ( DeviceInterfaceName < 0 )
        {
          if ( v17 )
            CmDeleteDeviceInterface(*(__int64 *)&PiPnpRtlCtx, (__int64)*a5, 0);
        }
        else
        {
          PiDmListAddObject(1, (ULONG_PTR)v37, v16, 0LL);
          if ( v36 )
            PiDmListAddObject(2, (ULONG_PTR)v36, v16, 0LL);
        }
        goto LABEL_27;
      }
      DeviceInterfaceName = PiDmGetObject(3LL, (__int64)*a5, (__int64 *)&BugCheckParameter2);
      if ( DeviceInterfaceName >= 0 )
      {
        v16 = BugCheckParameter2;
        goto LABEL_22;
      }
    }
  }
LABEL_27:
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v18, v19, v20);
  if ( DeviceInterfaceName >= 0 )
  {
    if ( !v33 )
      DeviceInterfaceName = CmSetDeviceInterfacePathFormat(v21, (__int64 *)*a5, 1);
    v7 = (unsigned int *)v36;
    v8 = (unsigned int *)v37;
    v9 = (unsigned int *)v38;
    goto LABEL_31;
  }
  v7 = (unsigned int *)v36;
  v8 = (unsigned int *)v37;
  v9 = (unsigned int *)v38;
LABEL_46:
  if ( *a5 )
  {
    ExFreePoolWithTag(*a5, 0);
    *a5 = 0LL;
  }
LABEL_31:
  if ( Handle )
    ZwClose(Handle);
  if ( P )
    PiPnpRtlEndOperation((PVOID **)P);
  if ( BugCheckParameter2 )
    PiDmObjectRelease((unsigned int *)BugCheckParameter2);
  if ( v9 )
  {
    PiDmRemoveCacheReferenceForObject(v9[7], *((_QWORD *)v9 + 2));
    PiDmObjectRelease(v9);
  }
  if ( v8 )
  {
    PiDmRemoveCacheReferenceForObject(v8[7], *((_QWORD *)v8 + 2));
    PiDmObjectRelease(v8);
  }
  if ( v7 )
  {
    PiDmRemoveCacheReferenceForObject(v7[7], *((_QWORD *)v7 + 2));
    PiDmObjectRelease(v7);
  }
  return (unsigned int)DeviceInterfaceName;
}
