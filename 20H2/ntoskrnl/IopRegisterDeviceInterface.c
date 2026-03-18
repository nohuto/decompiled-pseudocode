/*
 * XREFs of IopRegisterDeviceInterface @ 0x140744474
 * Callers:
 *     IoRegisterDeviceInterface @ 0x140744320 (IoRegisterDeviceInterface.c)
 *     PiSwIrpInterfaceRegister @ 0x140746F1C (PiSwIrpInterfaceRegister.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x1407643B4 (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiCMRegisterDeviceInterface @ 0x1408B374C (PiCMRegisterDeviceInterface.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140221C70 (ExAcquireResourceExclusiveLite.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     PiPnpRtlBeginOperation @ 0x14063C8BC (PiPnpRtlBeginOperation.c)
 *     PiDmGetObject @ 0x14063EC9C (PiDmGetObject.c)
 *     PiDmObjectRelease @ 0x14063F020 (PiDmObjectRelease.c)
 *     _PnpGetObjectProperty @ 0x14063FDAC (_PnpGetObjectProperty.c)
 *     PiPnpRtlEndOperation @ 0x14064120C (PiPnpRtlEndOperation.c)
 *     _PnpStringFromGuid @ 0x1406413C4 (_PnpStringFromGuid.c)
 *     PnpIsNullGuid @ 0x14064AEA0 (PnpIsNullGuid.c)
 *     _CmSetDeviceInterfacePathFormat @ 0x1406E9420 (_CmSetDeviceInterfacePathFormat.c)
 *     _CmDeleteDeviceInterface @ 0x1407280D4 (_CmDeleteDeviceInterface.c)
 *     _PnpSetObjectProperty @ 0x140734B84 (_PnpSetObjectProperty.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1407448FC (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmListAddObject @ 0x1407449AC (PiDmListAddObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x140744C54 (PiDmAddCacheReferenceForObject.c)
 *     PipCheckForDenyExecute @ 0x140744DBC (PipCheckForDenyExecute.c)
 *     _CmGetDeviceInterfaceName @ 0x140744F1C (_CmGetDeviceInterfaceName.c)
 *     _CmCreateDeviceInterface @ 0x140745FD0 (_CmCreateDeviceInterface.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
  __int64 v18; // rcx
  struct _KTHREAD *v20; // rax
  ULONG_PTR v21; // rbx
  int v22; // edi
  unsigned int v23; // ebx
  PVOID v24; // rax
  int v25; // [rsp+20h] [rbp-E0h]
  char v26; // [rsp+60h] [rbp-A0h] BYREF
  char v27; // [rsp+61h] [rbp-9Fh]
  unsigned int v28; // [rsp+64h] [rbp-9Ch] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp-98h] BYREF
  PVOID v30; // [rsp+70h] [rbp-90h] BYREF
  PVOID v31; // [rsp+78h] [rbp-88h] BYREF
  PVOID P; // [rsp+80h] [rbp-80h] BYREF
  int v33; // [rsp+88h] [rbp-78h]
  int v34; // [rsp+8Ch] [rbp-74h] BYREF
  int v35; // [rsp+90h] [rbp-70h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp-68h] BYREF
  __int64 v37; // [rsp+A0h] [rbp-60h]
  PVOID v38; // [rsp+A8h] [rbp-58h] BYREF
  __int128 Source2; // [rsp+B0h] [rbp-50h] BYREF
  wchar_t Str2[40]; // [rsp+C0h] [rbp-40h] BYREF
  wchar_t v41[40]; // [rsp+110h] [rbp+10h] BYREF

  v30 = 0LL;
  Handle = 0LL;
  *a5 = 0LL;
  v7 = 0LL;
  v31 = 0LL;
  v8 = 0LL;
  LOBYTE(v33) = 0;
  v38 = 0LL;
  v9 = 0LL;
  v26 = 0;
  BugCheckParameter2 = 0LL;
  P = 0LL;
  v35 = 0;
  v34 = 0;
  v27 = a4;
  v37 = a3;
  Source2 = 0LL;
  DeviceInterfaceName = PnpStringFromGuid(a2, Str2);
  if ( DeviceInterfaceName < 0 )
    goto LABEL_46;
  v28 = 512;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x400uLL, 0x20207050u);
  *a5 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_45;
  DeviceInterfaceName = CmGetDeviceInterfaceName(&v28, Str2, a1, v37, 0, PoolWithTag, 512, &v28);
  if ( DeviceInterfaceName != -1073741789 )
    goto LABEL_4;
  ExFreePoolWithTag(*a5, 0);
  v23 = v28;
  v24 = ExAllocatePoolWithTag(PagedPool, 2LL * v28, 0x20207050u);
  *a5 = v24;
  if ( !v24 )
  {
LABEL_45:
    DeviceInterfaceName = -1073741670;
    goto LABEL_46;
  }
  LOBYTE(v25) = 0;
  DeviceInterfaceName = CmGetDeviceInterfaceName(&v28, Str2, a1, v37, v25, v24, v23, &v28);
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
    v20 = KeGetCurrentThread();
    --v20->KernelApcDisable;
    v21 = BugCheckParameter2;
    ExAcquirePushLockSharedEx(BugCheckParameter2, 0LL);
    v22 = *(_DWORD *)(v21 + 32);
    ExReleasePushLockEx(v21, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v14 = v22 & 1;
  }
  else
  {
    v14 = v33;
  }
  DeviceInterfaceName = PiDmAddCacheReferenceForObject(4LL, Str2, &P);
  if ( DeviceInterfaceName < 0 )
    goto LABEL_27;
  DeviceInterfaceName = PiDmAddCacheReferenceForObject(1LL, a1, &v31);
  if ( DeviceInterfaceName < 0 )
    goto LABEL_27;
  ObjectProperty = PnpGetObjectProperty(
                     *(__int64 *)&PiPnpRtlCtx,
                     a1,
                     1LL,
                     0LL,
                     0LL,
                     (__int64)&DEVPKEY_Device_ContainerId,
                     (__int64)&v35,
                     (__int64)&Source2,
                     16,
                     (__int64)&v34,
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
    || (DeviceInterfaceName = PnpStringFromGuid((int *)&Source2, v41), DeviceInterfaceName >= 0)
    && (DeviceInterfaceName = PiDmAddCacheReferenceForObject(5LL, v41, &v30), DeviceInterfaceName >= 0) )
  {
    if ( v14
      || (DeviceInterfaceName = PiPnpRtlBeginOperation(&v38), DeviceInterfaceName >= 0)
      && (DeviceInterfaceName = CmCreateDeviceInterface(
                                  PiPnpRtlCtx,
                                  (unsigned int)*a5,
                                  2,
                                  (unsigned int)&Handle,
                                  (__int64)&v26,
                                  0),
          DeviceInterfaceName >= 0) )
    {
      v16 = BugCheckParameter2;
      if ( BugCheckParameter2 )
      {
LABEL_22:
        PiDmListAddObject(0LL, P, v16, 0LL);
        v17 = v26;
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
                                v26 != 0 ? 0x20000 : 0);
        if ( DeviceInterfaceName < 0 )
        {
          if ( v17 )
            CmDeleteDeviceInterface(*(__int64 *)&PiPnpRtlCtx, (__int64)*a5, 0);
        }
        else
        {
          PiDmListAddObject(1LL, v31, v16, 0LL);
          if ( v30 )
            PiDmListAddObject(2LL, v30, v16, 0LL);
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
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( DeviceInterfaceName >= 0 )
  {
    if ( !v27 )
      DeviceInterfaceName = CmSetDeviceInterfacePathFormat(v18, (WCHAR *)*a5, 1);
    v7 = (unsigned int *)v30;
    v8 = (unsigned int *)v31;
    v9 = (unsigned int *)P;
    goto LABEL_31;
  }
  v7 = (unsigned int *)v30;
  v8 = (unsigned int *)v31;
  v9 = (unsigned int *)P;
LABEL_46:
  if ( *a5 )
  {
    ExFreePoolWithTag(*a5, 0);
    *a5 = 0LL;
  }
LABEL_31:
  if ( Handle )
    ZwClose(Handle);
  if ( v38 )
    PiPnpRtlEndOperation((PVOID **)v38);
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
