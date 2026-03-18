/*
 * XREFs of PfTGenerateTrace @ 0x14069EA3C
 * Callers:
 *     PfTLoggingWorker @ 0x14078CA20 (PfTLoggingWorker.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x14023F4A4 (KiQueryUnbiasedInterruptTime.c)
 *     PfTTraceListAdd @ 0x1406630A4 (PfTTraceListAdd.c)
 *     PfTCreateTraceDump @ 0x14069EA90 (PfTCreateTraceDump.c)
 */

__int64 PfTGenerateTrace()
{
  int v0; // ebx
  unsigned int *v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  v0 = PfTCreateTraceDump(&v2);
  if ( v0 >= 0 )
  {
    ++dword_140C4FE30;
    qword_140C4FBC0 = KiQueryUnbiasedInterruptTime();
    PfTTraceListAdd(v2);
  }
  return (unsigned int)v0;
}
