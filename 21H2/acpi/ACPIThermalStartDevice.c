/*
 * XREFs of ACPIThermalStartDevice @ 0x1C008F060
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001928 (ACPIInternalGetDeviceExtension.c)
 *     ACPIThermalGetSensorDevice @ 0x1C0001EF0 (ACPIThermalGetSensorDevice.c)
 *     ACPIRegisterForDeviceNotifications @ 0x1C0002D90 (ACPIRegisterForDeviceNotifications.c)
 *     ACPIInternalSetDeviceInterface @ 0x1C0004F28 (ACPIInternalSetDeviceInterface.c)
 *     ACPIDeviceInternalDeviceRequest @ 0x1C00052A4 (ACPIDeviceInternalDeviceRequest.c)
 *     ACPIThermalAcquireCoolingInterfaces @ 0x1C0005398 (ACPIThermalAcquireCoolingInterfaces.c)
 *     AMLIGetNamedChild @ 0x1C000B060 (AMLIGetNamedChild.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C000E14C (WPP_RECORDER_SF_qqss.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0010020 (WPP_RECORDER_SF_Lqss.c)
 *     AMLIFreeDataBuffs @ 0x1C001C758 (AMLIFreeDataBuffs.c)
 *     ACPIThermalLoopEx @ 0x1C00209D8 (ACPIThermalLoopEx.c)
 *     __security_check_cookie @ 0x1C002F140 (__security_check_cookie.c)
 *     ACPIAmliEvaluateDsm @ 0x1C0090340 (ACPIAmliEvaluateDsm.c)
 */

__int64 __fastcall ACPIThermalStartDevice(PDEVICE_OBJECT PhysicalDeviceObject, PIRP Irp)
{
  __int64 DeviceExtension; // rbx
  void *v5; // rbp
  __int64 v6; // rcx
  const char *v7; // rcx
  const char *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rcx
  int SensorDevice; // edi
  PDEVICE_OBJECT AttachedDeviceReference; // rax
  PIRP v14; // rax
  __int64 Pool2; // rax
  struct _DEVICE_OBJECT *v16; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  void *v20; // rax
  unsigned __int16 v21; // r9
  __int64 v22; // rcx
  void *v23; // rcx
  IRP *v24; // rcx
  void *v25; // rcx
  __int64 v26; // [rsp+50h] [rbp-98h] BYREF
  __int128 v27; // [rsp+60h] [rbp-88h] BYREF
  _OWORD v28[3]; // [rsp+70h] [rbp-78h] BYREF

  DWORD1(v28[0]) = 0;
  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)PhysicalDeviceObject);
  v5 = &unk_1C006FB8B;
  v6 = *(_QWORD *)(DeviceExtension + 200);
  *(_DWORD *)(v6 + 92) = -1;
  *(_DWORD *)(v6 + 96) = 100;
  v7 = (const char *)&unk_1C006FB8B;
  *(_DWORD *)(DeviceExtension + 192) |= 0x8000000u;
  v8 = (const char *)&unk_1C006FB8B;
  v9 = *(_QWORD *)(DeviceExtension + 8);
  if ( (v9 & 0x200000000000LL) != 0 )
  {
    v7 = *(const char **)(DeviceExtension + 608);
    if ( (v9 & 0x400000000000LL) != 0 )
      v8 = *(const char **)(DeviceExtension + 616);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0x14u,
      (__int64)&WPP_bf1c19637c3439bdfb442f7739d79163_Traceguids,
      (char)Irp,
      DeviceExtension,
      v7,
      v8);
  v10 = *(_QWORD *)(DeviceExtension + 200);
  KeClearEvent((PRKEVENT)(v10 + 280));
  *(_QWORD *)(v10 + 112) = AMLIGetNamedChild(*(__int64 **)(DeviceExtension + 760), 1347245151);
  memset(v28, 0, sizeof(v28));
  v11 = *(_QWORD *)(DeviceExtension + 760);
  v26 = 0LL;
  v27 = THRM_EXTENSIONS_DSM_UUID;
  if ( (int)ACPIAmliEvaluateDsm(v11, (unsigned int)&v27, 0, 0, (__int64)v28, (__int64)&v26) >= 0 )
  {
    v18 = v26;
    if ( *(_WORD *)(v26 + 2) == 3 && *(_DWORD *)(v26 + 24) )
      *(_DWORD *)(v10 + 128) = **(unsigned __int8 **)(v26 + 32);
    AMLIFreeDataBuffs(v18);
  }
  else
  {
    *(_DWORD *)(v10 + 128) = 0;
  }
  SensorDevice = ACPIInternalSetDeviceInterface(PhysicalDeviceObject, &GUID_DEVICE_THERMAL_ZONE);
  if ( SensorDevice < 0 )
  {
    v19 = *(_QWORD *)(DeviceExtension + 8);
    v20 = &unk_1C006FB8B;
    if ( (v19 & 0x200000000000LL) != 0 )
    {
      v5 = *(void **)(DeviceExtension + 608);
      if ( (v19 & 0x400000000000LL) != 0 )
        v20 = *(void **)(DeviceExtension + 616);
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_33;
    v21 = 21;
LABEL_27:
    WPP_RECORDER_SF_Lqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0x15u,
      v21,
      (__int64)&WPP_bf1c19637c3439bdfb442f7739d79163_Traceguids,
      SensorDevice,
      DeviceExtension,
      (__int64)v5,
      (__int64)v20);
    goto LABEL_33;
  }
  AttachedDeviceReference = IoGetAttachedDeviceReference(*(PDEVICE_OBJECT *)(DeviceExtension + 768));
  *(_QWORD *)(v10 + 200) = AttachedDeviceReference;
  v14 = IoAllocateIrp(AttachedDeviceReference->StackSize, 0);
  *(_QWORD *)(v10 + 192) = v14;
  if ( !v14
    || (ACPIRegisterForDeviceNotifications(
          *(_QWORD *)(DeviceExtension + 768),
          (__int64)ACPIThermalEvent,
          *(_QWORD *)(DeviceExtension + 768)),
        (Pool2 = ExAllocatePool2(256LL, 64LL, 1416651585LL)) == 0) )
  {
    SensorDevice = -1073741670;
    goto LABEL_33;
  }
  *(_QWORD *)(Pool2 + 8) = &ACPIThermalGuidList;
  *(_QWORD *)(Pool2 + 16) = ACPIThermalQueryWmiRegInfo;
  *(_QWORD *)(Pool2 + 24) = ACPIThermalQueryWmiDataBlock;
  *(_DWORD *)Pool2 = 1;
  v16 = *(struct _DEVICE_OBJECT **)(DeviceExtension + 768);
  *(_QWORD *)(DeviceExtension + 224) = Pool2;
  SensorDevice = IoWMIRegistrationControl(v16, 1u);
  if ( SensorDevice < 0 )
  {
LABEL_33:
    v23 = *(void **)(v10 + 200);
    if ( v23 )
    {
      ObfDereferenceObject(v23);
      *(_QWORD *)(v10 + 200) = 0LL;
    }
    v24 = *(IRP **)(v10 + 192);
    if ( v24 )
    {
      IoFreeIrp(v24);
      *(_QWORD *)(v10 + 192) = 0LL;
    }
    v25 = *(void **)(DeviceExtension + 224);
    if ( v25 )
    {
      ExFreePoolWithTag(v25, 0x54706341u);
      *(_QWORD *)(DeviceExtension + 224) = 0LL;
    }
    KeSetEvent((PRKEVENT)(v10 + 280), 0, 0);
    goto LABEL_16;
  }
  SensorDevice = ACPIThermalGetSensorDevice((_QWORD *)DeviceExtension);
  if ( SensorDevice < 0 )
  {
    IoWMIRegistrationControl(*(PDEVICE_OBJECT *)(DeviceExtension + 768), 2u);
    v22 = *(_QWORD *)(DeviceExtension + 8);
    v20 = &unk_1C006FB8B;
    if ( (v22 & 0x200000000000LL) != 0 )
    {
      v5 = *(void **)(DeviceExtension + 608);
      if ( (v22 & 0x400000000000LL) != 0 )
        v20 = *(void **)(DeviceExtension + 616);
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_33;
    v21 = 22;
    goto LABEL_27;
  }
  ACPIThermalAcquireCoolingInterfaces(DeviceExtension);
  *(_DWORD *)(DeviceExtension + 368) = 2;
  SensorDevice = ACPIDeviceInternalDeviceRequest((_QWORD *)DeviceExtension, 1u, 0LL, 0LL, 0);
  if ( SensorDevice == 259 )
    SensorDevice = 0;
  ACPIThermalLoopEx(DeviceExtension, 0x8000000, 0x10000000);
  if ( SensorDevice < 0 )
    goto LABEL_33;
LABEL_16:
  Irp->IoStatus.Status = SensorDevice;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)SensorDevice;
}
