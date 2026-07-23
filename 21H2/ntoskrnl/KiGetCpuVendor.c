/*
 * XREFs of KiGetCpuVendor @ 0x14099CF68
 * Callers:
 *     KiGetIptInfo @ 0x1403ADA94 (KiGetIptInfo.c)
 *     HvlpProcessIommu @ 0x1404F9758 (HvlpProcessIommu.c)
 *     EtwSetPerformanceTraceInformation @ 0x140938730 (EtwSetPerformanceTraceInformation.c)
 *     EtwpAddMicroarchitecturalPmcToPmcGroup @ 0x140939330 (EtwpAddMicroarchitecturalPmcToPmcGroup.c)
 *     EtwpAddMicroarchitecturalPmcToRegistry @ 0x140939650 (EtwpAddMicroarchitecturalPmcToRegistry.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x14093A75C (EtwpLoadMicroarchitecturalProfileGroup.c)
 *     EtwpLoadMicroarchitecturalProfileSource @ 0x14093AA40 (EtwpLoadMicroarchitecturalProfileSource.c)
 *     EtwpRemoveMicroarchitecturalPmcFromRegistry @ 0x14093B010 (EtwpRemoveMicroarchitecturalPmcFromRegistry.c)
 *     KiIsNXSupported @ 0x14099CBF0 (KiIsNXSupported.c)
 *     KiGetProcessorSignature @ 0x14099CEA8 (KiGetProcessorSignature.c)
 *     KiInitializeNxSupportDiscard @ 0x140A3B9E4 (KiInitializeNxSupportDiscard.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     strncmp @ 0x1403D16B0 (strncmp.c)
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
