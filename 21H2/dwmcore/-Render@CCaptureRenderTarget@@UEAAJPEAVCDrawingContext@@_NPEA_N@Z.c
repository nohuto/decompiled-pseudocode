/*
 * XREFs of ?Render@CCaptureRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801C53B8
 * Callers:
 *     ?Render@CCaptureRenderTarget@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x180106930 (-Render@CCaptureRenderTarget@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?Render@CVirtualMonitorCaptureRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801C6124 (-Render@CVirtualMonitorCaptureRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801C1768 (-Render@COffScreenRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDevice@@@Z @ 0x1801C47C4 (-EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDevice@@@Z.c)
 *     ?GetCurrentFrameBuffer@CCaptureRenderTarget@@IEAAPEAUIDXGIResource@@XZ @ 0x1801C4B6C (-GetCurrentFrameBuffer@CCaptureRenderTarget@@IEAAPEAUIDXGIResource@@XZ.c)
 *     ?GetD3DDeviceNoRef@CDeviceManager@CCaptureRenderTarget@@QEAAPEAVCD3DDevice@@AEBU_LUID@@PEAUIFlipProducer@@@Z @ 0x1801C4B90 (-GetD3DDeviceNoRef@CDeviceManager@CCaptureRenderTarget@@QEAAPEAVCD3DDevice@@AEBU_LUID@@PEAUIFlip.c)
 *     ?RenderAdditionalTopmostContent@CCaptureRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1801C5564 (-RenderAdditionalTopmostContent@CCaptureRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?TryTargetNextBuffer@CCaptureRenderTarget@@IEAAJXZ @ 0x1801C5904 (-TryTargetNextBuffer@CCaptureRenderTarget@@IEAAJXZ.c)
 */

__int64 __fastcall CCaptureRenderTarget::Render(LARGE_INTEGER *this, struct CDrawingContext *a2, char a3, bool *a4)
{
  unsigned int v4; // ebx
  LARGE_INTEGER v7; // rcx
  int v10; // eax
  __int64 v11; // rcx
  struct CD3DDevice *D3DDeviceNoRef; // rax
  unsigned __int64 v13; // r8
  int v14; // eax
  __int64 v15; // rcx
  int Buffer; // eax
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  char v24; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  *a4 = 0;
  v7 = this[-18];
  v24 = 0;
  if ( v7.QuadPart
    && (v10 = (*(__int64 (__fastcall **)(LARGE_INTEGER, char *))(*(_QWORD *)v7.QuadPart + 24LL))(v7, &v24),
        v4 = v10,
        v10 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0LL, v10, 0x20Au);
  }
  else
  {
    D3DDeviceNoRef = CCaptureRenderTarget::CDeviceManager::GetD3DDeviceNoRef(
                       (struct CD3DDevice **)&this[-29],
                       (const struct _LUID *)&this[-28],
                       (struct IFlipProducer *)this[-18].QuadPart);
    if ( D3DDeviceNoRef
      && this[-251].QuadPart
      && ((this[-11].QuadPart - this[-12].QuadPart) & 0xFFFFFFFFFFFFFFF8uLL) != 0
      && this[-18].QuadPart
      && LOBYTE(this[-26].LowPart)
      && v24 )
    {
      v14 = CCaptureRenderTarget::EnsureResources((CCaptureRenderTarget *)&this[-263], D3DDeviceNoRef, v13);
      v4 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0LL, v14, 0x218u);
      }
      else
      {
        Buffer = CCaptureRenderTarget::TryTargetNextBuffer((CCaptureRenderTarget *)&this[-263]);
        v4 = Buffer;
        if ( Buffer < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0LL, Buffer, 0x21Bu);
        }
        else if ( CCaptureRenderTarget::GetCurrentFrameBuffer((CCaptureRenderTarget *)&this[-263]) )
        {
          LOBYTE(v18) = a3;
          v19 = COffScreenRenderTarget::Render(this - 24, a2, v18, a4);
          v4 = v19;
          if ( v19 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0LL, v19, 0x220u);
          }
          else
          {
            v21 = CCaptureRenderTarget::RenderAdditionalTopmostContent((CCaptureRenderTarget *)&this[-263], a2);
            v4 = v21;
            if ( v21 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0LL, v21, 0x221u);
            else
              *a4 = 1;
          }
        }
      }
    }
  }
  return v4;
}
