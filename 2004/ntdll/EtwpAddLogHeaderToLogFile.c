/*
 * XREFs of EtwpAddLogHeaderToLogFile @ 0x1800564B8
 * Callers:
 *     EtwpLogger @ 0x180054FE0 (EtwpLogger.c)
 *     EtwpStartUmLogger @ 0x180055AC8 (EtwpStartUmLogger.c)
 *     EtwpBufferingModeFlush @ 0x1801108B0 (EtwpBufferingModeFlush.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlQueryPerformanceCounter @ 0x180040150 (RtlQueryPerformanceCounter.c)
 *     EtwpAddProviderTrackingInfo @ 0x180056B78 (EtwpAddProviderTrackingInfo.c)
 *     EtwpCreateFile @ 0x180056BD4 (EtwpCreateFile.c)
 *     EtwpGetCpuSpeedFromRegistry @ 0x1800573BC (EtwpGetCpuSpeedFromRegistry.c)
 *     EtwpQueryPartitionRegistryInformationUm @ 0x180057610 (EtwpQueryPartitionRegistryInformationUm.c)
 *     EtwpGetTimeZoneInformation @ 0x180057934 (EtwpGetTimeZoneInformation.c)
 *     EtwpGenerateFileName @ 0x18005814C (EtwpGenerateFileName.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     NtReadFile @ 0x18009CED0 (NtReadFile.c)
 *     NtWriteFile @ 0x18009CF10 (NtWriteFile.c)
 *     NtClose @ 0x18009CFF0 (NtClose.c)
 *     ZwQueryInformationThread @ 0x18009D2B0 (ZwQueryInformationThread.c)
 *     ZwSetInformationFile @ 0x18009D2F0 (ZwSetInformationFile.c)
 *     NtQuerySystemInformation @ 0x18009D4D0 (NtQuerySystemInformation.c)
 *     ZwQueryVolumeInformationFile @ 0x18009D730 (ZwQueryVolumeInformationFile.c)
 *     memmove @ 0x1800A3C00 (memmove.c)
 *     memset @ 0x1800A3EC0 (memset.c)
 */

__int64 __fastcall EtwpAddLogHeaderToLogFile(__int64 a1, void *a2, int a3, char a4)
{
  bool v7; // zf
  _DWORD *v8; // r13
  SIZE_T Length; // r15
  NTSTATUS File; // ebx
  int v11; // eax
  int v12; // edx
  int v13; // r12d
  LARGE_INTEGER *Heap; // rax
  LARGE_INTEGER *Buffer; // rsi
  LARGE_INTEGER *v16; // r14
  char *v17; // rbx
  LARGE_INTEGER v18; // rax
  struct _PEB *v19; // rcx
  char v20; // r9
  char v21; // al
  __int64 v22; // rcx
  LARGE_INTEGER *v23; // rbx
  LARGE_INTEGER v24; // rax
  int PartitionRegistryInformationUm; // eax
  HANDLE v26; // r14
  __int64 v27; // rcx
  __int64 v28; // rdx
  size_t v30; // rdx
  unsigned int v31; // r8d
  char *v32; // rcx
  char v33; // al
  char v34; // r10
  int v35; // eax
  int v36; // ecx
  __int64 LowPart; // r13
  int HighPart; // r15d
  NTSTATUS v39; // eax
  int ReturnLength; // [rsp+20h] [rbp-E0h]
  int v42; // [rsp+58h] [rbp-A8h]
  int v43; // [rsp+5Ch] [rbp-A4h] BYREF
  HANDLE FileHandle; // [rsp+60h] [rbp-A0h] BYREF
  size_t Size; // [rsp+68h] [rbp-98h]
  void *Src; // [rsp+70h] [rbp-90h]
  LARGE_INTEGER ByteOffset; // [rsp+78h] [rbp-88h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+80h] [rbp-80h] BYREF
  LARGE_INTEGER v49; // [rsp+88h] [rbp-78h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+90h] [rbp-70h] BYREF
  PCWSTR SourceString; // [rsp+A0h] [rbp-60h]
  unsigned __int64 FileInformation; // [rsp+A8h] [rbp-58h] BYREF
  char ThreadInformation[16]; // [rsp+B0h] [rbp-50h] BYREF
  int v54; // [rsp+C0h] [rbp-40h]
  unsigned int v55; // [rsp+C8h] [rbp-38h]
  __int128 v56; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v57; // [rsp+F0h] [rbp-10h]
  _OWORD v58[2]; // [rsp+100h] [rbp+0h] BYREF
  __int128 v59; // [rsp+120h] [rbp+20h]
  _DWORD SystemInformation[16]; // [rsp+130h] [rbp+30h] BYREF
  char FsInformation[20]; // [rsp+170h] [rbp+70h] BYREF
  int v62; // [rsp+184h] [rbp+84h]

  Src = a2;
  LODWORD(Size) = a3;
  v43 = 0;
  memset(SystemInformation, 0, sizeof(SystemInformation));
  v7 = (*(_BYTE *)(a1 + 324) & 8) == 0;
  memset(v58, 0, sizeof(v58));
  FileHandle = 0LL;
  v8 = 0LL;
  v59 = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  if ( !v7 )
    EtwpGenerateFileName(a1 + 184, a1 + 200, a1 + 168);
  Length = *(unsigned int *)(a1 + 208);
  SourceString = *(PCWSTR *)(a1 + 176);
  if ( a2 )
  {
    v42 = a3;
    v13 = a3 + 79;
LABEL_10:
    Heap = (LARGE_INTEGER *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, Length);
    Buffer = Heap;
    if ( !Heap )
      return (unsigned int)-1073741801;
    v16 = Heap + 9;
    File = EtwpCreateFile(SourceString, ReturnLength, (__int64)&FileHandle);
    if ( File < 0 )
    {
      v26 = FileHandle;
    }
    else if ( a4 )
    {
      v26 = FileHandle;
      ByteOffset.QuadPart = 0LL;
      File = NtReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, Length, &ByteOffset, 0LL);
      if ( File >= 0 )
      {
        if ( (Buffer[17].LowPart & 2) == 0
          && BYTE4(Buffer[13].QuadPart) == MEMORY[0x7FFE026C]
          && BYTE5(Buffer[13].QuadPart) == MEMORY[0x7FFE0270]
          && Buffer[18].HighPart == 8 )
        {
          LowPart = Buffer[13].LowPart;
          if ( (unsigned int)(LowPart - 1024) <= 0xFFFC00 )
          {
            HighPart = Buffer[17].HighPart;
            if ( HighPart )
            {
              if ( Buffer[15].QuadPart && Buffer[14].HighPart == *(_DWORD *)(a1 + 204) )
              {
                Buffer[15].QuadPart = 0LL;
                v39 = NtWriteFile(v26, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, *(_DWORD *)(a1 + 208), &ByteOffset, 0LL);
                *(_DWORD *)(a1 + 392) = HighPart;
                File = v39;
                *(_DWORD *)(a1 + 336) = HighPart;
                *(_DWORD *)(a1 + 208) = LowPart;
                *(_QWORD *)(a1 + 352) = LowPart;
                *(_QWORD *)(a1 + 144) = v26;
                *(_QWORD *)(a1 + 360) = (unsigned int)(LowPart * HighPart);
LABEL_37:
                RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Buffer);
                return (unsigned int)File;
              }
            }
          }
        }
        File = -1073741811;
      }
    }
    else
    {
      v17 = (char *)Src;
      Buffer->LowPart = Length;
      Buffer[6].HighPart = 262145;
      Buffer[6].LowPart = v13 & 0xFFFFFFF8;
      if ( v17 )
      {
        v30 = (unsigned int)Size;
        v31 = 0;
        if ( (_DWORD)Size )
        {
          do
          {
            v32 = &v17[v31];
            *((_DWORD *)v32 + 16) = *(_DWORD *)(a1 + 324) & 0x4101000 | 0x10001;
            v8 = v32 + 32;
            *((_DWORD *)v32 + 17) = 1;
            *((_DWORD *)v32 + 8) = *(_DWORD *)(a1 + 208);
            if ( (*(_DWORD *)(a1 + 324) & 0x4000000) != 0
              || *(_DWORD *)(a1 + 208) > 0x100000u
              || *((_DWORD *)v32 + 11) > 0x100u )
            {
              v33 = 0;
              v34 = 2;
            }
            else
            {
              v33 = 5;
              v34 = 1;
            }
            v32[38] = v34;
            v32[39] = v33;
            v31 += (*((unsigned __int16 *)v32 + 2) + 7) & 0xFFFFFFF8;
          }
          while ( v31 < (unsigned int)v30 );
          v16 = Buffer + 9;
        }
        if ( v8[11] == 4 )
          v35 = v8[66];
        else
          v35 = v8[68];
        *(_DWORD *)(a1 + 16) = v35;
        memmove(v16, v17, v30);
      }
      else
      {
        v16->HighPart = v42;
        v16->LowPart = -1073610752;
        if ( *(_DWORD *)(a1 + 16) == 2 )
        {
          v18.QuadPart = MEMORY[0x7FFE0014];
        }
        else if ( *(_DWORD *)(a1 + 16) == 3 )
        {
          v18.QuadPart = __rdtsc();
        }
        else
        {
          PerformanceCounter.QuadPart = 0LL;
          RtlQueryPerformanceCounter(&PerformanceCounter);
          v18 = PerformanceCounter;
        }
        v16[2] = v18;
        v16[1].HighPart = v54;
        v16[1].LowPart = v55;
        v16[3].LowPart = (__int64)v57 / SystemInformation[1];
        v16[3].HighPart = *((_QWORD *)&v57 + 1) / (__int64)SystemInformation[1];
        v19 = NtCurrentPeb();
        BYTE4(Buffer[13].QuadPart) = v19->OSMajorVersion;
        BYTE5(Buffer[13].QuadPart) = v19->OSMinorVersion;
        if ( (*(_DWORD *)(a1 + 324) & 0x4000000) != 0
          || *(_DWORD *)(a1 + 208) > 0x100000u
          || *(_DWORD *)(a1 + 204) > 0x100u )
        {
          v20 = 0;
          v21 = 2;
        }
        else
        {
          v20 = 5;
          v21 = 1;
        }
        BYTE6(Buffer[13].QuadPart) = v21;
        HIBYTE(Buffer[13].QuadPart) = v20;
        Buffer[14].LowPart = v19->OSBuildNumber;
        Buffer[47].LowPart = *(_DWORD *)(a1 + 16);
        Buffer[14].HighPart = *(_DWORD *)(a1 + 204);
        Buffer[18].LowPart = 1;
        Buffer[17].HighPart = 1;
        Buffer[18].HighPart = 8;
        Buffer[13].LowPart = Length;
        Buffer[16].HighPart = *(_DWORD *)(a1 + 320);
        Buffer[17].LowPart = *(_DWORD *)(a1 + 324);
        Buffer[16].LowPart = SystemInformation[1];
        Buffer[44].QuadPart = *(_QWORD *)&v58[0] - v59;
        Buffer[19].HighPart = v43;
        Buffer[20].QuadPart = 0LL;
        Buffer[21].QuadPart = 0LL;
        memmove(&Buffer[48], *(const void **)(a1 + 160), *(unsigned __int16 *)(a1 + 152) + 2LL);
        memmove(
          (char *)&Buffer[48] + *(unsigned __int16 *)(a1 + 152) + 2,
          *(const void **)(a1 + 176),
          *(unsigned __int16 *)(a1 + 168) + 2LL);
        EtwpGetTimeZoneInformation(&Buffer[22]);
        Buffer[45].QuadPart = MEMORY[0x7FFE0300];
        Buffer[46] = *(LARGE_INTEGER *)a1;
        v16[2] = *(LARGE_INTEGER *)(a1 + 8);
        v22 = Buffer[6].LowPart;
        if ( (unsigned int)(v22 + 80) <= Buffer->LowPart )
        {
          v23 = (LARGE_INTEGER *)((char *)Buffer + v22);
          v23->HighPart = 5242960;
          v23->LowPart = -1073610750;
          v23[1].LowPart = v55;
          v23[1].HighPart = v54;
          v23[3].LowPart = (__int64)v57 / SystemInformation[1];
          v23[3].HighPart = *((_QWORD *)&v57 + 1) / (__int64)SystemInformation[1];
          if ( *(_DWORD *)(a1 + 16) == 2 )
          {
            v24.QuadPart = MEMORY[0x7FFE0014];
          }
          else if ( *(_DWORD *)(a1 + 16) == 3 )
          {
            v24.QuadPart = __rdtsc();
          }
          else
          {
            v49.QuadPart = 0LL;
            RtlQueryPerformanceCounter(&v49);
            v24 = v49;
          }
          v23[2] = v24;
          v23[4].LowPart = 0;
          PartitionRegistryInformationUm = EtwpQueryPartitionRegistryInformationUm(
                                             &v23[6],
                                             (char *)&v23[4].QuadPart + 4,
                                             &v23[5],
                                             &v23[8]);
          v17 = (char *)Src;
          if ( !PartitionRegistryInformationUm )
            Buffer[6].LowPart += 80;
        }
      }
      v26 = FileHandle;
      if ( (*(_DWORD *)(a1 + 324) & 0x4000000) != 0 )
      {
        Buffer[5].HighPart = 3;
        if ( ZwQueryVolumeInformationFile(v26, &IoStatusBlock, FsInformation, 0x18u, FileFsSizeInformation) >= 0 )
        {
          v36 = Buffer[6].LowPart + 80;
          if ( !v17 )
            v36 = Buffer[6].LowPart;
          LODWORD(Length) = -v62 & (v36 + v62 - 1);
          Buffer->LowPart = Length;
        }
      }
      Buffer->HighPart = Buffer[6].LowPart;
      EtwpAddProviderTrackingInfo(a1, Buffer, (unsigned int)Length);
      v27 = Buffer[6].LowPart;
      if ( (unsigned int)v27 < (unsigned int)Length && (unsigned int)v27 > 0x48 )
        memset((char *)Buffer + v27, 255, (unsigned int)(Length - v27));
      File = NtWriteFile(v26, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, Length, 0LL, 0LL);
      if ( File >= 0 )
      {
        v28 = *(unsigned int *)(a1 + 320);
        if ( !(_DWORD)v28
          || (*(_DWORD *)(a1 + 324) & 0x20) == 0
          || (FileInformation = v28
                              * ((-(__int64)((*(_DWORD *)(a1 + 324) & 0x2000) != 0) & 0xFFFFFFFFFFF00400uLL) + 0x100000),
              File = ZwSetInformationFile(v26, &IoStatusBlock, &FileInformation, 8u, FileEndOfFileInformation),
              File >= 0) )
        {
          *(_QWORD *)(a1 + 144) = v26;
          *(_DWORD *)(a1 + 392) = 1;
          *(_DWORD *)(a1 + 336) = 1;
          *(_QWORD *)(a1 + 360) = (unsigned int)Length;
          *(_QWORD *)(a1 + 352) = (unsigned int)Length;
          if ( (*(_DWORD *)(a1 + 324) & 0x4000000) != 0 )
          {
            *(_QWORD *)(a1 + 456) = 0LL;
            *(_DWORD *)(a1 + 452) = 0;
          }
          v26 = 0LL;
        }
      }
    }
    if ( v26 )
      NtClose(v26);
    goto LABEL_37;
  }
  File = NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
  if ( File >= 0 )
  {
    File = ZwQueryInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadBasicInformation, ThreadInformation, 0x30u, 0LL);
    if ( File >= 0 )
    {
      File = ZwQueryInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadTimes, &v56, 0x20u, 0LL);
      if ( File >= 0 )
      {
        File = NtQuerySystemInformation(SystemTimeOfDayInformation, v58, 0x30u, 0LL);
        if ( File >= 0 )
        {
          File = EtwpGetCpuSpeedFromRegistry(&v43);
          if ( File >= 0 )
          {
            v11 = *(unsigned __int16 *)(a1 + 152);
            v12 = *(unsigned __int16 *)(a1 + 168);
            v42 = v12 + v11 + 316;
            v13 = v12 + v11 + 395;
            goto LABEL_10;
          }
        }
      }
    }
  }
  return (unsigned int)File;
}
