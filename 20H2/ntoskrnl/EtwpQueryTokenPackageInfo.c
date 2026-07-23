/*
 * XREFs of EtwpQueryTokenPackageInfo @ 0x140633974
 * Callers:
 *     EtwpBuildProcessEvent @ 0x140632D38 (EtwpBuildProcessEvent.c)
 *     EtwTraceAppStateChange @ 0x14064FBB0 (EtwTraceAppStateChange.c)
 *     EtwQueryProcessTelemetryInfo @ 0x140651684 (EtwQueryProcessTelemetryInfo.c)
 *     EtwpPsProvProcessEnumCallback @ 0x140941390 (EtwpPsProvProcessEnumCallback.c)
 * Callees:
 *     RtlQueryPackageIdentity @ 0x1402E3F50 (RtlQueryPackageIdentity.c)
 *     PsQueryProcessAttributesByToken @ 0x140634B40 (PsQueryProcessAttributesByToken.c)
 */

__int64 __fastcall EtwpQueryTokenPackageInfo(HANDLE TokenHandle, WCHAR *PackageSize, _DWORD *a3)
{
  PSIZE_T AppIdSize; // rdi
  __int64 result; // rax
  char v8; // [rsp+58h] [rbp+10h] BYREF
  char v9; // [rsp+68h] [rbp+20h] BYREF

  AppIdSize = (PSIZE_T)(PackageSize + 4);
  *(_QWORD *)PackageSize = 0LL;
  v8 = 0;
  v9 = 0;
  *((_QWORD *)PackageSize + 1) = 0LL;
  PsQueryProcessAttributesByToken(TokenHandle, &v8, &v9);
  if ( v8 )
  {
    *a3 |= 1u;
    *(_QWORD *)PackageSize = 256LL;
    *AppIdSize = 130LL;
    if ( RtlQueryPackageIdentity(TokenHandle, PackageSize + 8, (PSIZE_T)PackageSize, PackageSize + 136, AppIdSize, 0LL) < 0 )
    {
      *(_QWORD *)PackageSize = 0LL;
      *AppIdSize = 0LL;
    }
    if ( v9 )
      *a3 |= 8u;
  }
  result = 2LL;
  if ( !*(_QWORD *)PackageSize )
  {
    *(_QWORD *)PackageSize = 2LL;
    PackageSize[8] = 0;
  }
  if ( !*AppIdSize )
  {
    *AppIdSize = 2LL;
    PackageSize[136] = 0;
  }
  return result;
}
