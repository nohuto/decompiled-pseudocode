/*
 * XREFs of ?SetDeviceTransform@COcclusionContext@@QEBAJPEBVCMILMatrix@@@Z @ 0x18008BB4C
 * Callers:
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_NPEAVCVisual@@@Z @ 0x1800884A8 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF.c)
 *     ?Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV?$span@$$CBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@MAEBV?$span@PEAVCOverlayContext@@$0?0@4@@Z @ 0x18008BD78 (-Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV-$span@$$CBV-$TMilRect_@MUMilRectF@@UMil3D.c)
 *     ?UpdateDeviceTransform@COcclusionContext@@QEBAJAEBVCMILMatrix@@@Z @ 0x1801C0648 (-UpdateDeviceTransform@COcclusionContext@@QEBAJAEBVCMILMatrix@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z @ 0x18008EBAC (--$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x18009A3CC (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?SetDeviceTransform@CArrayBasedCoverageSet@@QEAAXPEBVCMILMatrix@@@Z @ 0x1800D6948 (-SetDeviceTransform@CArrayBasedCoverageSet@@QEAAXPEBVCMILMatrix@@@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800DCDBC (-Invert@CMILMatrix@@QEAA_NXZ.c)
 */

__int64 __fastcall COcclusionContext::SetDeviceTransform(COcclusionContext *this, const struct CMILMatrix *a2)
{
  const struct CMILMatrix *v2; // rdi
  unsigned int v4; // ebp
  char v5; // si
  char v6; // al
  char v7; // cl
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int64 v13; // rcx
  __int128 v14; // xmm0
  int v15; // eax
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  int v18; // eax
  __int128 v19; // xmm1
  __int128 v20; // [rsp+30h] [rbp-58h] BYREF
  __int128 v21; // [rsp+40h] [rbp-48h]
  __int128 v22; // [rsp+50h] [rbp-38h]
  __int128 v23; // [rsp+60h] [rbp-28h]
  int v24; // [rsp+70h] [rbp-18h]

  v2 = a2;
  v4 = 0;
  v5 = 0;
  if ( !a2 || (unsigned __int8)CMILMatrix::IsIdentity<0>(a2) )
  {
    if ( *((_BYTE *)this + 1204) )
    {
      *((_BYTE *)this + 1204) = 0;
      v5 = 1;
    }
    v2 = 0LL;
    *((_QWORD *)this + 151) = 1065353216LL;
    *((_QWORD *)this + 152) = 0LL;
    *((_DWORD *)this + 306) = 0;
    *(_QWORD *)((char *)this + 1228) = 1065353216LL;
    *(_QWORD *)((char *)this + 1236) = 0LL;
    *((_DWORD *)this + 311) = 0;
    *((_QWORD *)this + 156) = 1065353216LL;
    *((_QWORD *)this + 157) = 0LL;
    *((_DWORD *)this + 316) = 0;
    *((_DWORD *)this + 317) = 1065353216;
    v6 = *((_BYTE *)this + 1273);
    *((_BYTE *)this + 1272) = 85;
    *((_BYTE *)this + 1273) = v6 & 0xC0 | 0x17;
    *(_QWORD *)((char *)this + 1276) = 1065353216LL;
    *(_QWORD *)((char *)this + 1284) = 0LL;
    *((_DWORD *)this + 323) = 0;
    *((_QWORD *)this + 162) = 1065353216LL;
    *((_QWORD *)this + 163) = 0LL;
    *((_DWORD *)this + 328) = 0;
    *(_QWORD *)((char *)this + 1316) = 1065353216LL;
    *(_QWORD *)((char *)this + 1324) = 0LL;
    *((_DWORD *)this + 333) = 0;
    *((_DWORD *)this + 334) = 1065353216;
    v7 = *((_BYTE *)this + 1341) & 0xD7;
    *((_BYTE *)this + 1340) = 85;
    *((_BYTE *)this + 1341) = v7 | 0x17;
  }
  else
  {
    v9 = *(_OWORD *)v2;
    v10 = *((_OWORD *)v2 + 1);
    v24 = *((_DWORD *)v2 + 16);
    v20 = v9;
    v11 = *((_OWORD *)v2 + 2);
    v21 = v10;
    v12 = *((_OWORD *)v2 + 3);
    v22 = v11;
    v23 = v12;
    if ( CMILMatrix::Invert((CMILMatrix *)&v20) )
    {
      if ( !*((_BYTE *)this + 1204) || !(unsigned __int8)CMILMatrix::IsEqualTo<0>((char *)this + 1208, v2) )
        v5 = 1;
      *(_OWORD *)((char *)this + 1208) = *(_OWORD *)v2;
      *(_OWORD *)((char *)this + 1224) = *((_OWORD *)v2 + 1);
      *(_OWORD *)((char *)this + 1240) = *((_OWORD *)v2 + 2);
      v14 = v20;
      *(_OWORD *)((char *)this + 1256) = *((_OWORD *)v2 + 3);
      v15 = *((_DWORD *)v2 + 16);
      v16 = v21;
      *(_OWORD *)((char *)this + 1276) = v14;
      *((_DWORD *)this + 318) = v15;
      v17 = v22;
      v18 = v24;
      *(_OWORD *)((char *)this + 1292) = v16;
      *((_BYTE *)this + 1204) = 1;
      v19 = v23;
      *(_OWORD *)((char *)this + 1308) = v17;
      *(_OWORD *)((char *)this + 1324) = v19;
      *((_DWORD *)this + 335) = v18;
    }
    else
    {
      v4 = -2003304441;
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0LL, -2003304441, 0x4Bu);
    }
  }
  if ( v5 )
    CArrayBasedCoverageSet::SetDeviceTransform((COcclusionContext *)((char *)this + 448), v2);
  return v4;
}
