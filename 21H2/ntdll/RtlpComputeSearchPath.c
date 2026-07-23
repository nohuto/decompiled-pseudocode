/*
 * XREFs of RtlpComputeSearchPath @ 0x18006D520
 * Callers:
 *     <none>
 * Callees:
 *     RtlpComputePath @ 0x18006D800 (RtlpComputePath.c)
 *     RtlpLookupCurDirSetting @ 0x18006DF40 (RtlpLookupCurDirSetting.c)
 *     Feature_SearchPackagePaths__private_IsEnabledDeviceUsage @ 0x18009BC90 (Feature_SearchPackagePaths__private_IsEnabledDeviceUsage.c)
 */

__int64 RtlpComputeSearchPath()
{
  int v0; // ebx
  unsigned __int64 EnvironmentVersion; // rdi
  int IsEnabledDeviceUsage; // eax
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
      v0 = dword_18016D50C;
      if ( !dword_18016D50C )
        v0 = RtlpLookupCurDirSetting((PUNICODE_STRING)&stru_18011DB40);
    }
  }
  IsEnabledDeviceUsage = Feature_SearchPackagePaths__private_IsEnabledDeviceUsage();
  result = RtlpComputePath((char *)&unk_1801264C0 + 20 * v0, (unsigned int)(IsEnabledDeviceUsage != 0) + 4, 0LL, 0LL);
  if ( result )
  {
    *(_QWORD *)(result + 88) = EnvironmentVersion;
    *(_BYTE *)(result + 116) = 0;
  }
  return result;
}
