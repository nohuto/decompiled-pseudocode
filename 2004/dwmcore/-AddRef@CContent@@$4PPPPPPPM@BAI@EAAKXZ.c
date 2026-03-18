/*
 * XREFs of ?AddRef@CContent@@$4PPPPPPPM@BAI@EAAKXZ @ 0x1800F1020
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CContent::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - *(int *)(a1 - 4) - 264));
}
