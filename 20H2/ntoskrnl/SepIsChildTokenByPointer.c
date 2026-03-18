/*
 * XREFs of SepIsChildTokenByPointer @ 0x1406D0E50
 * Callers:
 *     SeIsTokenAssignableToProcess @ 0x1406D0B80 (SeIsTokenAssignableToProcess.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140210E40 (ObFastDereferenceObject.c)
 *     PsReferencePrimaryToken @ 0x14067EEB0 (PsReferencePrimaryToken.c)
 */

__int64 __fastcall SepIsChildTokenByPointer(__int64 a1, _BYTE *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KPROCESS *Process; // rsi
  struct _DMA_ADAPTER *v6; // rax
  __int64 v7; // rbx

  CurrentThread = KeGetCurrentThread();
  *a2 = 0;
  Process = CurrentThread->ApcState.Process;
  v6 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken(Process);
  if ( !v6 )
    return 3221225473LL;
  v7 = *(_QWORD *)&v6[1].Version;
  ObFastDereferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5], v6);
  if ( *(_QWORD *)(a1 + 32) == v7 )
    *a2 = 1;
  return 0LL;
}
