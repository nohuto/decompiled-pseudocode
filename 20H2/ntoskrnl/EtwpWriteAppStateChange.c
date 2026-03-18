/*
 * XREFs of EtwpWriteAppStateChange @ 0x14062F440
 * Callers:
 *     EtwTraceProcess @ 0x140632174 (EtwTraceProcess.c)
 *     EtwTraceAppStateChange @ 0x14064FBB0 (EtwTraceAppStateChange.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140244AF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140244C78 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 */

void EtwpWriteAppStateChange()
{
  __int64 v0; // r9
  struct _EVENT_DATA_DESCRIPTOR v1; // [rsp+30h] [rbp-48h] BYREF
  __int64 v2; // [rsp+50h] [rbp-28h]
  int v3; // [rsp+58h] [rbp-20h]
  int v4; // [rsp+5Ch] [rbp-1Ch]

  if ( (unsigned int)dword_140C02BB0 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140C02BB0, 0x200000000001LL) )
    {
      v4 = 0;
      v2 = v0;
      v3 = 98;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C02BB0, (unsigned __int8 *)byte_14002BA7F, 0LL, 0LL, 3u, &v1);
    }
  }
}
