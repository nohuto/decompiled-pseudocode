/*
 * XREFs of KiGetCpuVendor @ 0x1409975A4
 * Callers:
 *     KiGetIptInfo @ 0x1403A96A4 (KiGetIptInfo.c)
 *     HvlpProcessIommu @ 0x1404F3D78 (HvlpProcessIommu.c)
 *     EtwSetPerformanceTraceInformation @ 0x140933CC0 (EtwSetPerformanceTraceInformation.c)
 *     EtwpAddMicroarchitecturalPmcToPmcGroup @ 0x1409348C0 (EtwpAddMicroarchitecturalPmcToPmcGroup.c)
 *     EtwpAddMicroarchitecturalPmcToRegistry @ 0x140934BE0 (EtwpAddMicroarchitecturalPmcToRegistry.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x140935CEC (EtwpLoadMicroarchitecturalProfileGroup.c)
 *     EtwpLoadMicroarchitecturalProfileSource @ 0x140935FD0 (EtwpLoadMicroarchitecturalProfileSource.c)
 *     EtwpRemoveMicroarchitecturalPmcFromRegistry @ 0x1409365A0 (EtwpRemoveMicroarchitecturalPmcFromRegistry.c)
 *     KiIsNXSupported @ 0x140997260 (KiIsNXSupported.c)
 *     KiGetProcessorSignature @ 0x1409974E4 (KiGetProcessorSignature.c)
 *     KiInitializeNxSupportDiscard @ 0x140A37964 (KiInitializeNxSupportDiscard.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     strncmp @ 0x1403CD100 (strncmp.c)
 */

__int64 KiGetCpuVendor()
{
  struct _KPRCB *CurrentPrcb; // r8
  char Str1[16]; // [rsp+20h] [rbp-28h] BYREF

  _RAX = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  __asm { cpuid }
  CurrentPrcb->VendorString[0] = 0;
  *(_QWORD *)&Str1[4] = __PAIR64__(_RDX, _RBX);
  *(_DWORD *)&Str1[12] = _RCX;
  *(_QWORD *)CurrentPrcb->VendorString = __PAIR64__(_RDX, _RBX);
  *(_DWORD *)&CurrentPrcb->VendorString[8] = *(_DWORD *)&Str1[12];
  CurrentPrcb->VendorString[12] = 0;
  if ( !strncmp(&Str1[4], "AuthenticAMD", 0xCuLL) )
    return 1LL;
  if ( !strncmp(&Str1[4], "GenuineIntel", 0xCuLL) )
    return 2LL;
  if ( !strncmp(&Str1[4], "CentaurHauls", 0xCuLL) )
    return 3LL;
  return !strncmp(&Str1[4], "HygonGenuine", 0xCuLL);
}
