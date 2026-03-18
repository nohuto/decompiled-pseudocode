/*
 * XREFs of PopSqmFanEnumeration @ 0x1407B5148
 * Callers:
 *     PopFanAdd @ 0x1407B50E0 (PopFanAdd.c)
 *     PopFanReportBootStartDevices @ 0x140A69970 (PopFanReportBootStartDevices.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402D5DD4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402D5F54 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 */

void PopSqmFanEnumeration()
{
  struct _EVENT_DATA_DESCRIPTOR v0; // [rsp+30h] [rbp-38h] BYREF

  if ( (unsigned int)dword_140C021E8 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140C021E8, 0x400000000000LL) )
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C021E8, (unsigned __int8 *)byte_1400296A5, 0LL, 0LL, 2u, &v0);
  }
}
