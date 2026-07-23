/*
 * XREFs of PfTGenerateTrace @ 0x14067B2EC
 * Callers:
 *     PfTLoggingWorker @ 0x1407AD160 (PfTLoggingWorker.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140275C64 (KiQueryUnbiasedInterruptTime.c)
 *     PfTCreateTraceDump @ 0x14067B340 (PfTCreateTraceDump.c)
 *     PfTTraceListAdd @ 0x14067C39C (PfTTraceListAdd.c)
 */

__int64 PfTGenerateTrace()
{
  int v0; // ebx
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  v0 = PfTCreateTraceDump(&v2);
  if ( v0 >= 0 )
  {
    ++dword_140C4FF30;
    qword_140C4FCC0 = KiQueryUnbiasedInterruptTime();
    PfTTraceListAdd(v2);
  }
  return (unsigned int)v0;
}
