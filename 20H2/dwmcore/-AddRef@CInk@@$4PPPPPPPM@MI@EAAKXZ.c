/*
 * XREFs of ?AddRef@CInk@@$4PPPPPPPM@MI@EAAKXZ @ 0x1800EEDA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CInk::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - *(int *)(a1 - 4) - 200));
}
