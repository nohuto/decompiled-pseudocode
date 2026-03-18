/*
 * XREFs of ??_GCLegacyTokenBuffer@@AEAAPEAXI@Z @ 0x1C0002A14
 * Callers:
 *     ?DeleteAllLegacyTokenBuffers@CTokenManager@@IEAAXXZ @ 0x1C00029A0 (-DeleteAllLegacyTokenBuffers@CTokenManager@@IEAAXXZ.c)
 *     ?ReturnLegacyTokenBuffer@CTokenManager@@QEAAXPEAVCLegacyTokenBuffer@@@Z @ 0x1C00088A0 (-ReturnLegacyTokenBuffer@CTokenManager@@QEAAXPEAVCLegacyTokenBuffer@@@Z.c)
 *     ?Retire@CCompositionFrame@@UEAAXAEBUDXGI_FRAME_STATISTICS@@@Z @ 0x1C00177E0 (-Retire@CCompositionFrame@@UEAAXAEBUDXGI_FRAME_STATISTICS@@@Z.c)
 * Callees:
 *     ?Reset@CLegacyTokenBuffer@@IEAAXXZ @ 0x1C0008958 (-Reset@CLegacyTokenBuffer@@IEAAXXZ.c)
 */

CLegacyTokenBuffer *__fastcall CLegacyTokenBuffer::`scalar deleting destructor'(CLegacyTokenBuffer *P)
{
  CLegacyTokenBuffer::Reset(P);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
