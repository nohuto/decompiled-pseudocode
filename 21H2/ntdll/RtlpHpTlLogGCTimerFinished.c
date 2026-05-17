/*
 * XREFs of RtlpHpTlLogGCTimerFinished @ 0x18010B654
 * Callers:
 *     RtlpHpGCCallback @ 0x180075290 (RtlpHpGCCallback.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18008AEEC (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpHpTlLogGCTimerFinished(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  _BYTE v5[32]; // [rsp+30h] [rbp-38h] BYREF

  if ( (unsigned int)dword_180166698 > 5 )
    return tlgWriteTransfer_EtwEventWriteTransfer((__int64)&dword_180166698, byte_1801320F0, a3, a4, 2, (__int64)v5);
  return result;
}
