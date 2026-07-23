/*
 * XREFs of _EtwpFinalizeLogFileHeader@8 @ 0x4B2EE176
 * Callers:
 *     _EtwpLogger@4 @ 0x4B2F2270 (_EtwpLogger@4.c)
 *     _EtwpBufferingModeFlush@4 @ 0x4B38140A (_EtwpBufferingModeFlush@4.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlNtStatusToDosError@4 @ 0x4B2DAB70 (_RtlNtStatusToDosError@4.c)
 *     _EtwpAddReloggedHeaderExtensionEvents@12 @ 0x4B2EE302 (_EtwpAddReloggedHeaderExtensionEvents@12.c)
 *     _EtwpAddProviderTrackingInfo@12 @ 0x4B2F0E96 (_EtwpAddProviderTrackingInfo@12.c)
 *     _NtReadFile@36 @ 0x4B2F29C0 (_NtReadFile@36.c)
 *     _NtWriteFile@36 @ 0x4B2F29E0 (_NtWriteFile@36.c)
 *     _ZwSetInformationFile@20 @ 0x4B2F2BF0 (_ZwSetInformationFile@20.c)
 *     _NtQueryVolumeInformationFile@20 @ 0x4B2F2E10 (_NtQueryVolumeInformationFile@20.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _EtwpFinalizeRelogFileHeaderStats@20 @ 0x4B382940 (_EtwpFinalizeRelogFileHeaderStats@20.c)
 *     _EtwpWriteRemainingCompressedData@12 @ 0x4B383377 (_EtwpWriteRemainingCompressedData@12.c)
 */

ULONG __fastcall EtwpFinalizeLogFileHeader(int a1, char a2)
{
  int v2; // esi
  int v3; // ebx
  ULONG v4; // edi
  PVOID Heap; // eax
  int v6; // edi
  _DWORD *v7; // edi
  ULONG v8; // ecx
  int v9; // eax
  int v10; // ecx
  NTSTATUS v11; // eax
  int v12; // eax
  bool v13; // zf
  unsigned __int64 v15; // rax
  int v16; // ecx
  int v17; // kr00_4
  SIZE_T v18; // [esp-4h] [ebp-74h]
  ULONG v19; // [esp-4h] [ebp-74h]
  _IO_STATUS_BLOCK v20; // [esp+10h] [ebp-60h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [esp+18h] [ebp-58h] BYREF
  LARGE_INTEGER ByteOffset; // [esp+20h] [ebp-50h] BYREF
  int v23; // [esp+2Ch] [ebp-44h]
  unsigned __int64 FileInformation; // [esp+30h] [ebp-40h] BYREF
  PVOID Buffer; // [esp+3Ch] [ebp-34h]
  int v26; // [esp+40h] [ebp-30h] BYREF
  unsigned int v27; // [esp+44h] [ebp-2Ch]
  ULONG Length; // [esp+48h] [ebp-28h]
  char v29; // [esp+4Fh] [ebp-21h]
  _BYTE FsInformation[20]; // [esp+50h] [ebp-20h] BYREF
  int v31; // [esp+64h] [ebp-Ch]

  v2 = a1;
  v29 = a2;
  v3 = 0;
  v23 = a1;
  v27 = 0;
  v13 = (*(_DWORD *)(a1 + 212) & 0x4000000) == 0;
  v26 = 0;
  if ( !v13 )
  {
    v6 = EtwpWriteRemainingCompressedData(&v26);
    v13 = v6 == 0;
    if ( v6 < 0 )
      goto LABEL_16;
    *(_DWORD *)(v2 + 280) += v27;
    *(_DWORD *)(v2 + 276) += v26;
  }
  if ( *(_DWORD *)(v2 + 332) != v2 + 332
    || *(_DWORD *)(v2 + 340) != v2 + 340
    || *(_DWORD *)(v2 + 360)
    || (*(_DWORD *)(v2 + 212) & 0x1000) != 0 )
  {
    v4 = *(_DWORD *)(v2 + 140);
    goto LABEL_4;
  }
  v6 = NtQueryVolumeInformationFile(*(HANDLE *)(v2 + 104), &IoStatusBlock, FsInformation, 0x18u, FileFsSizeInformation);
  v13 = v6 == 0;
  if ( v6 >= 0 )
  {
    v4 = -v31 & (v31 + 3);
LABEL_4:
    LODWORD(v18) = v4;
    Length = v4;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v18);
    Buffer = Heap;
    if ( !Heap )
    {
      v6 = -1073741801;
      return RtlNtStatusToDosError(v6);
    }
    ByteOffset.QuadPart = 0LL;
    v6 = NtReadFile(*(HANDLE *)(v2 + 104), 0, 0, 0, &IoStatusBlock, Heap, v4, &ByteOffset, 0);
    if ( v6 < 0 )
      goto LABEL_15;
    v7 = Buffer;
    v8 = Length;
    if ( Length >= *(_DWORD *)Buffer )
    {
      v8 = *(_DWORD *)Buffer;
      Length = *(_DWORD *)Buffer;
    }
    if ( !v29 )
    {
      *((_DWORD *)Buffer + 29) = *(_DWORD *)(v2 + 136);
      v7[35] = *(_DWORD *)(v2 + 280);
      v7[38] += *(_DWORD *)(v2 + 272);
      v7[93] += *(_DWORD *)(v2 + 276);
      v9 = *(_DWORD *)(v2 + 212);
      if ( (v9 & 0x10000) != 0 )
      {
        if ( (v9 & 0x1000) != 0 )
          EtwpFinalizeRelogFileHeaderStats(v8, v27, v26);
      }
      else
      {
        while ( 1 )
        {
          v10 = MEMORY[0x7FFE0018];
          if ( MEMORY[0x7FFE0018] == MEMORY[0x7FFE001C] )
            break;
          _mm_pause();
        }
        v7 = Buffer;
        v3 = 0;
        v2 = v23;
        *((_DWORD *)Buffer + 30) = MEMORY[0x7FFE0014];
        v7[31] = v10;
      }
    }
    v19 = Length;
    v7[12] = v7[1];
    EtwpAddReloggedHeaderExtensionEvents(v19);
    EtwpAddProviderTrackingInfo(Length);
    v11 = NtWriteFile(*(HANDLE *)(v2 + 104), 0, 0, 0, &IoStatusBlock, v7, Length, &ByteOffset, 0);
    v6 = v11;
    if ( v29 )
      goto LABEL_15;
    if ( v11 < 0 )
      goto LABEL_15;
    v12 = *(_DWORD *)(v2 + 212);
    if ( (v12 & 0x4000020) == 0 )
      goto LABEL_15;
    if ( (v12 & 0x4000000) != 0 )
    {
      v15 = *(_QWORD *)(v2 + 248);
    }
    else
    {
      v16 = 1024;
      if ( (v12 & 0x2000) == 0 )
        v16 = 0x100000;
      v17 = v16 * *(_DWORD *)(v2 + 208);
      v27 = ((unsigned int)v16 * (unsigned __int64)*(unsigned int *)(v2 + 208)) >> 32;
      v15 = *(unsigned int *)(v2 + 140) * (unsigned __int64)*(unsigned int *)(v2 + 280);
      if ( v15 >= __PAIR64__(v27, v17) )
        goto LABEL_15;
    }
    FileInformation = v15;
    if ( v15 )
      v6 = ZwSetInformationFile(*(HANDLE *)(v2 + 104), &v20, &FileInformation, 8u, FileEndOfFileInformation);
LABEL_15:
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Buffer);
    v13 = v6 == 0;
  }
LABEL_16:
  if ( !v13 )
    return RtlNtStatusToDosError(v6);
  return v3;
}
