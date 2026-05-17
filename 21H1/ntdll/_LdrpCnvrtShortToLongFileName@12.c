/*
 * XREFs of _LdrpCnvrtShortToLongFileName@12 @ 0x4B33F31F
 * Callers:
 *     _LdrLoadAlternateResourceModuleEx@20 @ 0x4B2BBDA0 (_LdrLoadAlternateResourceModuleEx@20.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlpDosPathNameToRelativeNtPathName_U@20 @ 0x4B2D1C18 (_RtlpDosPathNameToRelativeNtPathName_U@20.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _NtOpenFile@24 @ 0x4B2F2CB0 (_NtOpenFile@24.c)
 *     _ZwQueryDirectoryFile@44 @ 0x4B2F2CD0 (_ZwQueryDirectoryFile@44.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

NTSTATUS __fastcall LdrpCnvrtShortToLongFileName(PCWSTR SourceString, const WCHAR *a2, _DWORD *a3)
{
  wchar_t *Buffer; // ebx
  NTSTATUS DirectoryFile; // esi
  volatile signed __int32 *v5; // edi
  int Heap; // edi
  unsigned int v7; // eax
  void *v8; // ebx
  HANDLE FileHandle; // [esp+10h] [ebp-48h] BYREF
  PCWSTR SourceStringa; // [esp+14h] [ebp-44h]
  UNICODE_STRING DestinationString; // [esp+18h] [ebp-40h] BYREF
  UNICODE_STRING v13; // [esp+20h] [ebp-38h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [esp+28h] [ebp-30h] BYREF
  UNICODE_STRING v15; // [esp+30h] [ebp-28h] BYREF
  volatile signed __int32 *v16; // [esp+3Ch] [ebp-1Ch]
  OBJECT_ATTRIBUTES ObjectAttributes; // [esp+40h] [ebp-18h] BYREF

  FileHandle = 0;
  Buffer = 0;
  SourceStringa = a2;
  if ( !SourceString || !a2 || !a3 )
    return -1073741811;
  if ( *SourceString == 92 )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
LABEL_9:
    ObjectAttributes.RootDirectory = 0;
    ObjectAttributes.SecurityDescriptor = 0;
    ObjectAttributes.SecurityQualityOfService = 0;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 24;
    ObjectAttributes.Attributes = 64;
    DirectoryFile = NtOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 7u, 0x4021u);
    if ( Buffer )
    {
      v5 = v16;
      if ( v16 && !_InterlockedExchangeAdd(v16, 0xFFFFFFFF) )
      {
        NtClose(*((HANDLE *)v5 + 1));
        RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)v5);
      }
      RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)Buffer);
    }
    if ( DirectoryFile >= 0 )
    {
      Heap = RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 8, 1040);
      if ( Heap )
      {
        RtlInitUnicodeString(&v13, SourceStringa);
        DirectoryFile = ZwQueryDirectoryFile(
                          (int)FileHandle,
                          0,
                          0,
                          0,
                          (int)&IoStatusBlock,
                          Heap,
                          1040,
                          3,
                          1,
                          (int)&v13,
                          0);
        if ( DirectoryFile >= 0 )
        {
          v7 = *(_DWORD *)(Heap + 60);
          if ( v7 <= 0x104 )
          {
            v8 = (void *)RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 8, v7 + 4);
            if ( v8 )
            {
              memcpy(v8, (const void *)(Heap + 94), *(_DWORD *)(Heap + 60));
              *((_WORD *)v8 + (*(_DWORD *)(Heap + 60) >> 1)) = 0;
              *a3 = v8;
            }
            else
            {
              DirectoryFile = -1073741801;
            }
          }
        }
        RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, Heap);
      }
      else
      {
        DirectoryFile = -1073741801;
      }
    }
    goto LABEL_23;
  }
  DirectoryFile = RtlpDosPathNameToRelativeNtPathName_U(2, (int)SourceString, &DestinationString.Length, 0, &v15);
  if ( DirectoryFile >= 0 )
  {
    Buffer = DestinationString.Buffer;
    if ( v15.Length )
      DestinationString = v15;
    goto LABEL_9;
  }
LABEL_23:
  if ( FileHandle )
    NtClose(FileHandle);
  return DirectoryFile;
}
