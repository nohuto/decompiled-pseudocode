/*
 * XREFs of ?Release@?$SharedUnknownBase@UISIPCEndpoint@@@@UEAAKXZ @ 0x1800432B0
 * Callers:
 *     ?Release@?$SharedUnknownBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@W7EAAKXZ @ 0x18004B600 (-Release@-$SharedUnknownBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@W7EAAKXZ.c)
 *     ?Release@?$SharedUnknownBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@WBA@EAAKXZ @ 0x18004B610 (-Release@-$SharedUnknownBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall SharedUnknownBase<ISIPCEndpoint>::Release(__int64 a1)
{
  return SharedObjectBase::ReleasePublicReference((SharedObjectBase *)(a1 - 16));
}
