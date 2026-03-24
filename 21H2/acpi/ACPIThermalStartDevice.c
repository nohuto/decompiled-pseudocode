/*
 * XREFs of ACPIThermalStartDevice @ 0x1C009A540
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002D40 (ACPIInternalGetDeviceExtension.c)
 *     ACPIInternalSetDeviceInterface @ 0x1C000D230 (ACPIInternalSetDeviceInterface.c)
 *     ACPIDeviceInternalDeviceRequest @ 0x1C000DD10 (ACPIDeviceInternalDeviceRequest.c)
 *     ACPIThermalAcquireCoolingInterfaces @ 0x1C000DE20 (ACPIThermalAcquireCoolingInterfaces.c)
 *     ACPIRegisterForDeviceNotifications @ 0x1C000DFE0 (ACPIRegisterForDeviceNotifications.c)
 *     ACPIThermalGetSensorDevice @ 0x1C0011B70 (ACPIThermalGetSensorDevice.c)
 *     ACPIThermalLoopEx @ 0x1C0012A28 (ACPIThermalLoopEx.c)
 *     AMLIFreeDataBuffs @ 0x1C001D940 (AMLIFreeDataBuffs.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C001E288 (WPP_RECORDER_SF_qqss.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C00209B0 (WPP_RECORDER_SF_Lqss.c)
 *     AMLIGetNamedChild @ 0x1C0020D50 (AMLIGetNamedChild.c)
 *     __security_check_cookie @ 0x1C0031C80 (__security_check_cookie.c)
 *     memset @ 0x1C0032480 (memset.c)
 *     ACPIAmliEvaluateDsm @ 0x1C0099F08 (ACPIAmliEvaluateDsm.c)
 */

__int64 __fastcall ACPIThermalStartDevice(PDEVICE_OBJECT PhysicalDeviceObject, PIRP Irp)
{
  __int64 DeviceExtension; // rbx
  char *v5; // rbp
  const char *v6; // rdx
  __int64 v7; // rcx
  const char *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 *v11; // rcx
  int SensorDevice; // edi
  PDEVICE_OBJECT AttachedDeviceReference; // rax
  PIRP v14; // rax
  PVOID PoolWithTag; // rax
  _QWORD *v16; // rdi
  struct _DEVICE_OBJECT *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v22; // rcx
  __int64 v23; // rcx
  char *v24; // rax
  unsigned __int16 v25; // r9
  void *v26; // rcx
  IRP *v27; // rcx
  void *v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // [rsp+50h] [rbp-98h] BYREF
  __int128 v31; // [rsp+60h] [rbp-88h] BYREF
  _OWORD v32[3]; // [rsp+70h] [rbp-78h] BYREF

  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)PhysicalDeviceObject);
  v5 = byte_1C00701BA;
  v6 = byte_1C00701BA;
  v7 = *(_QWORD *)(DeviceExtension + 200);
  *(_DWORD *)(v7 + 92) = -1;
  *(_DWORD *)(v7 + 96) = 100;
  *(_DWORD *)(DeviceExtension + 192) |= 0x8000000u;
  v8 = byte_1C00701BA;
  v9 = *(_QWORD *)(DeviceExtension + 8);
  if ( (v9 & 0x200000000000LL) != 0 )
  {
    v6 = *(const char **)(DeviceExtension + 568);
    if ( (v9 & 0x400000000000LL) != 0 )
      v8 = *(const char **)(DeviceExtension + 576);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0x14u,
      (__int64)&WPP_18eab87a8b67317afec152b8fbe84dda_Traceguids,
      (char)Irp,
      DeviceExtension,
      v6,
      v8);
  v10 = *(_QWORD *)(DeviceExtension + 200);
  KeClearEvent((PRKEVENT)(v10 + 280));
  *(_QWORD *)(v10 + 112) = AMLIGetNamedChild(*(__int64 **)(DeviceExtension + 720), 1347245151);
  memset(v32, 0, sizeof(v32));
  v11 = *(__int64 **)(DeviceExtension + 720);
  v30 = 0LL;
  v31 = THRM_EXTENSIONS_DSM_UUID;
  if ( (int)ACPIAmliEvaluateDsm(v11, (__int64)&v31, 0, 0, (__int64)v32, &v30) >= 0 )
  {
    v22 = v30;
    if ( *(_WORD *)(v30 + 2) == 3 && *(_DWORD *)(v30 + 24) )
      *(_DWORD *)(v10 + 128) = **(unsigned __int8 **)(v30 + 32);
    AMLIFreeDataBuffs(v22);
  }
  else
  {
    *(_DWORD *)(v10 + 128) = 0;
  }
  SensorDevice = ACPIInternalSetDeviceInterface(PhysicalDeviceObject, &GUID_DEVICE_THERMAL_ZONE);
  if ( SensorDevice < 0 )
  {
    v23 = *(_QWORD *)(DeviceExtension + 8);
    v24 = byte_1C00701BA;
    if ( (v23 & 0x200000000000LL) != 0 )
    {
      v5 = *(char **)(DeviceExtension + 568);
      if ( (v23 & 0x400000000000LL) != 0 )
        v24 = *(char **)(DeviceExtension + 576);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v25 = 21;
LABEL_27:
      WPP_RECORDER_SF_Lqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x15u,
        v25,
        (__int64)&WPP_18eab87a8b67317afec152b8fbe84dda_Traceguids,
        SensorDevice,
        DeviceExtension,
        (__int64)v5,
        (__int64)v24);
    }
LABEL_16:
    if ( SensorDevice >= 0 )
      goto LABEL_17;
    goto LABEL_29;
  }
  AttachedDeviceReference = IoGetAttachedDeviceReference(*(PDEVICE_OBJECT *)(DeviceExtension + 728));
  *(_QWORD *)(v10 + 200) = AttachedDeviceReference;
  v14 = IoAllocateIrp(AttachedDeviceReference->StackSize, 0);
  *(_QWORD *)(v10 + 192) = v14;
  if ( v14
    && (ACPIRegisterForDeviceNotifications(
          *(_QWORD *)(DeviceExtension + 728),
          (__int64)ACPIThermalEvent,
          *(_QWORD *)(DeviceExtension + 728)),
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x54706341u),
        (v16 = PoolWithTag) != 0LL) )
  {
    memset(PoolWithTag, 0, 0x40uLL);
    v16[1] = &ACPIThermalGuidList;
    *(_DWORD *)v16 = 1;
    v16[2] = ACPIThermalQueryWmiRegInfo;
    v16[3] = ACPIThermalQueryWmiDataBlock;
    v17 = *(struct _DEVICE_OBJECT **)(DeviceExtension + 728);
    *(_QWORD *)(DeviceExtension + 224) = v16;
    SensorDevice = IoWMIRegistrationControl(v17, 1u);
    if ( SensorDevice >= 0 )
    {
      SensorDevice = ACPIThermalGetSensorDevice((_QWORD *)DeviceExtension, v18, v19, v20);
      if ( SensorDevice >= 0 )
      {
        ACPIThermalAcquireCoolingInterfaces(DeviceExtension);
        *(_DWORD *)(DeviceExtension + 328) = 2;
        SensorDevice = ACPIDeviceInternalDeviceRequest((_QWORD *)DeviceExtension, 1u, 0LL, 0LL, 0);
        if ( SensorDevice == 259 )
          SensorDevice = 0;
        ACPIThermalLoopEx(DeviceExtension, 0x8000000, 0x10000000);
        goto LABEL_16;
      }
      IoWMIRegistrationControl(*(PDEVICE_OBJECT *)(DeviceExtension + 728), 2u);
      v29 = *(_QWORD *)(DeviceExtension + 8);
      v24 = byte_1C00701BA;
      if ( (v29 & 0x200000000000LL) != 0 )
      {
        v5 = *(char **)(DeviceExtension + 568);
        if ( (v29 & 0x400000000000LL) != 0 )
          v24 = *(char **)(DeviceExtension + 576);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v25 = 22;
        goto LABEL_27;
      }
      goto LABEL_16;
    }
  }
  else
  {
    SensorDevice = -1073741670;
  }
LABEL_29:
  v26 = *(void **)(v10 + 200);
  if ( v26 )
  {
    ObfDereferenceObject(v26);
    *(_QWORD *)(v10 + 200) = 0LL;
  }
  v27 = *(IRP **)(v10 + 192);
  if ( v27 )
  {
    IoFreeIrp(v27);
    *(_QWORD *)(v10 + 192) = 0LL;
  }
  v28 = *(void **)(DeviceExtension + 224);
  if ( v28 )
  {
    ExFreePoolWithTag(v28, 0x54706341u);
    *(_QWORD *)(DeviceExtension + 224) = 0LL;
  }
  KeSetEvent((PRKEVENT)(v10 + 280), 0, 0);
LABEL_17:
  Irp->IoStatus.Status = SensorDevice;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)SensorDevice;
}
