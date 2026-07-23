/*
 * XREFs of _RtlpQueryDiskWriteConstraintPolicyByHandle@8 @ 0x4B389E27
 * Callers:
 *     _RtlpQueryDiskWriteConstraintPolicy@8 @ 0x4B389DE4 (_RtlpQueryDiskWriteConstraintPolicy@8.c)
 * Callees:
 *     _ZwDeviceIoControlFile@40 @ 0x4B2F29D0 (_ZwDeviceIoControlFile@40.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

NTSTATUS __fastcall RtlpQueryDiskWriteConstraintPolicyByHandle(HANDLE FileHandle, _DWORD *a2)
{
  NTSTATUS result; // eax
  _IO_STATUS_BLOCK IoStatusBlock; // [esp+Ch] [ebp-1Ch] BYREF
  _DWORD OutputBuffer[4]; // [esp+14h] [ebp-14h] BYREF

  result = ZwDeviceIoControlFile(FileHandle, 0, 0, 0, &IoStatusBlock, 0x22096Cu, 0, 0, OutputBuffer, 0x10u);
  if ( result >= 0 )
  {
    *a2 = OutputBuffer[0] != 1 ? 50 : 100;
    return 0;
  }
  if ( result == -1073741823 || result == -1073741808 || result == -1073741822 )
  {
    *a2 = 100;
    return 0;
  }
  return result;
}
