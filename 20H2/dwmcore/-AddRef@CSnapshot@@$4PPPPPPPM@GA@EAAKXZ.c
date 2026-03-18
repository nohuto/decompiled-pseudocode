/*
 * XREFs of ?AddRef@CSnapshot@@$4PPPPPPPM@GA@EAAKXZ @ 0x1800EED10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CSnapshot::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - *(int *)(a1 - 4) - 96));
}
