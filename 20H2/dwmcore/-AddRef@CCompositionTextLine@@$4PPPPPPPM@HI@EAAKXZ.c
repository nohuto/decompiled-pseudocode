/*
 * XREFs of ?AddRef@CCompositionTextLine@@$4PPPPPPPM@HI@EAAKXZ @ 0x1800EEC60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CCompositionTextLine::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - *(int *)(a1 - 4) - 120));
}
