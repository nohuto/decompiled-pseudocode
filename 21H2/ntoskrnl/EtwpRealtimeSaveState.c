/*
 * XREFs of EtwpRealtimeSaveState @ 0x140622014
 * Callers:
 *     EtwpLogger @ 0x14063A500 (EtwpLogger.c)
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x140253DF8 (EtwpQueryUsedProcessorCount.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwWriteFile @ 0x1403FA680 (ZwWriteFile.c)
 *     ZwSetInformationFile @ 0x1403FAA60 (ZwSetInformationFile.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall EtwpRealtimeSaveState(__int64 a1)
{
  NTSTATUS v2; // edi
  void *v3; // rcx
  int v5; // ecx
  __int128 v6; // xmm0
  __int64 v7; // rax
  int UsedProcessorCount; // eax
  void *v9; // rcx
  char FileInformation[8]; // [rsp+50h] [rbp-29h] BYREF
  LARGE_INTEGER ByteOffset; // [rsp+58h] [rbp-21h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-19h] BYREF
  _OWORD Buffer[5]; // [rsp+70h] [rbp-9h] BYREF

  v2 = -1073741823;
  IoStatusBlock = 0LL;
  memset(Buffer, 0, 0x48uLL);
  ByteOffset.QuadPart = 0LL;
  if ( (*(_DWORD *)(a1 + 832) & 1) == 0 )
    goto LABEL_2;
  if ( !*(_QWORD *)(a1 + 376) )
    goto LABEL_7;
  v5 = *(_DWORD *)(a1 + 440);
  if ( !v5 )
    goto LABEL_7;
  v6 = *(_OWORD *)(a1 + 448);
  *((_QWORD *)&Buffer[2] + 1) = *(_QWORD *)(a1 + 408);
  *(_QWORD *)&Buffer[3] = *(_QWORD *)(a1 + 400);
  DWORD1(Buffer[2]) = *(_DWORD *)(a1 + 4);
  *((_QWORD *)&Buffer[3] + 1) = *(_QWORD *)(a1 + 416);
  v7 = *(_QWORD *)(a1 + 424);
  LODWORD(Buffer[2]) = v5;
  *(_QWORD *)&Buffer[4] = v7;
  Buffer[1] = v6;
  LODWORD(Buffer[0]) = 1933995090;
  DWORD2(Buffer[0]) = 1;
  UsedProcessorCount = EtwpQueryUsedProcessorCount(a1);
  v9 = *(void **)(a1 + 376);
  DWORD1(Buffer[0]) = 0;
  HIDWORD(Buffer[0]) = UsedProcessorCount;
  v2 = ZwWriteFile(v9, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, 0x48u, &ByteOffset, 0LL);
  if ( v2 < 0 )
  {
LABEL_7:
    *(_DWORD *)(a1 + 276) += *(_DWORD *)(a1 + 440);
    *(_DWORD *)(a1 + 440) = 0;
    *(_QWORD *)(a1 + 424) = 0LL;
LABEL_2:
    v3 = *(void **)(a1 + 376);
    FileInformation[0] = 1;
    ZwSetInformationFile(v3, &IoStatusBlock, FileInformation, 1u, FileDispositionInformation);
  }
  return (unsigned int)v2;
}
