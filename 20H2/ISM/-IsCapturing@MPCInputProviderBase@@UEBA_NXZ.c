/*
 * XREFs of ?IsCapturing@MPCInputProviderBase@@UEBA_NXZ @ 0x18007DDF0
 * Callers:
 *     ?PostHitTestProcessing@MPCHandProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x18007E630 (-PostHitTestProcessing@MPCHandProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z.c)
 *     ?PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x18018DE40 (-PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@.c)
 * Callees:
 *     <none>
 */

bool __fastcall MPCInputProviderBase::IsCapturing(MPCInputProviderBase *this)
{
  return *((_QWORD *)this + 571) != 0LL;
}
