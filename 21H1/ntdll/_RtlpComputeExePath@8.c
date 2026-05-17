/*
 * XREFs of _RtlpComputeExePath@8 @ 0x4B2AC050
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpComputePath@16 @ 0x4B2B2EA8 (_RtlpComputePath@16.c)
 *     _Feature_SearchPackagePaths__private_IsEnabled@0 @ 0x4B3061C5 (_Feature_SearchPackagePaths__private_IsEnabled@0.c)
 */

int __stdcall RtlpComputeExePath(int a1, int a2)
{
  unsigned int EnvironmentVersion; // esi
  int result; // eax

  EnvironmentVersion = NtCurrentPeb()->ProcessParameters->EnvironmentVersion;
  Feature_SearchPackagePaths__private_IsEnabled();
  result = RtlpComputePath(0, 0);
  if ( result )
  {
    *(_DWORD *)(result + 56) = EnvironmentVersion;
    *(_BYTE *)(result + 72) = 0;
  }
  return result;
}
