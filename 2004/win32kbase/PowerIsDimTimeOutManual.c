/*
 * XREFs of PowerIsDimTimeOutManual @ 0x1C002BD6C
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1C02960C0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     ?GetConfigUlong@@YAHPEBG0PEAK@Z @ 0x1C002BDC0 (-GetConfigUlong@@YAHPEBG0PEAK@Z.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 */

char __fastcall PowerIsDimTimeOutManual(const unsigned __int16 *a1)
{
  __int64 v1; // r8
  __int64 v2; // r9
  char v3; // bl
  unsigned int v5; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+38h] [rbp-30h] BYREF

  v5 = 0;
  if ( !GetConfigUlong(a1, L"ManualDimTimeout", &v5) || !v5 )
    return 0;
  v3 = 1;
  if ( (unsigned int)dword_1C0241378 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C0241378, 0x400000000000LL, v1, v2) )
    tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0241378, (int)&dword_1C021412F, 0, 0, 2u, &v6);
  return v3;
}
