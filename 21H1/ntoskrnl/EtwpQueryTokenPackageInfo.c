/*
 * XREFs of EtwpQueryTokenPackageInfo @ 0x1405D92C0
 * Callers:
 *     EtwpBuildProcessEvent @ 0x1405D8FA8 (EtwpBuildProcessEvent.c)
 *     EtwTraceAppStateChange @ 0x140664690 (EtwTraceAppStateChange.c)
 *     EtwQueryProcessTelemetryInfo @ 0x140666164 (EtwQueryProcessTelemetryInfo.c)
 *     EtwpPsProvProcessEnumCallback @ 0x14093A2C0 (EtwpPsProvProcessEnumCallback.c)
 * Callees:
 *     RtlQueryPackageIdentity @ 0x1402E64F0 (RtlQueryPackageIdentity.c)
 *     PsQueryProcessAttributesByToken @ 0x1405E0520 (PsQueryProcessAttributesByToken.c)
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
