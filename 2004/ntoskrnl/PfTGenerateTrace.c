/*
 * XREFs of PfTGenerateTrace @ 0x1406CC28C
 * Callers:
 *     PfTLoggingWorker @ 0x14078E8F0 (PfTLoggingWorker.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x1402D233C (KiQueryUnbiasedInterruptTime.c)
 *     PfTTraceListAdd @ 0x14061D984 (PfTTraceListAdd.c)
 *     PfTCreateTraceDump @ 0x1406CC2E0 (PfTCreateTraceDump.c)
 */

__int64 PfTGenerateTrace()
{
  int v0; // ebx
  unsigned int *v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  v0 = PfTCreateTraceDump(&v2);
  if ( v0 >= 0 )
  {
    ++dword_140C4FCF0;
    qword_140C4FA80 = KiQueryUnbiasedInterruptTime();
    PfTTraceListAdd(v2);
  }
  return (unsigned int)v0;
}
