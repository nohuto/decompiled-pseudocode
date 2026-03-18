/*
 * XREFs of ?DrawRectangle@COcclusionContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCLegacyMilBrush@@PEAV?$TValueResource@UMilRectF@@UtagMILCMD_RECTRESOURCE@@$0IL@@@@Z @ 0x1800DE500
 * Callers:
 *     <none>
 * Callees:
 *     ?CollectRectangleForOcclusion@COcclusionContext@@AEAAXPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N1PEAV2@@Z @ 0x1800B788C (-CollectRectangleForOcclusion@COcclusionContext@@AEAAXPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@U.c)
 *     ?GetCachedBrushCVINoRef@CImageLegacyMilBrush@@QEAAPEAVCCachedVisualImage@@XZ @ 0x1800DE5CC (-GetCachedBrushCVINoRef@CImageLegacyMilBrush@@QEAAPEAVCCachedVisualImage@@XZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall COcclusionContext::DrawRectangle(__int64 a1, float *a2, CImageLegacyMilBrush *a3, __int64 a4)
{
  bool v4; // zf
  __int64 v8; // r9
  struct CCachedVisualImage *CachedBrushCVINoRef; // rax
  __int64 v11; // rcx
  _QWORD v12[2]; // [rsp+30h] [rbp-58h] BYREF
  __int128 v13; // [rsp+40h] [rbp-48h]
  char v14; // [rsp+50h] [rbp-38h]
  __int128 v15; // [rsp+58h] [rbp-30h] BYREF

  v4 = *(_DWORD *)(a1 + 1432) == 0;
  v15 = *(_OWORD *)&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  if ( v4 && !a4 && a3 && (*(unsigned __int8 (__fastcall **)(CImageLegacyMilBrush *))(*(_QWORD *)a3 + 184LL))(a3) )
    COcclusionContext::CollectRectangleForOcclusion(a1, a2, 0, v8, &v15);
  if ( (*(unsigned __int8 (__fastcall **)(CImageLegacyMilBrush *, __int64))(*(_QWORD *)a3 + 56LL))(a3, 82LL) )
  {
    CachedBrushCVINoRef = CImageLegacyMilBrush::GetCachedBrushCVINoRef(a3);
    if ( CachedBrushCVINoRef )
    {
      v12[0] = *(_QWORD *)(a1 + 1192);
      v11 = *(_QWORD *)(a1 + 8);
      v12[1] = CachedBrushCVINoRef;
      v13 = v15;
      v14 = 1;
      (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v11 + 200LL))(v11, v12);
    }
  }
  return 0LL;
}
