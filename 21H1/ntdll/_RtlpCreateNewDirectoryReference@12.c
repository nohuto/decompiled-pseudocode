/*
 * XREFs of _RtlpCreateNewDirectoryReference@12 @ 0x4B2E418B
 * Callers:
 *     _RtlSetCurrentDirectory_U@4 @ 0x4B2A79F0 (_RtlSetCurrentDirectory_U@4.c)
 *     _RtlpReferenceCurrentDirectory@4 @ 0x4B2A7C45 (_RtlpReferenceCurrentDirectory@4.c)
 *     _RtlpInitCurrentDir@4 @ 0x4B2E412F (_RtlpInitCurrentDir@4.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlpDosPathNameToRelativeNtPathName@28 @ 0x4B2C5860 (_RtlpDosPathNameToRelativeNtPathName@28.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _NtOpenFile@24 @ 0x4B2F2CB0 (_NtOpenFile@24.c)
 *     _NtQueryVolumeInformationFile@20 @ 0x4B2F2E10 (_NtQueryVolumeInformationFile@20.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

int __fastcall RtlpCreateNewDirectoryReference(_UNICODE_STRING *a1, int a2, _DWORD *a3)
{
  int result; // eax
  NTSTATUS v6; // esi
  _DWORD *Heap; // eax
  _DWORD *v8; // esi
  int v9; // ecx
  int v10; // eax
  int v11; // edx
  SIZE_T v12; // [esp-4h] [ebp-4Ch]
  size_t v13; // [esp-4h] [ebp-4Ch]
  HANDLE FileHandle; // [esp+10h] [ebp-38h] BYREF
  int v15; // [esp+14h] [ebp-34h]
  _UNICODE_STRING Destination; // [esp+18h] [ebp-30h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [esp+20h] [ebp-28h] BYREF
  char FsInformation[4]; // [esp+28h] [ebp-20h] BYREF
  int v19; // [esp+2Ch] [ebp-1Ch]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+30h] [ebp-18h] BYREF

  result = RtlpDosPathNameToRelativeNtPathName(0, a1, 0, &Destination, 0, 0, 0);
  if ( result < 0 )
    return result;
  v15 = MEMORY[0x7FFE02DC];
  ObjectAttributes.ObjectName = &Destination;
  ObjectAttributes.Length = 24;
  ObjectAttributes.RootDirectory = 0;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.SecurityDescriptor = 0;
  ObjectAttributes.SecurityQualityOfService = 0;
  v6 = NtOpenFile(&FileHandle, 0x100020u, &ObjectAttributes, &IoStatusBlock, 3u, 0x21u);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Destination.Buffer);
  if ( v6 < 0 )
    return v6;
  v6 = NtQueryVolumeInformationFile(FileHandle, &IoStatusBlock, FsInformation, 8u, FileFsDeviceInformation);
  if ( v6 < 0 )
  {
LABEL_11:
    NtClose(FileHandle);
    return v6;
  }
  LODWORD(v12) = a2 + 24;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v12);
  v8 = Heap;
  if ( !Heap )
  {
    v6 = -1073741801;
    goto LABEL_11;
  }
  v9 = v19;
  Heap[1] = FileHandle;
  v10 = v15;
  *v8 = 1;
  v8[4] = v8 + 6;
  *((_WORD *)v8 + 7) = a2;
  v8[2] = v10;
  v8[5] = v9;
  LODWORD(v13) = a1->Length;
  memcpy(v8 + 6, a1->Buffer, v13);
  *(_WORD *)(v8[4] + 2 * (a1->Length >> 1)) = 0;
  *((_WORD *)v8 + 6) = a1->Length;
  v11 = a1->Length & 0xFFFE;
  if ( *(wchar_t *)((char *)a1->Buffer + v11 - 2) != 92 )
  {
    if ( (unsigned int)a1->Length + 4 > *((unsigned __int16 *)v8 + 7) )
    {
      NtClose(FileHandle);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
      return -1073741562;
    }
    *(_WORD *)(v11 + v8[4]) = 92;
    *(_WORD *)(v8[4] + 2 * (a1->Length >> 1) + 2) = 0;
    *((_WORD *)v8 + 6) += 2;
  }
  *a3 = v8;
  return 0;
}
