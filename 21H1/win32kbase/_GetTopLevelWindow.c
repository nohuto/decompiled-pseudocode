/*
 * XREFs of _GetTopLevelWindow @ 0x1C004A3C0
 * Callers:
 *     EtwTraceInputProcessDelay @ 0x1C006E610 (EtwTraceInputProcessDelay.c)
 *     EtwTraceMessageCheckDelay @ 0x1C00C14A0 (EtwTraceMessageCheckDelay.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 (*GetTopLevelWindow())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0258960;
  if ( qword_1C0258960 )
    return (__int64 (*)(void))qword_1C0258960();
  return result;
}
