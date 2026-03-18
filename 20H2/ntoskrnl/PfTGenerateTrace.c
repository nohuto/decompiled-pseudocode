/*
 * XREFs of PfTGenerateTrace @ 0x14064D7B4
 * Callers:
 *     PfTLoggingWorker @ 0x14079B030 (PfTLoggingWorker.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140264D24 (KiQueryUnbiasedInterruptTime.c)
 *     PfTCreateTraceDump @ 0x14064D800 (PfTCreateTraceDump.c)
 *     PfTTraceListAdd @ 0x14064E5C4 (PfTTraceListAdd.c)
 */

__int64 PfTGenerateTrace()
{
  int v0; // ebx
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  v0 = PfTCreateTraceDump(&v2);
  if ( v0 >= 0 )
  {
    ++dword_140C4FD70;
    qword_140C4FB00 = KiQueryUnbiasedInterruptTime();
    PfTTraceListAdd(v2);
  }
  return (unsigned int)v0;
}
