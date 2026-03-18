/*
 * XREFs of IoReferenceIoAttributionFromThread @ 0x1402491C8
 * Callers:
 *     CcScheduleReadAheadEx @ 0x140248720 (CcScheduleReadAheadEx.c)
 *     MiCheckAndUpdateIoAttribution @ 0x140248C30 (MiCheckAndUpdateIoAttribution.c)
 *     CcAsyncCopyRead @ 0x140248D20 (CcAsyncCopyRead.c)
 *     CcCopyReadEx @ 0x1402A3E70 (CcCopyReadEx.c)
 * Callees:
 *     PsGetWorkOnBehalfThread @ 0x14020890C (PsGetWorkOnBehalfThread.c)
 *     ObDereferenceObjectDeferDelete @ 0x140219220 (ObDereferenceObjectDeferDelete.c)
 *     IopReferenceIoAttributionFromProcess @ 0x14024923C (IopReferenceIoAttributionFromProcess.c)
 */

__int64 __fastcall IoReferenceIoAttributionFromThread(struct _KTHREAD *a1, __int64 a2)
{
  _KPROCESS **WorkOnBehalfThread; // rax
  _KPROCESS **v5; // rbx
  _KPROCESS *Process; // rcx
  unsigned int v7; // edi
  int v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0;
  WorkOnBehalfThread = (_KPROCESS **)PsGetWorkOnBehalfThread(a1, &v9);
  v5 = WorkOnBehalfThread;
  if ( WorkOnBehalfThread )
    Process = WorkOnBehalfThread[68];
  else
    Process = a1->Process;
  v7 = IopReferenceIoAttributionFromProcess(Process, 0LL, a2);
  if ( v9 )
    ObDereferenceObjectDeferDelete(v5);
  return v7;
}
