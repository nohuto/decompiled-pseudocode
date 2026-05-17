/*
 * XREFs of _RtlpComputeDllPath@8 @ 0x4B2B2DF2
 * Callers:
 *     _LdrpGetDllPath@28 @ 0x4B2B27D0 (_LdrpGetDllPath@28.c)
 * Callees:
 *     _RtlpComputePath@16 @ 0x4B2B2EA8 (_RtlpComputePath@16.c)
 *     _RtlReleaseSRWLockShared@4 @ 0x4B2B52B0 (_RtlReleaseSRWLockShared@4.c)
 *     _RtlAcquireSRWLockShared@4 @ 0x4B2B5380 (_RtlAcquireSRWLockShared@4.c)
 *     _RtlpLookupCurDirSetting@12 @ 0x4B2EA935 (_RtlpLookupCurDirSetting@12.c)
 *     _Feature_SearchPackagePaths__private_IsEnabled@0 @ 0x4B3061C5 (_Feature_SearchPackagePaths__private_IsEnabled@0.c)
 */

int __stdcall RtlpComputeDllPath(int a1, int a2)
{
  unsigned int EnvironmentVersion; // ebx
  int v3; // esi

  EnvironmentVersion = NtCurrentPeb()->ProcessParameters->EnvironmentVersion;
  Feature_SearchPackagePaths__private_IsEnabled();
  if ( Src )
  {
    RtlAcquireSRWLockShared(&LdrpDllDirectoryLock);
    if ( Src )
    {
      v3 = RtlpComputePath(a1, 0);
      RtlReleaseSRWLockShared(&LdrpDllDirectoryLock);
      goto LABEL_8;
    }
    RtlReleaseSRWLockShared(&LdrpDllDirectoryLock);
  }
  if ( !dword_4B3A67D8 )
    RtlpLookupCurDirSetting(&dword_4B3A67D8);
  v3 = RtlpComputePath(a1, 0);
LABEL_8:
  if ( v3 )
  {
    *(_DWORD *)(v3 + 56) = EnvironmentVersion;
    *(_BYTE *)(v3 + 72) = 0;
  }
  return v3;
}
