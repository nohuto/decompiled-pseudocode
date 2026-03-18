/*
 * XREFs of _GetTopLevelWindow @ 0x1C00580D0
 * Callers:
 *     EtwTraceInputProcessDelay @ 0x1C00778E0 (EtwTraceInputProcessDelay.c)
 *     EtwTraceMessageCheckDelay @ 0x1C0078070 (EtwTraceMessageCheckDelay.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall GetTopLevelWindow(__int64 a1))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax

  result = qword_1C02529A0;
  if ( qword_1C02529A0 )
    return (__int64 (__fastcall *)(_QWORD))qword_1C02529A0(a1);
  return result;
}
