/*
 * XREFs of RtlpHpTlLogGCTimerFinished @ 0x18010B2A4
 * Callers:
 *     RtlpHpGCCallback @ 0x180074160 (RtlpHpGCCallback.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18008A7EC (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpHpTlLogGCTimerFinished(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  _BYTE v5[32]; // [rsp+30h] [rbp-38h] BYREF

  if ( (unsigned int)dword_1801645C8 > 5 )
    return tlgWriteTransfer_EtwEventWriteTransfer((__int64)&dword_1801645C8, byte_18013057A, a3, a4, 2, (__int64)v5);
  return result;
}
