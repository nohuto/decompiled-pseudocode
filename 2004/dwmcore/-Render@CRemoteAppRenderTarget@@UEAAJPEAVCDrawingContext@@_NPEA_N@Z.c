/*
 * XREFs of ?Render@CRemoteAppRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800E7894
 * Callers:
 *     ?Render@CRemoteAppRenderTarget@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800EFFA0 (-Render@CRemoteAppRenderTarget@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180049364 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IsEmpty@CDirtyRegion@@QEBA_NXZ @ 0x18007AE4C (-IsEmpty@CDirtyRegion@@QEBA_NXZ.c)
 *     ?CalcOcclusion@CDirtyRegion@@QEBAJXZ @ 0x1800D353C (-CalcOcclusion@CDirtyRegion@@QEBAJXZ.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     ?GetTreeBounds@CRemoteAppRenderTarget@@IEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1801876AC (-GetTreeBounds@CRemoteAppRenderTarget@@IEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndS.c)
 *     ?RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180187C6C (-RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVISwapChain@@@Z @ 0x180187FB4 (-RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVISwapChain@@@Z.c)
 *     ?ScheduleScribblesForRenderTarget@CSuperWetInkManager@@QEAAJPEAVIVailRenderTarget@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180196E9C (-ScheduleScribblesForRenderTarget@CSuperWetInkManager@@QEAAJPEAVIVailRenderTarget@@AEBV-$TMilRec.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::Render(
        CRemoteAppRenderTarget *this,
        struct CDrawingContext *a2,
        __int64 a3,
        bool *a4)
{
  unsigned int v4; // ebx
  char v5; // si
  __int64 v9; // r10
  __int64 v10; // xmm1_8
  CDirtyRegion *v11; // r9
  __int64 v12; // r10
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  char v17; // al
  int v18; // eax
  __int64 v19; // rcx
  _BYTE v21[8]; // [rsp+30h] [rbp-40h] BYREF
  __int128 v22; // [rsp+38h] [rbp-38h] BYREF
  __int64 v23; // [rsp+48h] [rbp-28h]
  float v24[4]; // [rsp+50h] [rbp-20h] BYREF

  v4 = 0;
  v5 = 0;
  *a4 = 0;
  if ( *(int *)(*((_QWORD *)this - 40) + 952LL) >= 5 )
  {
    if ( *((_QWORD *)this - 29) )
    {
      if ( *((_QWORD *)this - 20) )
      {
        if ( !CDirtyRegion::IsEmpty(*((CDirtyRegion **)this - 20)) )
        {
          v10 = *(_QWORD *)(v9 + 80);
          v22 = *(_OWORD *)(v9 + 64);
          v23 = v10;
          if ( !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v22) )
          {
            CDirtyRegion::CalcOcclusion(v11);
            v12 = *((_QWORD *)this - 40);
            if ( *(_DWORD *)(v12 + 952) == 5 )
            {
              v18 = CRemoteAppRenderTarget::RailMultimonRenderAndPresent(
                      (CRemoteAppRenderTarget *)((char *)this - 336),
                      a2);
              v4 = v18;
              if ( v18 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0xB9u, 0LL);
                return v4;
              }
            }
            else if ( *(_DWORD *)(v12 + 952) == 6 && *((_QWORD *)this - 22) )
            {
              v5 = 1;
              *(_QWORD *)(*(_QWORD *)(v12 + 128) + 56LL) = ((unsigned __int64)this - 192) & -(__int64)(this != (CRemoteAppRenderTarget *)336);
              v13 = CRemoteAppRenderTarget::RenderDirtyRegion(
                      (CRemoteAppRenderTarget *)((char *)this - 336),
                      a2,
                      *((struct ISwapChain **)this - 22));
              v4 = v13;
              if ( v13 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0xCCu, 0LL);
LABEL_20:
                *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this - 40) + 128LL) + 56LL) = 0LL;
                return v4;
              }
              *((_BYTE *)this - 56) = 1;
              *a4 = 1;
            }
          }
        }
      }
    }
  }
  if ( *(_DWORD *)(*((_QWORD *)this - 40) + 952LL) == 6 && *((_QWORD *)this - 29) )
  {
    CRemoteAppRenderTarget::GetTreeBounds((char *)this - 336, v24);
    *(_QWORD *)&v22 = 0LL;
    DWORD2(v22) = (int)(float)(v24[2] - v24[0]);
    HIDWORD(v22) = (int)(float)(v24[3] - v24[1]);
    v15 = CSuperWetInkManager::ScheduleScribblesForRenderTarget(
            *(_QWORD *)(*((_QWORD *)this - 40) + 128LL),
            ((unsigned __int64)this - 192) & -(__int64)(this != (CRemoteAppRenderTarget *)336),
            &v22,
            v21);
    v4 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0xE7u, 0LL);
    }
    else
    {
      v17 = v21[0];
      *((_BYTE *)this - 56) |= v21[0];
      *a4 |= v17;
    }
  }
  if ( v5 )
    goto LABEL_20;
  return v4;
}
