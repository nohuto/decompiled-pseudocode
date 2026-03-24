/*
 * XREFs of ACPIDispatchAddDevice @ 0x1C0025260
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_L @ 0x1C0002ACC (WPP_RECORDER_SF_L.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000EA0C (WPP_RECORDER_SF_qq.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1C001C8A4 (ExAllocateFromNPagedLookasideList.c)
 *     WPP_RECORDER_SF_ @ 0x1C001D78C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C00209B0 (WPP_RECORDER_SF_Lqss.c)
 *     RtlStringCchCopyA @ 0x1C0022F50 (RtlStringCchCopyA.c)
 *     ACPIGetPortRangeInterfaces @ 0x1C0026ABC (ACPIGetPortRangeInterfaces.c)
 *     memset @ 0x1C0032480 (memset.c)
 *     ExFreeToNPagedLookasideList @ 0x1C004C9C8 (ExFreeToNPagedLookasideList.c)
 *     WPP_RECORDER_SF_sL @ 0x1C004CB4C (WPP_RECORDER_SF_sL.c)
 *     ACPICreateRootSymbolicLink @ 0x1C009F4D4 (ACPICreateRootSymbolicLink.c)
 *     AcpiSetupNativeMethodInterface @ 0x1C009F5D0 (AcpiSetupNativeMethodInterface.c)
 */

__int64 __fastcall ACPIDispatchAddDevice(PDRIVER_OBJECT DriverObject, struct _DEVICE_OBJECT *a2)
{
  char v2; // bl
  _QWORD *v4; // rsi
  struct _DEVICE_OBJECT *v5; // r12
  char *PoolWithTag; // rax
  char *v7; // r13
  PVOID v8; // rax
  PVOID v9; // rbp
  NTSTATUS v10; // eax
  int v11; // edx
  int v12; // edi
  _QWORD *v13; // rax
  KIRQL v14; // al
  KIRQL v15; // al
  void *v16; // rax
  void *v17; // rdx
  __int64 v18; // rcx
  PDEVICE_OBJECT SourceDevice; // [rsp+A0h] [rbp+18h] BYREF
  PVOID P; // [rsp+A8h] [rbp+20h]

  v2 = 0;
  SourceDevice = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xEuLL, 0x53706341u);
  v7 = PoolWithTag;
  if ( !PoolWithTag )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_L(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        6u,
        0xBu,
        (__int64)&WPP_6862a416d8603aba0a2e2af82566a863_Traceguids,
        14);
    v12 = -1073741670;
    goto LABEL_26;
  }
  RtlStringCchCopyA(PoolWithTag, 0xEuLL, "ACPI\\PNP0C08");
  v8 = ExAllocatePoolWithTag(NonPagedPoolNx, 0xBuLL, 0x53706341u);
  P = v8;
  v9 = v8;
  if ( v8 )
  {
    RtlStringCchCopyA((NTSTRSAFE_PSTR)v8, 0xBuLL, "0x5F534750");
    v10 = IoCreateDevice(DriverObject, 0, 0LL, 0x32u, 0x100u, 0, &SourceDevice);
    v12 = v10;
    if ( v10 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_sL(
          WPP_GLOBAL_Control->DeviceExtension,
          v11,
          6,
          13,
          (__int64)&WPP_6862a416d8603aba0a2e2af82566a863_Traceguids,
          (__int64)v7,
          v10);
      SourceDevice = 0LL;
LABEL_8:
      if ( v12 >= 0 )
        goto LABEL_9;
      goto LABEL_22;
    }
    v5 = IoAttachDeviceToDeviceStack(SourceDevice, a2);
    if ( !v5 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qq(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          6u,
          0xEu,
          (__int64)&WPP_6862a416d8603aba0a2e2af82566a863_Traceguids,
          SourceDevice,
          a2);
      v12 = -1073741810;
      goto LABEL_22;
    }
    v13 = ExAllocateFromNPagedLookasideList(&DeviceExtensionLookAsideList);
    v4 = v13;
    if ( v13 )
    {
      memset(v13, 0, 0x3C8uLL);
      *((_DWORD *)v4 + 173) = 1;
      _InterlockedIncrement((volatile signed __int32 *)v4 + 172);
      v14 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
      SourceDevice->DeviceExtension = v4;
      v4[91] = SourceDevice;
      v4[93] = a2;
      v4[3] = &AcpiFdoIrpDispatch;
      v4[72] = v9;
      *((_DWORD *)v4 + 118) = 1;
      *((_DWORD *)v4 + 119) = 1;
      *((_DWORD *)v4 + 120) = 1;
      *((_DWORD *)v4 + 121) = 1;
      *((_DWORD *)v4 + 127) = 1;
      *((_DWORD *)v4 + 122) = 4;
      *(_QWORD *)((char *)v4 + 492) = 4LL;
      v4[92] = v5;
      *((_DWORD *)v4 + 4) = 1599293264;
      v4[71] = v7;
      *((_DWORD *)v4 + 117) = 0;
      *((_DWORD *)v4 + 125) = 0;
      KeReleaseSpinLock(&AcpiDeviceTreeLock, v14);
      _InterlockedOr64(v4 + 1, 0x1E00000200010uLL);
      *((_DWORD *)v4 + 166) = -1;
      v4[96] = v4 + 95;
      v4[95] = v4 + 95;
      v4[98] = v4 + 97;
      v4[97] = v4 + 97;
      v4[100] = v4 + 99;
      v4[99] = v4 + 99;
      v4[102] = v4 + 101;
      v4[101] = v4 + 101;
      v4[69] = v4 + 68;
      v4[68] = v4 + 68;
      v4[85] = v4 + 84;
      v4[84] = v4 + 84;
      *v4 = &gAcpiTriageInfo;
      v15 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
      RootDeviceExtension = (ULONG_PTR)v4;
      KeReleaseSpinLock(&AcpiDeviceTreeLock, v15);
      ACPIGetPortRangeInterfaces(a2);
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
      ACPICreateRootSymbolicLink(a2);
      goto LABEL_8;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x16u,
        0xFu,
        (__int64)&WPP_6862a416d8603aba0a2e2af82566a863_Traceguids);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_L(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      6u,
      0xCu,
      (__int64)&WPP_6862a416d8603aba0a2e2af82566a863_Traceguids,
      11);
  }
  v12 = -1073741670;
LABEL_22:
  ExFreePoolWithTag(v7, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v5 )
    IoDetachDevice(v5);
LABEL_26:
  if ( SourceDevice )
    IoDeleteDevice(SourceDevice);
  if ( v4 )
    ExFreeToNPagedLookasideList(&DeviceExtensionLookAsideList, v4);
LABEL_9:
  v16 = &unk_1C00BABB3;
  v17 = &unk_1C00BABB3;
  if ( v4 )
  {
    v18 = v4[1];
    v2 = (char)v4;
    if ( (v18 & 0x200000000000LL) != 0 )
    {
      v16 = (void *)v4[71];
      if ( (v18 & 0x400000000000LL) != 0 )
        v17 = (void *)v4[72];
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Lqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      6u,
      0x10u,
      (__int64)&WPP_6862a416d8603aba0a2e2af82566a863_Traceguids,
      v12,
      v2,
      (__int64)v16,
      (__int64)v17);
  return (unsigned int)v12;
}
