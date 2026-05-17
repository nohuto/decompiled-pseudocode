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

int __fastcall RtlpCreateNewDirectoryReference(unsigned __int16 *a1, int a2, int *a3)
{
  int result; // eax
  NTSTATUS v6; // esi
  int Heap; // eax
  int v8; // esi
  int v9; // ecx
  int v10; // eax
  int v11; // edx
  HANDLE FileHandle; // [esp+10h] [ebp-38h] BYREF
  int v13; // [esp+14h] [ebp-34h]
  unsigned __int16 v14; // [esp+18h] [ebp-30h] BYREF
  int v15; // [esp+1Ch] [ebp-2Ch]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [esp+20h] [ebp-28h] BYREF
  _BYTE v17[4]; // [esp+28h] [ebp-20h] BYREF
  int v18; // [esp+2Ch] [ebp-1Ch]
  OBJECT_ATTRIBUTES ObjectAttributes; // [esp+30h] [ebp-18h] BYREF

  result = RtlpDosPathNameToRelativeNtPathName(0, (int *)a1, 0, &v14, 0, 0, 0);
  if ( result < 0 )
    return result;
  v13 = MEMORY[0x7FFE02DC];
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v14;
  ObjectAttributes.Length = 24;
  ObjectAttributes.RootDirectory = 0;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.SecurityDescriptor = 0;
  ObjectAttributes.SecurityQualityOfService = 0;
  v6 = NtOpenFile(&FileHandle, 0x100020u, &ObjectAttributes, &IoStatusBlock, 3u, 0x21u);
  RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v15);
  if ( v6 < 0 )
    return v6;
  v6 = NtQueryVolumeInformationFile(FileHandle, &IoStatusBlock, v17, 8, 4);
  if ( v6 < 0 )
  {
LABEL_11:
    NtClose(FileHandle);
    return v6;
  }
  Heap = RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 0, a2 + 24);
  v8 = Heap;
  if ( !Heap )
  {
    v6 = -1073741801;
    goto LABEL_11;
  }
  v9 = v18;
  *(_DWORD *)(Heap + 4) = FileHandle;
  v10 = v13;
  *(_DWORD *)v8 = 1;
  *(_DWORD *)(v8 + 16) = v8 + 24;
  *(_WORD *)(v8 + 14) = a2;
  *(_DWORD *)(v8 + 8) = v10;
  *(_DWORD *)(v8 + 20) = v9;
  memcpy((void *)(v8 + 24), *((const void **)a1 + 1), *a1);
  *(_WORD *)(*(_DWORD *)(v8 + 16) + 2 * (*a1 >> 1)) = 0;
  *(_WORD *)(v8 + 12) = *a1;
  v11 = *a1 & 0xFFFE;
  if ( *(_WORD *)(*((_DWORD *)a1 + 1) + v11 - 2) != 92 )
  {
    if ( (unsigned int)*a1 + 4 > *(unsigned __int16 *)(v8 + 14) )
    {
      NtClose(FileHandle);
      RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v8);
      return -1073741562;
    }
    *(_WORD *)(v11 + *(_DWORD *)(v8 + 16)) = 92;
    *(_WORD *)(*(_DWORD *)(v8 + 16) + 2 * (*a1 >> 1) + 2) = 0;
    *(_WORD *)(v8 + 12) += 2;
  }
  *a3 = v8;
  return 0;
}
