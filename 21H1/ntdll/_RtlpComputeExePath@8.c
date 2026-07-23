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
  int IsEnabled; // eax
  int v4; // edx
  int *v5; // ecx
  int v6; // edx
  int result; // eax
  int v8; // [esp-4h] [ebp-Ch]

  EnvironmentVersion = NtCurrentPeb()->ProcessParameters->EnvironmentVersion;
  IsEnabled = Feature_SearchPackagePaths__private_IsEnabled();
  v4 = 0;
  if ( IsEnabled )
  {
    v8 = 5;
  }
  else
  {
    v4 = 1;
    v8 = 4;
  }
  if ( a1 )
  {
    v5 = dword_4B286E10;
    if ( !v4 )
      v5 = dword_4B286E48;
    v6 = (v4 ^ 1) + 3;
  }
  else
  {
    v5 = dword_4B286E20;
    v6 = v8;
  }
  result = RtlpComputePath(v5, v6, 0, 0);
  if ( result )
  {
    *(_DWORD *)(result + 56) = EnvironmentVersion;
    *(_BYTE *)(result + 72) = 0;
  }
  return result;
}
