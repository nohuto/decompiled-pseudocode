/*
 * XREFs of ?SetWakeBitInterMoveSize@@YGXPAUtagTHREADINFO@@I@Z @ 0xEFBC6
 * Callers:
 *     _IncPaintCountInterMoveSize@4 @ 0x19D871 (_IncPaintCountInterMoveSize@4.c)
 * Callees:
 *     <none>
 */

void __thiscall SetWakeBitInterMoveSize(int this)
{
  *(_WORD *)(*(_DWORD *)(this + 244) + 6) |= 0x20u;
  *(_WORD *)(*(_DWORD *)(this + 244) + 4) |= 0x20u;
  if ( (*(_BYTE *)(*(_DWORD *)(this + 244) + 10) & 0x20) != 0 )
  {
    if ( (*(_BYTE *)(this + 264) & 2) != 0 )
    {
      ++*(_DWORD *)(*(_DWORD *)(this + 332) + 4);
      ++*(_DWORD *)(_gpsi + 4440);
      WakeWowTask(this);
    }
    else
    {
      KeSetEvent(*(PRKEVENT *)(this + 400), 6, 0);
    }
  }
}
