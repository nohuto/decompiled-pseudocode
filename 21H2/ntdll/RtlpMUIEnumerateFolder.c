/*
 * XREFs of RtlpMUIEnumerateFolder @ 0x1800873AC
 * Callers:
 *     RtlGetFileMUIPath @ 0x1800468F0 (RtlGetFileMUIPath.c)
 * Callees:
 *     RtlDosPathNameToRelativeNtPathName_U @ 0x180016B80 (RtlDosPathNameToRelativeNtPathName_U.c)
 *     RtlReleaseRelativeName @ 0x18001A320 (RtlReleaseRelativeName.c)
 *     RtlReAllocateHeap @ 0x180023640 (RtlReAllocateHeap.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlCultureNameToLCID @ 0x18003B850 (RtlCultureNameToLCID.c)
 *     NtClose @ 0x18009D820 (NtClose.c)
 *     NtOpenFile @ 0x18009DCA0 (NtOpenFile.c)
 *     NtQueryDirectoryFile @ 0x18009DCE0 (NtQueryDirectoryFile.c)
 *     memmove @ 0x1800A44C0 (memmove.c)
 *     memset @ 0x1800A4780 (memset.c)
 */

char __fastcall RtlpMUIEnumerateFolder(__int64 a1, _QWORD *a2, __int64 *a3)
{
  char v4; // r15
  unsigned int v5; // r13d
  unsigned int *Heap; // rdi
  unsigned __int64 v7; // rax
  __int64 v8; // rsi
  void *v9; // rax
  NTSTATUS v10; // r14d
  __int64 v11; // r12
  int v12; // eax
  unsigned int *i; // rsi
  bool v14; // zf
  __int64 v15; // r14
  __int64 v16; // rax
  unsigned int v17; // eax
  unsigned int v18; // edx
  __int64 v20; // rax
  int v21; // [rsp+40h] [rbp-89h]
  int v22; // [rsp+50h] [rbp-79h]
  HANDLE FileHandle; // [rsp+60h] [rbp-69h] BYREF
  __int128 v24; // [rsp+68h] [rbp-61h] BYREF
  unsigned __int16 v25; // [rsp+78h] [rbp-51h] BYREF
  unsigned __int16 v26; // [rsp+7Ah] [rbp-4Fh]
  unsigned int *v27; // [rsp+80h] [rbp-49h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-41h] BYREF
  __int128 v29; // [rsp+98h] [rbp-31h] BYREF
  void *v30; // [rsp+A8h] [rbp-21h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B8h] [rbp-11h] BYREF
  unsigned int v32; // [rsp+130h] [rbp+67h]
  int v34; // [rsp+148h] [rbp+7Fh] BYREF

  v32 = 0;
  FileHandle = 0LL;
  v4 = 0;
  v5 = 0;
  Heap = 0LL;
  if ( !a1 )
    goto LABEL_48;
  if ( !a3 )
    return v4;
  if ( !a2 )
    goto LABEL_48;
  v7 = -1LL;
  do
    ++v7;
  while ( *(_WORD *)(a1 + 2 * v7) );
  if ( v7 >= 0x104 )
    goto LABEL_48;
  *a3 = 0LL;
  if ( RtlDosPathNameToRelativeNtPathName_U(a1, (int)&v24, 0, (__int64)&v29) )
  {
    v8 = *((_QWORD *)&v24 + 1);
    if ( (_WORD)v29 )
    {
      v9 = v30;
      v24 = v29;
    }
    else
    {
      v9 = 0LL;
      v30 = 0LL;
    }
    ObjectAttributes.RootDirectory = v9;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v24;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v10 = NtOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 5u, 0x21u);
    RtlReleaseRelativeName((__int64)&v29);
    if ( v8 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v8);
    if ( v10 >= 0 )
    {
      if ( FileHandle )
      {
        Heap = (unsigned int *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 4096LL);
        if ( !Heap )
          goto LABEL_31;
        v11 = 0LL;
        LOBYTE(v22) = 1;
LABEL_16:
        LOBYTE(v21) = 0;
        v12 = NtQueryDirectoryFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, Heap, 4096, 1, v21, 0LL, v22);
        if ( v12 < 0 )
        {
          if ( v12 != -2147483642 )
            goto LABEL_31;
        }
        else if ( Heap[15] || *Heap )
        {
          for ( i = Heap; ; i = (unsigned int *)((char *)i + *i) )
          {
            v14 = (i[14] & 0x10) == 0;
            v26 = *((_WORD *)i + 30);
            v25 = v26;
            v27 = i + 16;
            if ( !v14 && RtlCultureNameToLCID(&v25, &v34) )
            {
              v15 = *a3;
              ++v11;
              if ( *a3 )
              {
                v17 = v32;
              }
              else
              {
                v16 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 520LL);
                *a3 = v16;
                v15 = v16;
                if ( !v16 )
                  goto LABEL_31;
                v17 = 0;
                v5 = 520;
                v32 = 0;
              }
              v18 = i[15];
              if ( (unsigned __int64)(v18 + v17) + 2 > v5 )
              {
                if ( v18 > 0x208 )
                  v5 += v18 + 2;
                else
                  v5 += 520;
                v20 = RtlReAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v15, v5);
                *a3 = v20;
                if ( !v20 )
                {
                  *a3 = v15;
                  goto LABEL_31;
                }
                v18 = i[15];
                v15 = v20;
              }
              memmove((void *)(v15 + v32), i + 16, v18);
              v32 += i[15] + 2;
            }
            if ( !*i )
            {
              memset(Heap, 0, 0x1000uLL);
              LOBYTE(v22) = 0;
              goto LABEL_16;
            }
          }
        }
        v4 = 1;
        *a2 = v11;
        goto LABEL_31;
      }
      goto LABEL_48;
    }
  }
LABEL_31:
  if ( FileHandle )
    NtClose(FileHandle);
  if ( Heap )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)Heap);
  if ( !v4 )
  {
LABEL_48:
    if ( a3 && *a3 )
    {
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, *a3);
      *a3 = 0LL;
    }
  }
  return v4;
}
