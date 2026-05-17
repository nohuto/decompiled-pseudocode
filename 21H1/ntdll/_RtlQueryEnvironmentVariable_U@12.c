/*
 * XREFs of _RtlQueryEnvironmentVariable_U@12 @ 0x4B2DB100
 * Callers:
 *     _RtlGetFullPathName_Ustr@24 @ 0x4B2C8CA0 (_RtlGetFullPathName_Ustr@24.c)
 *     _IsProgramFilesPath@8 @ 0x4B2DAE59 (_IsProgramFilesPath@8.c)
 *     _RtlpWow64ThunkEnvironment64To32@0 @ 0x4B2DAFBF (_RtlpWow64ThunkEnvironment64To32@0.c)
 *     _RtlpCheckRelativeDrive@4 @ 0x4B32D619 (_RtlpCheckRelativeDrive@4.c)
 *     _LdrpInitializeExecutionOptions@24 @ 0x4B331EB9 (_LdrpInitializeExecutionOptions@24.c)
 *     _RtlpLookupSafeCurDirList@0 @ 0x4B33D088 (_RtlpLookupSafeCurDirList@0.c)
 * Callees:
 *     _RtlQueryEnvironmentVariable@24 @ 0x4B2BF830 (_RtlQueryEnvironmentVariable@24.c)
 */

int __stdcall RtlQueryEnvironmentVariable_U(_WORD *a1, unsigned __int16 *a2, int a3)
{
  int v3; // ecx
  __int16 v4; // ax
  int v6; // [esp+8h] [ebp-4h] BYREF

  v3 = RtlQueryEnvironmentVariable(
         a1,
         *((wchar_t **)a2 + 1),
         *a2 >> 1,
         *(char **)(a3 + 4),
         *(unsigned __int16 *)(a3 + 2) >> 1,
         &v6);
  if ( (unsigned int)v6 > 0x7FFF )
    return -1073741801;
  if ( v3 == -1073741789 )
    v4 = 2 * v6 - 2;
  else
    v4 = 2 * v6;
  *(_WORD *)a3 = v4;
  return v3;
}
