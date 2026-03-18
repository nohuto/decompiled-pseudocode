/*
 * XREFs of PsWaitForAllProcesses @ 0x14090D648
 * Callers:
 *     PopGracefulShutdown @ 0x1409B4060 (PopGracefulShutdown.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402089E0 (ObfReferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     SmIsCompressionProcess @ 0x14030D9E8 (SmIsCompressionProcess.c)
 *     PsGetNextProcess @ 0x140659AB0 (PsGetNextProcess.c)
 *     PsQuitNextProcessThread @ 0x1406E3CC0 (PsQuitNextProcessThread.c)
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
