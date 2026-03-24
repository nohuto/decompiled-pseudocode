/*
 * XREFs of ?DeactivateIfIdle@CComputeScribbleRenderer@@AEAAXXZ @ 0x18019FA54
 * Callers:
 *     ?PreRender@CComputeScribbleRenderer@@QEAAJXZ @ 0x18019FCD0 (-PreRender@CComputeScribbleRenderer@@QEAAJXZ.c)
 * Callees:
 *     McTemplateU0x_EventWriteTransfer @ 0x1801542D8 (McTemplateU0x_EventWriteTransfer.c)
 *     ?HasPendingScribble@CLegacySwapChain@@QEBA_NXZ @ 0x180249ED4 (-HasPendingScribble@CLegacySwapChain@@QEBA_NXZ.c)
 */

void __fastcall CComputeScribbleRenderer::DeactivateIfIdle(CLegacySwapChain **this)
{
  __int64 v1; // r9

  if ( CLegacySwapChain::HasPendingScribble(this[2]) )
  {
    *(_DWORD *)(v1 + 48) = 0;
  }
  else if ( ++*(_DWORD *)(v1 + 48) >= 3u )
  {
    *(_DWORD *)(v1 + 48) = 0;
    *(_WORD *)(v1 + 52) = 0;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40000) != 0 )
      McTemplateU0x_EventWriteTransfer(0LL, &EVTDESC_COMPUTESCRIBBLE_ACTIVE_Stop, *(_QWORD *)(v1 + 32));
  }
}
