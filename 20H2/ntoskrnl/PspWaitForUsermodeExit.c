/*
 * XREFs of PspWaitForUsermodeExit @ 0x14090DB3C
 * Callers:
 *     PspShutdownCsrProcess @ 0x140908EA0 (PspShutdownCsrProcess.c)
 *     PspWaitOnAllProcessesJobCallback @ 0x14090C560 (PspWaitOnAllProcessesJobCallback.c)
 *     PsShutdownSystem @ 0x14090D244 (PsShutdownSystem.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402089E0 (ObfReferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     PsGetNextProcessThread @ 0x14069A900 (PsGetNextProcessThread.c)
 *     PsQuitNextProcessThread @ 0x1406E3CC0 (PsQuitNextProcessThread.c)
 */

__int64 __fastcall PspWaitForUsermodeExit(__int64 a1)
{
  _QWORD *i; // rdx
  _QWORD *NextProcessThread; // rax
  void *v4; // rbx

LABEL_1:
  for ( i = 0LL; ; i = NextProcessThread )
  {
    NextProcessThread = PsGetNextProcessThread(a1, i);
    v4 = NextProcessThread;
    if ( !NextProcessThread )
      break;
    if ( (*((_DWORD *)NextProcessThread + 29) & 0x400) == 0 && !*((_BYTE *)NextProcessThread + 4) )
    {
      ObfReferenceObjectWithTag(NextProcessThread, 0x65547350u);
      PsQuitNextProcessThread(v4);
      KeWaitForSingleObject(v4, Executive, 0, 0, 0LL);
      ObfDereferenceObjectWithTag(v4, 0x65547350u);
      goto LABEL_1;
    }
  }
  return 0LL;
}
