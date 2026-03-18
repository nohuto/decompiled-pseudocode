/*
 * XREFs of ?AddRef@CFormatConverter@@$4PPPPPPPM@DCI@EAAKXZ @ 0x1800EE470
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CFormatConverter::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - *(int *)(a1 - 4) - 808));
}
