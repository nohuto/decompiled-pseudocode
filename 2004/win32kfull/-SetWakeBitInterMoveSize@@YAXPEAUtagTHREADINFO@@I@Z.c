/*
 * XREFs of ?SetWakeBitInterMoveSize@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01D33B0
 * Callers:
 *     IncPaintCountInterMoveSize @ 0x1C023F300 (IncPaintCountInterMoveSize.c)
 * Callees:
 *     <none>
 */

void __fastcall SetWakeBitInterMoveSize(struct tagTHREADINFO *a1)
{
  *(_WORD *)(*((_QWORD *)a1 + 55) + 6LL) |= 0x20u;
  *(_WORD *)(*((_QWORD *)a1 + 55) + 4LL) |= 0x20u;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 55) + 10LL) & 0x20) != 0 )
    KeSetEvent(*((PRKEVENT *)a1 + 91), 6, 0);
}
