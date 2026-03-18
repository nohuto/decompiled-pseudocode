/*
 * XREFs of ?ShouldGoMonitorMaximizedMoveSizeData@@YA_NPEAU_MOVESIZEDATA@@@Z @ 0x1C020BDC8
 * Callers:
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C020D400 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall ShouldGoMonitorMaximizedMoveSizeData(struct _MOVESIZEDATA *a1)
{
  char v1; // r8

  v1 = 1;
  if ( *((_DWORD *)a1 + 60) || (*((_DWORD *)a1 + 49) & 0x300) != 0 )
    return 0;
  if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 30LL) & 1) == 0 )
  {
    *((_DWORD *)a1 + 49) |= 0x80000u;
    return 0;
  }
  return v1;
}
