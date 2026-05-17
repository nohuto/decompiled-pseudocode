/*
 * XREFs of RtlpComputeDllPath @ 0x18006C6D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180021760 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180021920 (RtlReleaseSRWLockShared.c)
 *     RtlpComputePath @ 0x18006C7D0 (RtlpComputePath.c)
 *     RtlpLookupCurDirSetting @ 0x18006CF10 (RtlpLookupCurDirSetting.c)
 *     Feature_SearchPackagePaths__private_IsEnabled @ 0x18009C4E0 (Feature_SearchPackagePaths__private_IsEnabled.c)
 */

__int64 __fastcall RtlpComputeDllPath(__int64 a1)
{
  unsigned __int64 EnvironmentVersion; // rsi
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // r9
  unsigned int v6; // ebx
  __int64 v7; // rbx
  int v8; // eax

  EnvironmentVersion = NtCurrentPeb()->ProcessParameters->EnvironmentVersion;
  v6 = 4;
  if ( (unsigned int)Feature_SearchPackagePaths__private_IsEnabled() )
    v6 = 5;
  if ( *((_QWORD *)&LdrpDllDirectory + 1) )
  {
    RtlAcquireSRWLockShared(&LdrpDllDirectoryLock, v3, v4, v5);
    if ( *((_QWORD *)&LdrpDllDirectory + 1) )
    {
      v7 = RtlpComputePath(&unk_18012664C, v6, a1, 0LL);
      RtlReleaseSRWLockShared(&LdrpDllDirectoryLock);
      goto LABEL_10;
    }
    RtlReleaseSRWLockShared(&LdrpDllDirectoryLock);
  }
  v8 = dword_18016D510;
  if ( !dword_18016D510 )
    v8 = RtlpLookupCurDirSetting(L"\"$", 1LL, &dword_18016D510);
  v7 = RtlpComputePath((char *)&unk_180126610 + 20 * v8, v6, a1, 0LL);
LABEL_10:
  if ( v7 )
  {
    *(_QWORD *)(v7 + 88) = EnvironmentVersion;
    *(_BYTE *)(v7 + 116) = 0;
  }
  return v7;
}
