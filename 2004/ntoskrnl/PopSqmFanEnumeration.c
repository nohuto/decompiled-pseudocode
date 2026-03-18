/*
 * XREFs of PopSqmFanEnumeration @ 0x1407B82B8
 * Callers:
 *     PopFanAdd @ 0x1407B8250 (PopFanAdd.c)
 *     PopFanReportBootStartDevices @ 0x140A69DF0 (PopFanReportBootStartDevices.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14026C434 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14026C5B4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 */

void PopSqmFanEnumeration()
{
  struct _EVENT_DATA_DESCRIPTOR v0; // [rsp+30h] [rbp-38h] BYREF

  if ( (unsigned int)dword_140C021E8 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140C021E8, 0x400000000000LL) )
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C021E8, (unsigned __int8 *)byte_1400297FD, 0LL, 0LL, 2u, &v0);
  }
}
