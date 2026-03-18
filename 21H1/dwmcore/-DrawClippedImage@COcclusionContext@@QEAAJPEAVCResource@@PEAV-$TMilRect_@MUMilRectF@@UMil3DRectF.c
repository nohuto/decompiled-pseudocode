/*
 * XREFs of ?DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18001AFEC
 * Callers:
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x18004E030 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z.c)
 *     ?CollectOcclusionHelper@CWindowNode@@AEAAJPEAVCResource@@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEAVCOcclusionContext@@PEBVCShape@@_N@Z @ 0x1801F714C (-CollectOcclusionHelper@CWindowNode@@AEAAJPEAVCResource@@V-$TMilRect_@HUtagRECT@@UMilPointAndSiz.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18003594C (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180039700 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ?CollectRectangleForOcclusion@COcclusionContext@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAV2@@Z @ 0x18004EAE0 (-CollectRectangleForOcclusion@COcclusionContext@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@U.c)
 *     ?DoesImageOcclude@COcclusionContext@@AEAA_NPEAUIUnknown@@_N@Z @ 0x1800C5FCC (-DoesImageOcclude@COcclusionContext@@AEAA_NPEAUIUnknown@@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COcclusionContext::DrawClippedImage(
        COcclusionContext *a1,
        struct IUnknown *a2,
        float *a3,
        __int64 a4,
        char a5)
{
  unsigned int v5; // edi
  unsigned int v9; // ebp
  char *v10; // rax
  unsigned int v11; // ecx
  char *v12; // rbx
  __int64 v13; // r8
  int v14; // esi
  float *v15; // rdx
  float v16; // xmm0_4
  float v17; // xmm1_4
  float v18; // xmm0_4
  float v19; // xmm2_4
  float v20; // xmm1_4
  int v21; // eax
  unsigned int v22; // ecx
  unsigned __int64 v24; // [rsp+50h] [rbp+8h] BYREF

  v5 = 0;
  if ( !*((_DWORD *)a1 + 365)
    && COcclusionContext::DoesImageOcclude(a1, a2, a5 & 1)
    && (*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)a4 + 40LL))(a4, &v24)
    && (_DWORD)v24 )
  {
    v9 = v24;
    v10 = (char *)DefaultHeap::Alloc(saturated_mul((unsigned int)v24, 0x10uLL));
    v12 = v10;
    if ( v10 )
      `vector constructor iterator'(
        v10,
        0x10uLL,
        v9,
        TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>);
    else
      v12 = 0LL;
    if ( v12 )
    {
      (*(void (__fastcall **)(__int64, char *, _QWORD))(*(_QWORD *)a4 + 48LL))(a4, v12, (unsigned int)v24);
      v14 = 0;
      if ( (_DWORD)v24 )
      {
        while ( 1 )
        {
          v15 = (float *)&v12[16 * v14];
          if ( *a3 > *v15 )
            *v15 = *a3;
          v16 = a3[1];
          if ( v16 > v15[1] )
            v15[1] = v16;
          v17 = a3[2];
          v18 = v15[2];
          if ( v18 > v17 )
          {
            v15[2] = v17;
            v18 = v17;
          }
          v19 = a3[3];
          v20 = v15[3];
          if ( v20 > v19 )
          {
            v15[3] = v19;
            v20 = v19;
            v18 = v15[2];
          }
          if ( v18 <= *v15 || v20 <= v15[1] )
          {
            v15[3] = 0.0;
            v15[2] = 0.0;
            v15[1] = 0.0;
            *v15 = 0.0;
          }
          v21 = COcclusionContext::CollectRectangleForOcclusion(a1, v15, v13, 0LL);
          v5 = v21;
          if ( v21 < 0 )
            break;
          if ( ++v14 >= (unsigned int)v24 )
            goto LABEL_21;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x4C4u, 0LL);
      }
LABEL_21:
      operator delete(v12);
    }
    else
    {
      v5 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2147024882, 0x4BCu, 0LL);
    }
  }
  return v5;
}
