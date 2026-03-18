/*
 * XREFs of KiGetCpuVendor @ 0x140A56B08
 * Callers:
 *     KiGetIptInfo @ 0x1403BF914 (KiGetIptInfo.c)
 *     HvlpProcessIommu @ 0x14054B568 (HvlpProcessIommu.c)
 *     EtwSetPerformanceTraceInformation @ 0x1409DEFB8 (EtwSetPerformanceTraceInformation.c)
 *     EtwpAddMicroarchitecturalPmcToPmcGroup @ 0x1409DFC30 (EtwpAddMicroarchitecturalPmcToPmcGroup.c)
 *     EtwpAddMicroarchitecturalPmcToRegistry @ 0x1409DFF60 (EtwpAddMicroarchitecturalPmcToRegistry.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x1409E1200 (EtwpLoadMicroarchitecturalProfileGroup.c)
 *     EtwpLoadMicroarchitecturalProfileSource @ 0x1409E1514 (EtwpLoadMicroarchitecturalProfileSource.c)
 *     EtwpRemoveMicroarchitecturalPmcFromRegistry @ 0x1409E1B94 (EtwpRemoveMicroarchitecturalPmcFromRegistry.c)
 *     KiIsNXSupported @ 0x140A560D0 (KiIsNXSupported.c)
 *     KiGetProcessorSignature @ 0x140A56A48 (KiGetProcessorSignature.c)
 *     KiInitializeNxSupportDiscard @ 0x140AFB154 (KiInitializeNxSupportDiscard.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     strncmp @ 0x1403E0910 (strncmp.c)
 */

__int64 KiGetCpuVendor()
{
  struct _KPRCB *CurrentPrcb; // r8
  char Str1[16]; // [rsp+20h] [rbp-20h] BYREF

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
  if ( !strncmp(&Str1[4], "HygonGenuine", 0xCuLL) )
    return 1LL;
  if ( strncmp(&Str1[4], "  Shanghai  ", 0xCuLL) )
    return 0LL;
  return 3LL;
}
