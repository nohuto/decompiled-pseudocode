/*
 * XREFs of KiGetCpuVendor @ 0x14099E648
 * Callers:
 *     KiGetIptInfo @ 0x1403A7DD4 (KiGetIptInfo.c)
 *     HvlpProcessIommu @ 0x1404F7C38 (HvlpProcessIommu.c)
 *     EtwSetPerformanceTraceInformation @ 0x14093AD90 (EtwSetPerformanceTraceInformation.c)
 *     EtwpAddMicroarchitecturalPmcToPmcGroup @ 0x14093B990 (EtwpAddMicroarchitecturalPmcToPmcGroup.c)
 *     EtwpAddMicroarchitecturalPmcToRegistry @ 0x14093BCB0 (EtwpAddMicroarchitecturalPmcToRegistry.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x14093CDBC (EtwpLoadMicroarchitecturalProfileGroup.c)
 *     EtwpLoadMicroarchitecturalProfileSource @ 0x14093D0A0 (EtwpLoadMicroarchitecturalProfileSource.c)
 *     EtwpRemoveMicroarchitecturalPmcFromRegistry @ 0x14093D670 (EtwpRemoveMicroarchitecturalPmcFromRegistry.c)
 *     KiIsNXSupported @ 0x14099E2D0 (KiIsNXSupported.c)
 *     KiGetProcessorSignature @ 0x14099E588 (KiGetProcessorSignature.c)
 *     KiInitializeNxSupportDiscard @ 0x140A3CE54 (KiInitializeNxSupportDiscard.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     strncmp @ 0x1403D0BD0 (strncmp.c)
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
