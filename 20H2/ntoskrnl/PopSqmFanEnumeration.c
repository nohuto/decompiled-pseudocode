/*
 * XREFs of PopSqmFanEnumeration @ 0x1407C6B48
 * Callers:
 *     PopFanAdd @ 0x1407C6AE0 (PopFanAdd.c)
 *     PopFanReportBootStartDevices @ 0x140A706FC (PopFanReportBootStartDevices.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140244AF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140244C78 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 */

void PopSqmFanEnumeration()
{
  struct _EVENT_DATA_DESCRIPTOR v0; // [rsp+30h] [rbp-38h] BYREF

  if ( (unsigned int)dword_140C021E8 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140C021E8, 0x400000000000LL) )
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C021E8,
        (unsigned __int8 *)&byte_14002990F,
        0LL,
        0LL,
        2u,
        &v0);
  }
}
