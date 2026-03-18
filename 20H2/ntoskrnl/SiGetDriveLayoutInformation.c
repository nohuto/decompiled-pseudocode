/*
 * XREFs of SiGetDriveLayoutInformation @ 0x140776D54
 * Callers:
 *     SiGetBiosSystemPartition @ 0x140776C1C (SiGetBiosSystemPartition.c)
 *     SiFindSystemPartition @ 0x140975F50 (SiFindSystemPartition.c)
 *     SiGetEfiSystemDevice @ 0x1409764B8 (SiGetEfiSystemDevice.c)
 * Callees:
 *     ZwDeviceIoControlFile @ 0x1403F8250 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     SiOpenDevice @ 0x1406C65E4 (SiOpenDevice.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SiGetDriveLayoutInformation(const WCHAR *a1, _QWORD *a2)
{
  NTSTATUS v3; // ebx
  ULONG OutputBufferLength; // esi
  PVOID OutputBuffer; // rax
  void *v6; // rdi
  NTSTATUS v7; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF
  HANDLE FileHandle; // [rsp+80h] [rbp+18h] BYREF

  FileHandle = 0LL;
  IoStatusBlock = 0LL;
  v3 = SiOpenDevice(a1, &FileHandle);
  if ( v3 >= 0 )
  {
    OutputBufferLength = 18480;
    OutputBuffer = ExAllocatePoolWithTag(PagedPool, 0x4830uLL, 0x4B505953u);
    v6 = OutputBuffer;
    if ( OutputBuffer )
    {
      while ( 1 )
      {
        v7 = ZwDeviceIoControlFile(
               FileHandle,
               0LL,
               0LL,
               0LL,
               &IoStatusBlock,
               0x70050u,
               0LL,
               0,
               OutputBuffer,
               OutputBufferLength);
        v3 = v7;
        if ( v7 != -1073741789 )
          break;
        ExFreePoolWithTag(v6, 0);
        OutputBufferLength += 9216;
        OutputBuffer = ExAllocatePoolWithTag(PagedPool, OutputBufferLength, 0x4B505953u);
        v6 = OutputBuffer;
        if ( !OutputBuffer )
        {
          v3 = -1073741670;
          goto LABEL_6;
        }
      }
      if ( v7 < 0 )
        goto LABEL_13;
      *a2 = v6;
LABEL_6:
      if ( v3 >= 0 )
        goto LABEL_7;
LABEL_13:
      if ( v6 )
        ExFreePoolWithTag(v6, 0);
    }
    else
    {
      v3 = -1073741670;
    }
  }
LABEL_7:
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)v3;
}
