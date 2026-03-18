/*
 * XREFs of ?DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x1800D7718
 * Callers:
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180099A20 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z.c)
 *     ?CollectOcclusionHelper@CWindowNode@@AEAAJPEAVCResource@@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEAVCOcclusionContext@@PEBVCShape@@_N@Z @ 0x1802440A4 (-CollectOcclusionHelper@CWindowNode@@AEAAJPEAVCResource@@V-$TMilRect_@HUtagRECT@@UMilPointAndSiz.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18008ED70 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?CollectRectangleForOcclusion@COcclusionContext@@AEAAXPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N1PEAV2@@Z @ 0x1800B788C (-CollectRectangleForOcclusion@COcclusionContext@@AEAAXPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@U.c)
 *     ?DoesImageOcclude@COcclusionContext@@AEAA_NPEAUIUnknown@@_N@Z @ 0x1800D78BC (-DoesImageOcclude@COcclusionContext@@AEAA_NPEAUIUnknown@@_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall COcclusionContext::DrawClippedImage(
        COcclusionContext *a1,
        struct IUnknown *a2,
        float *a3,
        __int64 a4,
        char a5)
{
  unsigned int v9; // esi
  char *v10; // rax
  char *v11; // rbx
  __int64 v12; // r9
  unsigned int i; // edi
  float v14; // xmm0_4
  float *v15; // rdx
  float v16; // xmm2_4
  float v17; // xmm0_4
  float v18; // xmm3_4
  float v19; // xmm1_4
  float v20; // xmm0_4
  float v21; // xmm5_4
  float v22; // xmm4_4
  unsigned __int64 v23; // [rsp+50h] [rbp+8h] BYREF

  if ( !*((_DWORD *)a1 + 358)
    && COcclusionContext::DoesImageOcclude(a1, a2, a5 & 1)
    && (*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)a4 + 64LL))(a4, &v23)
    && (_DWORD)v23 )
  {
    v9 = v23;
    v10 = (char *)operator new(saturated_mul((unsigned int)v23, 0x10uLL));
    v11 = v10;
    if ( v10 )
      `vector constructor iterator'(
        v10,
        16LL,
        v9,
        (void (__fastcall *)(char *))TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>);
    else
      v11 = 0LL;
    (*(void (__fastcall **)(__int64, char *, _QWORD))(*(_QWORD *)a4 + 80LL))(a4, v11, (unsigned int)v23);
    for ( i = 0; i < (unsigned int)v23; ++i )
    {
      v14 = *a3;
      v15 = (float *)&v11[16 * i];
      v16 = *v15;
      if ( *a3 > *v15 )
      {
        *v15 = v14;
        v16 = v14;
      }
      v17 = a3[1];
      v18 = v15[1];
      if ( v17 > v18 )
      {
        v15[1] = v17;
        v18 = v17;
      }
      v19 = a3[2];
      v20 = v15[2];
      if ( v20 > v19 )
      {
        v15[2] = v19;
        v20 = v19;
      }
      else
      {
        v19 = v15[2];
      }
      v21 = a3[3];
      v22 = v15[3];
      if ( v22 > v21 )
      {
        v15[3] = v21;
        v20 = v19;
        v22 = v21;
      }
      if ( v20 <= v16 || v22 <= v18 )
      {
        v15[3] = 0.0;
        v15[2] = 0.0;
        v15[1] = 0.0;
        *v15 = 0.0;
      }
      COcclusionContext::CollectRectangleForOcclusion((__int64)a1, v15, 0, v12, 0LL);
    }
    if ( v11 )
      DefaultHeap::Free(v11);
  }
  return 0LL;
}
