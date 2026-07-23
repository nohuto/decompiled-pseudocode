/*
 * XREFs of _EtwpAddLogHeaderToLogFile@16 @ 0x4B2F085E
 * Callers:
 *     _EtwpStartUmLogger@16 @ 0x4B2F0075 (_EtwpStartUmLogger@16.c)
 *     _EtwpLogger@4 @ 0x4B2F2270 (_EtwpLogger@4.c)
 *     _EtwpBufferingModeFlush@4 @ 0x4B38140A (_EtwpBufferingModeFlush@4.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlQueryPerformanceCounter@4 @ 0x4B2DBC20 (_RtlQueryPerformanceCounter@4.c)
 *     _EtwpGetCpuSpeedFromRegistry@4 @ 0x4B2F0DF4 (_EtwpGetCpuSpeedFromRegistry@4.c)
 *     _EtwpAddProviderTrackingInfo@12 @ 0x4B2F0E96 (_EtwpAddProviderTrackingInfo@12.c)
 *     _EtwpQueryPartitionRegistryInformationUm@16 @ 0x4B2F0FDE (_EtwpQueryPartitionRegistryInformationUm@16.c)
 *     _EtwpGetTimeZoneInformation@4 @ 0x4B2F12B5 (_EtwpGetTimeZoneInformation@4.c)
 *     _EtwpCreateFile@24 @ 0x4B2F160C (_EtwpCreateFile@24.c)
 *     _NtReadFile@36 @ 0x4B2F29C0 (_NtReadFile@36.c)
 *     _NtWriteFile@36 @ 0x4B2F29E0 (_NtWriteFile@36.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _NtQueryInformationThread@20 @ 0x4B2F2BD0 (_NtQueryInformationThread@20.c)
 *     _ZwSetInformationFile@20 @ 0x4B2F2BF0 (_ZwSetInformationFile@20.c)
 *     _NtQuerySystemInformation@16 @ 0x4B2F2CE0 (_NtQuerySystemInformation@16.c)
 *     _NtQueryVolumeInformationFile@20 @ 0x4B2F2E10 (_NtQueryVolumeInformationFile@20.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     __alldiv @ 0x4B2F6300 (__alldiv.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _EtwpGenerateFileName@12 @ 0x4B382A61 (_EtwpGenerateFileName@12.c)
 */

NTSTATUS __fastcall EtwpAddLogHeaderToLogFile(unsigned int a1, void *a2, size_t Size)
{
  unsigned int v3; // ebx
  bool v4; // zf
  PVOID v5; // edi
  ULONG v6; // esi
  NTSTATUS File; // edi
  int v8; // eax
  int v9; // ecx
  int v10; // edi
  int v11; // eax
  int v12; // ecx
  LARGE_INTEGER *Heap; // esi
  ULONG v14; // edi
  _BYTE *v15; // edx
  LARGE_INTEGER *v16; // ecx
  int v17; // edx
  __int64 v18; // rax
  struct _PEB *v19; // edx
  char v20; // al
  char v21; // cl
  __int64 v22; // kr00_8
  unsigned int v23; // edi
  int v24; // ecx
  HANDLE v25; // edi
  ULONG v26; // ecx
  ULONG v27; // ecx
  ULONG v28; // eax
  unsigned int v29; // eax
  ULONG v30; // eax
  HANDLE v31; // eax
  NTSTATUS v33; // eax
  unsigned int v34; // ecx
  int v35; // eax
  unsigned int v36; // ecx
  char v37; // al
  char v38; // ah
  int v39; // eax
  unsigned int v40; // ecx
  int v41; // ecx
  size_t v42; // [esp-4h] [ebp-11Ch]
  size_t v43; // [esp-4h] [ebp-11Ch]
  SIZE_T v44; // [esp-4h] [ebp-11Ch]
  size_t v45; // [esp-4h] [ebp-11Ch]
  size_t v46; // [esp-4h] [ebp-11Ch]
  size_t v47; // [esp-4h] [ebp-11Ch]
  char ThreadInformation[8]; // [esp+Ch] [ebp-10Ch] BYREF
  int v49; // [esp+14h] [ebp-104h]
  unsigned int v50; // [esp+18h] [ebp-100h]
  unsigned __int64 FileInformation; // [esp+28h] [ebp-F0h] BYREF
  LARGE_INTEGER ByteOffset; // [esp+30h] [ebp-E8h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [esp+38h] [ebp-E0h] BYREF
  LARGE_INTEGER v54; // [esp+40h] [ebp-D8h] BYREF
  LARGE_INTEGER PerformanceCounter; // [esp+48h] [ebp-D0h] BYREF
  int v56; // [esp+54h] [ebp-C4h]
  void *Src; // [esp+58h] [ebp-C0h]
  _DWORD *v58; // [esp+5Ch] [ebp-BCh]
  unsigned int LowPart; // [esp+60h] [ebp-B8h]
  int HighPart; // [esp+64h] [ebp-B4h] BYREF
  PVOID Buffer; // [esp+68h] [ebp-B0h]
  int v62; // [esp+6Ch] [ebp-ACh]
  ULONG Length; // [esp+70h] [ebp-A8h]
  HANDLE FileHandle; // [esp+74h] [ebp-A4h] BYREF
  char FsInformation[20]; // [esp+78h] [ebp-A0h] BYREF
  int v66; // [esp+8Ch] [ebp-8Ch]
  _QWORD v67[6]; // [esp+90h] [ebp-88h] BYREF
  char SystemInformation[4]; // [esp+C4h] [ebp-54h] BYREF
  unsigned int v69; // [esp+C8h] [ebp-50h]
  _QWORD v70[4]; // [esp+F0h] [ebp-28h] BYREF

  HighPart = 0;
  LODWORD(v42) = 44;
  v3 = a1;
  Src = a2;
  LowPart = a1;
  memset(SystemInformation, 0, v42);
  LODWORD(v43) = 48;
  memset(v67, 0, v43);
  FileHandle = 0;
  v58 = 0;
  v4 = (*(_BYTE *)(v3 + 212) & 8) == 0;
  memset(v70, 0, sizeof(v70));
  if ( !v4 )
    EtwpGenerateFileName((PUNICODE_STRING)(v3 + 116));
  v5 = *(PVOID *)(v3 + 120);
  v6 = *(_DWORD *)(v3 + 140);
  Buffer = v5;
  Length = v6;
  if ( Src )
  {
    v62 = Size;
    v11 = Size + 79;
LABEL_10:
    v56 = v11;
    LODWORD(v44) = v6;
    Heap = (LARGE_INTEGER *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v44);
    Buffer = Heap;
    if ( !Heap )
      return -1073741801;
    File = EtwpCreateFile((PCWSTR)v5, v12, (int)&Size + 4, v12, (int)&FileHandle);
    if ( File >= 0 )
    {
      v14 = Length;
      if ( BYTE4(Size) )
      {
        ByteOffset.QuadPart = 0LL;
        File = NtReadFile(FileHandle, 0, 0, 0, &IoStatusBlock, Heap, Length, &ByteOffset, 0);
        if ( File >= 0 )
        {
          if ( (Heap[17].LowPart & 2) == 0
            && BYTE4(Heap[13].QuadPart) == MEMORY[0x7FFE026C]
            && BYTE5(Heap[13].QuadPart) == MEMORY[0x7FFE0270]
            && Heap[18].HighPart == 4 )
          {
            LowPart = Heap[13].LowPart;
            if ( LowPart - 1024 <= 0xFFFC00 )
            {
              HighPart = Heap[17].HighPart;
              if ( HighPart )
              {
                if ( Heap[15].QuadPart && Heap[14].HighPart == *(_DWORD *)(v3 + 136) )
                {
                  Heap[15].LowPart = 0;
                  Heap[15].HighPart = 0;
                  v33 = NtWriteFile(FileHandle, 0, 0, 0, &IoStatusBlock, Heap, *(_DWORD *)(v3 + 140), &ByteOffset, 0);
                  v34 = LowPart;
                  File = v33;
                  v35 = HighPart;
                  *(_DWORD *)(v3 + 244) = 0;
                  *(_DWORD *)(v3 + 280) = v35;
                  *(_DWORD *)(v3 + 224) = v35;
                  *(_DWORD *)(v3 + 252) = 0;
                  *(_DWORD *)(v3 + 140) = v34;
                  *(_DWORD *)(v3 + 240) = v34;
                  *(_DWORD *)(v3 + 248) = v34 * v35;
                  *(_DWORD *)(v3 + 104) = FileHandle;
LABEL_40:
                  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
                  return File;
                }
              }
            }
          }
          File = -1073741811;
        }
      }
      else
      {
        v15 = Src;
        HIWORD(Heap[6].QuadPart) = 4;
        Heap->LowPart = v14;
        WORD2(Heap[6].QuadPart) = 1;
        Heap[6].LowPart = v56 & 0xFFFFFFF8;
        if ( v15 )
        {
          v36 = 0;
          if ( (_DWORD)Size )
          {
            do
            {
              v58 = &v15[v36 + 32];
              *(_DWORD *)&v15[v36 + 64] = *(_DWORD *)(v3 + 212) & 0x4101000 | 0x10001;
              *(_DWORD *)&v15[v36 + 68] = 1;
              *(_DWORD *)&v15[v36 + 32] = *(_DWORD *)(v3 + 140);
              if ( (*(_DWORD *)(v3 + 212) & 0x4000000) != 0
                || *(_DWORD *)(v3 + 140) > 0x100000u
                || *(_DWORD *)&v15[v36 + 44] > 0x100u )
              {
                v37 = 0;
                v38 = 2;
              }
              else
              {
                v37 = 5;
                v38 = 1;
              }
              v15[v36 + 38] = v38;
              v15[v36 + 39] = v37;
              v36 += (*(unsigned __int16 *)&v15[v36 + 4] + 7) & 0xFFFFFFF8;
            }
            while ( v36 < (unsigned int)Size );
            Heap = (LARGE_INTEGER *)Buffer;
          }
          if ( v58[11] == 8 )
            v39 = v58[68];
          else
            v39 = v58[66];
          LODWORD(v45) = Size;
          *(_DWORD *)(v3 + 16) = v39;
          memcpy(&Heap[9], v15, v45);
        }
        else
        {
          v16 = Heap + 9;
          Heap[9].HighPart = v62;
          Heap[9].LowPart = -1073676288;
          if ( *(_DWORD *)(v3 + 16) == 2 )
          {
            while ( 1 )
            {
              v17 = MEMORY[0x7FFE0018];
              v62 = MEMORY[0x7FFE0014];
              if ( MEMORY[0x7FFE0018] == MEMORY[0x7FFE001C] )
                break;
              _mm_pause();
            }
            Heap = (LARGE_INTEGER *)Buffer;
            v3 = LowPart;
            v14 = Length;
            v16[2].LowPart = v62;
            v16[2].HighPart = v17;
          }
          else if ( *(_DWORD *)(v3 + 16) == 3 )
          {
            Heap[11].QuadPart = __rdtsc();
          }
          else
          {
            PerformanceCounter.QuadPart = 0LL;
            RtlQueryPerformanceCounter(&PerformanceCounter);
            v16 = Heap + 9;
            Heap[11] = PerformanceCounter;
          }
          v16[1].HighPart = v49;
          v16[1].LowPart = v50;
          Heap[12].LowPart = v70[2] / (__int64)v69;
          v18 = v70[3] / (__int64)v69;
          v19 = NtCurrentPeb();
          Heap[12].HighPart = v18;
          BYTE4(Heap[13].QuadPart) = v19->OSMajorVersion;
          BYTE5(Heap[13].QuadPart) = v19->OSMinorVersion;
          if ( (*(_DWORD *)(v3 + 212) & 0x4000000) != 0
            || *(_DWORD *)(v3 + 140) > 0x100000u
            || *(_DWORD *)(v3 + 136) > 0x100u )
          {
            v20 = 0;
            v21 = 2;
          }
          else
          {
            v20 = 5;
            v21 = 1;
          }
          BYTE6(Heap[13].QuadPart) = v21;
          HIBYTE(Heap[13].QuadPart) = v20;
          Heap[14].LowPart = v19->OSBuildNumber;
          Heap[46].LowPart = *(_DWORD *)(v3 + 16);
          Heap[14].HighPart = *(_DWORD *)(v3 + 136);
          Heap[18].HighPart = 4;
          Heap[18].LowPart = 1;
          Heap[17].HighPart = 1;
          Heap[13].LowPart = v14;
          Heap[16].HighPart = *(_DWORD *)(v3 + 208);
          Heap[17].LowPart = *(_DWORD *)(v3 + 212);
          Heap[16].LowPart = v69;
          v22 = v67[0] - v67[4];
          Heap[20].LowPart = 0;
          Heap[20].HighPart = 0;
          Heap[43].HighPart = HIDWORD(v22);
          Heap[19].HighPart = HighPart;
          Heap[43].LowPart = v22;
          LODWORD(v45) = *(unsigned __int16 *)(v3 + 108) + 2;
          memcpy(&Heap[47], *(const void **)(v3 + 112), v45);
          LODWORD(v46) = *(unsigned __int16 *)(v3 + 116) + 2;
          memcpy((char *)&Heap[47].u.LowPart + *(unsigned __int16 *)(v3 + 108) + 2, *(const void **)(v3 + 120), v46);
          EtwpGetTimeZoneInformation(&Heap[21]);
          Heap[44].LowPart = MEMORY[0x7FFE0300];
          Heap[44].HighPart = MEMORY[0x7FFE0304];
          Heap[45].LowPart = *(_DWORD *)v3;
          Heap[45].HighPart = *(_DWORD *)(v3 + 4);
          Heap[11].LowPart = *(_DWORD *)(v3 + 8);
          Heap[11].HighPart = *(_DWORD *)(v3 + 12);
          v23 = Heap[6].LowPart;
          v62 = v23;
          if ( v23 + 80 <= Heap->LowPart )
          {
            *(_WORD *)((char *)&Heap->QuadPart + v23 + 6) = 80;
            *(_WORD *)((char *)&Heap->QuadPart + v23 + 4) = 80;
            *(unsigned int *)((char *)&Heap->LowPart + v23) = -1073676286;
            *(unsigned int *)((char *)&Heap[1].LowPart + v23) = v50;
            *(int *)((char *)&Heap[1].HighPart + v23) = v49;
            *(unsigned int *)((char *)&Heap[3].LowPart + v23) = v70[2] / (__int64)v69;
            *(int *)((char *)&Heap[3].HighPart + v23) = v70[3] / (__int64)v69;
            if ( *(_DWORD *)(v3 + 16) == 2 )
            {
              while ( 1 )
              {
                v24 = MEMORY[0x7FFE0018];
                if ( MEMORY[0x7FFE0018] == MEMORY[0x7FFE001C] )
                  break;
                _mm_pause();
              }
              Heap = (LARGE_INTEGER *)Buffer;
              v23 = v62;
              v3 = LowPart;
              *(_DWORD *)((char *)Buffer + v62 + 16) = MEMORY[0x7FFE0014];
              *(int *)((char *)&Heap[2].HighPart + v23) = v24;
            }
            else if ( *(_DWORD *)(v3 + 16) == 3 )
            {
              *(__int64 *)((char *)&Heap[2].QuadPart + v23) = __rdtsc();
            }
            else
            {
              v54.QuadPart = 0LL;
              RtlQueryPerformanceCounter(&v54);
              *(LARGE_INTEGER *)((char *)Heap + v23 + 16) = v54;
            }
            *(unsigned int *)((char *)&Heap[4].LowPart + v23) = 0;
            if ( !EtwpQueryPartitionRegistryInformationUm((char *)&Heap[5] + v23, (char *)&Heap[8] + v23) )
              Heap[6].LowPart += 80;
          }
        }
        v25 = FileHandle;
        if ( (*(_DWORD *)(v3 + 212) & 0x4000000) != 0
          && (Heap[5].HighPart = 3,
              NtQueryVolumeInformationFile(v25, &IoStatusBlock, FsInformation, 0x18u, FileFsSizeInformation) >= 0) )
        {
          v40 = Heap[6].LowPart;
          if ( Src )
            v40 += 80;
          v26 = -v66 & (v66 + v40 - 1);
          Length = v26;
          Heap->LowPart = v26;
        }
        else
        {
          v26 = Length;
        }
        Heap->HighPart = Heap[6].LowPart;
        EtwpAddProviderTrackingInfo(v26);
        v27 = Heap[6].LowPart;
        v28 = Length;
        if ( v27 < Length && v27 > 0x48 )
        {
          LODWORD(v47) = Length - v27;
          memset((char *)Heap + v27, 255, v47);
          v28 = Length;
        }
        File = NtWriteFile(v25, 0, 0, 0, &IoStatusBlock, Heap, v28, 0, 0);
        if ( File >= 0 )
        {
          v29 = *(_DWORD *)(v3 + 208);
          if ( !v29 || (*(_DWORD *)(v3 + 212) & 0x20) == 0 )
            goto LABEL_35;
          v41 = 1024;
          if ( (*(_DWORD *)(v3 + 212) & 0x2000) == 0 )
            v41 = 0x100000;
          FileInformation = (unsigned int)v41 * (unsigned __int64)v29;
          File = ZwSetInformationFile(FileHandle, &IoStatusBlock, &FileInformation, 8u, FileEndOfFileInformation);
          if ( File >= 0 )
          {
LABEL_35:
            *(_DWORD *)(v3 + 252) = 0;
            *(_DWORD *)(v3 + 244) = 0;
            v4 = (*(_DWORD *)(v3 + 212) & 0x4000000) == 0;
            *(_DWORD *)(v3 + 280) = 1;
            *(_DWORD *)(v3 + 224) = 1;
            v30 = Length;
            *(_DWORD *)(v3 + 248) = Length;
            *(_DWORD *)(v3 + 240) = v30;
            *(_DWORD *)(v3 + 104) = FileHandle;
            if ( !v4 )
            {
              *(_DWORD *)(v3 + 324) = 0;
              *(_DWORD *)(v3 + 328) = 0;
              *(_DWORD *)(v3 + 320) = 0;
            }
            v31 = 0;
            goto LABEL_38;
          }
        }
      }
    }
    v31 = FileHandle;
LABEL_38:
    if ( v31 )
      NtClose(v31);
    goto LABEL_40;
  }
  File = NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x2Cu, 0);
  if ( File >= 0 )
  {
    File = NtQueryInformationThread((HANDLE)0xFFFFFFFE, ThreadBasicInformation, ThreadInformation, 0x1Cu, 0);
    if ( File >= 0 )
    {
      File = NtQueryInformationThread((HANDLE)0xFFFFFFFE, ThreadTimes, v70, 0x20u, 0);
      if ( File >= 0 )
      {
        File = NtQuerySystemInformation(SystemTimeOfDayInformation, v67, 0x30u, 0);
        if ( File >= 0 )
        {
          File = EtwpGetCpuSpeedFromRegistry(&HighPart);
          if ( File >= 0 )
          {
            v8 = *(unsigned __int16 *)(v3 + 108);
            v9 = *(unsigned __int16 *)(v3 + 116);
            v10 = v8 + 308;
            v11 = v9 + v8 + 387;
            v62 = v9 + v10;
            v5 = Buffer;
            goto LABEL_10;
          }
        }
      }
    }
  }
  return File;
}
