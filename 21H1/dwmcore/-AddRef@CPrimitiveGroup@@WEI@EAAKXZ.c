/*
 * XREFs of ?AddRef@CPrimitiveGroup@@WEI@EAAKXZ @ 0x1800EC1E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CPrimitiveGroup::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - 72));
}
