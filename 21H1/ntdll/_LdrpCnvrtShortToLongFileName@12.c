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
  NTSTATUS v4; // esi
  HANDLE *v5; // edi
  _DWORD *Heap; // edi
  unsigned int v7; // eax
  PVOID v8; // ebx
  SIZE_T v10; // [esp-4h] [ebp-5Ch]
  SIZE_T v11; // [esp-4h] [ebp-5Ch]
  size_t v12; // [esp-4h] [ebp-5Ch]
  HANDLE FileHandle; // [esp+10h] [ebp-48h] BYREF
  PCWSTR SourceStringa; // [esp+14h] [ebp-44h]
  _UNICODE_STRING DestinationString; // [esp+18h] [ebp-40h] BYREF
  _UNICODE_STRING FileName; // [esp+20h] [ebp-38h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [esp+28h] [ebp-30h] BYREF
  _UNICODE_STRING v18; // [esp+30h] [ebp-28h] BYREF
  PVOID BaseAddress; // [esp+3Ch] [ebp-1Ch]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+40h] [ebp-18h] BYREF

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
    v4 = NtOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 7u, 0x4021u);
    if ( Buffer )
    {
      v5 = (HANDLE *)BaseAddress;
      if ( BaseAddress && !_InterlockedExchangeAdd((volatile signed __int32 *)BaseAddress, 0xFFFFFFFF) )
      {
        NtClose(v5[1]);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
      }
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Buffer);
    }
    if ( v4 >= 0 )
    {
      LODWORD(v10) = 1040;
      Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v10);
      if ( Heap )
      {
        RtlInitUnicodeString(&FileName, SourceStringa);
        v4 = ZwQueryDirectoryFile(
               FileHandle,
               0,
               0,
               0,
               &IoStatusBlock,
               Heap,
               0x410u,
               FileBothDirectoryInformation,
               1u,
               &FileName,
               0);
        if ( v4 >= 0 )
        {
          v7 = Heap[15];
          if ( v7 <= 0x104 )
          {
            LODWORD(v11) = v7 + 4;
            v8 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v11);
            if ( v8 )
            {
              LODWORD(v12) = Heap[15];
              memcpy(v8, (char *)Heap + 94, v12);
              *((_WORD *)v8 + (Heap[15] >> 1)) = 0;
              *a3 = v8;
            }
            else
            {
              v4 = -1073741801;
            }
          }
        }
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
      }
      else
      {
        v4 = -1073741801;
      }
    }
    goto LABEL_23;
  }
  v4 = RtlpDosPathNameToRelativeNtPathName_U(2, SourceString, &DestinationString, 0, &v18);
  if ( v4 >= 0 )
  {
    Buffer = DestinationString.Buffer;
    if ( v18.Length )
      DestinationString = v18;
    goto LABEL_9;
  }
LABEL_23:
  if ( FileHandle )
    NtClose(FileHandle);
  return v4;
}
