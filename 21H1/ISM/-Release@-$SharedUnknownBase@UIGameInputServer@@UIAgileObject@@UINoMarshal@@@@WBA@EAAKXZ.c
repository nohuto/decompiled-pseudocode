/*
 * XREFs of ?Release@?$SharedUnknownBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@WBA@EAAKXZ @ 0x18004B610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall SharedUnknownBase<IGameInputServer,IAgileObject,INoMarshal>::Release(__int64 a1)
{
  return SharedUnknownBase<ISIPCEndpoint>::Release(a1 - 16);
}
