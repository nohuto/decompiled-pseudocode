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
  __int64 v9; // r15
  NTSTATUS File; // ebx
  int v11; // eax
  int v12; // edx
  int v13; // r12d
  __int64 Heap; // rax
  __int64 v15; // rsi
  _DWORD *v16; // r14
  __int64 v17; // rdx
  char *v18; // rbx
  unsigned __int64 v19; // rax
  struct _PEB *v20; // rcx
  char v21; // r9
  char v22; // al
  __int64 v23; // rcx
  __int64 v24; // rbx
  __int64 v25; // rdx
  unsigned __int64 v26; // rax
  int PartitionRegistryInformationUm; // eax
  HANDLE v28; // r14
  __int64 v29; // rcx
  __int64 v30; // rdx
  size_t v32; // rdx
  unsigned int v33; // r8d
  char *v34; // rcx
  char v35; // al
  char v36; // r10
  int v37; // eax
  int v38; // ecx
  __int64 v39; // r13
  int v40; // r15d
  NTSTATUS v41; // eax
  int v42; // [rsp+20h] [rbp-E0h]
  int v44; // [rsp+58h] [rbp-A8h]
  int v45; // [rsp+5Ch] [rbp-A4h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-A0h] BYREF
  size_t Size; // [rsp+68h] [rbp-98h]
  void *Src; // [rsp+70h] [rbp-90h]
  __int64 v49; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v50; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v51; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v52[16]; // [rsp+90h] [rbp-70h] BYREF
  PCWSTR SourceString; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v54; // [rsp+A8h] [rbp-58h] BYREF
  char v55[16]; // [rsp+B0h] [rbp-50h] BYREF
  int v56; // [rsp+C0h] [rbp-40h]
  int v57; // [rsp+C8h] [rbp-38h]
  __int128 v58; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v59; // [rsp+F0h] [rbp-10h]
  _OWORD v60[2]; // [rsp+100h] [rbp+0h] BYREF
  __int128 v61; // [rsp+120h] [rbp+20h]
  _DWORD SystemInformation[16]; // [rsp+130h] [rbp+30h] BYREF
  char v63[20]; // [rsp+170h] [rbp+70h] BYREF
  int v64; // [rsp+184h] [rbp+84h]

  Src = a2;
  LODWORD(Size) = a3;
  v45 = 0;
  memset(SystemInformation, 0, sizeof(SystemInformation));
  v7 = (*(_BYTE *)(a1 + 324) & 8) == 0;
  memset(v60, 0, sizeof(v60));
  Handle = 0LL;
  v8 = 0LL;
  v61 = 0LL;
  v58 = 0LL;
  v59 = 0LL;
  if ( !v7 )
    EtwpGenerateFileName(a1 + 184, a1 + 200, a1 + 168);
  v9 = *(unsigned int *)(a1 + 208);
  SourceString = *(PCWSTR *)(a1 + 176);
  if ( a2 )
  {
    v44 = a3;
    v13 = a3 + 79;
LABEL_10:
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v9);
    v15 = Heap;
    if ( !Heap )
      return (unsigned int)-1073741801;
    v16 = (_DWORD *)(Heap + 72);
    File = EtwpCreateFile(SourceString, v42, (__int64)&Handle);
    if ( File < 0 )
    {
      v28 = Handle;
    }
    else if ( a4 )
    {
      v28 = Handle;
      v49 = 0LL;
      File = NtReadFile(Handle, 0LL, 0LL, 0LL, v52, v15, v9, &v49, 0LL);
      if ( File >= 0 )
      {
        if ( (*(_BYTE *)(v15 + 136) & 2) == 0
          && *(_BYTE *)(v15 + 108) == MEMORY[0x7FFE026C]
          && *(_BYTE *)(v15 + 109) == MEMORY[0x7FFE0270]
          && *(_DWORD *)(v15 + 148) == 8 )
        {
          v39 = *(unsigned int *)(v15 + 104);
          if ( (unsigned int)(v39 - 1024) <= 0xFFFC00 )
          {
            v40 = *(_DWORD *)(v15 + 140);
            if ( v40 )
            {
              if ( *(_QWORD *)(v15 + 120) && *(_DWORD *)(v15 + 116) == *(_DWORD *)(a1 + 204) )
              {
                *(_QWORD *)(v15 + 120) = 0LL;
                v41 = NtWriteFile(v28, 0LL, 0LL, 0LL, v52, v15, *(_DWORD *)(a1 + 208), &v49, 0LL);
                *(_DWORD *)(a1 + 392) = v40;
                File = v41;
                *(_DWORD *)(a1 + 336) = v40;
                *(_DWORD *)(a1 + 208) = v39;
                *(_QWORD *)(a1 + 352) = v39;
                *(_QWORD *)(a1 + 144) = v28;
                *(_QWORD *)(a1 + 360) = (unsigned int)(v39 * v40);
LABEL_37:
                RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v15);
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
      v18 = (char *)Src;
      *(_DWORD *)v15 = v9;
      *(_DWORD *)(v15 + 52) = 262145;
      *(_DWORD *)(v15 + 48) = v13 & 0xFFFFFFF8;
      if ( v18 )
      {
        v32 = (unsigned int)Size;
        v33 = 0;
        if ( (_DWORD)Size )
        {
          do
          {
            v34 = &v18[v33];
            *((_DWORD *)v34 + 16) = *(_DWORD *)(a1 + 324) & 0x4101000 | 0x10001;
            v8 = v34 + 32;
            *((_DWORD *)v34 + 17) = 1;
            *((_DWORD *)v34 + 8) = *(_DWORD *)(a1 + 208);
            if ( (*(_DWORD *)(a1 + 324) & 0x4000000) != 0
              || *(_DWORD *)(a1 + 208) > 0x100000u
              || *((_DWORD *)v34 + 11) > 0x100u )
            {
              v35 = 0;
              v36 = 2;
            }
            else
            {
              v35 = 5;
              v36 = 1;
            }
            v34[38] = v36;
            v34[39] = v35;
            v33 += (*((unsigned __int16 *)v34 + 2) + 7) & 0xFFFFFFF8;
          }
          while ( v33 < (unsigned int)v32 );
          v16 = (_DWORD *)(v15 + 72);
        }
        if ( v8[11] == 4 )
          v37 = v8[66];
        else
          v37 = v8[68];
        *(_DWORD *)(a1 + 16) = v37;
        memmove(v16, v18, v32);
      }
      else
      {
        v16[1] = v44;
        *v16 = -1073610752;
        if ( *(_DWORD *)(a1 + 16) == 2 )
        {
          v19 = MEMORY[0x7FFE0014];
        }
        else if ( *(_DWORD *)(a1 + 16) == 3 )
        {
          v19 = __rdtsc();
        }
        else
        {
          v50 = 0LL;
          RtlQueryPerformanceCounter(&v50, v17);
          v19 = v50;
        }
        *((_QWORD *)v16 + 2) = v19;
        v16[3] = v56;
        v16[2] = v57;
        v16[6] = (__int64)v59 / SystemInformation[1];
        v16[7] = *((_QWORD *)&v59 + 1) / (__int64)SystemInformation[1];
        v20 = NtCurrentPeb();
        *(_BYTE *)(v15 + 108) = v20->OSMajorVersion;
        *(_BYTE *)(v15 + 109) = v20->OSMinorVersion;
        if ( (*(_DWORD *)(a1 + 324) & 0x4000000) != 0
          || *(_DWORD *)(a1 + 208) > 0x100000u
          || *(_DWORD *)(a1 + 204) > 0x100u )
        {
          v21 = 0;
          v22 = 2;
        }
        else
        {
          v21 = 5;
          v22 = 1;
        }
        *(_BYTE *)(v15 + 110) = v22;
        *(_BYTE *)(v15 + 111) = v21;
        *(_DWORD *)(v15 + 112) = v20->OSBuildNumber;
        *(_DWORD *)(v15 + 376) = *(_DWORD *)(a1 + 16);
        *(_DWORD *)(v15 + 116) = *(_DWORD *)(a1 + 204);
        *(_DWORD *)(v15 + 144) = 1;
        *(_DWORD *)(v15 + 140) = 1;
        *(_DWORD *)(v15 + 148) = 8;
        *(_DWORD *)(v15 + 104) = v9;
        *(_DWORD *)(v15 + 132) = *(_DWORD *)(a1 + 320);
        *(_DWORD *)(v15 + 136) = *(_DWORD *)(a1 + 324);
        *(_DWORD *)(v15 + 128) = SystemInformation[1];
        *(_QWORD *)(v15 + 352) = *(_QWORD *)&v60[0] - v61;
        *(_DWORD *)(v15 + 156) = v45;
        *(_QWORD *)(v15 + 160) = 0LL;
        *(_QWORD *)(v15 + 168) = 0LL;
        memmove((void *)(v15 + 384), *(const void **)(a1 + 160), *(unsigned __int16 *)(a1 + 152) + 2LL);
        memmove(
          (void *)(v15 + *(unsigned __int16 *)(a1 + 152) + 386LL),
          *(const void **)(a1 + 176),
          *(unsigned __int16 *)(a1 + 168) + 2LL);
        EtwpGetTimeZoneInformation((void *)(v15 + 176));
        *(_QWORD *)(v15 + 360) = MEMORY[0x7FFE0300];
        *(_QWORD *)(v15 + 368) = *(_QWORD *)a1;
        *((_QWORD *)v16 + 2) = *(_QWORD *)(a1 + 8);
        v23 = *(unsigned int *)(v15 + 48);
        if ( (unsigned int)(v23 + 80) <= *(_DWORD *)v15 )
        {
          v24 = v15 + v23;
          *(_DWORD *)(v24 + 4) = 5242960;
          *(_DWORD *)v24 = -1073610750;
          *(_DWORD *)(v24 + 8) = v57;
          *(_DWORD *)(v24 + 12) = v56;
          *(_DWORD *)(v24 + 24) = (__int64)v59 / SystemInformation[1];
          v25 = *((_QWORD *)&v59 + 1) % (__int64)SystemInformation[1];
          *(_DWORD *)(v24 + 28) = *((_QWORD *)&v59 + 1) / (__int64)SystemInformation[1];
          if ( *(_DWORD *)(a1 + 16) == 2 )
          {
            v26 = MEMORY[0x7FFE0014];
          }
          else if ( *(_DWORD *)(a1 + 16) == 3 )
          {
            v26 = __rdtsc();
          }
          else
          {
            v51 = 0LL;
            RtlQueryPerformanceCounter(&v51, v25);
            v26 = v51;
          }
          *(_QWORD *)(v24 + 16) = v26;
          *(_DWORD *)(v24 + 32) = 0;
          PartitionRegistryInformationUm = EtwpQueryPartitionRegistryInformationUm(
                                             v24 + 48,
                                             v24 + 36,
                                             v24 + 40,
                                             v24 + 64);
          v18 = (char *)Src;
          if ( !PartitionRegistryInformationUm )
            *(_DWORD *)(v15 + 48) += 80;
        }
      }
      v28 = Handle;
      if ( (*(_DWORD *)(a1 + 324) & 0x4000000) != 0 )
      {
        *(_DWORD *)(v15 + 44) = 3;
        if ( (int)ZwQueryVolumeInformationFile(v28, v52, v63, 24LL, 3) >= 0 )
        {
          v38 = *(_DWORD *)(v15 + 48) + 80;
          if ( !v18 )
            v38 = *(_DWORD *)(v15 + 48);
          LODWORD(v9) = -v64 & (v38 + v64 - 1);
          *(_DWORD *)v15 = v9;
        }
      }
      *(_DWORD *)(v15 + 4) = *(_DWORD *)(v15 + 48);
      EtwpAddProviderTrackingInfo(a1, v15, (unsigned int)v9);
      v29 = *(unsigned int *)(v15 + 48);
      if ( (unsigned int)v29 < (unsigned int)v9 && (unsigned int)v29 > 0x48 )
        memset((void *)(v15 + v29), 255, (unsigned int)(v9 - v29));
      File = NtWriteFile(v28, 0LL, 0LL, 0LL, v52, v15, v9, 0LL, 0LL);
      if ( File >= 0 )
      {
        v30 = *(unsigned int *)(a1 + 320);
        if ( !(_DWORD)v30
          || (*(_DWORD *)(a1 + 324) & 0x20) == 0
          || (v54 = v30 * ((-(__int64)((*(_DWORD *)(a1 + 324) & 0x2000) != 0) & 0xFFFFFFFFFFF00400uLL) + 0x100000),
              File = ZwSetInformationFile(v28, v52, &v54, 8LL, 20),
              File >= 0) )
        {
          *(_QWORD *)(a1 + 144) = v28;
          *(_DWORD *)(a1 + 392) = 1;
          *(_DWORD *)(a1 + 336) = 1;
          *(_QWORD *)(a1 + 360) = (unsigned int)v9;
          *(_QWORD *)(a1 + 352) = (unsigned int)v9;
          if ( (*(_DWORD *)(a1 + 324) & 0x4000000) != 0 )
          {
            *(_QWORD *)(a1 + 456) = 0LL;
            *(_DWORD *)(a1 + 452) = 0;
          }
          v28 = 0LL;
        }
      }
    }
    if ( v28 )
      NtClose(v28);
    goto LABEL_37;
  }
  File = NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
  if ( File >= 0 )
  {
    File = ZwQueryInformationThread(-2LL, 0LL, v55);
    if ( File >= 0 )
    {
      v42 = 0;
      File = ZwQueryInformationThread(-2LL, 1LL, &v58);
      if ( File >= 0 )
      {
        File = NtQuerySystemInformation(SystemTimeOfDayInformation, v60, 0x30u, 0LL);
        if ( File >= 0 )
        {
          File = EtwpGetCpuSpeedFromRegistry(&v45);
          if ( File >= 0 )
          {
            v11 = *(unsigned __int16 *)(a1 + 152);
            v12 = *(unsigned __int16 *)(a1 + 168);
            v44 = v12 + v11 + 316;
            v13 = v12 + v11 + 395;
            goto LABEL_10;
          }
        }
      }
    }
  }
  return (unsigned int)File;
}
