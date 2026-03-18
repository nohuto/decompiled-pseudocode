/*
 * XREFs of EtwpWriteAppStateChange @ 0x1406E4374
 * Callers:
 *     EtwTraceProcess @ 0x1405D83E4 (EtwTraceProcess.c)
 *     EtwTraceAppStateChange @ 0x140664690 (EtwTraceAppStateChange.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402D5DD4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402D5F54 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 */

void EtwpWriteAppStateChange()
{
  __int64 v0; // r9
  struct _EVENT_DATA_DESCRIPTOR v1; // [rsp+30h] [rbp-48h] BYREF
  __int64 v2; // [rsp+50h] [rbp-28h]
  int v3; // [rsp+58h] [rbp-20h]
  int v4; // [rsp+5Ch] [rbp-1Ch]

  if ( (unsigned int)dword_140C02B78 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140C02B78, 0x200000000001LL) )
    {
      v4 = 0;
      v2 = v0;
      v3 = 98;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C02B78, (unsigned __int8 *)byte_14002BD99, 0LL, 0LL, 3u, &v1);
    }
  }
}
