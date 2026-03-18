/*
 * XREFs of ACPIFanStartDevice @ 0x1C0091000
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002980 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDebugGetIrpText @ 0x1C00029E4 (ACPIDebugGetIrpText.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C0002C90 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIInternalSetDeviceInterface @ 0x1C000CE70 (ACPIInternalSetDeviceInterface.c)
 *     ACPIFanLoop @ 0x1C000D1CC (ACPIFanLoop.c)
 *     ACPIDeviceInternalDeviceRequest @ 0x1C000D950 (ACPIDeviceInternalDeviceRequest.c)
 *     ACPIThermalAcquireCoolingInterfaces @ 0x1C000DA60 (ACPIThermalAcquireCoolingInterfaces.c)
 *     ACPIRegisterForDeviceNotifications @ 0x1C000DC20 (ACPIRegisterForDeviceNotifications.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0020750 (WPP_RECORDER_SF_Lqss.c)
 *     AMLIGetNamedChild @ 0x1C0020AF0 (AMLIGetNamedChild.c)
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
  char *v15; // r8
  char *v16; // rdx
  unsigned __int16 v17; // r9
  __int64 v18; // rcx

  MinorFunction = Irp->Tail.Overlay.CurrentStackLocation->MinorFunction;
  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)PhysicalDeviceObject);
  v6 = DeviceExtension;
  v7 = (struct _KEVENT *)(DeviceExtension + 296);
  if ( !*(_DWORD *)(DeviceExtension + 192) )
  {
    KeInitializeSpinLock((PKSPIN_LOCK)(DeviceExtension + 184));
    KeInitializeEvent(v7, NotificationEvent, 1u);
  }
  v8 = *(__int64 **)(v6 + 720);
  *(_QWORD *)(v6 + 224) = v6 + 216;
  *(_QWORD *)(v6 + 216) = v6 + 216;
  *(_DWORD *)(v6 + 192) = 0x10000000;
  *(_QWORD *)(v6 + 232) = AMLIGetNamedChild(v8, 1414743647);
  KeClearEvent(v7);
  v9 = ACPIInternalSetDeviceInterface(PhysicalDeviceObject, &GUID_DEVICE_FAN);
  if ( v9 < 0 )
  {
    v14 = *(_QWORD *)(v6 + 8);
    v15 = byte_1C00701BA;
    v16 = byte_1C00701BA;
    if ( (v14 & 0x200000000000LL) != 0 )
    {
      v15 = *(char **)(v6 + 568);
      if ( (v14 & 0x400000000000LL) != 0 )
        v16 = *(char **)(v6 + 576);
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
        (__int64)&WPP_3f41a75ade0b3c322354d339e206c4ba_Traceguids,
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
      ACPIRegisterForDeviceNotifications(*(_QWORD *)(v6 + 728), (__int64)ACPIFanEvent, *(_QWORD *)(v6 + 728));
      *(_DWORD *)(v6 + 328) = 2;
      ACPIDeviceInternalDeviceRequest((_QWORD *)v6, 4u, (__int64)ACPIFanPowerCallback, 0LL, 0);
      ACPIThermalAcquireCoolingInterfaces(v6);
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
          (__int64)&WPP_3f41a75ade0b3c322354d339e206c4ba_Traceguids,
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
    v15 = byte_1C00701BA;
    v16 = byte_1C00701BA;
    if ( (v18 & 0x200000000000LL) != 0 )
    {
      v15 = *(char **)(v6 + 568);
      if ( (v18 & 0x400000000000LL) != 0 )
        v16 = *(char **)(v6 + 576);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v17 = 11;
      goto LABEL_14;
    }
  }
  return (unsigned int)v9;
}
