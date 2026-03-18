/*
 * XREFs of IncPaintCountInterMoveSize @ 0x1C023F300
 * Callers:
 *     InternalInvalidate3 @ 0x1C0073974 (InternalInvalidate3.c)
 * Callees:
 *     ?SetWakeBitInterMoveSize@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01D33B0 (-SetWakeBitInterMoveSize@@YAXPEAUtagTHREADINFO@@I@Z.c)
 */

void __fastcall IncPaintCountInterMoveSize(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // edx

  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(_DWORD *)(v1 + 592);
  *(_DWORD *)(v1 + 592) = v2 + 1;
  if ( !v2 )
  {
    EtwTraceWakePump(v1, a1, 15LL);
    SetWakeBitInterMoveSize((struct tagTHREADINFO *)v1);
  }
}
