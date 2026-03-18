/*
 * XREFs of EditionxxxBroadcastSPIChange @ 0x1C01D7090
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C002F978 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     xxxBroadcastMessageEx @ 0x1C0038FD0 (xxxBroadcastMessageEx.c)
 *     RtlInitLargeUnicodeString @ 0x1C00BC9CC (RtlInitLargeUnicodeString.c)
 */

__int64 __fastcall EditionxxxBroadcastSPIChange(unsigned int a1, __int64 a2)
{
  __int128 v4; // [rsp+40h] [rbp-38h] BYREF
  _DWORD v5[2]; // [rsp+50h] [rbp-28h] BYREF
  __int64 *v6; // [rsp+58h] [rbp-20h]
  __int64 v7; // [rsp+60h] [rbp-18h]
  __int64 v8; // [rsp+90h] [rbp+18h] BYREF

  v7 = 0LL;
  v8 = 0LL;
  v4 = 0LL;
  RtlInitLargeUnicodeString((__int64)&v4, a2);
  UpdateInputSettingWnfState(a1);
  v5[0] = 0;
  v6 = &v8;
  v5[1] = 100;
  return xxxBroadcastMessageEx(0LL, 0x1Au, a1, (struct _LARGE_STRING *)&v4, 6u, (union tagBROADCASTMSG *)v5, 1, 0);
}
