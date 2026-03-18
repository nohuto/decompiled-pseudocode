/*
 * XREFs of IopRegisterDeviceInterface @ 0x140734FE4
 * Callers:
 *     IoRegisterDeviceInterface @ 0x140734E90 (IoRegisterDeviceInterface.c)
 *     PiSwIrpInterfaceRegister @ 0x140737A8C (PiSwIrpInterfaceRegister.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x140755774 (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiCMRegisterDeviceInterface @ 0x1408ADC1C (PiCMRegisterDeviceInterface.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140207FC0 (ExReleasePushLockEx.c)
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140208CF0 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     _PnpStringFromGuid @ 0x1405D750C (_PnpStringFromGuid.c)
 *     PiPnpRtlEndOperation @ 0x1405D7864 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x1405D7FD4 (PiPnpRtlBeginOperation.c)
 *     PiDmGetObject @ 0x1405DA3BC (PiDmGetObject.c)
 *     PiDmObjectRelease @ 0x1405DA740 (PiDmObjectRelease.c)
 *     _PnpGetObjectProperty @ 0x1405DB4CC (_PnpGetObjectProperty.c)
 *     PnpIsNullGuid @ 0x140648C04 (PnpIsNullGuid.c)
 *     _CmSetDeviceInterfacePathFormat @ 0x1406BEAE0 (_CmSetDeviceInterfacePathFormat.c)
 *     _CmDeleteDeviceInterface @ 0x14071A0E4 (_CmDeleteDeviceInterface.c)
 *     _PnpSetObjectProperty @ 0x1407260F4 (_PnpSetObjectProperty.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x14073546C (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmListAddObject @ 0x14073551C (PiDmListAddObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x1407357C4 (PiDmAddCacheReferenceForObject.c)
 *     PipCheckForDenyExecute @ 0x14073592C (PipCheckForDenyExecute.c)
 *     _CmGetDeviceInterfaceName @ 0x140735A90 (_CmGetDeviceInterfaceName.c)
 *     _CmCreateDeviceInterface @ 0x140736B40 (_CmCreateDeviceInterface.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
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
  PVOID v32; // [rsp+80h] [rbp-80h] BYREF
  int v33; // [rsp+88h] [rbp-78h]
  int v34; // [rsp+8Ch] [rbp-74h] BYREF
  int v35; // [rsp+90h] [rbp-70h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp-68h] BYREF
  __int64 v37; // [rsp+A0h] [rbp-60h]
  PVOID P; // [rsp+A8h] [rbp-58h] BYREF
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
  P = 0LL;
  v9 = 0LL;
  v26 = 0;
  BugCheckParameter2 = 0LL;
  v32 = 0LL;
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
  DeviceInterfaceName = PiDmAddCacheReferenceForObject(4LL, Str2, &v32);
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
      || (DeviceInterfaceName = PiPnpRtlBeginOperation(&P), DeviceInterfaceName >= 0)
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
        PiDmListAddObject(0LL, v32, v16, 0LL);
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
    v9 = (unsigned int *)v32;
    goto LABEL_31;
  }
  v7 = (unsigned int *)v30;
  v8 = (unsigned int *)v31;
  v9 = (unsigned int *)v32;
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
