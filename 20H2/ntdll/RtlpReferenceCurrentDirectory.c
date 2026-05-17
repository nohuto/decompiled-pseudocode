/*
 * XREFs of RtlpReferenceCurrentDirectory @ 0x18005D370
 * Callers:
 *     RtlpDosPathNameToRelativeNtPathName @ 0x18001AF50 (RtlpDosPathNameToRelativeNtPathName.c)
 *     RtlGetFullPathName_Ustr @ 0x18001B430 (RtlGetFullPathName_Ustr.c)
 *     RtlpCheckForSameCurdir @ 0x18005D1D0 (RtlpCheckForSameCurdir.c)
 *     RtlGetCurrentDirectory_U @ 0x18005D290 (RtlGetCurrentDirectory_U.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     RtlpResetDriveEnvironment @ 0x18004D3D4 (RtlpResetDriveEnvironment.c)
 *     RtlpCreateNewDirectoryReference @ 0x18005E83C (RtlpCreateNewDirectoryReference.c)
 *     NtClose @ 0x18009D290 (NtClose.c)
 *     ZwFsControlFile @ 0x18009D7D0 (ZwFsControlFile.c)
 */

__int64 __fastcall RtlpReferenceCurrentDirectory(char a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // rbx
  int v5; // esi
  int v7; // edi
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  char v11; // bp
  __int64 v12; // rdx
  __int64 v13; // rdi
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rsi
  __int64 v15; // rdx
  __int64 v16; // r8
  volatile signed __int32 *v17; // rcx
  __int16 v18; // [rsp+50h] [rbp-48h] BYREF
  __int64 v19; // [rsp+58h] [rbp-40h]
  _BYTE v20[16]; // [rsp+60h] [rbp-38h] BYREF
  __int64 v21; // [rsp+A8h] [rbp+10h] BYREF

  while ( 1 )
  {
    RtlEnterCriticalSection((__int64)&FastPebLock);
    v4 = RtlpCurDirRef;
    if ( !RtlpCurDirRef )
      return 0LL;
    _InterlockedIncrement((volatile signed __int32 *)RtlpCurDirRef);
    v5 = *(_DWORD *)(v4 + 16);
    RtlLeaveCriticalSection((__int64)&FastPebLock, v2, v3);
    if ( !a1 )
      return v4;
    v7 = MEMORY[0x7FFE02DC];
    if ( (*(_BYTE *)(v4 + 40) & 1) == 0 && MEMORY[0x7FFE02DC] == v5 )
      return v4;
    v8 = ZwFsControlFile(*(_QWORD *)(v4 + 8), 0LL, 0LL, 0LL, v20, 589864, 0LL, 0, 0LL, 0);
    if ( v8 >= 0 )
    {
      if ( (*(_BYTE *)(v4 + 40) & 1) == 0 )
      {
        RtlEnterCriticalSection((__int64)&FastPebLock);
        *(_DWORD *)(v4 + 16) = v7;
        RtlLeaveCriticalSection((__int64)&FastPebLock, v9, v10);
      }
      return v4;
    }
    if ( v8 != -1073741806 && v8 != -1073741202 )
      return v4;
    v11 = 0;
    if ( (int)RtlpCreateNewDirectoryReference(v4 + 24, *(unsigned __int16 *)(v4 + 26), &v21) < 0 )
    {
      v12 = *(unsigned __int16 *)(v4 + 26);
      v19 = *(_QWORD *)(v4 + 32);
      v18 = 6;
      if ( (int)RtlpCreateNewDirectoryReference(&v18, v12, &v21) < 0 )
        return v4;
      v11 = 1;
    }
    v13 = v21;
    ProcessParameters = NtCurrentPeb()->ProcessParameters;
    *(_DWORD *)v21 = 2;
    RtlEnterCriticalSection((__int64)&FastPebLock);
    if ( RtlpCurDirRef == v4 )
      break;
    RtlLeaveCriticalSection((__int64)&FastPebLock, v15, v16);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v4, 0xFFFFFFFF) == 1 )
    {
      NtClose(*(HANDLE *)(v4 + 8));
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v4);
    }
    v17 = (volatile signed __int32 *)v21;
    *(_DWORD *)v21 = 1;
    if ( _InterlockedExchangeAdd(v17, 0xFFFFFFFF) == 1 )
    {
      NtClose(*(HANDLE *)(v21 + 8));
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v21);
    }
  }
  RtlpCurDirRef = v13;
  ProcessParameters->CurrentDirectory.DosPath.Length = *(_WORD *)(v13 + 24);
  ProcessParameters->CurrentDirectory.DosPath.Buffer = *(wchar_t **)(v13 + 32);
  ProcessParameters->CurrentDirectory.Handle = *(void **)(v13 + 8);
  if ( v11 )
    RtlpResetDriveEnvironment(**(_WORD **)(v4 + 32));
  RtlLeaveCriticalSection((__int64)&FastPebLock, v15, v16);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v4, 0xFFFFFFFF) == 1 )
  {
    NtClose(*(HANDLE *)(v4 + 8));
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v4);
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v4, 0xFFFFFFFF) == 1 )
  {
    NtClose(*(HANDLE *)(v4 + 8));
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v4);
  }
  return v21;
}
