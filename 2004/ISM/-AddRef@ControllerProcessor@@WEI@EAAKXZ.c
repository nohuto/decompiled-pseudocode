/*
 * XREFs of ?AddRef@ControllerProcessor@@WEI@EAAKXZ @ 0x18004C100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ControllerProcessor::AddRef(__int64 a1)
{
  return BamoInputObserverManagerPrincipal::AddRef((BamoInputObserverManagerPrincipal *)(a1 - 72));
}
