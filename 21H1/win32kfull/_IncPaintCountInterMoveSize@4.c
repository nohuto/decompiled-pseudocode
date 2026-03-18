/*
 * XREFs of _IncPaintCountInterMoveSize@4 @ 0x19D871
 * Callers:
 *     _InternalInvalidate3@12 @ 0x37E6A (_InternalInvalidate3@12.c)
 * Callees:
 *     <none>
 */

void __thiscall IncPaintCountInterMoveSize(_DWORD *this)
{
  int v1; // esi
  int v2; // edx

  v1 = this[2];
  v2 = *(_DWORD *)(v1 + 320);
  *(_DWORD *)(v1 + 320) = v2 + 1;
  if ( !v2 )
  {
    EtwTraceWakePump(v1, this, 15);
    SetWakeBitInterMoveSize(v1);
  }
}
