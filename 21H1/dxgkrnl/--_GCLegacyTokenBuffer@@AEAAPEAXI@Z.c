/*
 * XREFs of ??_GCLegacyTokenBuffer@@AEAAPEAXI@Z @ 0x1C00073B0
 * Callers:
 *     ?ReturnLegacyTokenBuffer@CTokenManager@@QEAAXPEAVCLegacyTokenBuffer@@@Z @ 0x1C000701C (-ReturnLegacyTokenBuffer@CTokenManager@@QEAAXPEAVCLegacyTokenBuffer@@@Z.c)
 *     ?DeleteAllLegacyTokenBuffers@CTokenManager@@IEAAXXZ @ 0x1C00073E4 (-DeleteAllLegacyTokenBuffers@CTokenManager@@IEAAXXZ.c)
 *     ?Retire@CCompositionFrame@@UEAAXAEBUDXGI_FRAME_STATISTICS@@@Z @ 0x1C00151A0 (-Retire@CCompositionFrame@@UEAAXAEBUDXGI_FRAME_STATISTICS@@@Z.c)
 * Callees:
 *     ?Reset@CLegacyTokenBuffer@@IEAAXXZ @ 0x1C00070D8 (-Reset@CLegacyTokenBuffer@@IEAAXXZ.c)
 */

CLegacyTokenBuffer *__fastcall CLegacyTokenBuffer::`scalar deleting destructor'(CLegacyTokenBuffer *P)
{
  CLegacyTokenBuffer::Reset(P);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
