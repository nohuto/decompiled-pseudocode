/*
 * XREFs of ExpNodeInitialize @ 0x1407BE4C8
 * Callers:
 *     ExpWorkerInitialization @ 0x140A6DA34 (ExpWorkerInitialization.c)
 * Callees:
 *     memset @ 0x140411300 (memset.c)
 */

__int64 (__fastcall *__fastcall ExpNodeInitialize(__int64 a1))()
{
  _QWORD *v1; // rbx
  __int64 (__fastcall *result)(); // rax

  v1 = (_QWORD *)(a1 + 384);
  memset((void *)(a1 + 384), 0, 0x40uLL);
  v1[3] = 0LL;
  result = ExpNodeHotAddProcessorWorker;
  *v1 = 0LL;
  v1[2] = ExpNodeHotAddProcessorWorker;
  return result;
}
