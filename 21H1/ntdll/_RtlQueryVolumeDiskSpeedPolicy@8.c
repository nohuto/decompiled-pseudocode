/*
 * XREFs of _RtlQueryVolumeDiskSpeedPolicy@8 @ 0x4B389AA1
 * Callers:
 *     _RtlpDiskSpeedInitialize@12 @ 0x4B389B30 (_RtlpDiskSpeedInitialize@12.c)
 * Callees:
 *     _ZwDeviceIoControlFile@40 @ 0x4B2F29D0 (_ZwDeviceIoControlFile@40.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

int __fastcall RtlQueryVolumeDiskSpeedPolicy(int a1, _DWORD *a2)
{
  int result; // eax
  _BYTE v4[8]; // [esp+Ch] [ebp-24h] BYREF
  _DWORD v5[2]; // [esp+14h] [ebp-1Ch] BYREF
  int v6; // [esp+1Ch] [ebp-14h]
  _DWORD v7[3]; // [esp+20h] [ebp-10h] BYREF

  v7[0] = 7;
  v5[0] = 0;
  v7[2] = 0;
  v7[1] = 0;
  v5[1] = 0;
  v6 = 0;
  result = ZwDeviceIoControlFile(a1, 0, 0, 0, (int)v4, 2954240, (int)v7, 12, (int)v5, 12);
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
