/*
 * XREFs of ?Render@CCaptureRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800E723C
 * Callers:
 *     ?Render@CVirtualMonitorCaptureRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800E73AC (-Render@CVirtualMonitorCaptureRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?Render@CCaptureRenderTarget@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800ECD70 (-Render@CCaptureRenderTarget@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800E6584 (-Render@COffScreenRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDevice@@@Z @ 0x1800E6E24 (-EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDevice@@@Z.c)
 *     ?GetD3DDeviceNoRef@CCaptureRenderTarget@@IEAAPEAVCD3DDevice@@XZ @ 0x1800E7160 (-GetD3DDeviceNoRef@CCaptureRenderTarget@@IEAAPEAVCD3DDevice@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrentFrameBuffer@CCaptureRenderTarget@@IEAAPEAUIDXGIResource@@XZ @ 0x18018BAD4 (-GetCurrentFrameBuffer@CCaptureRenderTarget@@IEAAPEAUIDXGIResource@@XZ.c)
 *     ?TryTargetNextBuffer@CCaptureRenderTarget@@IEAAJXZ @ 0x18018C3C8 (-TryTargetNextBuffer@CCaptureRenderTarget@@IEAAJXZ.c)
 */

__int64 __fastcall CCaptureRenderTarget::Render(
        CCaptureRenderTarget *this,
        struct CDrawingContext *a2,
        char a3,
        bool *a4)
{
  unsigned int v4; // ebx
  __int64 v7; // rcx
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
  char v22; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  *a4 = 0;
  v7 = *((_QWORD *)this - 20);
  v22 = 0;
  if ( v7 && (v10 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v7 + 24LL))(v7, &v22), v4 = v10, v10 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x1CFu, 0LL);
  }
  else
  {
    D3DDeviceNoRef = CCaptureRenderTarget::GetD3DDeviceNoRef((CCaptureRenderTarget *)((char *)this - 2136));
    if ( D3DDeviceNoRef
      && *((_QWORD *)this - 17)
      && ((*((_QWORD *)this - 12) - *((_QWORD *)this - 13)) & 0xFFFFFFFFFFFFFFF8uLL) != 0
      && *((_QWORD *)this - 20)
      && *((_BYTE *)this - 224)
      && v22 )
    {
      v14 = CCaptureRenderTarget::EnsureResources((CCaptureRenderTarget *)((char *)this - 2136), D3DDeviceNoRef, v13);
      v4 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x1DDu, 0LL);
      }
      else
      {
        Buffer = CCaptureRenderTarget::TryTargetNextBuffer((CCaptureRenderTarget *)((char *)this - 2136));
        v4 = Buffer;
        if ( Buffer < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, Buffer, 0x1E0u, 0LL);
        }
        else if ( CCaptureRenderTarget::GetCurrentFrameBuffer((CCaptureRenderTarget *)((char *)this - 2136)) )
        {
          LOBYTE(v18) = a3;
          v19 = COffScreenRenderTarget::Render((CCaptureRenderTarget *)((char *)this - 208), a2, v18, a4);
          v4 = v19;
          if ( v19 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x1E5u, 0LL);
          else
            *a4 = 1;
        }
      }
    }
  }
  return v4;
}
