/*
 * XREFs of ?Render@CIndirectSwapchainRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800E82C8
 * Callers:
 *     ?Render@CIndirectSwapchainRenderTarget@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800EFD20 (-Render@CIndirectSwapchainRenderTarget@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800E733C (-Render@COffScreenRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?EnsureMetadataBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x18018AE48 (-EnsureMetadataBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x18018B658 (-TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x18018B740 (-Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::Render(
        CIndirectSwapchainRenderTarget *this,
        struct CDrawingContext *a2,
        char a3,
        bool *a4)
{
  unsigned int v4; // ebx
  CIndirectSwapchainRenderTarget *v9; // rsi
  int Buffer; // eax
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx

  v4 = 0;
  *a4 = 0;
  if ( *((_BYTE *)this - 260) )
  {
    v9 = (CIndirectSwapchainRenderTarget *)((char *)this - 2032);
    Buffer = CIndirectSwapchainRenderTarget::TryTargetNextBuffer((CIndirectSwapchainRenderTarget *)((char *)this - 2032));
    v4 = Buffer;
    if ( Buffer < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, Buffer, 0xD3u, 0LL);
    }
    else if ( *((_BYTE *)this - 260) && *((_QWORD *)this - 9) )
    {
      LOBYTE(v12) = a3;
      v13 = COffScreenRenderTarget::Render((CIndirectSwapchainRenderTarget *)((char *)this - 104), a2, v12, a4);
      v4 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0xDFu, 0LL);
      }
      else
      {
        *((_BYTE *)this - 86) = 1;
        v15 = CIndirectSwapchainRenderTarget::EnsureMetadataBuffer(v9);
        v4 = v15;
        if ( v15 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0xE3u, 0LL);
        else
          *a4 = 1;
      }
    }
    if ( v4 == -2003304307 )
      CIndirectSwapchainRenderTarget::Unregister(v9);
  }
  return v4;
}
