/*
 * XREFs of PspWaitForUsermodeExit @ 0x140907F1C
 * Callers:
 *     PspShutdownCsrProcess @ 0x140903280 (PspShutdownCsrProcess.c)
 *     PspWaitOnAllProcessesJobCallback @ 0x140906940 (PspWaitOnAllProcessesJobCallback.c)
 *     PsShutdownSystem @ 0x140907624 (PsShutdownSystem.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     ObfReferenceObjectWithTag @ 0x140296B50 (ObfReferenceObjectWithTag.c)
 *     PsGetNextProcessThread @ 0x1406A0120 (PsGetNextProcessThread.c)
 *     PsQuitNextProcessThread @ 0x140711350 (PsQuitNextProcessThread.c)
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
