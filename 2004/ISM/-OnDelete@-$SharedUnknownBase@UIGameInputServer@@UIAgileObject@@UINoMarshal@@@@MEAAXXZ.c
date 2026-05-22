/*
 * XREFs of ?OnDelete@?$SharedUnknownBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@MEAAXXZ @ 0x180042B80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall SharedUnknownBase<IGameInputServer,IAgileObject,INoMarshal>::OnDelete(
        Microsoft::Bamo::BaseBamoConnection *a1)
{
  Microsoft::Bamo::BaseBamoConnection::Free(a1);
}
