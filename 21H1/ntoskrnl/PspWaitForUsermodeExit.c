/*
 * XREFs of PspWaitForUsermodeExit @ 0x140906C6C
 * Callers:
 *     PspShutdownCsrProcess @ 0x140902470 (PspShutdownCsrProcess.c)
 *     PspWaitOnAllProcessesJobCallback @ 0x140905660 (PspWaitOnAllProcessesJobCallback.c)
 *     PsShutdownSystem @ 0x140906374 (PsShutdownSystem.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14025A2D0 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     PsGetNextProcessThread @ 0x14069A050 (PsGetNextProcessThread.c)
 *     PsQuitNextProcessThread @ 0x1406ED7F0 (PsQuitNextProcessThread.c)
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
