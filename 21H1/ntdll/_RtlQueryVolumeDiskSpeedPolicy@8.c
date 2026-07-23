/*
 * XREFs of _RtlQueryVolumeDiskSpeedPolicy@8 @ 0x4B389AA1
 * Callers:
 *     _RtlpDiskSpeedInitialize@12 @ 0x4B389B30 (_RtlpDiskSpeedInitialize@12.c)
 * Callees:
 *     _ZwDeviceIoControlFile@40 @ 0x4B2F29D0 (_ZwDeviceIoControlFile@40.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

NTSTATUS __fastcall RtlQueryVolumeDiskSpeedPolicy(HANDLE FileHandle, _DWORD *a2)
{
  NTSTATUS result; // eax
  _IO_STATUS_BLOCK IoStatusBlock; // [esp+Ch] [ebp-24h] BYREF
  _DWORD OutputBuffer[2]; // [esp+14h] [ebp-1Ch] BYREF
  int v6; // [esp+1Ch] [ebp-14h]
  _DWORD InputBuffer[3]; // [esp+20h] [ebp-10h] BYREF

  InputBuffer[0] = 7;
  OutputBuffer[0] = 0;
  InputBuffer[2] = 0;
  InputBuffer[1] = 0;
  OutputBuffer[1] = 0;
  v6 = 0;
  result = ZwDeviceIoControlFile(FileHandle, 0, 0, 0, &IoStatusBlock, 0x2D1400u, InputBuffer, 0xCu, OutputBuffer, 0xCu);
  if ( result >= 0 )
  {
    *a2 = (_BYTE)v6 != 0 ? 10 : 20;
    return 0;
  }
  if ( result == -1073741823 || result == -1073741808 )
  {
    *a2 = 10;
    return 0;
  }
  return result;
}
