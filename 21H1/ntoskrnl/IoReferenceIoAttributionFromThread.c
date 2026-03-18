/*
 * XREFs of IoReferenceIoAttributionFromThread @ 0x1402355A8
 * Callers:
 *     CcAsyncCopyRead @ 0x140235100 (CcAsyncCopyRead.c)
 *     MiCheckAndUpdateIoAttribution @ 0x1402356D8 (MiCheckAndUpdateIoAttribution.c)
 *     CcScheduleReadAheadEx @ 0x1402357D0 (CcScheduleReadAheadEx.c)
 *     CcCopyReadEx @ 0x140287C10 (CcCopyReadEx.c)
 * Callees:
 *     IopReferenceIoAttributionFromProcess @ 0x14023561C (IopReferenceIoAttributionFromProcess.c)
 *     ObDereferenceObjectDeferDelete @ 0x14024A1D0 (ObDereferenceObjectDeferDelete.c)
 *     PsGetWorkOnBehalfThread @ 0x14025A200 (PsGetWorkOnBehalfThread.c)
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
