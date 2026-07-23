/*
 * XREFs of BiLogFileOwnerProcess @ 0x1405C2350
 * Callers:
 *     BiLoadSystemStore @ 0x14077DDF4 (BiLoadSystemStore.c)
 * Callees:
 *     ExFreeHeapPool @ 0x1402176E0 (ExFreeHeapPool.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x1403F8390 (ZwQueryInformationFile.c)
 *     ZwQueryInformationProcess @ 0x1403F8490 (ZwQueryInformationProcess.c)
 *     ZwOpenProcess @ 0x1403F8630 (ZwOpenProcess.c)
 *     ZwOpenFile @ 0x1403F87D0 (ZwOpenFile.c)
 *     IopDmaOverrideConflict @ 0x140721B20 (IopDmaOverrideConflict.c)
 *     BiLogMessage @ 0x140780FBC (BiLogMessage.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __fastcall BiLogFileOwnerProcess(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v3; // rsi
  _QWORD *v4; // rdi
  NTSTATUS result; // eax
  __int64 v6; // rcx
  UNICODE_STRING *v7; // r9
  NTSTATUS v8; // eax
  unsigned int *PoolWithTag; // rax
  NTSTATUS v10; // eax
  unsigned int v11; // r14d
  NTSTATUS v12; // eax
  unsigned int v13; // eax
  NTSTATUS v14; // eax
  const wchar_t *v15; // r9
  CLIENT_ID ClientId; // [rsp+30h] [rbp-49h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-39h] BYREF
  OBJECT_ATTRIBUTES v18; // [rsp+50h] [rbp-29h] BYREF
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
  memset(&v18, 0, sizeof(v18));
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
  v10 = ZwQueryInformationFile(FileHandle, &IoStatusBlock, PoolWithTag, Length, FileProcessIdsUsingFileInformation);
  if ( v10 < 0 )
  {
    result = BiLogMessage(4LL, L"Failed to query processes. Status: %x", (unsigned int)v10);
LABEL_29:
    if ( ProcessHandle )
      result = ZwClose(ProcessHandle);
    if ( v4 )
      result = ExFreeHeapPool((ULONG_PTR)v4);
    goto LABEL_33;
  }
  if ( !*v3 )
  {
    result = BiLogMessage(4LL, L"No processes are using this file.");
    goto LABEL_29;
  }
  result = BiLogMessage(2LL, L"Found %d processes using this file.");
  v11 = 0;
  if ( *v3 )
  {
    while ( 1 )
    {
      ClientId.UniqueThread = 0LL;
      ClientId.UniqueProcess = *(HANDLE *)&v3[2 * v11 + 2];
      v18.Length = 48;
      memset(&v18.RootDirectory, 0, 20);
      *(_OWORD *)&v18.SecurityDescriptor = 0LL;
      v12 = ZwOpenProcess(&ProcessHandle, 0x1000u, &v18, &ClientId);
      if ( v12 < 0 )
        break;
      Length = 0;
      v13 = ZwQueryInformationProcess(ProcessHandle, ProcessImageFileName, 0LL, 0, &Length);
      if ( v13 != -2147483643 && v13 != -1073741789 && v13 != -1073741820 )
      {
        result = BiLogMessage(4LL, L"Failed to query process information for size. Status: %x", v13);
        goto LABEL_28;
      }
      v4 = ExAllocatePoolWithTag(PagedPool, Length, 0x4B444342u);
      if ( !v4 )
      {
        result = BiLogMessage(4LL, L"Failed to allocate memory for space for process name.");
        goto LABEL_29;
      }
      v14 = ZwQueryInformationProcess(ProcessHandle, ProcessImageFileName, v4, Length, &Length);
      if ( v14 < 0 )
      {
        result = BiLogMessage(4LL, L"Failed to query process info. Status: %x", (unsigned int)v14);
        goto LABEL_29;
      }
      if ( *(_WORD *)v4 )
        v15 = (const wchar_t *)v4[1];
      else
        v15 = L"System";
      BiLogMessage(4LL, L"Process Name [%d]: %ws", v11, v15);
      ZwClose(ProcessHandle);
      ProcessHandle = 0LL;
      result = ExFreeHeapPool((ULONG_PTR)v4);
      ++v11;
      v4 = 0LL;
      if ( v11 >= *v3 )
        goto LABEL_29;
    }
    result = BiLogMessage(4LL, L"Failed to open process. Status: %x", (unsigned int)v12);
LABEL_28:
    v4 = 0LL;
    goto LABEL_29;
  }
LABEL_33:
  if ( v3 )
    result = ExFreeHeapPool((ULONG_PTR)v3);
  if ( FileHandle )
    return ZwClose(FileHandle);
  return result;
}
