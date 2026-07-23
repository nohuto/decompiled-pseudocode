/*
 * XREFs of RtlGetVersion @ 0x1406D8200
 * Callers:
 *     RtlVerifyVersionInfo @ 0x14037AA80 (RtlVerifyVersionInfo.c)
 *     SymCryptInitEnvWindowsKernelmodeWin8_1nLater @ 0x1403E7BEC (SymCryptInitEnvWindowsKernelmodeWin8_1nLater.c)
 *     SdbpMatchOsVersion @ 0x14073D598 (SdbpMatchOsVersion.c)
 *     _SysCtxOpenMachine @ 0x14078BDC4 (_SysCtxOpenMachine.c)
 *     Win7RtlGetVersion @ 0x1408BD090 (Win7RtlGetVersion.c)
 *     Win81RtlGetVersion @ 0x1408BD170 (Win81RtlGetVersion.c)
 *     Win8RtlGetVersion @ 0x1408BD250 (Win8RtlGetVersion.c)
 *     EtwpTraceSystemInitialization @ 0x140A46978 (EtwpTraceSystemInitialization.c)
 * Callees:
 *     RtlGetNtProductType @ 0x140312380 (RtlGetNtProductType.c)
 *     RtlGetSuiteMask @ 0x1406D82C0 (RtlGetSuiteMask.c)
 */

NTSTATUS __stdcall RtlGetVersion(PRTL_OSVERSIONINFOW lpVersionInformation)
{
  DWORD v2; // eax
  __int16 v3; // ax
  bool v4; // zf
  __int16 SuiteMask; // ax
  _NT_PRODUCT_TYPE NtProductType; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)&lpVersionInformation->dwMajorVersion = 10LL;
  lpVersionInformation->dwBuildNumber = (unsigned __int16)NtBuildNumber;
  v2 = lpVersionInformation->dwOSVersionInfoSize - 284;
  NtProductType = 0;
  lpVersionInformation->dwPlatformId = 2;
  if ( (v2 & 0xFFFFFFF7) == 0 )
  {
    LOWORD(lpVersionInformation[1].dwOSVersionInfoSize) = (unsigned __int8)byte_140C4C139;
    v3 = CmNtCSDVersion;
    LOWORD(lpVersionInformation[1].dwMajorVersion) = 0;
    v4 = (_DWORD)InitializationPhase == 0;
    HIWORD(lpVersionInformation[1].dwOSVersionInfoSize) = v3;
    BYTE2(lpVersionInformation[1].dwMajorVersion) = 0;
    if ( !v4 )
    {
      if ( RtlGetNtProductType(&NtProductType) )
        BYTE2(lpVersionInformation[1].dwMajorVersion) = NtProductType;
      SuiteMask = RtlGetSuiteMask();
      v4 = lpVersionInformation->dwOSVersionInfoSize == 292;
      LOWORD(lpVersionInformation[1].dwMajorVersion) = SuiteMask;
      if ( v4 )
        lpVersionInformation[1].dwMinorVersion = RtlGetSuiteMask() & 0x1FFFF;
    }
    HIBYTE(lpVersionInformation[1].dwMajorVersion) = 0;
  }
  return 0;
}
