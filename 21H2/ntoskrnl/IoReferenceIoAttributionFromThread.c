/*
 * XREFs of IoReferenceIoAttributionFromThread @ 0x1402F88E8
 * Callers:
 *     CcAsyncCopyRead @ 0x1402F8440 (CcAsyncCopyRead.c)
 *     MiCheckAndUpdateIoAttribution @ 0x1402F8A18 (MiCheckAndUpdateIoAttribution.c)
 *     CcScheduleReadAheadEx @ 0x1402F8E00 (CcScheduleReadAheadEx.c)
 *     CcCopyReadEx @ 0x140320720 (CcCopyReadEx.c)
 * Callees:
 *     PsGetWorkOnBehalfThread @ 0x1402055CC (PsGetWorkOnBehalfThread.c)
 *     IopReferenceIoAttributionFromProcess @ 0x1402F895C (IopReferenceIoAttributionFromProcess.c)
 *     ObDereferenceObjectDeferDelete @ 0x140343540 (ObDereferenceObjectDeferDelete.c)
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
