/*
 * XREFs of PowerIsDimTimeOutManual @ 0x1C008B030
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1C0294600 (Win32kBaseDriverEntry.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?GetConfigUlong@@YAHPEBG0PEAK@Z @ 0x1C008B084 (-GetConfigUlong@@YAHPEBG0PEAK@Z.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 */

char __fastcall PowerIsDimTimeOutManual(const unsigned __int16 *a1)
{
  char v1; // bl
  unsigned int v3; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+38h] [rbp-30h] BYREF

  v3 = 0;
  if ( !GetConfigUlong(a1, L"ManualDimTimeout", &v3) || !v3 )
    return 0;
  v1 = 1;
  if ( (unsigned int)dword_1C023F378 > 5 && tlgKeywordOn((__int64)&dword_1C023F378, 0x400000000000LL) )
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C023F378, (unsigned __int8 *)dword_1C021212F, 0LL, 0LL, 2u, &v4);
  return v1;
}
