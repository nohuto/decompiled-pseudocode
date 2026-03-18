/*
 * XREFs of ?AddRef@CTextVisualContent@@$4PPPPPPPM@FI@EAAKXZ @ 0x1801056B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CTextVisualContent::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - *(int *)(a1 - 4) - 88));
}
