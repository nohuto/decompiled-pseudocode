/*
 * XREFs of EtwpFinalizeHeader @ 0x1406B6A50
 * Callers:
 *     EtwpLogger @ 0x14063A500 (EtwpLogger.c)
 *     EtwpCreateLogFile @ 0x1406B6D8C (EtwpCreateLogFile.c)
 *     EtwpBufferingModeFlush @ 0x14093D358 (EtwpBufferingModeFlush.c)
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x140253DF8 (EtwpQueryUsedProcessorCount.c)
 *     KeQuerySystemTimePrecise @ 0x140266EA0 (KeQuerySystemTimePrecise.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwReadFile @ 0x1403FA640 (ZwReadFile.c)
 *     ZwWriteFile @ 0x1403FA680 (ZwWriteFile.c)
 *     ZwSetInformationFile @ 0x1403FAA60 (ZwSetInformationFile.c)
 *     ZwQueryVolumeInformationFile @ 0x1403FAEA0 (ZwQueryVolumeInformationFile.c)
 *     EtwpAddLastDroppedEvent @ 0x1405AB928 (EtwpAddLastDroppedEvent.c)
 *     EtwpAddDebugInfoEvents @ 0x1406B6844 (EtwpAddDebugInfoEvents.c)
 *     EtwpIsWow64Logger @ 0x1406B7C0C (EtwpIsWow64Logger.c)
 *     EtwpAddBinaryInfoEvents @ 0x14093D1D8 (EtwpAddBinaryInfoEvents.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __fastcall EtwpFinalizeHeader(__int64 a1, char a2)
{
  _QWORD *v2; // r13
  char v4; // r12
  NTSTATUS result; // eax
  ULONG Length; // r15d
  unsigned int v7; // esi
  LARGE_INTEGER *Buffer; // rdi
  void *v9; // rcx
  NTSTATUS v10; // r14d
  LARGE_INTEGER v11; // rax
  int v12; // edx
  unsigned int HighPart; // r15d
  ULONG LowPart; // eax
  NTSTATUS v15; // eax
  int v16; // ecx
  unsigned int v17; // ecx
  unsigned __int64 v18; // rdx
  void *v19; // rcx
  LARGE_INTEGER ByteOffset; // [rsp+60h] [rbp-21h] BYREF
  int v22; // [rsp+68h] [rbp-19h]
  int v23; // [rsp+6Ch] [rbp-15h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-11h] BYREF
  unsigned __int64 FileInformation; // [rsp+80h] [rbp-1h] BYREF
  struct _IO_STATUS_BLOCK v26; // [rsp+88h] [rbp+7h] BYREF
  __int128 FsInformation; // [rsp+98h] [rbp+17h] BYREF
  __int64 v28; // [rsp+A8h] [rbp+27h]

  v28 = 0LL;
  v2 = (_QWORD *)(a1 + 112);
  FsInformation = 0LL;
  IoStatusBlock = 0LL;
  if ( (_QWORD *)*v2 != v2
    || *(_QWORD *)(a1 + 1024) != a1 + 1024
    || *(_DWORD *)(a1 + 136)
    || (v4 = 0, *(_QWORD *)(a1 + 1288)) )
  {
    v4 = 1;
  }
  result = ZwQueryVolumeInformationFile(
             *(HANDLE *)(a1 + 816),
             &IoStatusBlock,
             &FsInformation,
             0x18u,
             FileFsSizeInformation);
  if ( result >= 0 )
  {
    v22 = HIDWORD(v28);
    Length = ~(HIDWORD(v28) - 1) & (HIDWORD(v28) + 383);
    v23 = ~(HIDWORD(v28) - 1);
    v7 = Length;
    if ( v4 )
      v7 = *(_DWORD *)(a1 + 4);
    Buffer = (LARGE_INTEGER *)ExAllocatePoolWithTag(PagedPool, (v7 + 4095LL) & 0xFFFFFFFFFFFFF000uLL, 0x50777445u);
    if ( !Buffer )
      return -1073741801;
    v9 = *(void **)(a1 + 816);
    ByteOffset.QuadPart = 0LL;
    v10 = ZwReadFile(v9, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, Length, &ByteOffset, 0LL);
    if ( v10 < 0 )
      goto LABEL_21;
    v11.QuadPart = Length;
    ByteOffset.QuadPart = Length;
    if ( !a2 )
    {
      Buffer[17].HighPart = *(_DWORD *)(a1 + 264);
      Buffer[14].HighPart = EtwpQueryUsedProcessorCount(a1);
      Buffer[19].LowPart += *(_DWORD *)(a1 + 256);
      KeQuerySystemTimePrecise(Buffer + 15);
      if ( (unsigned __int8)EtwpIsWow64Logger(a1, *(unsigned int *)(a1 + 268)) )
        Buffer[46].HighPart += v12;
      else
        Buffer[47].HighPart += v12;
      Buffer[14].LowPart = (unsigned __int16)NtBuildNumber;
      v11 = ByteOffset;
    }
    HighPart = Buffer->HighPart;
    if ( HighPart > v11.LowPart )
    {
      if ( !v4 )
      {
LABEL_16:
        ByteOffset.QuadPart = 0LL;
        LowPart = Buffer[6].LowPart;
        if ( LowPart >= v7 )
          LowPart = v7;
        v15 = ZwWriteFile(
                *(HANDLE *)(a1 + 816),
                0LL,
                0LL,
                0LL,
                &IoStatusBlock,
                Buffer,
                v23 & (LowPart + v22 - 1),
                &ByteOffset,
                0LL);
        v10 = v15;
        if ( !a2 && v15 >= 0 )
        {
          v16 = *(_DWORD *)(a1 + 12);
          if ( (v16 & 0x20) != 0 )
          {
            v18 = *(unsigned int *)(a1 + 4) * (unsigned __int64)*(unsigned int *)(a1 + 264);
            v26 = 0LL;
            if ( v18 < *(unsigned int *)(a1 + 308)
                     * ((-(__int64)((v16 & 0x2000) != 0) & 0xFFFFFFFFFFF00400uLL) + 0x100000) )
            {
              v19 = *(void **)(a1 + 816);
              FileInformation = v18;
              v10 = ZwSetInformationFile(v19, &v26, &FileInformation, 8u, FileEndOfFileInformation);
            }
          }
        }
LABEL_21:
        ExFreePoolWithTag(Buffer, 0);
        return v10;
      }
      v17 = Buffer->HighPart;
      if ( HighPart >= v7 )
        v17 = v7;
      v10 = ZwReadFile(
              *(HANDLE *)(a1 + 816),
              0LL,
              0LL,
              0LL,
              &IoStatusBlock,
              (char *)Buffer + v11.QuadPart,
              v23 & (v17 - v11.LowPart + v22 - 1),
              &ByteOffset,
              0LL);
      if ( v10 < 0 )
        goto LABEL_21;
    }
    if ( v4 && HighPart < v7 && HighPart >= 0x178 )
    {
      Buffer[6].LowPart = HighPart;
      if ( *(_QWORD *)(a1 + 1288) )
        EtwpAddLastDroppedEvent(a1, (__int64)Buffer, v7);
      if ( (_QWORD *)*v2 != v2 || *(_DWORD *)(a1 + 136) )
        EtwpAddDebugInfoEvents(a1, (__int64)Buffer, v7, (__int64 *)&Buffer[11], 3);
      if ( *(_QWORD *)(a1 + 1024) != a1 + 1024 )
        EtwpAddBinaryInfoEvents(a1, Buffer, v7, 2LL);
    }
    goto LABEL_16;
  }
  return result;
}
