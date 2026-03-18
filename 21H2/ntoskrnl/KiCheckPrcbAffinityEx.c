/*
 * XREFs of KiCheckPrcbAffinityEx @ 0x140291EB8
 * Callers:
 *     KiSetAffinityThread @ 0x14020EC24 (KiSetAffinityThread.c)
 *     KiGroupSchedulingMoveThread @ 0x140210580 (KiGroupSchedulingMoveThread.c)
 *     KiDeferGroupSchedulingPreemption @ 0x140291C10 (KiDeferGroupSchedulingPreemption.c)
 *     KiQueueReadyThread @ 0x1402B9970 (KiQueueReadyThread.c)
 *     KiDeferredReadySingleThread @ 0x1403405E0 (KiDeferredReadySingleThread.c)
 *     KiSetSystemAffinityThread @ 0x14035C1C0 (KiSetSystemAffinityThread.c)
 *     KiSetIdealProcessorThread @ 0x14035D00C (KiSetIdealProcessorThread.c)
 * Callees:
 *     <none>
 */

char __fastcall KiCheckPrcbAffinityEx(_WORD *a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = *(unsigned __int8 *)(a2 + 208);
  if ( (unsigned __int16)v2 >= *a1 )
    return 0;
  else
    return (*(_QWORD *)&a1[4 * v2 + 4] >> *(_BYTE *)(a2 + 209)) & 1;
}
