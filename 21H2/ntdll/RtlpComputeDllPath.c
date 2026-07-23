/*
 * XREFs of RtlpComputeDllPath @ 0x18006D700
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180021760 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180021920 (RtlReleaseSRWLockShared.c)
 *     RtlpComputePath @ 0x18006D800 (RtlpComputePath.c)
 *     RtlpLookupCurDirSetting @ 0x18006DF40 (RtlpLookupCurDirSetting.c)
 *     Feature_SearchPackagePaths__private_IsEnabledDeviceUsage @ 0x18009BC90 (Feature_SearchPackagePaths__private_IsEnabledDeviceUsage.c)
 */

__int64 __fastcall RtlpComputeDllPath(__int64 a1)
{
  unsigned __int64 EnvironmentVersion; // rsi
  unsigned int v3; // ebx
  __int64 v4; // rbx
  int v5; // eax

  EnvironmentVersion = NtCurrentPeb()->ProcessParameters->EnvironmentVersion;
  v3 = 4;
  if ( (unsigned int)Feature_SearchPackagePaths__private_IsEnabledDeviceUsage() )
    v3 = 5;
  if ( LdrpDllDirectory.Buffer )
  {
    RtlAcquireSRWLockShared(&LdrpDllDirectoryLock);
    if ( LdrpDllDirectory.Buffer )
    {
      v4 = RtlpComputePath(&unk_1801264FC, v3, a1, 0LL);
      RtlReleaseSRWLockShared(&LdrpDllDirectoryLock);
      goto LABEL_10;
    }
    RtlReleaseSRWLockShared(&LdrpDllDirectoryLock);
  }
  v5 = dword_18016D508;
  if ( !dword_18016D508 )
    v5 = RtlpLookupCurDirSetting((PUNICODE_STRING)&stru_18011DB50);
  v4 = RtlpComputePath((char *)&unk_1801264C0 + 20 * v5, v3, a1, 0LL);
LABEL_10:
  if ( v4 )
  {
    *(_QWORD *)(v4 + 88) = EnvironmentVersion;
    *(_BYTE *)(v4 + 116) = 0;
  }
  return v4;
}
