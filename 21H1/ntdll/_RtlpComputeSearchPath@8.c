/*
 * XREFs of _RtlpComputeSearchPath@8 @ 0x4B2ABB20
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpComputePath@16 @ 0x4B2B2EA8 (_RtlpComputePath@16.c)
 *     _RtlpLookupCurDirSetting@12 @ 0x4B2EA935 (_RtlpLookupCurDirSetting@12.c)
 *     _Feature_SearchPackagePaths__private_IsEnabled@0 @ 0x4B3061C5 (_Feature_SearchPackagePaths__private_IsEnabled@0.c)
 */

int __stdcall RtlpComputeSearchPath(int a1, int a2)
{
  unsigned int EnvironmentVersion; // edi
  int result; // eax

  EnvironmentVersion = NtCurrentPeb()->ProcessParameters->EnvironmentVersion;
  if ( (RtlpSearchPathMode & 1) == 0 && (RtlpSearchPathMode & 0x10000) == 0 && !dword_4B3A67DC )
    RtlpLookupCurDirSetting(&dword_4B3A67DC);
  Feature_SearchPackagePaths__private_IsEnabled();
  result = RtlpComputePath(0, 0);
  if ( result )
  {
    *(_DWORD *)(result + 56) = EnvironmentVersion;
    *(_BYTE *)(result + 72) = 0;
  }
  return result;
}
