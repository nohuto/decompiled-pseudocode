/*
 * XREFs of ?SetInputRateLimitingTime@CMouseSensor@@QEAAJK@Z @ 0x1C0007CBC
 * Callers:
 *     ?PostInitialize@CMouseSensor@@EEAAJXZ @ 0x1C0005760 (-PostInitialize@CMouseSensor@@EEAAJXZ.c)
 *     SetMouseInputRateLimitingTime @ 0x1C01A9C60 (SetMouseInputRateLimitingTime.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
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
  if ( (unsigned int)dword_1C0244A70 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 64LL, v4, a4) )
  {
    v11 = 0;
    v9 = &v7;
    v7 = v6;
    v10 = 8;
    tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0244A70, (int)&dword_1C0218E94, 0, 0, 3u, &v8);
  }
  return 0LL;
}
