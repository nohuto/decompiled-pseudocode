/*
 * XREFs of EtwpWriteRemainingCompressedData @ 0x180087CBC
 * Callers:
 *     EtwpFinalizeLogFileHeader @ 0x1800556B4 (EtwpFinalizeLogFileHeader.c)
 * Callees:
 *     NtWriteFile @ 0x18009D1B0 (NtWriteFile.c)
 */

__int64 __fastcall EtwpWriteRemainingCompressedData(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  _QWORD *v7; // rbp
  NTSTATUS v8; // edx
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF

  *a2 = 0;
  *a3 = 0;
  if ( !*(_DWORD *)(a1 + 452) )
    return 0LL;
  v7 = (_QWORD *)(a1 + 360);
  v8 = NtWriteFile(
         *(HANDLE *)(a1 + 144),
         0LL,
         0LL,
         0LL,
         &IoStatusBlock,
         *(PVOID *)(a1 + 440),
         *(_DWORD *)(a1 + 208),
         (PLARGE_INTEGER)(a1 + 360),
         0LL);
  if ( v8 < 0 )
  {
    *a3 = *(_DWORD *)(a1 + 456);
  }
  else
  {
    *v7 += *(unsigned int *)(a1 + 452);
    *a2 = *(_DWORD *)(a1 + 456);
  }
  return (unsigned int)v8;
}
