/*
 * XREFs of ?AddRef@CAtlasedRectsGroup@@$4PPPPPPPM@IA@EAAKXZ @ 0x180105690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CAtlasedRectsGroup::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - *(int *)(a1 - 4) - 128));
}
