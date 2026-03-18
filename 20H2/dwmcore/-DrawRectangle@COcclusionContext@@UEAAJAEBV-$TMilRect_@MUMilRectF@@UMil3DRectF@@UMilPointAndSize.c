/*
 * XREFs of ?DrawRectangle@COcclusionContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCLegacyMilBrush@@PEAV?$TValueResource@UMilRectF@@UtagMILCMD_RECTRESOURCE@@$0IM@@@@Z @ 0x1800C3F40
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CollectRectangleForOcclusion@COcclusionContext@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAV2@@Z @ 0x180080FC0 (-CollectRectangleForOcclusion@COcclusionContext@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@U.c)
 *     ?GetCachedBrushCVINoRef@CImageLegacyMilBrush@@QEAAPEAVCCachedVisualImage@@XZ @ 0x1800C4008 (-GetCachedBrushCVINoRef@CImageLegacyMilBrush@@QEAAPEAVCCachedVisualImage@@XZ.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COcclusionContext::DrawRectangle(__int64 a1, float *a2, CImageLegacyMilBrush *a3, __int64 a4)
{
  unsigned int v4; // edi
  __int64 v8; // r8
  int v9; // eax
  __int64 v10; // rcx
  struct CCachedVisualImage *CachedBrushCVINoRef; // rax
  __int64 v13; // rcx
  _QWORD v14[2]; // [rsp+30h] [rbp-58h] BYREF
  __m128 v15; // [rsp+40h] [rbp-48h]
  char v16; // [rsp+50h] [rbp-38h]
  __int128 v17; // [rsp+58h] [rbp-30h] BYREF

  v4 = 0;
  v17 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  if ( !*(_DWORD *)(a1 + 1460)
    && !a4
    && a3
    && (*(unsigned __int8 (__fastcall **)(CImageLegacyMilBrush *))(*(_QWORD *)a3 + 200LL))(a3)
    && (v9 = COcclusionContext::CollectRectangleForOcclusion(a1, a2, v8, (__m128 *)&v17), v4 = v9, v9 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x24u, 0LL);
  }
  else if ( (*(unsigned __int8 (__fastcall **)(CImageLegacyMilBrush *, __int64))(*(_QWORD *)a3 + 56LL))(a3, 82LL) )
  {
    CachedBrushCVINoRef = CImageLegacyMilBrush::GetCachedBrushCVINoRef(a3);
    if ( CachedBrushCVINoRef )
    {
      v14[0] = *(_QWORD *)(a1 + 1232);
      v13 = *(_QWORD *)(a1 + 8);
      v14[1] = CachedBrushCVINoRef;
      v15 = (__m128)v17;
      v16 = 1;
      (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v13 + 224LL))(v13, v14);
    }
  }
  return v4;
}
