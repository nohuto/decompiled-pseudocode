/*
 * XREFs of RtlpHpTlLogGCScheduled @ 0x18010B758
 * Callers:
 *     RtlpHpScheduleCompaction @ 0x180022DF8 (RtlpHpScheduleCompaction.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x1800281F0 (RtlpHpSegPageRangeCoalesce.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18008A8EC (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 */

ULONG __fastcall RtlpHpTlLogGCScheduled(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG result; // eax
  _EVENT_DATA_DESCRIPTOR v5; // [rsp+30h] [rbp-38h] BYREF

  if ( (unsigned int)dword_180166698 > 5 )
    return tlgWriteTransfer_EtwEventWriteTransfer(
             (__int64)&dword_180166698,
             (unsigned __int8 *)dword_180131F45,
             a3,
             a4,
             2u,
             &v5);
  return result;
}
