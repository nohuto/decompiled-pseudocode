/*
 * XREFs of BiLogFileOwnerProcess @ 0x1405C3B80
 * Callers:
 *     BiLoadSystemStore @ 0x140781BD4 (BiLoadSystemStore.c)
 * Callees:
 *     ExFreeHeapPool @ 0x140341AC0 (ExFreeHeapPool.c)
 *     ZwClose @ 0x1403FA580 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x1403FA5C0 (ZwQueryInformationFile.c)
 *     ZwQueryInformationProcess @ 0x1403FA6C0 (ZwQueryInformationProcess.c)
 *     ZwOpenProcess @ 0x1403FA860 (ZwOpenProcess.c)
 *     ZwOpenFile @ 0x1403FAA00 (ZwOpenFile.c)
 *     IopDmaOverrideConflict @ 0x140726270 (IopDmaOverrideConflict.c)
 *     BiLogMessage @ 0x140784D9C (BiLogMessage.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

unsigned int __fastcall BiLogFileOwnerProcess(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v3; // rsi
  PVOID v4; // rdi
  unsigned int result; // eax
  __int64 v6; // rcx
  UNICODE_STRING *v7; // r9
  NTSTATUS v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  _DWORD *v11; // r9
  unsigned int *PoolWithTag; // rax
  NTSTATUS v13; // eax
  unsigned int v14; // r14d
  NTSTATUS v15; // eax
  unsigned int InformationProcess; // eax
  int v17; // eax
  const wchar_t *v18; // r9
  __int64 v19; // rdx
  __int64 v20; // r8
  _DWORD *v21; // r9
  CLIENT_ID ClientId; // [rsp+30h] [rbp-49h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-39h] BYREF
  OBJECT_ATTRIBUTES v24; // [rsp+50h] [rbp-29h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp+7h] BYREF
  ULONG Length; // [rsp+E8h] [rbp+6Fh] BYREF
  HANDLE ProcessHandle; // [rsp+F0h] [rbp+77h] BYREF
  HANDLE FileHandle; // [rsp+F8h] [rbp+7Fh] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  ClientId = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v3 = 0LL;
  IoStatusBlock = 0LL;
  Length = 0;
  v4 = 0LL;
  memset(&v24, 0, sizeof(v24));
  ProcessHandle = 0LL;
  FileHandle = 0LL;
  result = IopDmaOverrideConflict(a1, a2, a3, a1);
  if ( !(_BYTE)result )
    return result;
  BiLogMessage(2LL, L"Attempting to determine owner of file %ws.", *(_QWORD *)(v6 + 8));
  ObjectAttributes.ObjectName = v7;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v8 = ZwOpenFile(&FileHandle, 0x100080u, &ObjectAttributes, &IoStatusBlock, 7u, 0x4020u);
  if ( v8 < 0 )
  {
    result = BiLogMessage(4LL, L"Failed to open file attributes. Status: %x", (unsigned int)v8);
    goto LABEL_29;
  }
  Length = 1024;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 0x400uLL, 0x4B444342u);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
  {
    result = BiLogMessage(4LL, L"Failed to allocate process ID buffer.");
    goto LABEL_29;
  }
  v13 = ZwQueryInformationFile(FileHandle, &IoStatusBlock, PoolWithTag, Length, FileProcessIdsUsingFileInformation);
  if ( v13 < 0 )
  {
    result = BiLogMessage(4LL, L"Failed to query processes. Status: %x", (unsigned int)v13);
LABEL_29:
    if ( ProcessHandle )
      result = ZwClose(ProcessHandle);
    if ( v4 )
      result = (unsigned int)ExFreeHeapPool((ULONG_PTR)v4, v9, v10, v11);
    goto LABEL_33;
  }
  if ( !*v3 )
  {
    result = BiLogMessage(4LL, L"No processes are using this file.");
    goto LABEL_29;
  }
  result = BiLogMessage(2LL, L"Found %d processes using this file.");
  v14 = 0;
  if ( *v3 )
  {
    while ( 1 )
    {
      ClientId.UniqueThread = 0LL;
      ClientId.UniqueProcess = *(HANDLE *)&v3[2 * v14 + 2];
      v24.Length = 48;
      memset(&v24.RootDirectory, 0, 20);
      *(_OWORD *)&v24.SecurityDescriptor = 0LL;
      v15 = ZwOpenProcess(&ProcessHandle, 0x1000u, &v24, &ClientId);
      if ( v15 < 0 )
        break;
      Length = 0;
      InformationProcess = ZwQueryInformationProcess((__int64)ProcessHandle, 27LL);
      if ( InformationProcess != -2147483643 && InformationProcess != -1073741789 && InformationProcess != -1073741820 )
      {
        result = BiLogMessage(4LL, L"Failed to query process information for size. Status: %x", InformationProcess);
        goto LABEL_28;
      }
      v4 = ExAllocatePoolWithTag(PagedPool, Length, 0x4B444342u);
      if ( !v4 )
      {
        result = BiLogMessage(4LL, L"Failed to allocate memory for space for process name.");
        goto LABEL_29;
      }
      v17 = ZwQueryInformationProcess((__int64)ProcessHandle, 27LL);
      if ( v17 < 0 )
      {
        result = BiLogMessage(4LL, L"Failed to query process info. Status: %x", (unsigned int)v17);
        goto LABEL_29;
      }
      if ( *(_WORD *)v4 )
        v18 = (const wchar_t *)*((_QWORD *)v4 + 1);
      else
        v18 = L"System";
      BiLogMessage(4LL, L"Process Name [%d]: %ws", v14, v18, &Length);
      ZwClose(ProcessHandle);
      ProcessHandle = 0LL;
      result = (unsigned int)ExFreeHeapPool((ULONG_PTR)v4, v19, v20, v21);
      ++v14;
      v4 = 0LL;
      if ( v14 >= *v3 )
        goto LABEL_29;
    }
    result = BiLogMessage(4LL, L"Failed to open process. Status: %x", (unsigned int)v15);
LABEL_28:
    v4 = 0LL;
    goto LABEL_29;
  }
LABEL_33:
  if ( v3 )
    result = (unsigned int)ExFreeHeapPool((ULONG_PTR)v3, v9, v10, v11);
  if ( FileHandle )
    return ZwClose(FileHandle);
  return result;
}
