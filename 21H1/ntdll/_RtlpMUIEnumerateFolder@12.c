/*
 * XREFs of _RtlpMUIEnumerateFolder@12 @ 0x4B354614
 * Callers:
 *     _RtlGetFileMUIPath@28 @ 0x4B3519E0 (_RtlGetFileMUIPath@28.c)
 * Callees:
 *     _RtlReAllocateHeap@16 @ 0x4B2C26C0 (_RtlReAllocateHeap@16.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlDosPathNameToRelativeNtPathName_U@16 @ 0x4B2D1BE0 (_RtlDosPathNameToRelativeNtPathName_U@16.c)
 *     _RtlCultureNameToLCID@8 @ 0x4B2D56B0 (_RtlCultureNameToLCID@8.c)
 *     _RtlULongLongToUInt@12 @ 0x4B2E4CC8 (_RtlULongLongToUInt@12.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _NtOpenFile@24 @ 0x4B2F2CB0 (_NtOpenFile@24.c)
 *     _ZwQueryDirectoryFile@44 @ 0x4B2F2CD0 (_ZwQueryDirectoryFile@44.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

char __fastcall RtlpMUIEnumerateFolder(const WCHAR *DosFileName, PVOID *a2, PVOID *a3)
{
  const WCHAR *v4; // edx
  char v5; // bl
  _DWORD *Heap; // esi
  PCWSTR v7; // ebx
  __int16 v8; // ax
  HANDLE ContainingDirectory; // eax
  NTSTATUS v10; // eax
  PRTLP_CURDIR_REF CurDirRef; // ebx
  NTSTATUS v12; // eax
  _DWORD *v13; // ebx
  bool v14; // zf
  char *v15; // ebx
  unsigned int v16; // edx
  unsigned int v17; // ecx
  int v18; // edx
  char *v19; // eax
  void *ProcessHeap; // [esp-10h] [ebp-8Ch]
  SIZE_T v22; // [esp-4h] [ebp-80h]
  SIZE_T v23; // [esp-4h] [ebp-80h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+10h] [ebp-6Ch] BYREF
  _RTL_RELATIVE_NAME_U RelativeName; // [esp+28h] [ebp-54h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [esp+38h] [ebp-44h] BYREF
  _UNICODE_STRING String; // [esp+40h] [ebp-3Ch] BYREF
  _UNICODE_STRING NtFileName; // [esp+48h] [ebp-34h] BYREF
  DWORD Lcid; // [esp+50h] [ebp-2Ch] BYREF
  void *Src; // [esp+54h] [ebp-28h]
  int Size; // [esp+58h] [ebp-24h] BYREF
  PVOID *Size_4; // [esp+5Ch] [ebp-20h]
  PVOID BaseAddress; // [esp+60h] [ebp-1Ch]
  int i; // [esp+64h] [ebp-18h]
  int v35; // [esp+68h] [ebp-14h]
  int v36; // [esp+6Ch] [ebp-10h]
  HANDLE FileHandle; // [esp+70h] [ebp-Ch] BYREF
  char v38; // [esp+77h] [ebp-5h]

  v4 = DosFileName;
  Size_4 = a2;
  BaseAddress = 0;
  v5 = 0;
  v38 = 0;
  v35 = 0;
  v36 = 0;
  FileHandle = 0;
  Heap = 0;
  if ( !DosFileName )
    goto LABEL_52;
  if ( !a3 )
    return v5;
  if ( !a2 )
    goto LABEL_52;
  v7 = DosFileName + 1;
  do
    v8 = *DosFileName++;
  while ( v8 != (_WORD)BaseAddress );
  if ( (unsigned int)(DosFileName - v7) >= 0x104 )
    goto LABEL_51;
  v5 = 0;
  *a3 = 0;
  if ( !RtlDosPathNameToRelativeNtPathName_U(v4, &NtFileName, 0, &RelativeName) )
    goto LABEL_43;
  BaseAddress = NtFileName.Buffer;
  if ( RelativeName.RelativeName.Length )
  {
    NtFileName = RelativeName.RelativeName;
    ContainingDirectory = RelativeName.ContainingDirectory;
  }
  else
  {
    ContainingDirectory = 0;
  }
  ObjectAttributes.RootDirectory = ContainingDirectory;
  ObjectAttributes.ObjectName = &NtFileName;
  ObjectAttributes.Length = 24;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.SecurityDescriptor = 0;
  ObjectAttributes.SecurityQualityOfService = 0;
  v10 = NtOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 5u, 0x21u);
  CurDirRef = RelativeName.CurDirRef;
  i = v10;
  if ( RelativeName.CurDirRef && !_InterlockedExchangeAdd(&RelativeName.CurDirRef->ReferenceCount, 0xFFFFFFFF) )
  {
    NtClose(CurDirRef->DirectoryHandle);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, CurDirRef);
  }
  if ( BaseAddress )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  if ( i < 0 )
  {
LABEL_42:
    v5 = v38;
    goto LABEL_43;
  }
  if ( !FileHandle )
  {
LABEL_51:
    v5 = v38;
LABEL_52:
    if ( a3 && *a3 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *a3);
      *a3 = 0;
    }
    return v5;
  }
  LODWORD(v22) = 4096;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v22);
  if ( !Heap )
    goto LABEL_42;
  BaseAddress = 0;
  v12 = ZwQueryDirectoryFile(FileHandle, 0, 0, 0, &IoStatusBlock, Heap, 0x1000u, FileDirectoryInformation, 0, 0, 1u);
LABEL_40:
  if ( v12 >= 0 )
  {
    if ( Heap[15] || *Heap )
    {
      v13 = Heap;
      for ( i = (int)Heap; ; i = (int)v13 )
      {
        v14 = (v13[14] & 0x10) == 0;
        String.MaximumLength = *((_WORD *)v13 + 30);
        String.Length = String.MaximumLength;
        Src = v13 + 16;
        String.Buffer = (wchar_t *)(v13 + 16);
        if ( !v14 && RtlCultureNameToLCID(&String, &Lcid) )
        {
          BaseAddress = (char *)BaseAddress + 1;
          v15 = (char *)*a3;
          if ( *a3 )
          {
            v16 = v35;
          }
          else
          {
            if ( RtlULongLongToUInt(&Size, 520, 0) < 0 )
              goto LABEL_42;
            LODWORD(v23) = Size;
            v15 = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v23);
            *a3 = v15;
            if ( !v15 )
              goto LABEL_42;
            v16 = 520;
            v35 = 520;
            v36 = 0;
          }
          v17 = *(_DWORD *)(i + 60);
          if ( v17 + v36 + 2 > v16 )
          {
            if ( v17 > 0x208 )
              v18 = v17 + v16 + 2;
            else
              v18 = v16 + 520;
            LODWORD(v23) = v18;
            ProcessHeap = NtCurrentPeb()->ProcessHeap;
            v35 = v18;
            v19 = (char *)RtlReAllocateHeap(ProcessHeap, 8u, v15, v23);
            *a3 = v19;
            if ( !v19 )
            {
              *a3 = v15;
              goto LABEL_42;
            }
            v15 = v19;
            v17 = *(_DWORD *)(i + 60);
          }
          LODWORD(v23) = v17;
          memcpy(&v15[v36], Src, v23);
          v13 = (_DWORD *)i;
          v36 += *(_DWORD *)(i + 60) + 2;
        }
        if ( !*v13 )
        {
          LODWORD(v23) = 4096;
          memset(Heap, 0, v23);
          v12 = ZwQueryDirectoryFile(
                  FileHandle,
                  0,
                  0,
                  0,
                  &IoStatusBlock,
                  Heap,
                  0x1000u,
                  FileDirectoryInformation,
                  0,
                  0,
                  0);
          goto LABEL_40;
        }
        v13 = (_DWORD *)((char *)v13 + *v13);
      }
    }
  }
  else if ( v12 != -2147483642 )
  {
    goto LABEL_42;
  }
  v5 = 1;
  *Size_4 = BaseAddress;
LABEL_43:
  if ( FileHandle )
    NtClose(FileHandle);
  if ( Heap )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  if ( !v5 )
    goto LABEL_52;
  return v5;
}
