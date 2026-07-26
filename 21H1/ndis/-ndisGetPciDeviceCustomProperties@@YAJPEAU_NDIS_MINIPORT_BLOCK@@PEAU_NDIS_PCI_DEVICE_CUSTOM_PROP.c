/*
 * XREFs of ?ndisGetPciDeviceCustomProperties@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PCI_DEVICE_CUSTOM_PROPERTIES@@@Z @ 0x1C003A1D8
 * Callers:
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C012EB78 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001D058 (WPP_RECORDER_SF_qd.c)
 */

__int64 __fastcall ndisGetPciDeviceCustomProperties(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_PCI_DEVICE_CUSTOM_PROPERTIES *a2)
{
  unsigned int *p_DeviceType; // r14
  NTSTATUS DevicePropertyData; // eax
  unsigned int v6; // esi
  unsigned int *Data; // rax
  const DEVPROPKEY *v8; // rdx
  PULONG RequiredSize; // [rsp+30h] [rbp-10h]
  PULONG RequiredSizea; // [rsp+30h] [rbp-10h]
  ULONG Type; // [rsp+78h] [rbp+38h] BYREF
  ULONG v13; // [rsp+80h] [rbp+40h] BYREF

  v13 = 0;
  Type = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      7u,
      0x12u,
      (struct _GUID *)&WPP_eeb71838b50e3a51e19c5b48ce25db7d_Traceguids,
      a1);
  if ( a2 && a1 )
  {
    p_DeviceType = &a2->DeviceType;
    *(_OWORD *)&a2->Header.Type = 0LL;
    *(_OWORD *)&a2->MaxPayloadSize = 0LL;
    *(_OWORD *)&a2->MaxLinkSpeed = 0LL;
    a2->MaxInterruptMessages = 0;
    a2->Header = (_NDIS_OBJECT_HEADER)3408512;
    DevicePropertyData = IoGetDevicePropertyData(
                           a1->PhysicalDeviceObject,
                           &DEVPKEY_PciDevice_DeviceType,
                           0,
                           0,
                           4u,
                           &a2->DeviceType,
                           &v13,
                           &Type);
    v6 = DevicePropertyData;
    if ( DevicePropertyData >= 0 )
    {
      if ( *p_DeviceType <= 1 )
      {
        Data = &a2->CurrentSpeedAndMode;
        v8 = &DEVPKEY_PciDevice_CurrentSpeedAndMode;
      }
      else
      {
        if ( *p_DeviceType > 5 )
        {
LABEL_10:
          IoGetDevicePropertyData(
            a1->PhysicalDeviceObject,
            &DEVPKEY_PciDevice_InterruptSupport,
            0,
            0,
            4u,
            &a2->InterruptType,
            &v13,
            &Type);
          IoGetDevicePropertyData(
            a1->PhysicalDeviceObject,
            &DEVPKEY_PciDevice_InterruptMessageMaximum,
            0,
            0,
            4u,
            &a2->MaxInterruptMessages,
            &v13,
            &Type);
          if ( IoGetDevicePropertyData(
                 a1->PhysicalDeviceObject,
                 &DEVPKEY_PciDevice_SriovSupport,
                 0,
                 0,
                 4u,
                 &a1->PciDeviceSriovSupport,
                 &v13,
                 &Type) < 0 )
            a1->PciDeviceSriovSupport = -1;
          v6 = 0;
          goto LABEL_13;
        }
        IoGetDevicePropertyData(
          a1->PhysicalDeviceObject,
          &DEVPKEY_PciDevice_CurrentPayloadSize,
          0,
          0,
          4u,
          &a2->CurrentPayloadSize,
          &v13,
          &Type);
        IoGetDevicePropertyData(
          a1->PhysicalDeviceObject,
          &DEVPKEY_PciDevice_MaxPayloadSize,
          0,
          0,
          4u,
          &a2->MaxPayloadSize,
          &v13,
          &Type);
        IoGetDevicePropertyData(
          a1->PhysicalDeviceObject,
          &DEVPKEY_PciDevice_MaxReadRequestSize,
          0,
          0,
          4u,
          &a2->MaxReadRequestSize,
          &v13,
          &Type);
        IoGetDevicePropertyData(
          a1->PhysicalDeviceObject,
          &DEVPKEY_PciDevice_CurrentLinkSpeed,
          0,
          0,
          4u,
          &a2->CurrentLinkSpeed,
          &v13,
          &Type);
        IoGetDevicePropertyData(
          a1->PhysicalDeviceObject,
          &DEVPKEY_PciDevice_CurrentLinkWidth,
          0,
          0,
          4u,
          &a2->CurrentLinkWidth,
          &v13,
          &Type);
        IoGetDevicePropertyData(
          a1->PhysicalDeviceObject,
          &DEVPKEY_PciDevice_MaxLinkSpeed,
          0,
          0,
          4u,
          &a2->MaxLinkSpeed,
          &v13,
          &Type);
        IoGetDevicePropertyData(
          a1->PhysicalDeviceObject,
          &DEVPKEY_PciDevice_MaxLinkWidth,
          0,
          0,
          4u,
          &a2->MaxLinkWidth,
          &v13,
          &Type);
        Data = &a2->PciExpressVersion;
        v8 = &DEVPKEY_PciDevice_ExpressSpecVersion;
      }
      IoGetDevicePropertyData(a1->PhysicalDeviceObject, v8, 0, 0, 4u, Data, &v13, &Type);
      goto LABEL_10;
    }
    if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return v6;
    LODWORD(RequiredSizea) = DevicePropertyData;
    WPP_RECORDER_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      7u,
      0x13u,
      (struct _GUID *)&WPP_eeb71838b50e3a51e19c5b48ce25db7d_Traceguids,
      (char)a1,
      RequiredSizea);
  }
  else
  {
    v6 = -1073741811;
  }
LABEL_13:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(RequiredSize) = v6;
    WPP_RECORDER_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      7u,
      0x14u,
      (struct _GUID *)&WPP_eeb71838b50e3a51e19c5b48ce25db7d_Traceguids,
      (char)a1,
      RequiredSize);
  }
  return v6;
}
