/*
 * XREFs of _GetTopLevelWindow @ 0x1C00B7AD8
 * Callers:
 *     EtwTraceInputProcessDelay @ 0x1C00C0400 (EtwTraceInputProcessDelay.c)
 *     EtwTraceMessageCheckDelay @ 0x1C00C0B90 (EtwTraceMessageCheckDelay.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall GetTopLevelWindow(__int64 a1))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax

  result = qword_1C02509A0;
  if ( qword_1C02509A0 )
    return (__int64 (__fastcall *)(_QWORD))qword_1C02509A0(a1);
  return result;
}
