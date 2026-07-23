/*
 * XREFs of RtlpComputeDllPath @ 0x18006C5C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180021760 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180021920 (RtlReleaseSRWLockShared.c)
 *     RtlpComputePath @ 0x18006C6C0 (RtlpComputePath.c)
 *     RtlpLookupCurDirSetting @ 0x18006CE00 (RtlpLookupCurDirSetting.c)
 *     Feature_SearchPackagePaths__private_IsEnabled @ 0x18009B590 (Feature_SearchPackagePaths__private_IsEnabled.c)
 */

__int64 __fastcall RtlpComputeDllPath(__int64 a1)
{
  unsigned __int64 EnvironmentVersion; // rsi
  unsigned int v3; // ebx
  __int64 v4; // rbx
  int v5; // eax

  EnvironmentVersion = NtCurrentPeb()->ProcessParameters->EnvironmentVersion;
  v3 = 4;
  if ( (unsigned int)Feature_SearchPackagePaths__private_IsEnabled() )
    v3 = 5;
  if ( LdrpDllDirectory.Buffer )
  {
    RtlAcquireSRWLockShared(&LdrpDllDirectoryLock);
    if ( LdrpDllDirectory.Buffer )
    {
      v4 = RtlpComputePath(&unk_180124CFC, v3, a1, 0LL);
      RtlReleaseSRWLockShared(&LdrpDllDirectoryLock);
      goto LABEL_10;
    }
    RtlReleaseSRWLockShared(&LdrpDllDirectoryLock);
  }
  v5 = dword_18016B4E0;
  if ( !dword_18016B4E0 )
    v5 = RtlpLookupCurDirSetting((PUNICODE_STRING)&stru_18011CB20);
  v4 = RtlpComputePath((char *)&unk_180124CC0 + 20 * v5, v3, a1, 0LL);
LABEL_10:
  if ( v4 )
  {
    *(_QWORD *)(v4 + 88) = EnvironmentVersion;
    *(_BYTE *)(v4 + 116) = 0;
  }
  return v4;
}
