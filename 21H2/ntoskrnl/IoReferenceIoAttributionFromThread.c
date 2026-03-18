/*
 * XREFs of IoReferenceIoAttributionFromThread @ 0x1402F5EA0
 * Callers:
 *     MiCheckAndUpdateIoAttribution @ 0x140243EC4 (MiCheckAndUpdateIoAttribution.c)
 *     CcScheduleReadAheadNuma @ 0x14029CC2C (CcScheduleReadAheadNuma.c)
 *     CcAsyncCopyRead @ 0x1402F5790 (CcAsyncCopyRead.c)
 *     CcCopyReadEx @ 0x14032A8C0 (CcCopyReadEx.c)
 * Callees:
 *     IopReferenceIoAttributionFromProcess @ 0x1402F5F14 (IopReferenceIoAttributionFromProcess.c)
 *     PsGetWorkOnBehalfThread @ 0x1402F6220 (PsGetWorkOnBehalfThread.c)
 *     ObDereferenceObjectDeferDelete @ 0x140348920 (ObDereferenceObjectDeferDelete.c)
 */

__int64 __fastcall IoReferenceIoAttributionFromThread(__int64 a1, __int64 a2)
{
  __int64 WorkOnBehalfThread; // rax
  void *v5; // rbx
  __int64 v6; // rcx
  unsigned int v7; // edi
  int v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0;
  WorkOnBehalfThread = PsGetWorkOnBehalfThread(a1, &v9);
  v5 = (void *)WorkOnBehalfThread;
  if ( WorkOnBehalfThread )
    v6 = *(_QWORD *)(WorkOnBehalfThread + 544);
  else
    v6 = *(_QWORD *)(a1 + 544);
  v7 = IopReferenceIoAttributionFromProcess(v6, 0LL, a2);
  if ( v9 )
    ObDereferenceObjectDeferDelete(v5);
  return v7;
}
