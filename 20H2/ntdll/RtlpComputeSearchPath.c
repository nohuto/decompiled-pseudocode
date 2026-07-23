/*
 * XREFs of RtlpComputeSearchPath @ 0x18006C4F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpComputePath @ 0x18006C7D0 (RtlpComputePath.c)
 *     RtlpLookupCurDirSetting @ 0x18006CF10 (RtlpLookupCurDirSetting.c)
 *     Feature_SearchPackagePaths__private_IsEnabled @ 0x18009C4E0 (Feature_SearchPackagePaths__private_IsEnabled.c)
 */

__int64 RtlpComputeSearchPath()
{
  int v0; // ebx
  unsigned __int64 EnvironmentVersion; // rdi
  int IsEnabled; // eax
  __int64 result; // rax

  v0 = 1;
  EnvironmentVersion = NtCurrentPeb()->ProcessParameters->EnvironmentVersion;
  if ( (RtlpSearchPathMode & 1) == 0 )
  {
    if ( (RtlpSearchPathMode & 0x10000) != 0 )
    {
      v0 = 0;
    }
    else
    {
      v0 = dword_18016D514;
      if ( !dword_18016D514 )
        v0 = RtlpLookupCurDirSetting((PUNICODE_STRING)&stru_18011DB50);
    }
  }
  IsEnabled = Feature_SearchPackagePaths__private_IsEnabled();
  result = RtlpComputePath((char *)&unk_180126610 + 20 * v0, (unsigned int)(IsEnabled != 0) + 4, 0LL, 0LL);
  if ( result )
  {
    *(_QWORD *)(result + 88) = EnvironmentVersion;
    *(_BYTE *)(result + 116) = 0;
  }
  return result;
}
