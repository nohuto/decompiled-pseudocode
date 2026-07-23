/*
 * XREFs of _RtlpReferenceCurrentDirectory@4 @ 0x4B2A7C45
 * Callers:
 *     _RtlpCheckForSameCurdir@4 @ 0x4B2A7B3D (_RtlpCheckForSameCurdir@4.c)
 *     _RtlGetCurrentDirectory_U@8 @ 0x4B2A7BB0 (_RtlGetCurrentDirectory_U@8.c)
 *     _RtlpDosPathNameToRelativeNtPathName@28 @ 0x4B2C5860 (_RtlpDosPathNameToRelativeNtPathName@28.c)
 *     _RtlGetFullPathName_Ustr@24 @ 0x4B2C8CA0 (_RtlGetFullPathName_Ustr@24.c)
 * Callees:
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlpCreateNewDirectoryReference@12 @ 0x4B2E418B (_RtlpCreateNewDirectoryReference@12.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _NtFsControlFile@40 @ 0x4B2F2D10 (_NtFsControlFile@40.c)
 *     _RtlpResetDriveEnvironment@4 @ 0x4B32D76C (_RtlpResetDriveEnvironment@4.c)
 */

HANDLE *__fastcall RtlpReferenceCurrentDirectory(char a1)
{
  PVOID v1; // esi
  int v2; // edi
  NTSTATUS v4; // eax
  HANDLE *v5; // edi
  _CURDIR *p_CurrentDirectory; // eax
  _CURDIR *v7; // ecx
  char v8; // [esp+Eh] [ebp-1Ah]
  PVOID BaseAddress; // [esp+10h] [ebp-18h] BYREF
  _CURDIR *v11; // [esp+14h] [ebp-14h]
  __int16 v12; // [esp+18h] [ebp-10h]
  int v13; // [esp+1Ch] [ebp-Ch]
  _IO_STATUS_BLOCK IoStatusBlock; // [esp+20h] [ebp-8h] BYREF

  while ( 1 )
  {
    RtlEnterCriticalSection(&FastPebLock);
    v1 = RtlpCurDirRef;
    if ( !RtlpCurDirRef )
      return 0;
    _InterlockedIncrement((volatile signed __int32 *)RtlpCurDirRef);
    v11 = (_CURDIR *)*((_DWORD *)v1 + 2);
    RtlLeaveCriticalSection(&FastPebLock);
    if ( !a1 )
      return (HANDLE *)v1;
    v2 = MEMORY[0x7FFE02DC];
    if ( (*((_BYTE *)v1 + 20) & 1) == 0 && (_CURDIR *)MEMORY[0x7FFE02DC] == v11 )
      return (HANDLE *)v1;
    v4 = NtFsControlFile(*((HANDLE *)v1 + 1), 0, 0, 0, &IoStatusBlock, 0x90028u, 0, 0, 0, 0);
    if ( v4 >= 0 )
    {
      if ( (*((_BYTE *)v1 + 20) & 1) == 0 )
      {
        RtlEnterCriticalSection(&FastPebLock);
        *((_DWORD *)v1 + 2) = v2;
        RtlLeaveCriticalSection(&FastPebLock);
      }
      return (HANDLE *)v1;
    }
    if ( v4 != -1073741806 && v4 != -1073741202 )
      return (HANDLE *)v1;
    v8 = 0;
    if ( (int)RtlpCreateNewDirectoryReference(&BaseAddress) < 0 )
    {
      v13 = *((_DWORD *)v1 + 4);
      v12 = 6;
      if ( (int)RtlpCreateNewDirectoryReference(&BaseAddress) < 0 )
        return (HANDLE *)v1;
      v8 = 1;
    }
    v5 = (HANDLE *)BaseAddress;
    p_CurrentDirectory = &NtCurrentPeb()->ProcessParameters->CurrentDirectory;
    *(_DWORD *)BaseAddress = 2;
    v11 = p_CurrentDirectory;
    RtlEnterCriticalSection(&FastPebLock);
    if ( RtlpCurDirRef == v1 )
      break;
    RtlLeaveCriticalSection(&FastPebLock);
    if ( !_InterlockedExchangeAdd((volatile signed __int32 *)v1, 0xFFFFFFFF) )
    {
      NtClose(*((HANDLE *)v1 + 1));
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v1);
      v5 = (HANDLE *)BaseAddress;
    }
    *v5 = HANDLE_FLAG_INHERIT;
    if ( !_InterlockedExchangeAdd((volatile signed __int32 *)v5, 0xFFFFFFFF) )
    {
      NtClose(v5[1]);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
    }
  }
  v7 = v11;
  RtlpCurDirRef = v5;
  v11->DosPath.Length = *((_WORD *)v5 + 6);
  v7->DosPath.Buffer = (wchar_t *)v5[4];
  v7->Handle = v5[1];
  if ( v8 )
  {
    LOWORD(v7) = **((_WORD **)v1 + 4);
    RtlpResetDriveEnvironment(v7);
  }
  RtlLeaveCriticalSection(&FastPebLock);
  if ( !_InterlockedExchangeAdd((volatile signed __int32 *)v1, 0xFFFFFFFF) )
  {
    NtClose(*((HANDLE *)v1 + 1));
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v1);
    v5 = (HANDLE *)BaseAddress;
  }
  if ( !_InterlockedDecrement((volatile signed __int32 *)v1) )
  {
    NtClose(*((HANDLE *)v1 + 1));
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v1);
    return (HANDLE *)BaseAddress;
  }
  return v5;
}
