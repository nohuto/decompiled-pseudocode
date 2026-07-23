/*
 * XREFs of IopLiveDumpWriteBuffer @ 0x140898C1C
 * Callers:
 *     IopLiveDumpWriteDumpFile @ 0x140898CE0 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpWriteDumpFileWithExtraPages @ 0x140899000 (IopLiveDumpWriteDumpFileWithExtraPages.c)
 *     IopLiveDumpWriteSecondaryData @ 0x1408998A8 (IopLiveDumpWriteSecondaryData.c)
 * Callees:
 *     ZwWriteFile @ 0x1403FA680 (ZwWriteFile.c)
 *     SecureDump_Encrypt_DmpData @ 0x14050A980 (SecureDump_Encrypt_DmpData.c)
 */

__int64 __fastcall IopLiveDumpWriteBuffer(
        HANDLE FileHandle,
        PVOID Buffer,
        ULONG Length,
        PLARGE_INTEGER ByteOffset,
        __int64 a5,
        char a6)
{
  __int64 v7; // rdi
  bool v10; // zf
  __int64 result; // rax
  NTSTATUS Status; // ecx
  unsigned __int64 v13; // [rsp+50h] [rbp-28h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-20h] BYREF

  v13 = 0LL;
  v7 = Length;
  v10 = *(_BYTE *)(a5 + 880) == 0;
  IoStatusBlock = 0LL;
  if ( v10
    || a6
    || (result = SecureDump_Encrypt_DmpData((__int64)Buffer, Length, (__int64)Buffer, Length, &v13), (int)result >= 0) )
  {
    Status = ZwWriteFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, v7, ByteOffset, 0LL);
    if ( Status >= 0 )
    {
      Status = IoStatusBlock.Status;
      if ( IoStatusBlock.Status >= 0 )
        ByteOffset->QuadPart += v7;
    }
    return (unsigned int)Status;
  }
  return result;
}
