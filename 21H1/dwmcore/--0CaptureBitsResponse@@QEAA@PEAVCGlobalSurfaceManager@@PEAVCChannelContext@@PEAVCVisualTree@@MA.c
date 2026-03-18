/*
 * XREFs of ??0CaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVCVisualTree@@MAEBUWICRect@@W4DXGI_FORMAT@@_K@Z @ 0x18008C3F4
 * Callers:
 *     ??0VisualCaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVCVisualTree@@AEBUWICRect@@W4DXGI_FORMAT@@_KPEAX6@Z @ 0x18008C380 (--0VisualCaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVCVisualTr.c)
 *     ?ProcessCaptureBits@CLegacyVisualCaptureRenderTarget@@QEAAJPEAVCChannelContext@@PEBUtagMILCMD_LEGACYVISUALCAPTURERENDERTARGET_CAPTUREBITS@@@Z @ 0x1801916B4 (-ProcessCaptureBits@CLegacyVisualCaptureRenderTarget@@QEAAJPEAVCChannelContext@@PEBUtagMILCMD_LE.c)
 *     ??0MagnifierCaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCMagnifierRenderTarget@@PEAVCChannelContext@@AEBUWICRect@@_K@Z @ 0x18019ED28 (--0MagnifierCaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCMagnifierRenderTarget@@PEA.c)
 *     ?ProcessCaptureBits@CDesktopTree@@QEAAJPEAVCChannelContext@@PEBUtagMILCMD_DESKTOPTREE_CAPTUREBITS@@@Z @ 0x1801F8718 (-ProcessCaptureBits@CDesktopTree@@QEAAJPEAVCChannelContext@@PEBUtagMILCMD_DESKTOPTREE_CAPTUREBIT.c)
 * Callees:
 *     ??0?$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCompositionSurfaceInfo@@@Z @ 0x18006F61C (--0-$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCComposition.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18008AA6C (McGenEventWrite_EventWriteTransfer.c)
 *     ??0COcclusionContext@@QEAA@XZ @ 0x18009110C (--0COcclusionContext@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
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
  int v8; // edi
  __int64 v10; // r8
  __int128 v11; // xmm1
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+30h] [rbp-28h] BYREF

  v8 = 0;
  *((_DWORD *)this + 4) = 1;
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CResponseItem::`vftable';
  *((_WORD *)this + 16) = 0;
  *((_QWORD *)this + 3) = a2;
  _InterlockedIncrement((volatile signed __int32 *)this + 2);
  *(_QWORD *)this = &CaptureBitsResponse::`vftable';
  *((_QWORD *)this + 5) = a3;
  if ( a3 )
    _InterlockedIncrement((volatile signed __int32 *)a3 + 2);
  wil::com_ptr_t<CCompositionSurfaceInfo,wil::err_returncode_policy>::com_ptr_t<CCompositionSurfaceInfo,wil::err_returncode_policy>(
    (_QWORD *)this + 6,
    (__int64)a4);
  *((_QWORD *)this + 7) = a8;
  *((_QWORD *)this + 8) = 0LL;
  COcclusionContext::COcclusionContext((CaptureBitsResponse *)((char *)this + 72));
  *((float *)this + 414) = a5;
  *((_QWORD *)this + 211) = 0LL;
  v11 = (__int128)*a6;
  *((_QWORD *)this + 212) = 0LL;
  *(_OWORD *)((char *)this + 1660) = v11;
  *((_QWORD *)this + 214) = 0LL;
  *((_QWORD *)this + 213) = 0LL;
  LOBYTE(v8) = a7 == DXGI_FORMAT_R16G16B16A16_FLOAT;
  *((_DWORD *)this + 421) = v8;
  *((_DWORD *)this + 419) = a7;
  *((_DWORD *)this + 420) = 3;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McGenEventWrite_EventWriteTransfer(
      Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_RTCAPTURE_Start,
      v10,
      1u,
      &v13);
  return this;
}
