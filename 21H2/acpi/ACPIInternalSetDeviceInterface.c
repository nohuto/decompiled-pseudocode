/*
 * XREFs of ACPIInternalSetDeviceInterface @ 0x1C0004F28
 * Callers:
 *     ACPICMButtonStartWorker @ 0x1C00029E0 (ACPICMButtonStartWorker.c)
 *     ACPIProcessorStartDeviceWorker @ 0x1C0004D10 (ACPIProcessorStartDeviceWorker.c)
 *     ACPIThermalStartDevice @ 0x1C008F060 (ACPIThermalStartDevice.c)
 *     ACPIRootInitialize @ 0x1C008F8C0 (ACPIRootInitialize.c)
 *     ACPIButtonStartDevice @ 0x1C0090080 (ACPIButtonStartDevice.c)
 *     ACPIFanStartDevice @ 0x1C0090820 (ACPIFanStartDevice.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001928 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0010020 (WPP_RECORDER_SF_Lqss.c)
 */

__int64 __fastcall ACPIInternalSetDeviceInterface(PDEVICE_OBJECT PhysicalDeviceObject, GUID *InterfaceClassGuid)
{
  _QWORD *DeviceExtension; // rbx
  NTSTATUS v5; // eax
  __int64 v6; // rdx
  char v7; // di
  NTSTATUS v8; // esi
  void *v10; // rcx
  void *v11; // r8
  int v12; // r9d
  struct _UNICODE_STRING SymbolicLinkName; // [rsp+50h] [rbp-18h] BYREF

  SymbolicLinkName = 0LL;
  if ( InterfaceClassGuid == &GUID_ACPI_ROOT_DEVICE_UUID )
    DeviceExtension = (_QWORD *)RootDeviceExtension;
  else
    DeviceExtension = (_QWORD *)ACPIInternalGetDeviceExtension((ULONG_PTR)PhysicalDeviceObject);
  v5 = IoRegisterDeviceInterface(PhysicalDeviceObject, InterfaceClassGuid, 0LL, &SymbolicLinkName);
  v7 = 0;
  v8 = v5;
  if ( v5 < 0 )
  {
    v10 = &unk_1C006FB8B;
    v11 = &unk_1C006FB8B;
    if ( DeviceExtension )
    {
      v6 = DeviceExtension[1];
      v7 = (char)DeviceExtension;
      if ( (v6 & 0x200000000000LL) != 0 )
      {
        v10 = (void *)DeviceExtension[76];
        if ( (v6 & 0x400000000000LL) != 0 )
          v11 = (void *)DeviceExtension[77];
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = 13;
LABEL_19:
      LOBYTE(v6) = 2;
      WPP_RECORDER_SF_Lqss(
        WPP_GLOBAL_Control->DeviceExtension,
        v6,
        6,
        v12,
        (__int64)&WPP_95d701b52be23d9498d45ac18e77591e_Traceguids,
        v8,
        v7,
        (__int64)v10,
        (__int64)v11);
    }
  }
  else
  {
    v8 = IoSetDeviceInterfaceState(&SymbolicLinkName, 1u);
    if ( v8 < 0 )
    {
      v10 = &unk_1C006FB8B;
      v11 = &unk_1C006FB8B;
      if ( DeviceExtension )
      {
        v6 = DeviceExtension[1];
        v7 = (char)DeviceExtension;
        if ( (v6 & 0x200000000000LL) != 0 )
        {
          v10 = (void *)DeviceExtension[76];
          if ( (v6 & 0x400000000000LL) != 0 )
            v11 = (void *)DeviceExtension[77];
        }
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v12 = 14;
        goto LABEL_19;
      }
    }
  }
  return (unsigned int)v8;
}
