/*
 * XREFs of ?AddRef@CYCbCrSurface@@$4PPPPPPPM@GI@EAAKXZ @ 0x1800EBDB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CYCbCrSurface::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - *(int *)(a1 - 4) - 104));
}
