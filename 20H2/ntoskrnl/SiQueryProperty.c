/*
 * XREFs of SiQueryProperty @ 0x1409761D0
 * Callers:
 *     SyspartGetPhysicalPartitions @ 0x140975D84 (SyspartGetPhysicalPartitions.c)
 *     SyspartIsSpace @ 0x140975EF4 (SyspartIsSpace.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ZwDeviceIoControlFile @ 0x1403F8250 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     SiOpenDevice @ 0x1406C65E4 (SiOpenDevice.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SiQueryProperty(const WCHAR *a1, unsigned int a2, unsigned int a3, _QWORD *a4)
{
  NTSTATUS v7; // edi
  ULONG OutputBufferLength; // esi
  _DWORD *OutputBuffer; // rbx
  HANDLE FileHandle; // [rsp+50h] [rbp-58h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-50h] BYREF
  __int64 InputBuffer; // [rsp+68h] [rbp-40h] BYREF
  int v14; // [rsp+70h] [rbp-38h]

  FileHandle = 0LL;
  *a4 = 0LL;
  IoStatusBlock = 0LL;
  InputBuffer = 0LL;
  v14 = 0;
  v7 = SiOpenDevice(a1, &FileHandle);
  if ( v7 >= 0 )
  {
    InputBuffer = a2;
    OutputBufferLength = 8;
    if ( a3 >= 8 )
      OutputBufferLength = a3;
    OutputBuffer = ExAllocatePoolWithTag(PagedPool, OutputBufferLength, 0x4B505953u);
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
               0x2D1400u,
               &InputBuffer,
               0xCu,
               OutputBuffer,
               OutputBufferLength);
        if ( ((v7 + 0x80000000) & 0x80000000) == 0 && v7 != -2147483643 )
          break;
        v7 = 0;
        if ( OutputBuffer[1] <= OutputBufferLength )
        {
          OutputBuffer[1] = OutputBufferLength;
          *a4 = OutputBuffer;
          OutputBuffer = 0LL;
          break;
        }
        OutputBufferLength = OutputBuffer[1];
        ExFreePoolWithTag(OutputBuffer, 0);
        OutputBuffer = ExAllocatePoolWithTag(PagedPool, OutputBufferLength, 0x4B505953u);
        if ( !OutputBuffer )
          goto LABEL_9;
      }
    }
    else
    {
LABEL_9:
      v7 = -1073741670;
    }
    if ( OutputBuffer )
      ExFreePoolWithTag(OutputBuffer, 0);
  }
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)v7;
}
