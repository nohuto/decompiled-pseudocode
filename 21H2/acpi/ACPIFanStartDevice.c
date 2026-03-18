/*
 * XREFs of ACPIFanStartDevice @ 0x1C0090820
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDebugGetIrpText @ 0x1C0001908 (ACPIDebugGetIrpText.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0001928 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C0001CCC (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIRegisterForDeviceNotifications @ 0x1C0002D90 (ACPIRegisterForDeviceNotifications.c)
 *     ACPIFanLoop @ 0x1C0003664 (ACPIFanLoop.c)
 *     ACPIInternalSetDeviceInterface @ 0x1C0004F28 (ACPIInternalSetDeviceInterface.c)
 *     ACPIDeviceInternalDeviceRequest @ 0x1C00052A4 (ACPIDeviceInternalDeviceRequest.c)
 *     ACPIThermalAcquireCoolingInterfaces @ 0x1C0005398 (ACPIThermalAcquireCoolingInterfaces.c)
 *     AMLIGetNamedChild @ 0x1C000B060 (AMLIGetNamedChild.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0010020 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIFanPrepareImpactZoneSupport @ 0x1C0090490 (ACPIFanPrepareImpactZoneSupport.c)
 */

__int64 __fastcall ACPIFanStartDevice(PDEVICE_OBJECT PhysicalDeviceObject, PIRP Irp)
{
  unsigned __int8 MinorFunction; // r14
  __int64 DeviceExtension; // rax
  __int64 v6; // rbx
  struct _KEVENT *v7; // rdi
  __int64 *v8; // rcx
  int v9; // edi
  char *IrpText; // rax
  const char *v11; // r8
  const char *v12; // r10
  __int64 v14; // rcx
  void *v15; // r8
  void *v16; // rdx
  unsigned __int16 v17; // r9
  __int64 v18; // rcx

  MinorFunction = Irp->Tail.Overlay.CurrentStackLocation->MinorFunction;
  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)PhysicalDeviceObject);
  v6 = DeviceExtension;
  v7 = (struct _KEVENT *)(DeviceExtension + 344);
  if ( !*(_DWORD *)(DeviceExtension + 192) )
  {
    KeInitializeSpinLock((PKSPIN_LOCK)(DeviceExtension + 184));
    KeInitializeEvent(v7, NotificationEvent, 1u);
  }
  v8 = *(__int64 **)(v6 + 760);
  *(_DWORD *)(v6 + 316) = 0;
  *(_QWORD *)(v6 + 224) = v6 + 216;
  *(_QWORD *)(v6 + 216) = v6 + 216;
  *(_QWORD *)(v6 + 240) = v6 + 232;
  *(_QWORD *)(v6 + 232) = v6 + 232;
  *(_DWORD *)(v6 + 192) = 0x10000000;
  *(_DWORD *)(v6 + 312) = 1;
  *(_QWORD *)(v6 + 248) = AMLIGetNamedChild(v8, 1414743647);
  KeClearEvent(v7);
  v9 = ACPIInternalSetDeviceInterface(PhysicalDeviceObject, &GUID_DEVICE_FAN);
  if ( v9 < 0 )
  {
    v14 = *(_QWORD *)(v6 + 8);
    v15 = &unk_1C006FB8B;
    v16 = &unk_1C006FB8B;
    if ( (v14 & 0x200000000000LL) != 0 )
    {
      v15 = *(void **)(v6 + 608);
      if ( (v14 & 0x400000000000LL) != 0 )
        v16 = *(void **)(v6 + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v17 = 10;
LABEL_14:
      WPP_RECORDER_SF_Lqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x10u,
        v17,
        (__int64)&WPP_91517f0b10833e548608c253cc4d22bc_Traceguids,
        v9,
        v6,
        (__int64)v15,
        (__int64)v16);
    }
  }
  else
  {
    v9 = ACPIInternalSetDeviceInterface(PhysicalDeviceObject, &GUID_DEVINTERFACE_THERMAL_COOLING);
    if ( v9 >= 0 )
    {
      ACPIRegisterForDeviceNotifications(*(_QWORD *)(v6 + 768), (__int64)ACPIFanEvent, *(_QWORD *)(v6 + 768));
      *(_DWORD *)(v6 + 368) = 2;
      ACPIDeviceInternalDeviceRequest((_QWORD *)v6, 4u, (__int64)ACPIFanPowerCallback, 0LL, 0);
      ACPIThermalAcquireCoolingInterfaces(v6);
      ACPIFanPrepareImpactZoneSupport(v6);
      v9 = 0;
      Irp->IoStatus.Status = 0;
      Irp->IoStatus.Information = 0LL;
      IofCompleteRequest(Irp, 0);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        IrpText = ACPIDebugGetIrpText(*(_QWORD *)(v6 + 8), MinorFunction);
        WPP_RECORDER_SF_qsLqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          0x10u,
          0xCu,
          (__int64)&WPP_91517f0b10833e548608c253cc4d22bc_Traceguids,
          (char)Irp,
          IrpText,
          0,
          v6,
          v11,
          v12);
      }
      ACPIFanLoop(v6, 0x10000000, 0x20000000);
      return (unsigned int)v9;
    }
    v18 = *(_QWORD *)(v6 + 8);
    v15 = &unk_1C006FB8B;
    v16 = &unk_1C006FB8B;
    if ( (v18 & 0x200000000000LL) != 0 )
    {
      v15 = *(void **)(v6 + 608);
      if ( (v18 & 0x400000000000LL) != 0 )
        v16 = *(void **)(v6 + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v17 = 11;
      goto LABEL_14;
    }
  }
  return (unsigned int)v9;
}
