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

NTSTATUS __fastcall EtwpAddLogHeaderToLogFile(int a1, void *a2, size_t Size, char a4)
{
  int v4; // ebx
  bool v5; // zf
  const WCHAR *v6; // edi
  int v7; // esi
  NTSTATUS File; // edi
  int v9; // eax
  int v10; // ecx
  int v11; // edi
  int v12; // eax
  int v13; // ecx
  WCHAR *Heap; // esi
  unsigned int v15; // edi
  _BYTE *v16; // edx
  _DWORD *v17; // ecx
  int v18; // edx
  __int64 v19; // rax
  struct _PEB *v20; // edx
  char v21; // al
  char v22; // cl
  __int64 v23; // kr00_8
  size_t v24; // edi
  int v25; // ecx
  int v26; // edi
  int v27; // ecx
  unsigned int v28; // ecx
  unsigned int v29; // eax
  unsigned int v30; // eax
  unsigned int v31; // eax
  void *v32; // eax
  NTSTATUS v34; // eax
  int v35; // ecx
  int v36; // eax
  size_t v37; // ecx
  char v38; // al
  char v39; // ah
  int v40; // eax
  int v41; // ecx
  int v42; // ecx
  char ThreadInformation[8]; // [esp+Ch] [ebp-10Ch] BYREF
  int v44; // [esp+14h] [ebp-104h]
  int v45; // [esp+18h] [ebp-100h]
  unsigned __int64 v46; // [esp+28h] [ebp-F0h] BYREF
  _DWORD v47[2]; // [esp+30h] [ebp-E8h] BYREF
  _BYTE v48[8]; // [esp+38h] [ebp-E0h] BYREF
  int v49; // [esp+40h] [ebp-D8h] BYREF
  int v50; // [esp+44h] [ebp-D4h]
  int v51; // [esp+48h] [ebp-D0h] BYREF
  int v52; // [esp+4Ch] [ebp-CCh]
  int v53; // [esp+54h] [ebp-C4h]
  void *Src; // [esp+58h] [ebp-C0h]
  _DWORD *v55; // [esp+5Ch] [ebp-BCh]
  int v56; // [esp+60h] [ebp-B8h]
  int v57; // [esp+64h] [ebp-B4h] BYREF
  PCWSTR SourceString; // [esp+68h] [ebp-B0h]
  size_t v59; // [esp+6Ch] [ebp-ACh]
  unsigned int v60; // [esp+70h] [ebp-A8h]
  int v61; // [esp+74h] [ebp-A4h] BYREF
  char v62[20]; // [esp+78h] [ebp-A0h] BYREF
  int v63; // [esp+8Ch] [ebp-8Ch]
  _QWORD v64[6]; // [esp+90h] [ebp-88h] BYREF
  _DWORD SystemInformation[11]; // [esp+C4h] [ebp-54h] BYREF
  _QWORD v66[4]; // [esp+F0h] [ebp-28h] BYREF

  v57 = 0;
  v4 = a1;
  Src = a2;
  v56 = a1;
  memset(SystemInformation, 0, sizeof(SystemInformation));
  memset(v64, 0, sizeof(v64));
  v61 = 0;
  v55 = 0;
  v5 = (*(_BYTE *)(v4 + 212) & 8) == 0;
  memset(v66, 0, sizeof(v66));
  if ( !v5 )
    EtwpGenerateFileName((PUNICODE_STRING)(v4 + 116));
  v6 = *(const WCHAR **)(v4 + 120);
  v7 = *(_DWORD *)(v4 + 140);
  SourceString = v6;
  v60 = v7;
  if ( Src )
  {
    v59 = Size;
    v12 = Size + 79;
LABEL_10:
    v53 = v12;
    Heap = (WCHAR *)RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 8, v7);
    SourceString = Heap;
    if ( !Heap )
      return -1073741801;
    File = EtwpCreateFile(v6, v13, (int)&a4, v13, (int)&v61);
    if ( File >= 0 )
    {
      v15 = v60;
      if ( a4 )
      {
        v47[0] = 0;
        v47[1] = 0;
        File = NtReadFile(v61, 0, 0, 0, v48, Heap, v60, v47, 0);
        if ( File >= 0 )
        {
          if ( (Heap[68] & 2) == 0
            && *((_BYTE *)Heap + 108) == MEMORY[0x7FFE026C]
            && *((_BYTE *)Heap + 109) == MEMORY[0x7FFE0270]
            && *((_DWORD *)Heap + 37) == 4 )
          {
            v56 = *((_DWORD *)Heap + 26);
            if ( (unsigned int)(v56 - 1024) <= 0xFFFC00 )
            {
              v57 = *((_DWORD *)Heap + 35);
              if ( v57 )
              {
                if ( *((_QWORD *)Heap + 15) && *((_DWORD *)Heap + 29) == *(_DWORD *)(v4 + 136) )
                {
                  *((_DWORD *)Heap + 30) = 0;
                  *((_DWORD *)Heap + 31) = 0;
                  v34 = NtWriteFile(v61, 0, 0, 0, v48, Heap, *(_DWORD *)(v4 + 140), v47, 0);
                  v35 = v56;
                  File = v34;
                  v36 = v57;
                  *(_DWORD *)(v4 + 244) = 0;
                  *(_DWORD *)(v4 + 280) = v36;
                  *(_DWORD *)(v4 + 224) = v36;
                  *(_DWORD *)(v4 + 252) = 0;
                  *(_DWORD *)(v4 + 140) = v35;
                  *(_DWORD *)(v4 + 240) = v35;
                  *(_DWORD *)(v4 + 248) = v35 * v36;
                  *(_DWORD *)(v4 + 104) = v61;
LABEL_40:
                  RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)Heap);
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
        v16 = Src;
        Heap[27] = 4;
        *(_DWORD *)Heap = v15;
        Heap[26] = 1;
        *((_DWORD *)Heap + 12) = v53 & 0xFFFFFFF8;
        if ( v16 )
        {
          v37 = 0;
          if ( Size )
          {
            do
            {
              v55 = &v16[v37 + 32];
              *(_DWORD *)&v16[v37 + 64] = *(_DWORD *)(v4 + 212) & 0x4101000 | 0x10001;
              *(_DWORD *)&v16[v37 + 68] = 1;
              *(_DWORD *)&v16[v37 + 32] = *(_DWORD *)(v4 + 140);
              if ( (*(_DWORD *)(v4 + 212) & 0x4000000) != 0
                || *(_DWORD *)(v4 + 140) > 0x100000u
                || *(_DWORD *)&v16[v37 + 44] > 0x100u )
              {
                v38 = 0;
                v39 = 2;
              }
              else
              {
                v38 = 5;
                v39 = 1;
              }
              v16[v37 + 38] = v39;
              v16[v37 + 39] = v38;
              v37 += (*(unsigned __int16 *)&v16[v37 + 4] + 7) & 0xFFFFFFF8;
            }
            while ( v37 < Size );
            Heap = (WCHAR *)SourceString;
          }
          if ( v55[11] == 8 )
            v40 = v55[68];
          else
            v40 = v55[66];
          *(_DWORD *)(v4 + 16) = v40;
          memcpy(Heap + 36, v16, Size);
        }
        else
        {
          v17 = Heap + 36;
          *((_DWORD *)Heap + 19) = v59;
          *((_DWORD *)Heap + 18) = -1073676288;
          if ( *(_DWORD *)(v4 + 16) == 2 )
          {
            while ( 1 )
            {
              v18 = MEMORY[0x7FFE0018];
              v59 = MEMORY[0x7FFE0014];
              if ( MEMORY[0x7FFE0018] == MEMORY[0x7FFE001C] )
                break;
              _mm_pause();
            }
            Heap = (WCHAR *)SourceString;
            v4 = v56;
            v15 = v60;
            v17[4] = v59;
            v17[5] = v18;
          }
          else if ( *(_DWORD *)(v4 + 16) == 3 )
          {
            *((_QWORD *)Heap + 11) = __rdtsc();
          }
          else
          {
            v51 = 0;
            v52 = 0;
            RtlQueryPerformanceCounter(&v51);
            v17 = Heap + 36;
            *((_DWORD *)Heap + 22) = v51;
            *((_DWORD *)Heap + 23) = v52;
          }
          v17[3] = v44;
          v17[2] = v45;
          *((_DWORD *)Heap + 24) = v66[2] / (__int64)SystemInformation[1];
          v19 = v66[3] / (__int64)SystemInformation[1];
          v20 = NtCurrentPeb();
          *((_DWORD *)Heap + 25) = v19;
          *((_BYTE *)Heap + 108) = v20->OSMajorVersion;
          *((_BYTE *)Heap + 109) = v20->OSMinorVersion;
          if ( (*(_DWORD *)(v4 + 212) & 0x4000000) != 0
            || *(_DWORD *)(v4 + 140) > 0x100000u
            || *(_DWORD *)(v4 + 136) > 0x100u )
          {
            v21 = 0;
            v22 = 2;
          }
          else
          {
            v21 = 5;
            v22 = 1;
          }
          *((_BYTE *)Heap + 110) = v22;
          *((_BYTE *)Heap + 111) = v21;
          *((_DWORD *)Heap + 28) = v20->OSBuildNumber;
          *((_DWORD *)Heap + 92) = *(_DWORD *)(v4 + 16);
          *((_DWORD *)Heap + 29) = *(_DWORD *)(v4 + 136);
          *((_DWORD *)Heap + 37) = 4;
          *((_DWORD *)Heap + 36) = 1;
          *((_DWORD *)Heap + 35) = 1;
          *((_DWORD *)Heap + 26) = v15;
          *((_DWORD *)Heap + 33) = *(_DWORD *)(v4 + 208);
          *((_DWORD *)Heap + 34) = *(_DWORD *)(v4 + 212);
          *((_DWORD *)Heap + 32) = SystemInformation[1];
          v23 = v64[0] - v64[4];
          *((_DWORD *)Heap + 40) = 0;
          *((_DWORD *)Heap + 41) = 0;
          *((_DWORD *)Heap + 87) = HIDWORD(v23);
          *((_DWORD *)Heap + 39) = v57;
          *((_DWORD *)Heap + 86) = v23;
          memcpy(Heap + 188, *(const void **)(v4 + 112), *(unsigned __int16 *)(v4 + 108) + 2);
          memcpy(
            (char *)Heap + *(unsigned __int16 *)(v4 + 108) + 378,
            *(const void **)(v4 + 120),
            *(unsigned __int16 *)(v4 + 116) + 2);
          EtwpGetTimeZoneInformation(Heap + 84);
          *((_DWORD *)Heap + 88) = MEMORY[0x7FFE0300];
          *((_DWORD *)Heap + 89) = MEMORY[0x7FFE0304];
          *((_DWORD *)Heap + 90) = *(_DWORD *)v4;
          *((_DWORD *)Heap + 91) = *(_DWORD *)(v4 + 4);
          *((_DWORD *)Heap + 22) = *(_DWORD *)(v4 + 8);
          *((_DWORD *)Heap + 23) = *(_DWORD *)(v4 + 12);
          v24 = *((_DWORD *)Heap + 12);
          v59 = v24;
          if ( v24 + 80 <= *(_DWORD *)Heap )
          {
            *(WCHAR *)((char *)Heap + v24 + 6) = 80;
            *(WCHAR *)((char *)Heap + v24 + 4) = 80;
            *(_DWORD *)((char *)Heap + v24) = -1073676286;
            *(_DWORD *)((char *)Heap + v24 + 8) = v45;
            *(_DWORD *)((char *)Heap + v24 + 12) = v44;
            *(_DWORD *)((char *)Heap + v24 + 24) = v66[2] / (__int64)SystemInformation[1];
            *(_DWORD *)((char *)Heap + v24 + 28) = v66[3] / (__int64)SystemInformation[1];
            if ( *(_DWORD *)(v4 + 16) == 2 )
            {
              while ( 1 )
              {
                v25 = MEMORY[0x7FFE0018];
                if ( MEMORY[0x7FFE0018] == MEMORY[0x7FFE001C] )
                  break;
                _mm_pause();
              }
              Heap = (WCHAR *)SourceString;
              v24 = v59;
              v4 = v56;
              *(_DWORD *)((char *)SourceString + v59 + 16) = MEMORY[0x7FFE0014];
              *(_DWORD *)((char *)Heap + v24 + 20) = v25;
            }
            else if ( *(_DWORD *)(v4 + 16) == 3 )
            {
              *(_QWORD *)((char *)Heap + v24 + 16) = __rdtsc();
            }
            else
            {
              v49 = 0;
              v50 = 0;
              RtlQueryPerformanceCounter(&v49);
              *(_DWORD *)((char *)Heap + v24 + 16) = v49;
              *(_DWORD *)((char *)Heap + v24 + 20) = v50;
            }
            *(_DWORD *)((char *)Heap + v24 + 32) = 0;
            if ( !EtwpQueryPartitionRegistryInformationUm((char *)Heap + v24 + 40, (char *)Heap + v24 + 64) )
              *((_DWORD *)Heap + 12) += 80;
          }
        }
        v26 = v61;
        if ( (*(_DWORD *)(v4 + 212) & 0x4000000) != 0
          && (*((_DWORD *)Heap + 11) = 3, (int)NtQueryVolumeInformationFile(v26, v48, v62, 24, 3) >= 0) )
        {
          v41 = *((_DWORD *)Heap + 12);
          if ( Src )
            v41 += 80;
          v27 = -v63 & (v63 + v41 - 1);
          v60 = v27;
          *(_DWORD *)Heap = v27;
        }
        else
        {
          v27 = v60;
        }
        *((_DWORD *)Heap + 1) = *((_DWORD *)Heap + 12);
        EtwpAddProviderTrackingInfo(v27);
        v28 = *((_DWORD *)Heap + 12);
        v29 = v60;
        if ( v28 < v60 && v28 > 0x48 )
        {
          memset((char *)Heap + v28, 255, v60 - v28);
          v29 = v60;
        }
        File = NtWriteFile(v26, 0, 0, 0, v48, Heap, v29, 0, 0);
        if ( File >= 0 )
        {
          v30 = *(_DWORD *)(v4 + 208);
          if ( !v30 || (*(_DWORD *)(v4 + 212) & 0x20) == 0 )
            goto LABEL_35;
          v42 = 1024;
          if ( (*(_DWORD *)(v4 + 212) & 0x2000) == 0 )
            v42 = 0x100000;
          v46 = (unsigned int)v42 * (unsigned __int64)v30;
          File = ZwSetInformationFile(v61, v48, &v46, 8, 20);
          if ( File >= 0 )
          {
LABEL_35:
            *(_DWORD *)(v4 + 252) = 0;
            *(_DWORD *)(v4 + 244) = 0;
            v5 = (*(_DWORD *)(v4 + 212) & 0x4000000) == 0;
            *(_DWORD *)(v4 + 280) = 1;
            *(_DWORD *)(v4 + 224) = 1;
            v31 = v60;
            *(_DWORD *)(v4 + 248) = v60;
            *(_DWORD *)(v4 + 240) = v31;
            *(_DWORD *)(v4 + 104) = v61;
            if ( !v5 )
            {
              *(_DWORD *)(v4 + 324) = 0;
              *(_DWORD *)(v4 + 328) = 0;
              *(_DWORD *)(v4 + 320) = 0;
            }
            v32 = 0;
            goto LABEL_38;
          }
        }
      }
    }
    v32 = (void *)v61;
LABEL_38:
    if ( v32 )
      NtClose(v32);
    goto LABEL_40;
  }
  File = NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x2Cu, 0);
  if ( File >= 0 )
  {
    File = NtQueryInformationThread((HANDLE)0xFFFFFFFE, (THREADINFOCLASS)0, ThreadInformation, 0x1Cu, 0);
    if ( File >= 0 )
    {
      File = NtQueryInformationThread((HANDLE)0xFFFFFFFE, (THREADINFOCLASS)1, v66, 0x20u, 0);
      if ( File >= 0 )
      {
        File = NtQuerySystemInformation(SystemTimeOfDayInformation, v64, 0x30u, 0);
        if ( File >= 0 )
        {
          File = EtwpGetCpuSpeedFromRegistry(&v57);
          if ( File >= 0 )
          {
            v9 = *(unsigned __int16 *)(v4 + 108);
            v10 = *(unsigned __int16 *)(v4 + 116);
            v11 = v9 + 308;
            v12 = v10 + v9 + 387;
            v59 = v10 + v11;
            v6 = SourceString;
            goto LABEL_10;
          }
        }
      }
    }
  }
  return File;
}
