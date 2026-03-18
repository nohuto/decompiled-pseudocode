/*
 * XREFs of ?PostRender@CComputeScribbleRenderer@@QEAAXXZ @ 0x1801E464C
 * Callers:
 *     ?Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800BB56C (-Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     McTemplateU0xq_EventWriteTransfer @ 0x180111E98 (McTemplateU0xq_EventWriteTransfer.c)
 *     ?EndRenderOperation@CComputeScribbleSynchronizer@@QEAAXPEAVCD3DDevice@@_K@Z @ 0x1801ED0AC (-EndRenderOperation@CComputeScribbleSynchronizer@@QEAAXPEAVCD3DDevice@@_K@Z.c)
 */

void __fastcall CComputeScribbleRenderer::PostRender(CComputeScribbleRenderer *this)
{
  __int64 v2; // rbx
  __int64 v3; // rcx

  if ( *((_BYTE *)this + 48) )
  {
    v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 104LL)
                               + 8LL
                               * (unsigned int)(*(_DWORD *)(*((_QWORD *)this + 2) + 128LL)
                                              % *(_DWORD *)(*((_QWORD *)this + 2) + 204LL)))
                   + 96LL);
    if ( v2 )
    {
      CComputeScribbleSynchronizer::EndRenderOperation(
        *(CComputeScribbleSynchronizer **)(v2 + 48),
        *(struct CD3DDevice **)(v2 + 16),
        *(_QWORD *)(v2 + 56));
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200000) != 0 )
        McTemplateU0xq_EventWriteTransfer(
          v3,
          &EVTDESC_COMPUTESCRIBBLE_POSTRENDER,
          *((_QWORD *)this + 3),
          *(_DWORD *)(v2 + 244));
    }
  }
}
