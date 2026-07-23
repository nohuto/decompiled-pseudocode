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
  int v3; // esi
  int IsEnabled; // eax
  int result; // eax

  EnvironmentVersion = NtCurrentPeb()->ProcessParameters->EnvironmentVersion;
  if ( (RtlpSearchPathMode & 1) != 0 )
  {
    v3 = 1;
  }
  else if ( (RtlpSearchPathMode & 0x10000) != 0 )
  {
    v3 = 0;
  }
  else
  {
    v3 = dword_4B3A67DC;
    if ( !dword_4B3A67DC )
      v3 = RtlpLookupCurDirSetting((PUNICODE_STRING)&stru_4B281738, (int)&dword_4B3A67DC);
  }
  IsEnabled = Feature_SearchPackagePaths__private_IsEnabled();
  result = RtlpComputePath(&dword_4B286E20[5 * v3], (IsEnabled != 0) + 4, 0, 0);
  if ( result )
  {
    *(_DWORD *)(result + 56) = EnvironmentVersion;
    *(_BYTE *)(result + 72) = 0;
  }
  return result;
}
