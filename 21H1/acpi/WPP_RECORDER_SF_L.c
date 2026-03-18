/*
 * XREFs of WPP_RECORDER_SF_L @ 0x1C000270C
 * Callers:
 *     ACPIBuildDeviceExtension @ 0x1C001B83C (ACPIBuildDeviceExtension.c)
 *     ACPIDispatchAddDevice @ 0x1C0025000 (ACPIDispatchAddDevice.c)
 *     ACPIDeviceDiscoverDependencies @ 0x1C0029414 (ACPIDeviceDiscoverDependencies.c)
 *     ACPIPowerNodeDiscoverDependencies @ 0x1C00294BC (ACPIPowerNodeDiscoverDependencies.c)
 *     ACPIBuildPowerResourceExtension @ 0x1C002DDF8 (ACPIBuildPowerResourceExtension.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x1C002E8D8 (ACPIVerifyAndCopyFirmwareDependencies.c)
 *     OSOpenHandle @ 0x1C008F8A8 (OSOpenHandle.c)
 *     OSOpenUnicodeHandle @ 0x1C008F940 (OSOpenUnicodeHandle.c)
 *     ACPIRegReadAMLRegistryEntry @ 0x1C008F9E0 (ACPIRegReadAMLRegistryEntry.c)
 *     PnpCmResourcesToBiosResources @ 0x1C0090640 (PnpCmResourcesToBiosResources.c)
 *     ACPIBusIrpStartDevice @ 0x1C0090C00 (ACPIBusIrpStartDevice.c)
 *     ACPIFilterIrpStartDevice @ 0x1C0091210 (ACPIFilterIrpStartDevice.c)
 *     OSCreateHandle @ 0x1C0096A18 (OSCreateHandle.c)
 *     OSWriteRegValue @ 0x1C0096B18 (OSWriteRegValue.c)
 *     OSReadRegValue @ 0x1C0097134 (OSReadRegValue.c)
 *     PnpBiosResourcesToNtResources @ 0x1C009CBE0 (PnpBiosResourcesToNtResources.c)
 *     PnpiBiosAddressDoubleToIoDescriptor @ 0x1C009D38C (PnpiBiosAddressDoubleToIoDescriptor.c)
 *     ACPIProcessHardwareInformation @ 0x1C009EEF4 (ACPIProcessHardwareInformation.c)
 *     PnpiBiosAddressToIoDescriptor @ 0x1C00A23D8 (PnpiBiosAddressToIoDescriptor.c)
 *     ACPIRegGetTableFromSimulatorRegistryEntry @ 0x1C00B1F58 (ACPIRegGetTableFromSimulatorRegistryEntry.c)
 *     PnpiBiosAddressExtendedToIoDescriptor @ 0x1C00B32DC (PnpiBiosAddressExtendedToIoDescriptor.c)
 *     PnpiBiosAddressQuadToIoDescriptor @ 0x1C00B3724 (PnpiBiosAddressQuadToIoDescriptor.c)
 *     OSReadAcpiConfigurationData @ 0x1C00BC24C (OSReadAcpiConfigurationData.c)
 *     ACPIInitializeAMLI @ 0x1C00BCAEC (ACPIInitializeAMLI.c)
 *     OSInterruptVector @ 0x1C00BD810 (OSInterruptVector.c)
 *     ACPILoadProcessRSDT @ 0x1C00BE5D4 (ACPILoadProcessRSDT.c)
 *     ACPILoadProcessFACS @ 0x1C00BE9B8 (ACPILoadProcessFACS.c)
 *     ACPIInitialize @ 0x1C00BEBFC (ACPIInitialize.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0031E80 (_guard_dispatch_icall_nop.c)
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
