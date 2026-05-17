/*
 * XREFs of _RtlpQueryDiskWriteConstraintPolicyByHandle@8 @ 0x4B389E27
 * Callers:
 *     _RtlpQueryDiskWriteConstraintPolicy@8 @ 0x4B389DE4 (_RtlpQueryDiskWriteConstraintPolicy@8.c)
 * Callees:
 *     _ZwDeviceIoControlFile@40 @ 0x4B2F29D0 (_ZwDeviceIoControlFile@40.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

int __fastcall RtlpQueryDiskWriteConstraintPolicyByHandle(int a1, _DWORD *a2)
{
  int result; // eax
  _BYTE v4[8]; // [esp+Ch] [ebp-1Ch] BYREF
  _DWORD v5[4]; // [esp+14h] [ebp-14h] BYREF

  result = ZwDeviceIoControlFile(a1, 0, 0, 0, (int)v4, 2230636, 0, 0, (int)v5, 16);
  if ( result >= 0 )
  {
    *a2 = v5[0] != 1 ? 50 : 100;
    return 0;
  }
  if ( result == -1073741823 || result == -1073741808 || result == -1073741822 )
  {
    *a2 = 100;
    return 0;
  }
  return result;
}
