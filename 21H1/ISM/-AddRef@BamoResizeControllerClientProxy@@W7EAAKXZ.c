/*
 * XREFs of ?AddRef@BamoResizeControllerClientProxy@@W7EAAKXZ @ 0x18004ACC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoResizeControllerClientProxy::AddRef(__int64 a1)
{
  return BamoInputObserverManagerPrincipal::AddRef((BamoInputObserverManagerPrincipal *)(a1 - 8));
}
