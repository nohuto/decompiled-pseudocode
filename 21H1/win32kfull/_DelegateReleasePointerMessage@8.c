/*
 * XREFs of _DelegateReleasePointerMessage@8 @ 0x159FCB
 * Callers:
 *     ?_HandleDelegatedInputWorker@@YGPAUtagQMSG@@PAUtagTHREADINFO@@KPAU1@@Z @ 0x14DF5D (-_HandleDelegatedInputWorker@@YGPAUtagQMSG@@PAUtagTHREADINFO@@KPAU1@@Z.c)
 * Callees:
 *     _DelegateCoalescePointerMessage@12 @ 0x15B8F5 (_DelegateCoalescePointerMessage@12.c)
 */

int __fastcall DelegateReleasePointerMessage(int a1, int a2)
{
  if ( *(_DWORD *)(a2 + 12) == 583 )
    CTouchProcessor::DelegateImplictCaptureAndReleaseIfNeeded(_gpTouchProcessor, *(_DWORD *)(a2 + 20));
  return DelegateCoalescePointerMessage(a2);
}
