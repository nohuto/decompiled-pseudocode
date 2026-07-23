/*
 * XREFs of RtlpHpTlLogGCTimerFinished @ 0x18010B2A4
 * Callers:
 *     RtlpHpGCCallback @ 0x180074160 (RtlpHpGCCallback.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18008A7EC (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 */

ULONG __fastcall RtlpHpTlLogGCTimerFinished(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG result; // eax
  _EVENT_DATA_DESCRIPTOR v5; // [rsp+30h] [rbp-38h] BYREF

  if ( (unsigned int)dword_1801645C8 > 5 )
    return tlgWriteTransfer_EtwEventWriteTransfer(
             (__int64)&dword_1801645C8,
             (unsigned __int8 *)dword_18013057A,
             a3,
             a4,
             2u,
             &v5);
  return result;
}
