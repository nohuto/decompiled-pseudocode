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
  int v4; // edi
  int v5; // esi
  int v6; // eax
  int v8; // [esp-4h] [ebp-14h]

  EnvironmentVersion = NtCurrentPeb()->ProcessParameters->EnvironmentVersion;
  if ( Feature_SearchPackagePaths__private_IsEnabled() )
    v8 = 5;
  else
    v8 = 4;
  v3 = v8;
  v4 = v8;
  if ( LdrpDllDirectory.Buffer )
  {
    RtlAcquireSRWLockShared(&LdrpDllDirectoryLock);
    if ( LdrpDllDirectory.Buffer )
    {
      v5 = RtlpComputePath(byte_4B286E5C, v4, a1, 0);
      RtlReleaseSRWLockShared(&LdrpDllDirectoryLock);
      goto LABEL_11;
    }
    RtlReleaseSRWLockShared(&LdrpDllDirectoryLock);
  }
  v6 = dword_4B3A67D8;
  if ( !dword_4B3A67D8 )
    v6 = RtlpLookupCurDirSetting((PUNICODE_STRING)&stru_4B281740, (int)&dword_4B3A67D8);
  v5 = RtlpComputePath(&dword_4B286E20[5 * v6], v3, a1, 0);
LABEL_11:
  if ( v5 )
  {
    *(_DWORD *)(v5 + 56) = EnvironmentVersion;
    *(_BYTE *)(v5 + 72) = 0;
  }
  return v5;
}
