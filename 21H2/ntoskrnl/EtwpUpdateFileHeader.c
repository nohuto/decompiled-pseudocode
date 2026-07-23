/*
 * XREFs of EtwpUpdateFileHeader @ 0x1406B7088
 * Callers:
 *     EtwpCreateLogFile @ 0x1406B6D8C (EtwpCreateLogFile.c)
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x140253DF8 (EtwpQueryUsedProcessorCount.c)
 *     EtwpResetBufferHeader @ 0x140254314 (EtwpResetBufferHeader.c)
 *     EtwpInitializeBufferHeader @ 0x14029E7BC (EtwpInitializeBufferHeader.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwReadFile @ 0x1403FA640 (ZwReadFile.c)
 *     ZwWriteFile @ 0x1403FA680 (ZwWriteFile.c)
 *     ZwQueryInformationFile @ 0x1403FA7A0 (ZwQueryInformationFile.c)
 *     ZwSetInformationFile @ 0x1403FAA60 (ZwSetInformationFile.c)
 *     ZwQueryVolumeInformationFile @ 0x1403FAEA0 (ZwQueryVolumeInformationFile.c)
 *     EtwpAddLogHeader @ 0x1406B76C8 (EtwpAddLogHeader.c)
 *     EtwpIsWow64Logger @ 0x1406B7C0C (EtwpIsWow64Logger.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __fastcall EtwpUpdateFileHeader(__int64 a1, char a2)
{
  void *v4; // rcx
  NTSTATUS result; // eax
  int v6; // r13d
  ULONG Length; // r12d
  _DWORD *PoolWithTag; // rax
  __int64 Buffer; // rsi
  NTSTATUS v10; // ebx
  void *v11; // rcx
  __int64 v12; // rdx
  char v13; // dl
  __int64 v14; // r15
  __int64 v15; // r14
  LARGE_INTEGER v16; // rcx
  signed __int64 v17; // rcx
  LARGE_INTEGER FileInformation; // [rsp+58h] [rbp-29h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-21h] BYREF
  struct _IO_STATUS_BLOCK v20; // [rsp+70h] [rbp-11h] BYREF
  __int128 FsInformation; // [rsp+80h] [rbp-1h] BYREF
  __int64 v22; // [rsp+90h] [rbp+Fh]
  __int128 v23; // [rsp+98h] [rbp+17h] BYREF
  __int64 v24; // [rsp+A8h] [rbp+27h]

  v24 = 0LL;
  v22 = 0LL;
  v4 = *(void **)(a1 + 816);
  v23 = 0LL;
  FsInformation = 0LL;
  IoStatusBlock = 0LL;
  result = ZwQueryVolumeInformationFile(v4, &IoStatusBlock, &FsInformation, 0x18u, FileFsSizeInformation);
  if ( result >= 0 )
  {
    v6 = HIDWORD(v22) - 1;
    if ( a2 )
    {
      Length = ~v6 & (HIDWORD(v22) + 383);
    }
    else
    {
      Length = *(_DWORD *)(a1 + 4);
      if ( (v6 & Length) != 0 )
        return -1073741306;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (Length + 4095LL) & 0xFFFFFFFFFFFFF000uLL, 0x50777445u);
    Buffer = (__int64)PoolWithTag;
    if ( !PoolWithTag )
      return -1073741801;
    if ( !a2 )
    {
      EtwpInitializeBufferHeader((__int16 *)a1, PoolWithTag);
      EtwpResetBufferHeader(Buffer, 4);
      EtwpAddLogHeader(a1, Buffer);
      v10 = ZwWriteFile(*(HANDLE *)(a1 + 816), 0LL, 0LL, 0LL, &IoStatusBlock, (PVOID)Buffer, Length, 0LL, 0LL);
      if ( v10 >= 0 )
      {
        if ( (*(_DWORD *)(a1 + 12) & 0x20) != 0 )
        {
          v16.QuadPart = *(unsigned int *)(a1 + 308)
                       * ((-(__int64)((*(_DWORD *)(a1 + 12) & 0x2000) != 0) & 0xFFFFFFFFFFF00400uLL) + 0x100000);
          v20 = 0LL;
          FileInformation = v16;
          v10 = ZwSetInformationFile(*(HANDLE *)(a1 + 816), &v20, &FileInformation, 8u, FileEndOfFileInformation);
        }
        if ( v10 >= 0 )
        {
          *(_DWORD *)(a1 + 264) = 1;
          *(_DWORD *)(a1 + 220) = 1;
          *(_QWORD *)(a1 + 232) = Length;
        }
      }
      goto LABEL_11;
    }
    v11 = *(void **)(a1 + 816);
    FileInformation.QuadPart = 0LL;
    v10 = ZwReadFile(v11, 0LL, 0LL, 0LL, &IoStatusBlock, PoolWithTag, Length, &FileInformation, 0LL);
    if ( v10 >= 0 )
    {
      v12 = *(unsigned int *)(Buffer + 136);
      if ( (v12 & 0x4000402) != 0 )
      {
        v10 = -1073741811;
        *(_DWORD *)(a1 + 60) = 1;
      }
      else
      {
        if ( *(_BYTE *)(Buffer + 108) != 10 || *(_BYTE *)(Buffer + 109) )
        {
          v10 = -1073741811;
          *(_DWORD *)(a1 + 60) = 2;
          goto LABEL_11;
        }
        if ( *(_DWORD *)(Buffer + 148) == ((unsigned __int8)EtwpIsWow64Logger(a1, v12) != 0 ? 4 : 8) )
        {
          v14 = *(unsigned int *)(Buffer + 104);
          LODWORD(v15) = *(_DWORD *)(Buffer + 140);
          if ( (v6 & (unsigned int)v14) != 0 )
          {
            v10 = -1073741306;
          }
          else
          {
            if ( (unsigned int)(v14 - 1024) > 0xFFFC00 )
            {
              v10 = -1073741811;
              *(_DWORD *)(a1 + 60) = 4;
              goto LABEL_11;
            }
            if ( (*(_DWORD *)(a1 + 832) & 2) == 0 || *(_DWORD *)(a1 + 4) == (_DWORD)v14 )
            {
              if ( !*(_QWORD *)(Buffer + 120) )
              {
                if ( (v13 & 0x20) != 0 )
                {
                  v10 = -1073741811;
                  *(_DWORD *)(a1 + 60) = 6;
                  goto LABEL_11;
                }
                v10 = ZwQueryInformationFile(
                        *(HANDLE *)(a1 + 816),
                        &IoStatusBlock,
                        &v23,
                        0x18u,
                        FileStandardInformation);
                if ( v10 < 0 )
                {
                  *(_DWORD *)(a1 + 60) = 7;
                  goto LABEL_11;
                }
                v17 = *(unsigned int *)(a1 + 308)
                    * ((-(__int64)((*(_DWORD *)(a1 + 12) & 0x2000) != 0) & 0xFFFFFFFFFFF00400uLL) + 0x100000);
                if ( v17 && *((__int64 *)&v23 + 1) >= v17 )
                {
                  v10 = -1073741432;
                  *(_DWORD *)(a1 + 60) = 8;
                  goto LABEL_11;
                }
                v15 = *((_QWORD *)&v23 + 1) / v14;
              }
              if ( (_DWORD)v15 )
              {
                if ( *(_DWORD *)(Buffer + 116) == (unsigned int)EtwpQueryUsedProcessorCount(a1) )
                {
                  *(_QWORD *)(Buffer + 120) = 0LL;
                  v10 = ZwWriteFile(
                          *(HANDLE *)(a1 + 816),
                          0LL,
                          0LL,
                          0LL,
                          &IoStatusBlock,
                          (PVOID)Buffer,
                          Length,
                          &FileInformation,
                          0LL);
                  if ( v10 >= 0 )
                  {
                    *(_DWORD *)(a1 + 264) = v15;
                    *(_DWORD *)(a1 + 220) = v15;
                    *(_DWORD *)(a1 + 4) = v14;
                    *(_QWORD *)(a1 + 232) = (unsigned int)(v14 * v15);
                  }
                }
                else
                {
                  v10 = -1073741811;
                  *(_DWORD *)(a1 + 60) = 10;
                }
              }
              else
              {
                v10 = -1073741811;
                *(_DWORD *)(a1 + 60) = 9;
              }
              goto LABEL_11;
            }
            v10 = -1073741306;
            *(_DWORD *)(a1 + 60) = 5;
          }
        }
        else
        {
          v10 = -1073741811;
          *(_DWORD *)(a1 + 60) = 3;
        }
      }
    }
LABEL_11:
    ExFreePoolWithTag((PVOID)Buffer, 0);
    return v10;
  }
  return result;
}
