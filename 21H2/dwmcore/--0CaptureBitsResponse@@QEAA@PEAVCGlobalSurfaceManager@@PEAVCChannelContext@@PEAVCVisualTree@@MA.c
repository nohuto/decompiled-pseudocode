/*
 * XREFs of ??0CaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVCVisualTree@@MAEBUWICRect@@W4DXGI_FORMAT@@_K@Z @ 0x180027250
 * Callers:
 *     ??0VisualCaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVCVisualTree@@AEBUWICRect@@W4DXGI_FORMAT@@_KPEAX6@Z @ 0x180026D80 (--0VisualCaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVCVisualTr.c)
 *     ?ProcessCaptureBits@CLegacyVisualCaptureRenderTarget@@QEAAJPEAVCChannelContext@@PEBUtagMILCMD_LEGACYVISUALCAPTURERENDERTARGET_CAPTUREBITS@@@Z @ 0x1801C9A44 (-ProcessCaptureBits@CLegacyVisualCaptureRenderTarget@@QEAAJPEAVCChannelContext@@PEBUtagMILCMD_LE.c)
 *     ??0MagnifierCaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCMagnifierRenderTarget@@PEAVCChannelContext@@AEBUWICRect@@_K@Z @ 0x1801E184C (--0MagnifierCaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCMagnifierRenderTarget@@PEA.c)
 *     ?ProcessCaptureBits@CDesktopTree@@QEAAJPEAVCChannelContext@@PEBUtagMILCMD_DESKTOPTREE_CAPTUREBITS@@@Z @ 0x1802448F4 (-ProcessCaptureBits@CDesktopTree@@QEAAJPEAVCChannelContext@@PEBUtagMILCMD_DESKTOPTREE_CAPTUREBIT.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x180014C58 (McGenEventWrite_EventWriteTransfer.c)
 *     ??0CResponseItem@@QEAA@PEAVCGlobalSurfaceManager@@@Z @ 0x180027670 (--0CResponseItem@@QEAA@PEAVCGlobalSurfaceManager@@@Z.c)
 *     ??0?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCVisualTree@@@Z @ 0x180064038 (--0-$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCVisualTree@@@Z.c)
 *     ??0COcclusionContext@@QEAA@XZ @ 0x1800642CC (--0COcclusionContext@@QEAA@XZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800B2E40 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

CaptureBitsResponse *__fastcall CaptureBitsResponse::CaptureBitsResponse(
        CaptureBitsResponse *this,
        struct CGlobalSurfaceManager *a2,
        struct CChannelContext *a3,
        struct CVisualTree *a4,
        float a5,
        const struct WICRect *a6,
        enum DXGI_FORMAT a7,
        unsigned __int64 a8)
{
  int v11; // edi
  __int64 v12; // r8
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+30h] [rbp-38h] BYREF

  CResponseItem::CResponseItem(this, a2);
  v11 = 0;
  *(_QWORD *)this = &CaptureBitsResponse::`vftable';
  *((_QWORD *)this + 5) = a3;
  if ( a3 )
    CMILRefCountImpl::AddReference((struct CChannelContext *)((char *)a3 + 8));
  wil::com_ptr_t<CVisualTree,wil::err_returncode_policy>::com_ptr_t<CVisualTree,wil::err_returncode_policy>(
    (char *)this + 48,
    a4);
  *((_QWORD *)this + 7) = a8;
  *((_QWORD *)this + 8) = 0LL;
  COcclusionContext::COcclusionContext((CaptureBitsResponse *)((char *)this + 72));
  *((float *)this + 406) = a5;
  *(struct WICRect *)((char *)this + 1628) = *a6;
  *(_QWORD *)((char *)this + 1644) = 0LL;
  *((_DWORD *)this + 413) = 0;
  *((_QWORD *)this + 207) = 0LL;
  *((_QWORD *)this + 208) = 0LL;
  *((_QWORD *)this + 209) = 0LL;
  *((_QWORD *)this + 210) = 0LL;
  _InterlockedAdd(&CaptureBitsResponse::s_cOutstandingCaptures, 1u);
  *((_DWORD *)this + 411) = a7;
  LOBYTE(v11) = a7 == DXGI_FORMAT_R16G16B16A16_FLOAT;
  *((_DWORD *)this + 412) = 3;
  *((_DWORD *)this + 413) = v11;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McGenEventWrite_EventWriteTransfer(
      Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_RTCAPTURE_Start,
      v12,
      1u,
      &v14);
  return this;
}
