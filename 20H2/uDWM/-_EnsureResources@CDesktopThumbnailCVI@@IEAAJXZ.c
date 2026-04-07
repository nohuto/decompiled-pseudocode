/*
 * XREFs of ?_EnsureResources@CDesktopThumbnailCVI@@IEAAJXZ @ 0x1800B6DA4
 * Callers:
 *     ?CreateBrush@CDesktopThumbnailCVI@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualImageProxy@@PEAPEAVCRectResourceProxy@@AEBUtagRECT@@@Z @ 0x1800B5AF4 (-CreateBrush@CDesktopThumbnailCVI@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualIm.c)
 *     ?FreezeDesktopThumbnail@CPerMonitorDesktopThumbnail@@QEAAJ_N@Z @ 0x1800B5E88 (-FreezeDesktopThumbnail@CPerMonitorDesktopThumbnail@@QEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Update@CCachedVisualImageProxy@@QEAAJAEBUMilRectF@@AEBUMilSizeD@@PEBVCRectResourceProxy@@PEBVCSizeResourceProxy@@PEAVCVisualProxy@@W4Enum@MilBrushMappingMode@@@Z @ 0x180010178 (-Update@CCachedVisualImageProxy@@QEAAJAEBUMilRectF@@AEBUMilSizeD@@PEBVCRectResourceProxy@@PEBVCS.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017394 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??$CreateProxy@VCCachedVisualImageProxy@@@CCompositor@@IEAAJPEAPEAVCCachedVisualImageProxy@@@Z @ 0x1800266A0 (--$CreateProxy@VCCachedVisualImageProxy@@@CCompositor@@IEAAJPEAPEAVCCachedVisualImageProxy@@@Z.c)
 *     __security_check_cookie @ 0x180053530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopThumbnailCVI::_EnsureResources(CDesktopThumbnailCVI *this)
{
  unsigned int v1; // edi
  __int64 *v2; // rsi
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // edx
  int v8; // r9d
  int v9; // r8d
  __int64 v10; // rax
  float v11; // xmm0_4
  int v12; // ecx
  __m128i v13; // xmm0
  __int64 v14; // rax
  int v15; // eax
  __int64 v17; // [rsp+40h] [rbp-40h] BYREF
  _DWORD v18[4]; // [rsp+48h] [rbp-38h] BYREF
  float v19[4]; // [rsp+58h] [rbp-28h] BYREF
  _QWORD v20[2]; // [rsp+68h] [rbp-18h] BYREF

  v1 = 0;
  v2 = (__int64 *)((char *)this + 24);
  if ( *((_QWORD *)this + 3) )
    return v1;
  v4 = CCompositor::CreateProxy<CCachedVisualImageProxy>(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
         (__int64 *)this + 3);
  v1 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x23Du);
    goto LABEL_13;
  }
  v5 = (*(__int64 (__fastcall **)(CDesktopThumbnailCVI *, _DWORD *))(*(_QWORD *)this + 16LL))(this, v18);
  v1 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x240u);
    goto LABEL_13;
  }
  v6 = (*(__int64 (__fastcall **)(CDesktopThumbnailCVI *, __int64 *))(*(_QWORD *)this + 24LL))(this, &v17);
  v1 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x243u);
    goto LABEL_13;
  }
  v7 = v18[0];
  v8 = v18[1];
  v9 = HIDWORD(v17);
  *((_DWORD *)this + 10) = v18[2];
  *((_DWORD *)this + 11) = v18[3];
  v10 = v17;
  *((_DWORD *)this + 8) = v7;
  *((_DWORD *)this + 9) = v8;
  *((_QWORD *)this + 6) = v10;
  if ( !(_DWORD)v10 || !v9 )
  {
    *((_DWORD *)this + 12) = *((_DWORD *)this + 10) - v7;
    *((_DWORD *)this + 13) = *((_DWORD *)this + 11) - v8;
  }
  v11 = (float)(*((_DWORD *)this + 10) - v7);
  v12 = *((_DWORD *)this + 11) - v8;
  v19[0] = (float)v7;
  v19[2] = v11 + (float)v7;
  v19[1] = (float)v8;
  *(double *)&v20[1] = (double)v9;
  v19[3] = (float)v12 + (float)v8;
  v13 = _mm_cvtsi32_si128(v10);
  v14 = *((_QWORD *)this + 2);
  v20[0] = *(_OWORD *)&_mm_cvtepi32_pd(v13);
  v15 = CCachedVisualImageProxy::Update(*v2, (__int64)v19, (__int64)v20, 0LL, 0LL, *(_QWORD *)(v14 + 16), 0);
  v1 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0x263u);
LABEL_13:
    if ( *v2 )
    {
      CBaseObject::Release((CBaseObject *)*v2);
      *v2 = 0LL;
    }
  }
  return v1;
}
