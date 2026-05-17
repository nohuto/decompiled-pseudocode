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

char __fastcall RtlpMUIEnumerateFolder(__int16 *a1, _DWORD *a2, int *a3)
{
  int v4; // edx
  char v5; // bl
  _DWORD *Heap; // esi
  _WORD *v7; // ebx
  __int16 v8; // ax
  void *v9; // eax
  NTSTATUS v10; // eax
  volatile signed __int32 *v11; // ebx
  int DirectoryFile; // eax
  _DWORD *v13; // ebx
  bool v14; // zf
  int v15; // ebx
  unsigned int v16; // edx
  size_t v17; // ecx
  int v18; // edx
  int v19; // eax
  void *ProcessHeap; // [esp-10h] [ebp-8Ch]
  OBJECT_ATTRIBUTES ObjectAttributes; // [esp+10h] [ebp-6Ch] BYREF
  _DWORD v23[3]; // [esp+28h] [ebp-54h] BYREF
  volatile signed __int32 *v24; // [esp+34h] [ebp-48h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [esp+38h] [ebp-44h] BYREF
  unsigned __int16 v26; // [esp+40h] [ebp-3Ch] BYREF
  unsigned __int16 v27; // [esp+42h] [ebp-3Ah]
  _DWORD *v28; // [esp+44h] [ebp-38h]
  int v29; // [esp+48h] [ebp-34h] BYREF
  int v30; // [esp+4Ch] [ebp-30h]
  int v31; // [esp+50h] [ebp-2Ch] BYREF
  void *Src; // [esp+54h] [ebp-28h]
  int v33; // [esp+58h] [ebp-24h] BYREF
  _DWORD *v34; // [esp+5Ch] [ebp-20h]
  int v35; // [esp+60h] [ebp-1Ch]
  int i; // [esp+64h] [ebp-18h]
  int v37; // [esp+68h] [ebp-14h]
  int v38; // [esp+6Ch] [ebp-10h]
  HANDLE FileHandle; // [esp+70h] [ebp-Ch] BYREF
  char v40; // [esp+77h] [ebp-5h]

  v4 = (int)a1;
  v34 = a2;
  v35 = 0;
  v5 = 0;
  v40 = 0;
  v37 = 0;
  v38 = 0;
  FileHandle = 0;
  Heap = 0;
  if ( !a1 )
    goto LABEL_52;
  if ( !a3 )
    return v5;
  if ( !a2 )
    goto LABEL_52;
  v7 = a1 + 1;
  do
    v8 = *a1++;
  while ( v8 != (_WORD)v35 );
  if ( (unsigned int)(a1 - v7) >= 0x104 )
    goto LABEL_51;
  v5 = 0;
  *a3 = 0;
  if ( !RtlDosPathNameToRelativeNtPathName_U(v4, (unsigned __int16 *)&v29, 0, v23) )
    goto LABEL_43;
  v35 = v30;
  if ( LOWORD(v23[0]) )
  {
    v30 = v23[1];
    v9 = (void *)v23[2];
    v29 = v23[0];
  }
  else
  {
    v9 = 0;
  }
  ObjectAttributes.RootDirectory = v9;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v29;
  ObjectAttributes.Length = 24;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.SecurityDescriptor = 0;
  ObjectAttributes.SecurityQualityOfService = 0;
  v10 = NtOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 5u, 0x21u);
  v11 = v24;
  i = v10;
  if ( v24 && !_InterlockedExchangeAdd(v24, 0xFFFFFFFF) )
  {
    NtClose(*((HANDLE *)v11 + 1));
    RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)v11);
  }
  if ( v35 )
    RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v35);
  if ( i < 0 )
  {
LABEL_42:
    v5 = v40;
    goto LABEL_43;
  }
  if ( !FileHandle )
  {
LABEL_51:
    v5 = v40;
LABEL_52:
    if ( a3 && *a3 )
    {
      RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, *a3);
      *a3 = 0;
    }
    return v5;
  }
  Heap = (_DWORD *)RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 8, 4096);
  if ( !Heap )
    goto LABEL_42;
  v35 = 0;
  DirectoryFile = ZwQueryDirectoryFile((int)FileHandle, 0, 0, 0, (int)&IoStatusBlock, (int)Heap, 4096, 1, 0, 0, 1);
LABEL_40:
  if ( DirectoryFile >= 0 )
  {
    if ( Heap[15] || *Heap )
    {
      v13 = Heap;
      for ( i = (int)Heap; ; i = (int)v13 )
      {
        v14 = (v13[14] & 0x10) == 0;
        v27 = *((_WORD *)v13 + 30);
        v26 = v27;
        Src = v13 + 16;
        v28 = v13 + 16;
        if ( !v14 && RtlCultureNameToLCID(&v26, &v31) )
        {
          ++v35;
          v15 = *a3;
          if ( *a3 )
          {
            v16 = v37;
          }
          else
          {
            if ( RtlULongLongToUInt(&v33, 520, 0) < 0 )
              goto LABEL_42;
            v15 = RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 8, v33);
            *a3 = v15;
            if ( !v15 )
              goto LABEL_42;
            v16 = 520;
            v37 = 520;
            v38 = 0;
          }
          v17 = *(_DWORD *)(i + 60);
          if ( v17 + v38 + 2 > v16 )
          {
            if ( v17 > 0x208 )
              v18 = v17 + v16 + 2;
            else
              v18 = v16 + 520;
            ProcessHeap = NtCurrentPeb()->ProcessHeap;
            v37 = v18;
            v19 = RtlReAllocateHeap((int)ProcessHeap, 8, v15, v18);
            *a3 = v19;
            if ( !v19 )
            {
              *a3 = v15;
              goto LABEL_42;
            }
            v15 = v19;
            v17 = *(_DWORD *)(i + 60);
          }
          memcpy((void *)(v15 + v38), Src, v17);
          v13 = (_DWORD *)i;
          v38 += *(_DWORD *)(i + 60) + 2;
        }
        if ( !*v13 )
        {
          memset(Heap, 0, 0x1000u);
          DirectoryFile = ZwQueryDirectoryFile(
                            (int)FileHandle,
                            0,
                            0,
                            0,
                            (int)&IoStatusBlock,
                            (int)Heap,
                            4096,
                            1,
                            0,
                            0,
                            0);
          goto LABEL_40;
        }
        v13 = (_DWORD *)((char *)v13 + *v13);
      }
    }
  }
  else if ( DirectoryFile != -2147483642 )
  {
    goto LABEL_42;
  }
  v5 = 1;
  *v34 = v35;
LABEL_43:
  if ( FileHandle )
    NtClose(FileHandle);
  if ( Heap )
    RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)Heap);
  if ( !v5 )
    goto LABEL_52;
  return v5;
}
