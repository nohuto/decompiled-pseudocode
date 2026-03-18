/*
 * XREFs of SiIssueSynchronousIoctl @ 0x140976134
 * Callers:
 *     SiValidateSystemPartition @ 0x14031B930 (SiValidateSystemPartition.c)
 *     SiIsWinPeHardDiskZeroUfdBoot @ 0x1407770A4 (SiIsWinPeHardDiskZeroUfdBoot.c)
 *     SiGetEfiSystemDevice @ 0x1409764B8 (SiGetEfiSystemDevice.c)
 * Callees:
 *     ZwDeviceIoControlFile @ 0x1403F8250 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     SiOpenDevice @ 0x1406C65E4 (SiOpenDevice.c)
 */

__int64 __fastcall SiIssueSynchronousIoctl(
        const WCHAR *a1,
        __int64 a2,
        void *a3,
        __int64 a4,
        PVOID OutputBuffer,
        ULONG OutputBufferLength)
{
  NTSTATUS v7; // ebx
  HANDLE FileHandle; // [rsp+50h] [rbp-28h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-20h] BYREF

  FileHandle = 0LL;
  IoStatusBlock = 0LL;
  v7 = SiOpenDevice(a1, &FileHandle);
  if ( v7 >= 0 )
    v7 = ZwDeviceIoControlFile(
           FileHandle,
           0LL,
           0LL,
           0LL,
           &IoStatusBlock,
           0x2D1400u,
           a3,
           0xCu,
           OutputBuffer,
           OutputBufferLength);
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)v7;
}
