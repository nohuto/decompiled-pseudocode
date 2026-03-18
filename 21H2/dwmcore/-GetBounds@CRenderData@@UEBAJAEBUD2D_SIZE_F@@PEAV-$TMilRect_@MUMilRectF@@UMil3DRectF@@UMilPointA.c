/*
 * XREFs of ?GetBounds@CRenderData@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18005A9F4
 * Callers:
 *     ?GetBounds@CRenderData@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801079F0 (-GetBounds@CRenderData@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF.c)
 * Callees:
 *     ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x18005AAF0 (-Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800B3CA0 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 */

__int64 __fastcall CRenderData::GetBounds(__int64 a1, __int64 a2, _OWORD *a3)
{
  int v3; // ebx
  __int64 v7; // rdi
  int v8; // eax
  unsigned int v9; // ecx

  v3 = 0;
  if ( !*(_BYTE *)(a1 - 32) )
    goto LABEL_2;
  v7 = a1 - 328;
  *(_DWORD *)(v7 + 212) = 0;
  *(_DWORD *)(v7 + 208) = 0;
  *(_DWORD *)(v7 + 204) = 0;
  *(_DWORD *)(v7 + 200) = 0;
  *(_DWORD *)(v7 + 284) = 0;
  *(_BYTE *)(v7 + 288) = 0;
  v8 = CRenderData::Draw(a1 - 328, a1 - 328 + 192, 1LL);
  v3 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x169u, 0LL);
  *(_BYTE *)(v7 + 296) = 0;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v3, 0x96u, 0LL);
  }
  else
  {
LABEL_2:
    *a3 = *(_OWORD *)(a1 - 128);
    *(_BYTE *)(a1 - 30) = (unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(a1 - 128) != 0;
  }
  return (unsigned int)v3;
}
