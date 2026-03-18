/*
 * XREFs of ?SetInputRateLimitingTime@CMouseSensor@@QEAAJK@Z @ 0x1C0038D1C
 * Callers:
 *     ?PostInitialize@CMouseSensor@@EEAAJXZ @ 0x1C0036760 (-PostInitialize@CMouseSensor@@EEAAJXZ.c)
 *     SetMouseInputRateLimitingTime @ 0x1C01B1D40 (SetMouseInputRateLimitingTime.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 */

__int64 __fastcall CMouseSensor::SetInputRateLimitingTime(CMouseSensor *this, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r8
  __int64 v6; // r8
  __int64 v7; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+60h] [rbp-18h]
  int v11; // [rsp+64h] [rbp-14h]

  v4 = gliQpcFreq.QuadPart * (unsigned __int64)(a2 / 0x3E8) / 0x3E8;
  _InterlockedExchange64((volatile __int64 *)this + 160, v4);
  if ( (unsigned int)dword_1C024C960 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 64LL, v4, a4) )
  {
    v11 = 0;
    v9 = &v7;
    v7 = v6;
    v10 = 8;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C024C960, (unsigned __int8 *)dword_1C0220873, 0LL, 0LL, 3u, &v8);
  }
  return 0LL;
}
