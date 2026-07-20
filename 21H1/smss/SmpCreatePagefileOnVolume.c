/*
 * XREFs of SmpCreatePagefileOnVolume @ 0x14000BD08
 * Callers:
 *     SmpCreatePagefileFromDescriptor @ 0x14000C504 (SmpCreatePagefileFromDescriptor.c)
 * Callees:
 *     SmpCreatePagingFile @ 0x140008554 (SmpCreatePagingFile.c)
 *     SmpCheckHybridPriority @ 0x14000C2D8 (SmpCheckHybridPriority.c)
 *     SmpTrimPagingFileExtents @ 0x14000C380 (SmpTrimPagingFileExtents.c)
 *     SmpGetPagingFileSize @ 0x14000C48C (SmpGetPagingFileSize.c)
 *     SmpDeletePagingFile @ 0x140011D54 (SmpDeletePagingFile.c)
 */

__int64 __fastcall SmpCreatePagefileOnVolume(__int64 a1, __int64 a2, int a3)
{
  bool v3; // r12
  UNICODE_STRING *v6; // r15
  NTSTATUS v7; // ecx
  int PagingFileSize; // eax
  __int64 v9; // rsi
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rdx
  bool v12; // zf
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r13
  unsigned __int64 v15; // rax
  int v16; // eax
  int PagingFile; // ecx
  int v18; // eax
  __int64 v20; // rax
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // r9
  unsigned __int64 v23; // r10
  unsigned __int64 v24; // r11
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rcx
  __int64 v27; // rax
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rdx
  __int64 v32; // rcx
  unsigned __int64 v33; // rdx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-48h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-38h] BYREF
  int v36; // [rsp+C0h] [rbp+48h] BYREF
  void *FileHandle; // [rsp+C8h] [rbp+50h] BYREF
  int v38; // [rsp+D0h] [rbp+58h]
  __int64 v39; // [rsp+D8h] [rbp+60h] BYREF

  v38 = a3;
  v39 = 0LL;
  v3 = 0;
  if ( (*(_BYTE *)(a1 + 92) & 4) != 0 )
    *(_WORD *)(*(_QWORD *)(a1 + 24) + 8LL) = *(_WORD *)(a2 + 28);
  ObjectAttributes.RootDirectory = 0LL;
  v6 = (UNICODE_STRING *)(a1 + 16);
  ObjectAttributes.ObjectName = (PUNICODE_STRING)(a1 + 16);
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = NtOpenFile(&FileHandle, 0xC0100000, &ObjectAttributes, &IoStatusBlock, 3u, 0x28u);
  if ( v7 < 0 )
  {
    v9 = v39;
    v20 = 2LL * (_InterlockedIncrement(&SmpPagefileLogIndex) % 32);
    *((_DWORD *)&SmpPagefileLog + 2 * v20) = 2202;
    *((_DWORD *)&SmpPagefileLog + 2 * v20 + 1) = v7;
    *((_QWORD *)&SmpPagefileLog + v20 + 1) = v6;
  }
  else
  {
    PagingFileSize = SmpGetPagingFileSize(FileHandle, v6, &v39);
    v9 = v39;
    if ( PagingFileSize >= 0 )
      v3 = v39 != 0;
    SmpTrimPagingFileExtents(FileHandle, v6);
    NtClose(FileHandle);
  }
  v10 = *(_QWORD *)(a2 + 32) + v9;
  v11 = v10;
  if ( v10 > *(_QWORD *)(a2 + 40) )
  {
    v10 = *(_QWORD *)(a2 + 40);
    v11 = v10;
  }
  v12 = (*(_BYTE *)(a1 + 92) & 2) == 0;
  v13 = *(_QWORD *)(a1 + 56);
  v14 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(a1 + 72) = v13;
  *(_QWORD *)(a1 + 80) = v14;
  if ( v12 )
  {
    if ( v13 > v11 )
    {
      if ( !v38 )
        return 3221225599LL;
      *(_QWORD *)(a1 + 72) = v10;
    }
    v15 = v14;
    if ( v14 > *(_QWORD *)(a2 + 40) )
      v15 = *(_QWORD *)(a2 + 40);
    *(_QWORD *)(a1 + 80) = v15;
  }
  else
  {
    v21 = v11 >> 2;
    v22 = *(_QWORD *)(a2 + 40) >> 3;
    v23 = v13;
    v24 = v22;
    if ( SmpMemorySize >= v11 >> 2 )
      v21 = SmpMemorySize;
    v25 = v11 >> 1;
    if ( v21 <= v11 >> 1 )
      v25 = v21;
    if ( v25 <= v22 )
      v24 = v25;
    v26 = v24;
    if ( v13 > v24 )
    {
      if ( !v38 )
        return 3221225599LL;
      if ( (*(_BYTE *)(a1 + 92) & 8) != 0 )
      {
        v27 = v11 >> 5;
        if ( v11 >> 5 > 0x40000000 )
          v27 = 0x40000000LL;
        v28 = v11 - v27;
        if ( v13 <= v28 || v13 == *(_QWORD *)(a1 + 48) )
        {
          v26 = v28;
          if ( v22 < v28 )
            v22 = v28;
        }
      }
      v23 = v13;
      if ( v13 > v26 )
      {
        v29 = *(_QWORD *)(a1 + 48);
        if ( v13 > v29 )
        {
          *(_QWORD *)(a1 + 72) = v29;
          v23 = v29;
        }
      }
    }
    v30 = *(_QWORD *)(a1 + 72);
    if ( v23 > v26 )
      v30 = v26;
    *(_QWORD *)(a1 + 72) = v30;
    if ( v14 > v22 )
      *(_QWORD *)(a1 + 80) = v22;
  }
  *(_DWORD *)(a1 + 88) = 0;
  v16 = *(_DWORD *)(a2 + 16);
  if ( (v16 & 4) != 0 )
  {
    *(_DWORD *)(a1 + 88) = 0x40000000;
    v16 = *(_DWORD *)(a2 + 16);
  }
  if ( (v16 & 8) != 0
    && (int)SmpCheckHybridPriority(*(unsigned int *)(a2 + 20), &v36, 0LL) >= 0
    && (v36 & 0xFFFFFFF0) == 0 )
  {
    *(_DWORD *)(a1 + 88) |= (v36 | 0x10) << 26;
  }
  if ( (*(_BYTE *)(a2 + 16) & 0x40) != 0 )
    *(_DWORD *)(a1 + 88) |= 0x1000000u;
  while ( 1 )
  {
    PagingFile = SmpCreatePagingFile(
                   v6,
                   *(union _LARGE_INTEGER *)(a1 + 72),
                   *(union _LARGE_INTEGER *)(a1 + 80),
                   *(_DWORD *)(a1 + 88));
    if ( PagingFile >= 0 )
      break;
    if ( !v38 )
      goto LABEL_26;
    v31 = *(_QWORD *)(a1 + 72);
    if ( v31 <= 0x1000000 )
      goto LABEL_26;
    v32 = 0x1000000LL;
    if ( v31 >> 4 > 0x1000000 )
      v32 = v31 >> 4;
    v33 = v31 - v32;
    *(_QWORD *)(a1 + 72) = v33;
    if ( v33 < 0x1000000 )
      *(_QWORD *)(a1 + 72) = 0x1000000LL;
  }
  *(_DWORD *)(a1 + 92) |= 1u;
  v18 = *(_DWORD *)(a2 + 16) | 0x10;
  *(_DWORD *)(a2 + 16) = v18;
  if ( (*(_DWORD *)(a1 + 88) & 0x40000000) != 0 )
    *(_DWORD *)(a2 + 16) = v18 | 0x20;
  if ( (*(_BYTE *)(a1 + 92) & 2) != 0 )
    ++SmpNumberOfManagedPagefilesCreated;
  ++SmpNumberOfPagefilesCreated;
LABEL_26:
  if ( (*(_BYTE *)(a1 + 92) & 1) != 0 )
    return (unsigned int)PagingFile;
  if ( v3 && (int)SmpDeletePagingFile(v6) >= 0 )
    *(_QWORD *)(a2 + 32) = v10;
  return 3221225599LL;
}
