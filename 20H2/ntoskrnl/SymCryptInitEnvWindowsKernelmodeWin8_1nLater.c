/*
 * XREFs of SymCryptInitEnvWindowsKernelmodeWin8_1nLater @ 0x1403EB6BC
 * Callers:
 *     SymCryptInit @ 0x1403B6684 (SymCryptInit.c)
 *     KeInitSystem @ 0x140A4ABFC (KeInitSystem.c)
 * Callees:
 *     RtlGetEnabledExtendedFeatures @ 0x1403A6BA0 (RtlGetEnabledExtendedFeatures.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     SymCryptDetectCpuFeaturesByCpuid @ 0x1403EEAF8 (SymCryptDetectCpuFeaturesByCpuid.c)
 *     SymCryptInitEnvCommon @ 0x1403EEC6C (SymCryptInitEnvCommon.c)
 *     memset @ 0x140411300 (memset.c)
 *     SymCryptFatal @ 0x1405133E8 (SymCryptFatal.c)
 *     RtlGetVersion @ 0x1406CE590 (RtlGetVersion.c)
 */

__int64 __fastcall SymCryptInitEnvWindowsKernelmodeWin8_1nLater(unsigned int a1)
{
  __int64 result; // rax
  _OSVERSIONINFOW VersionInformation; // [rsp+20h] [rbp-138h] BYREF

  memset(&VersionInformation.dwMajorVersion, 0, 0x110uLL);
  result = (unsigned int)g_SymCryptFlags;
  if ( (g_SymCryptFlags & 1) == 0 )
  {
    VersionInformation.dwOSVersionInfoSize = 276;
    if ( RtlGetVersion(&VersionInformation) < 0 )
      SymCryptFatal(1853059702LL);
    if ( VersionInformation.dwMajorVersion < 6
      || VersionInformation.dwMajorVersion == 6 && VersionInformation.dwMinorVersion < 3 )
    {
      SymCryptFatal(1853059702LL);
    }
    SymCryptDetectCpuFeaturesByCpuid(1LL);
    if ( (RtlGetEnabledExtendedFeatures(0xFFFFFFFFFFFFFFFFuLL) & 4) == 0 )
      g_SymCryptCpuFeaturesNotPresent |= 0x10u;
    g_SymCryptCpuFeaturesNotPresent &= ~0x20u;
    return SymCryptInitEnvCommon(a1);
  }
  return result;
}
