/*
 * XREFs of IoReferenceIoAttributionFromThread @ 0x1402C83D8
 * Callers:
 *     CcCopyReadEx @ 0x14022EBC0 (CcCopyReadEx.c)
 *     CcAsyncCopyRead @ 0x1402C7F30 (CcAsyncCopyRead.c)
 *     MiCheckAndUpdateIoAttribution @ 0x1402C8508 (MiCheckAndUpdateIoAttribution.c)
 *     CcScheduleReadAheadEx @ 0x1402C8600 (CcScheduleReadAheadEx.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x140286A70 (ObDereferenceObjectDeferDelete.c)
 *     PsGetWorkOnBehalfThread @ 0x140296A80 (PsGetWorkOnBehalfThread.c)
 *     IopReferenceIoAttributionFromProcess @ 0x1402C844C (IopReferenceIoAttributionFromProcess.c)
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
