/*
 * XREFs of Isoch_EP_StartMapping @ 0x1C000A800
 * Callers:
 *     <none>
 * Callees:
 *     Controller_RaiseAndTrackIrql @ 0x1C0005C20 (Controller_RaiseAndTrackIrql.c)
 *     Controller_LowerAndTrackIrql @ 0x1C0005CB4 (Controller_LowerAndTrackIrql.c)
 *     Isoch_MapTransfers @ 0x1C000A788 (Isoch_MapTransfers.c)
 */

void __fastcall Isoch_EP_StartMapping(__int64 a1)
{
  char v2; // di

  v2 = 0;
  if ( KeGetCurrentIrql() != 2 )
    v2 = Controller_RaiseAndTrackIrql(*(_QWORD *)(a1 + 40));
  _InterlockedExchange((volatile __int32 *)(a1 + 328), 0);
  *(_DWORD *)(a1 + 376) = 0;
  if ( !_InterlockedExchange((volatile __int32 *)(a1 + 108), 3) )
    Isoch_MapTransfers(a1);
  if ( v2 )
  {
    if ( KeGetCurrentIrql() == 2 )
      Controller_LowerAndTrackIrql(*(_QWORD **)(a1 + 40));
  }
}
