/*
 * XREFs of WPP_RECORDER_SF_L @ 0x1C0002ACC
 * Callers:
 *     ACPIBuildDeviceExtension @ 0x1C001BA9C (ACPIBuildDeviceExtension.c)
 *     ACPIDispatchAddDevice @ 0x1C0025260 (ACPIDispatchAddDevice.c)
 *     ACPIDeviceDiscoverDependencies @ 0x1C0029674 (ACPIDeviceDiscoverDependencies.c)
 *     ACPIPowerNodeDiscoverDependencies @ 0x1C002971C (ACPIPowerNodeDiscoverDependencies.c)
 *     ACPIBuildPowerResourceExtension @ 0x1C002E058 (ACPIBuildPowerResourceExtension.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x1C002EB38 (ACPIVerifyAndCopyFirmwareDependencies.c)
 *     OSOpenHandle @ 0x1C008FBB8 (OSOpenHandle.c)
 *     OSOpenUnicodeHandle @ 0x1C008FC50 (OSOpenUnicodeHandle.c)
 *     ACPIRegReadAMLRegistryEntry @ 0x1C008FCF0 (ACPIRegReadAMLRegistryEntry.c)
 *     PnpCmResourcesToBiosResources @ 0x1C0090950 (PnpCmResourcesToBiosResources.c)
 *     ACPIBusIrpStartDevice @ 0x1C0090F10 (ACPIBusIrpStartDevice.c)
 *     ACPIFilterIrpStartDevice @ 0x1C0091520 (ACPIFilterIrpStartDevice.c)
 *     OSCreateHandle @ 0x1C0096D28 (OSCreateHandle.c)
 *     OSWriteRegValue @ 0x1C0096E28 (OSWriteRegValue.c)
 *     OSReadRegValue @ 0x1C0097444 (OSReadRegValue.c)
 *     PnpBiosResourcesToNtResources @ 0x1C009CF00 (PnpBiosResourcesToNtResources.c)
 *     PnpiBiosAddressDoubleToIoDescriptor @ 0x1C009D6AC (PnpiBiosAddressDoubleToIoDescriptor.c)
 *     ACPIProcessHardwareInformation @ 0x1C009F214 (ACPIProcessHardwareInformation.c)
 *     PnpiBiosAddressToIoDescriptor @ 0x1C00A26F8 (PnpiBiosAddressToIoDescriptor.c)
 *     ACPIRegGetTableFromSimulatorRegistryEntry @ 0x1C00B2278 (ACPIRegGetTableFromSimulatorRegistryEntry.c)
 *     PnpiBiosAddressExtendedToIoDescriptor @ 0x1C00B35FC (PnpiBiosAddressExtendedToIoDescriptor.c)
 *     PnpiBiosAddressQuadToIoDescriptor @ 0x1C00B3A44 (PnpiBiosAddressQuadToIoDescriptor.c)
 *     OSReadAcpiConfigurationData @ 0x1C00BC3BC (OSReadAcpiConfigurationData.c)
 *     ACPIInitializeAMLI @ 0x1C00BCC5C (ACPIInitializeAMLI.c)
 *     OSInterruptVector @ 0x1C00BD980 (OSInterruptVector.c)
 *     ACPILoadProcessRSDT @ 0x1C00BE744 (ACPILoadProcessRSDT.c)
 *     ACPILoadProcessFACS @ 0x1C00BEB28 (ACPILoadProcessFACS.c)
 *     ACPIInitialize @ 0x1C00BED6C (ACPIInitialize.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0032180 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_L(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
{
  unsigned __int64 v7; // rdi
  unsigned int v8; // esi
  int v10; // eax
  int v12; // [rsp+20h] [rbp-38h]
  va_list va; // [rsp+88h] [rbp+30h] BYREF

  va_start(va, a5);
  v7 = (unsigned __int64)a3 >> 16;
  v8 = a2;
  v10 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v7 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v10, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v7 + 1) >= a2 )
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v7),
      43LL,
      a5,
      a4,
      va,
      4LL,
      0LL);
  LOWORD(v12) = a4;
  return WppAutoLogTrace(a1, v8, a3, a5, v12, va, 4LL, 0LL);
}
