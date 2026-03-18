/*
 * XREFs of PspProcessRundownWorker @ 0x140907D60
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     PspRundownSingleProcess @ 0x14065C39C (PspRundownSingleProcess.c)
 *     PsGetNextProcess @ 0x140698790 (PsGetNextProcess.c)
 */

__int64 PspProcessRundownWorker()
{
  _QWORD *v0; // rcx
  unsigned __int64 NextProcess; // rax
  void *v2; // rbx
  void *v3; // rbx
  __int64 result; // rax

  do
  {
    v0 = 0LL;
    _InterlockedExchange(&PspRundownNeededCount, 1);
    while ( 1 )
    {
      NextProcess = PsGetNextProcess(v0);
      v2 = (void *)NextProcess;
      if ( !NextProcess )
        break;
      if ( _interlockedbittestandreset((volatile signed __int32 *)(NextProcess + 1120), 8u) )
      {
        PspRundownSingleProcess(NextProcess, 0);
        ObfDereferenceObjectWithTag(v2, 0x77537350u);
      }
      v0 = v2;
    }
    while ( PspRundownProcessCache )
    {
      v3 = (void *)_InterlockedExchange64(&PspRundownProcessCache, 0LL);
      if ( !v3 )
        break;
      PspRundownSingleProcess((__int64)v3, 0);
      ObfDereferenceObjectWithTag(v3, 0x77537350u);
    }
    result = (unsigned int)_InterlockedCompareExchange(&PspRundownNeededCount, 0, 1);
  }
  while ( (_DWORD)result != 1 );
  return result;
}
