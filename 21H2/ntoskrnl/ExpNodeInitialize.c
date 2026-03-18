/*
 * XREFs of ExpNodeInitialize @ 0x140852380
 * Callers:
 *     ExpWorkerInitialization @ 0x140B240EC (ExpWorkerInitialization.c)
 * Callees:
 *     <none>
 */

__int64 (__fastcall *__fastcall ExpNodeInitialize(_QWORD *a1))()
{
  __int64 (__fastcall *result)(); // rax

  result = ExpNodeHotAddProcessorWorker;
  a1[36] = 0LL;
  a1[39] = 0LL;
  a1[37] = ExpNodeHotAddProcessorWorker;
  a1[38] = 0LL;
  a1[35] = 0LL;
  return result;
}
