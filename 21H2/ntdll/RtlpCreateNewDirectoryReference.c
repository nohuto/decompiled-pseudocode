/*
 * XREFs of RtlpCreateNewDirectoryReference @ 0x18005FD2C
 * Callers:
 *     RtlSetCurrentDirectory_U @ 0x18005E560 (RtlSetCurrentDirectory_U.c)
 *     RtlpReferenceCurrentDirectory @ 0x18005E8A0 (RtlpReferenceCurrentDirectory.c)
 *     RtlpInitCurrentDir @ 0x18005FCB8 (RtlpInitCurrentDir.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlDosPathNameToRelativeNtPathName @ 0x1800608E4 (RtlDosPathNameToRelativeNtPathName.c)
 *     NtClose @ 0x18009D820 (NtClose.c)
 *     NtOpenFile @ 0x18009DCA0 (NtOpenFile.c)
 *     ZwQueryVolumeInformationFile @ 0x18009DF60 (ZwQueryVolumeInformationFile.c)
 *     memmove @ 0x1800A44C0 (memmove.c)
 */

__int64 __fastcall RtlpCreateNewDirectoryReference(const void **a1, unsigned int a2, __int64 *a3)
{
  __int64 v4; // rsi
  __int64 result; // rax
  int v7; // r15d
  NTSTATUS v8; // ebx
  __int64 Heap; // rax
  __int64 v10; // rbx
  int v11; // edx
  unsigned __int64 v12; // rdx
  _BYTE v13[4]; // [rsp+40h] [rbp-29h] BYREF
  int v14; // [rsp+44h] [rbp-25h]
  _BYTE v15[8]; // [rsp+48h] [rbp-21h] BYREF
  __int64 v16; // [rsp+50h] [rbp-19h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-11h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-1h] BYREF
  HANDLE FileHandle; // [rsp+E8h] [rbp+7Fh] BYREF

  v4 = a2;
  result = RtlDosPathNameToRelativeNtPathName(0, a2, (_DWORD)a1, 0, (__int64)v15, 0LL);
  if ( (int)result < 0 )
    return result;
  v7 = MEMORY[0x7FFE02DC];
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v15;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v8 = NtOpenFile(&FileHandle, 0x100020u, &ObjectAttributes, &IoStatusBlock, 3u, 0x21u);
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v16);
  if ( v8 < 0 )
    return (unsigned int)v8;
  v8 = ZwQueryVolumeInformationFile(FileHandle, &IoStatusBlock, v13, 8LL, 4);
  if ( v8 < 0 )
  {
LABEL_12:
    NtClose(FileHandle);
    return (unsigned int)v8;
  }
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v4 + 48);
  v10 = Heap;
  if ( !Heap )
  {
    v8 = -1073741801;
    goto LABEL_12;
  }
  v11 = v14;
  *(_QWORD *)(Heap + 8) = FileHandle;
  *(_QWORD *)(Heap + 32) = Heap + 48;
  *(_DWORD *)Heap = 1;
  *(_WORD *)(Heap + 26) = v4;
  *(_DWORD *)(Heap + 16) = v7;
  *(_DWORD *)(Heap + 40) = v11;
  memmove((void *)(Heap + 48), a1[1], *(unsigned __int16 *)a1);
  *(_WORD *)(*(_QWORD *)(v10 + 32) + 2 * ((unsigned __int64)*(unsigned __int16 *)a1 >> 1)) = 0;
  *(_WORD *)(v10 + 24) = *(_WORD *)a1;
  v12 = (unsigned __int64)*(unsigned __int16 *)a1 >> 1;
  if ( *((_WORD *)a1[1] + v12 - 1) != 92 )
  {
    if ( (unsigned __int64)*(unsigned __int16 *)a1 + 4 > *(unsigned __int16 *)(v10 + 26) )
    {
      NtClose(FileHandle);
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v10);
      return 3221225734LL;
    }
    *(_WORD *)(*(_QWORD *)(v10 + 32) + 2 * v12) = 92;
    *(_WORD *)(*(_QWORD *)(v10 + 32) + 2 * ((unsigned __int64)*(unsigned __int16 *)a1 >> 1) + 2) = 0;
    *(_WORD *)(v10 + 24) += 2;
  }
  *a3 = v10;
  return 0LL;
}
