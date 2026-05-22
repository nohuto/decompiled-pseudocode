/*
 * XREFs of ?AddRef@?$SharedUnknownBase@UISIPCEndpoint@@@@UEAAKXZ @ 0x180042450
 * Callers:
 *     ?AddRef@?$SharedUnknownBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@W7EAAKXZ @ 0x18004AFD0 (-AddRef@-$SharedUnknownBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@W7EAAKXZ.c)
 *     ?AddRef@?$SharedUnknownBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@WBA@EAAKXZ @ 0x18004AFE0 (-AddRef@-$SharedUnknownBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall SharedUnknownBase<ISIPCEndpoint>::AddRef(__int64 a1)
{
  return SharedObjectBase::AddPublicReference((SharedObjectBase *)(a1 - 16));
}
