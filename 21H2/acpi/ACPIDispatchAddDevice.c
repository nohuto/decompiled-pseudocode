/*
 * XREFs of ACPIDispatchAddDevice @ 0x1C0026D30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001C0C (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0010020 (WPP_RECORDER_SF_Lqss.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1C001A120 (ExAllocateFromNPagedLookasideList.c)
 *     WPP_RECORDER_SF_ @ 0x1C00234AC (WPP_RECORDER_SF_.c)
 *     RtlStringCchCopyA @ 0x1C0027100 (RtlStringCchCopyA.c)
 *     ACPIGetPortRangeInterfaces @ 0x1C0027158 (ACPIGetPortRangeInterfaces.c)
 *     memset @ 0x1C0030080 (memset.c)
 *     ExFreeToNPagedLookasideList @ 0x1C00309D4 (ExFreeToNPagedLookasideList.c)
 *     WPP_RECORDER_SF_sL @ 0x1C004B8F4 (WPP_RECORDER_SF_sL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C0052650 (WPP_RECORDER_SF_qq.c)
 *     ACPICreateRootSymbolicLink @ 0x1C009EBEC (ACPICreateRootSymbolicLink.c)
 *     AcpiSetupNativeMethodInterface @ 0x1C009ECE8 (AcpiSetupNativeMethodInterface.c)
 */

__int64 __fastcall ACPIDispatchAddDevice(PDRIVER_OBJECT DriverObject, PDEVICE_OBJECT DeviceObject)
{
  char v2; // bl
  struct _DEVICE_OBJECT *v5; // r14
  char *Pool2; // r15
  char *v7; // rax
  char *v8; // r12
  NTSTATUS v9; // eax
  int v10; // edx
  unsigned int v11; // edi
  int v12; // edx
  _QWORD *v13; // rax
  _QWORD *v14; // rsi
  KIRQL v15; // al
  KIRQL v16; // al
  __int64 v17; // rdx
  void *v18; // rcx
  void *v19; // rax
  PDEVICE_OBJECT SourceDevice; // [rsp+90h] [rbp+18h] BYREF

  v2 = 0;
  SourceDevice = 0LL;
  v5 = 0LL;
  Pool2 = (char *)ExAllocatePool2(64LL, 14LL, 1399874369LL);
  if ( !Pool2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        6u,
        0xBu,
        (__int64)&WPP_6f88517ea7123f8ddbeafbeda42a4256_Traceguids,
        14);
    v11 = -1073741670;
    goto LABEL_31;
  }
  RtlStringCchCopyA(Pool2, 0xEuLL, "ACPI\\PNP0C08");
  v7 = (char *)ExAllocatePool2(64LL, 11LL, 1399874369LL);
  v8 = v7;
  if ( v7 )
  {
    RtlStringCchCopyA(v7, 0xBuLL, "0x5F534750");
    v9 = IoCreateDevice(DriverObject, 0, 0LL, 0x32u, 0x100u, 0, &SourceDevice);
    v11 = v9;
    if ( v9 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_sL(
          WPP_GLOBAL_Control->DeviceExtension,
          v10,
          6,
          13,
          (__int64)&WPP_6f88517ea7123f8ddbeafbeda42a4256_Traceguids,
          (__int64)Pool2,
          v9);
      SourceDevice = 0LL;
      goto LABEL_27;
    }
    v5 = IoAttachDeviceToDeviceStack(SourceDevice, DeviceObject);
    if ( !v5 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v12) = 2;
        WPP_RECORDER_SF_qq(
          WPP_GLOBAL_Control->DeviceExtension,
          v12,
          6,
          14,
          (__int64)&WPP_6f88517ea7123f8ddbeafbeda42a4256_Traceguids,
          (char)SourceDevice,
          (char)DeviceObject);
      }
      v11 = -1073741810;
      goto LABEL_27;
    }
    v13 = ExAllocateFromNPagedLookasideList(&DeviceExtensionLookAsideList);
    v14 = v13;
    if ( v13 )
    {
      memset(v13, 0, 0x3F0uLL);
      *((_DWORD *)v14 + 183) = 1;
      _InterlockedIncrement((volatile signed __int32 *)v14 + 182);
      v15 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
      SourceDevice->DeviceExtension = v14;
      v14[96] = SourceDevice;
      v14[97] = v5;
      v14[76] = Pool2;
      v14[3] = &AcpiFdoIrpDispatch;
      v14[98] = DeviceObject;
      *((_DWORD *)v14 + 4) = 1599293264;
      v14[77] = v8;
      *((_DWORD *)v14 + 127) = 0;
      *((_DWORD *)v14 + 128) = 1;
      *((_DWORD *)v14 + 129) = 1;
      *((_DWORD *)v14 + 130) = 1;
      *((_DWORD *)v14 + 131) = 1;
      *((_DWORD *)v14 + 132) = 4;
      *(_QWORD *)((char *)v14 + 532) = 4LL;
      *((_DWORD *)v14 + 135) = 0;
      *((_DWORD *)v14 + 137) = 1;
      KeReleaseSpinLock(&AcpiDeviceTreeLock, v15);
      _InterlockedOr64(v14 + 1, 0x1E00000200010uLL);
      *((_DWORD *)v14 + 176) = -1;
      v14[101] = v14 + 100;
      v14[100] = v14 + 100;
      v14[103] = v14 + 102;
      v14[102] = v14 + 102;
      v14[105] = v14 + 104;
      v14[104] = v14 + 104;
      v14[107] = v14 + 106;
      v14[106] = v14 + 106;
      v14[74] = v14 + 73;
      v14[73] = v14 + 73;
      v14[90] = v14 + 89;
      v14[89] = v14 + 89;
      *v14 = &gAcpiTriageInfo;
      ::DriverObject = DriverObject;
      v16 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
      RootDeviceExtension = (ULONG_PTR)v14;
      KeReleaseSpinLock(&AcpiDeviceTreeLock, v16);
      ACPIGetPortRangeInterfaces(DeviceObject);
      if ( IoWMIRegistrationControl(SourceDevice, 1u) < 0
        && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          1u,
          0xAu,
          (__int64)&WPP_3ad0379a4aff33c3a6e5470e3717ea43_Traceguids);
      }
      AcpiSetupNativeMethodInterface();
      SourceDevice->Flags &= ~0x80u;
      ACPICreateRootSymbolicLink(DeviceObject);
      IoRegisterPlugPlayNotification(
        EventCategoryDeviceInterfaceChange,
        1u,
        &GUID_PRM_DEVICE,
        ::DriverObject,
        AcpiPrmNotifyInterfaceChange,
        0LL,
        &NotificationEntry);
      v17 = v14[1];
      v2 = (char)v14;
      v18 = &unk_1C00BABB3;
      v19 = &unk_1C00BABB3;
      if ( (v17 & 0x200000000000LL) != 0 )
      {
        v18 = (void *)v14[76];
        if ( (v17 & 0x400000000000LL) != 0 )
          v19 = (void *)v14[77];
      }
      goto LABEL_10;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x16u,
        0xFu,
        (__int64)&WPP_6f88517ea7123f8ddbeafbeda42a4256_Traceguids);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      6u,
      0xCu,
      (__int64)&WPP_6f88517ea7123f8ddbeafbeda42a4256_Traceguids,
      11);
  }
  v11 = -1073741670;
LABEL_27:
  ExFreePoolWithTag(Pool2, 0);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  if ( v5 )
    IoDetachDevice(v5);
LABEL_31:
  if ( SourceDevice )
    IoDeleteDevice(SourceDevice);
  v18 = &unk_1C00BABB3;
  v19 = &unk_1C00BABB3;
LABEL_10:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Lqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      6u,
      0x10u,
      (__int64)&WPP_6f88517ea7123f8ddbeafbeda42a4256_Traceguids,
      v11,
      v2,
      (__int64)v18,
      (__int64)v19);
  return v11;
}
