/*
 * XREFs of PsWaitForAllProcesses @ 0x140906778
 * Callers:
 *     PopGracefulShutdown @ 0x1409AD290 (PopGracefulShutdown.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14025A2D0 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     SmIsCompressionProcess @ 0x1402FDDD0 (SmIsCompressionProcess.c)
 *     PsGetNextProcess @ 0x1405EF280 (PsGetNextProcess.c)
 *     PsQuitNextProcessThread @ 0x1406ED7F0 (PsQuitNextProcessThread.c)
 */

char PsWaitForAllProcesses()
{
  unsigned int v0; // ebp
  LARGE_INTEGER v1; // rbx
  _QWORD *i; // rcx
  void *v3; // rcx
  _DWORD *NextProcess; // rax
  _QWORD *v5; // rsi
  NTSTATUS v7; // edi
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp+8h] BYREF

  Timeout.QuadPart = -100000LL;
  v0 = 0;
  v1.QuadPart = -100000LL;
  while ( 1 )
  {
    for ( i = 0LL; ; i = v5 )
    {
      NextProcess = (_DWORD *)PsGetNextProcess(i);
      v5 = NextProcess;
      if ( !NextProcess )
        return 1;
      if ( (NextProcess[543] & 0x1000) == 0
        && NextProcess != PsIdleProcess
        && (NextProcess[281] & 4) != 0
        && !SmIsCompressionProcess(NextProcess)
        && v5[174] )
      {
        break;
      }
    }
    ObfReferenceObjectWithTag(v3, 0x65547350u);
    PsQuitNextProcessThread(v5);
    v7 = KeWaitForSingleObject(v5, Executive, 0, 0, &Timeout);
    ObfDereferenceObjectWithTag(v5, 0x65547350u);
    if ( v7 == 258 )
    {
      v1.QuadPart *= 2LL;
      ++v0;
      Timeout = v1;
      if ( v0 > 0xD )
        break;
    }
  }
  return 0;
}
