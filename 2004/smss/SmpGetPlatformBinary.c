/*
 * XREFs of SmpGetPlatformBinary @ 0x140006768
 * Callers:
 *     SmpLoadDataFromRegistry @ 0x1400094D0 (SmpLoadDataFromRegistry.c)
 * Callees:
 *     SmpSendPlatformBinaryStatus @ 0x140014D8C (SmpSendPlatformBinaryStatus.c)
 */

__int64 __fastcall SmpGetPlatformBinary(PUNICODE_STRING Destination, _QWORD *a2)
{
  char v4; // r15
  WCHAR *v5; // rsi
  NTSTATUS v6; // eax
  NTSTATUS appended; // ebx
  unsigned int v9; // ebx
  WCHAR *Heap; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-29h] BYREF
  __int64 SystemInformation; // [rsp+70h] [rbp-19h] BYREF
  PVOID Buffer[2]; // [rsp+78h] [rbp-11h]
  SIZE_T Size; // [rsp+88h] [rbp-1h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp+7h] BYREF
  void *FileHandle; // [rsp+100h] [rbp+77h] BYREF
  union _LARGE_INTEGER AllocationSize; // [rsp+108h] [rbp+7Fh] BYREF

  FileHandle = 0LL;
  Size = 0LL;
  v4 = 0;
  v5 = 0LL;
  *(_OWORD *)Buffer = 0LL;
  v6 = NtQuerySystemInformation(SystemProcessInformation|0x80, &SystemInformation, 0x20u, 0LL);
  if ( v6 == -1073741637 )
    return 3221225473LL;
  if ( v6 != -1073741789 )
  {
    SmpSendPlatformBinaryStatus(1LL, 0LL, 0LL, 0LL);
    return 3221225473LL;
  }
  Buffer[0] = RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, (unsigned int)Size);
  if ( Buffer[0] )
  {
    if ( HIDWORD(Size) )
    {
      Buffer[1] = RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 8u, HIDWORD(Size) + 2LL);
      if ( !Buffer[1] )
      {
LABEL_9:
        appended = -1073741823;
        goto LABEL_20;
      }
    }
    appended = NtQuerySystemInformation(SystemProcessInformation|0x80, &SystemInformation, 0x20u, 0LL);
    if ( appended >= 0 )
    {
      AllocationSize.QuadPart = (unsigned int)Size;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)L">@";
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 0;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      appended = NtCreateFile(
                   &FileHandle,
                   0x120106u,
                   &ObjectAttributes,
                   &IoStatusBlock,
                   &AllocationSize,
                   0x80u,
                   0,
                   0,
                   0x64u,
                   0LL,
                   0);
      if ( appended >= 0 )
      {
        v4 = 1;
        appended = NtWriteFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer[0], Size, 0LL, 0LL);
        if ( appended >= 0 )
        {
          v9 = 22;
          if ( HIDWORD(Size) )
            v9 = HIDWORD(Size) + 24;
          Heap = (WCHAR *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v9);
          v5 = Heap;
          if ( Heap )
          {
            *Destination = 0LL;
            Destination->MaximumLength = v9;
            Destination->Buffer = Heap;
            appended = RtlAppendUnicodeToString(Destination, L"wpbbin.exe");
            if ( HIDWORD(Size) )
            {
              RtlAppendUnicodeToString(Destination, L" ");
              appended = RtlAppendUnicodeToString(Destination, (PCWSTR)Buffer[1]);
            }
            *a2 = SystemInformation;
            goto LABEL_20;
          }
          goto LABEL_9;
        }
      }
      else
      {
        FileHandle = 0LL;
      }
    }
LABEL_20:
    if ( Buffer[0] )
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Buffer[0]);
    goto LABEL_22;
  }
  appended = -1073741823;
LABEL_22:
  if ( Buffer[1] )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Buffer[1]);
  if ( FileHandle )
    NtClose(FileHandle);
  if ( appended < 0 )
  {
    Destination->Buffer = 0LL;
    if ( v5 )
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v5);
    if ( v4 )
      NtDeleteFile(&ObjectAttributes);
    SmpSendPlatformBinaryStatus(1LL, 0LL, 0LL, 0LL);
  }
  return (unsigned int)appended;
}
