/*
 * XREFs of ?ProcessCaptureBits@CMagnifierRenderTarget@@QEAAJPEAVCChannelContext@@PEBUtagMILCMD_MAGNIFIERRENDERTARGET_CAPTUREBITS@@@Z @ 0x18018AD88
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800ADEEC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?QueueResponse@CResponseItem@@QEAAJXZ @ 0x180050AE8 (-QueueResponse@CResponseItem@@QEAAJXZ.c)
 *     ?Release@CDrawListEntry@@UEAAKXZ @ 0x18005EDD0 (-Release@CDrawListEntry@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2MagnifierCaptureBitsResponse@@SAPEAX_K@Z @ 0x18018A96C (--2MagnifierCaptureBitsResponse@@SAPEAX_K@Z.c)
 *     ?ProcessUpdateParams@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMAGN_UPDATE_TEXTURES_PARAM@@@Z @ 0x18018B3C4 (-ProcessUpdateParams@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMAGN_UPDATE_TEXTURES_P.c)
 *     McTemplateU0xxddffff_EventWriteTransfer @ 0x18018B570 (McTemplateU0xxddffff_EventWriteTransfer.c)
 *     ??0MagnifierCaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCMagnifierRenderTarget@@PEAVCChannelContext@@AEBUWICRect@@_K@Z @ 0x18019A4F8 (--0MagnifierCaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCMagnifierRenderTarget@@PEA.c)
 */

__int64 __fastcall CMagnifierRenderTarget::ProcessCaptureBits(
        CMagnifierRenderTarget *this,
        struct CChannelContext *a2,
        const struct tagMILCMD_MAGNIFIERRENDERTARGET_CAPTUREBITS *a3)
{
  MagnifierCaptureBitsResponse *v3; // rdi
  int updated; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // rcx
  MagnifierCaptureBitsResponse *v11; // r10
  int v12; // eax
  int v13; // edx
  __int64 v14; // rcx
  struct WICRect v16; // [rsp+50h] [rbp-28h] BYREF

  v3 = 0LL;
  v16.X = 0;
  v16.Y = 0;
  v16.Width = *((_DWORD *)a3 + 2);
  v16.Height = *((_DWORD *)a3 + 3);
  *((_BYTE *)this + 1772) = 1;
  updated = CMagnifierRenderTarget::ProcessUpdateParams(
              this,
              a2,
              (const struct tagMILCMD_MAGNIFIERRENDERTARGET_CAPTUREBITS *)((char *)a3 + 32));
  v9 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, updated, 0x75u, 0LL);
  }
  else
  {
    *((_DWORD *)this + 442) = ((*((_DWORD *)a3 + 6) & 1) == 0) + 1;
    v11 = (MagnifierCaptureBitsResponse *)MagnifierCaptureBitsResponse::operator new();
    if ( v11 )
      v3 = MagnifierCaptureBitsResponse::MagnifierCaptureBitsResponse(
             v11,
             *((struct CGlobalSurfaceManager **)g_pComposition + 12),
             this,
             a2,
             &v16,
             *((_QWORD *)a3 + 2));
    if ( !v3 )
    {
      v9 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024882, 0x87u, 0LL);
      return v9;
    }
    *((_DWORD *)v3 + 4) = 0;
    v12 = CResponseItem::QueueResponse(v3);
    v9 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v12, 0x90u, 0LL);
    }
    else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    {
      McTemplateU0xxddffff_EventWriteTransfer(
        v14,
        v13,
        *((_QWORD *)this + 232),
        *((_QWORD *)a3 + 2),
        *((_DWORD *)a3 + 8),
        *((_DWORD *)a3 + 9),
        _mm_cvtpd_ps((__m128d)*((unsigned __int64 *)a3 + 5)).m128_i8[0],
        _mm_cvtpd_ps((__m128d)*((unsigned __int64 *)a3 + 6)).m128_i8[0],
        _mm_cvtpd_ps((__m128d)*((unsigned __int64 *)a3 + 7)).m128_i8[0],
        _mm_cvtpd_ps((__m128d)*((unsigned __int64 *)a3 + 8)).m128_i8[0]);
    }
  }
  if ( v3 )
    CDrawListEntry::Release(v3);
  return v9;
}
