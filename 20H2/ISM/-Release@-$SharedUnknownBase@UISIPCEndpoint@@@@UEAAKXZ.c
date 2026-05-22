/*
 * XREFs of ?Release@?$SharedUnknownBase@UISIPCEndpoint@@@@UEAAKXZ @ 0x180042C40
 * Callers:
 *     ?Release@?$SharedUnknownBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@W7EAAKXZ @ 0x18004AFC0 (-Release@-$SharedUnknownBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@W7EAAKXZ.c)
 *     ?Release@?$SharedUnknownBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@WBA@EAAKXZ @ 0x18004AFD0 (-Release@-$SharedUnknownBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall SharedUnknownBase<ISIPCEndpoint>::Release(__int64 a1)
{
  return SharedObjectBase::ReleasePublicReference((SharedObjectBase *)(a1 - 16));
}
