/*
 * XREFs of EtwpWriteAppStateChange @ 0x1406F462C
 * Callers:
 *     EtwTraceAppStateChange @ 0x1406A3FC0 (EtwTraceAppStateChange.c)
 *     EtwTraceProcess @ 0x1406F2A40 (EtwTraceProcess.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14027E1A4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

void EtwpWriteAppStateChange()
{
  __int64 v0; // r9
  struct _EVENT_DATA_DESCRIPTOR v1; // [rsp+30h] [rbp-48h] BYREF
  __int64 v2; // [rsp+50h] [rbp-28h]
  int v3; // [rsp+58h] [rbp-20h]
  int v4; // [rsp+5Ch] [rbp-1Ch]

  if ( (unsigned int)dword_140C02BB8 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140C02BB8, 0x200000000001LL) )
    {
      v4 = 0;
      v2 = v0;
      v3 = 98;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C02BB8, (unsigned __int8 *)byte_14002C98D, 0LL, 0LL, 3u, &v1);
    }
  }
}
