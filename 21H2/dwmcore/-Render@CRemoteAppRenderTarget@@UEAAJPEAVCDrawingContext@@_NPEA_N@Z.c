/*
 * XREFs of ?Render@CRemoteAppRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801C2FEC
 * Callers:
 *     ?Render@CRemoteAppRenderTarget@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x180106FD0 (-Render@CRemoteAppRenderTarget@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?ForceFullDirty@CDirtyRegion@@QEBAXXZ @ 0x180016094 (-ForceFullDirty@CDirtyRegion@@QEBAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CalcOcclusion@CDirtyRegion@@QEBAJXZ @ 0x1800FE59C (-CalcOcclusion@CDirtyRegion@@QEBAJXZ.c)
 *     ?IsEmpty@CDirtyRegion@@QEBA_NXZ @ 0x1800FE910 (-IsEmpty@CDirtyRegion@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ScheduleScribblesForRenderTarget@CSuperWetInkManager@@QEAAJPEAVIVailRenderTarget@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x1801A8160 (-ScheduleScribblesForRenderTarget@CSuperWetInkManager@@QEAAJPEAVIVailRenderTarget@@AEBV-$TMilRec.c)
 *     ?CalcVailAlphaMode@CRemoteAppRenderTarget@@IEBA?AW4DXGI_ALPHA_MODE@@XZ @ 0x1801C211C (-CalcVailAlphaMode@CRemoteAppRenderTarget@@IEBA-AW4DXGI_ALPHA_MODE@@XZ.c)
 *     ?GetContentOffset@CRemoteAppRenderTarget@@IEBA?AUD2D_POINT_2F@@XZ @ 0x1801C2538 (-GetContentOffset@CRemoteAppRenderTarget@@IEBA-AUD2D_POINT_2F@@XZ.c)
 *     ?GetTreeBounds@CRemoteAppRenderTarget@@IEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1801C27E8 (-GetTreeBounds@CRemoteAppRenderTarget@@IEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndS.c)
 *     ?RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@@Z @ 0x1801C2BF8 (-RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion.c)
 *     ?RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVISwapChain@@AEBVCDirtyRegion@@PEAW4ProtectionMode@1@@Z @ 0x1801C3404 (-RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVISwapChain@@AEBVCDirtyR.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::Render(
        CRemoteAppRenderTarget *this,
        struct CDrawingContext *a2,
        __int64 a3,
        bool *a4)
{
  __int64 v6; // rsi
  unsigned int v8; // ebx
  char v9; // r14
  CDirtyRegion *v10; // rsi
  __m128 v11; // xmm4
  __m128 v12; // xmm3
  int v13; // xmm2_4
  int v14; // xmm1_4
  char v15; // al
  unsigned int v16; // ebx
  __int64 (__fastcall ***v17)(_QWORD, float *); // rcx
  int v18; // xmm0_4
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // r8
  bool v23; // zf
  int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rcx
  char v30; // al
  int v31; // eax
  __int64 v32; // rcx
  _BYTE v34[8]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v35; // [rsp+38h] [rbp-28h] BYREF
  int v36; // [rsp+40h] [rbp-20h]
  int v37; // [rsp+44h] [rbp-1Ch]
  float v38; // [rsp+48h] [rbp-18h] BYREF
  float v39; // [rsp+4Ch] [rbp-14h]
  float v40; // [rsp+50h] [rbp-10h]
  float v41; // [rsp+54h] [rbp-Ch]

  *a4 = 0;
  v6 = *((_QWORD *)this - 31);
  v8 = 0;
  v9 = 0;
  if ( v6 )
  {
    if ( *(int *)(*((_QWORD *)this - 41) + 1104LL) >= 5 )
    {
      v10 = (CDirtyRegion *)(v6 + 104);
      if ( !CDirtyRegion::IsEmpty(v10) )
      {
        CDirtyRegion::CalcOcclusion(v10);
        if ( *(_DWORD *)(*((_QWORD *)this - 41) + 1104LL) == 5 )
        {
          v31 = CRemoteAppRenderTarget::RailMultimonRenderAndPresent(
                  (CRemoteAppRenderTarget *)((char *)this - 344),
                  a2,
                  v10);
          v8 = v31;
          if ( v31 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0LL, v31, 0x94u);
            return v8;
          }
        }
        else if ( *(_DWORD *)(*((_QWORD *)this - 41) + 1104LL) == 6 && *((_QWORD *)this - 22) )
        {
          CRemoteAppRenderTarget::GetContentOffset((CRemoteAppRenderTarget *)((char *)this - 344), &v38);
          v11 = (__m128)LODWORD(v38);
          v12 = (__m128)LODWORD(v39);
          if ( v38 != *((float *)this - 16) || v39 != *((float *)this - 15) )
          {
            v13 = LODWORD(v38) ^ _xmm;
            v14 = LODWORD(v39) ^ _xmm;
            *((_QWORD *)this - 20) = 1065353216LL;
            *((_QWORD *)this - 19) = 0LL;
            *((_DWORD *)this - 36) = 0;
            *(_QWORD *)((char *)this - 140) = 1065353216LL;
            *(_QWORD *)((char *)this - 132) = 0LL;
            *((_DWORD *)this - 31) = 0;
            *((_QWORD *)this - 15) = 1065353216LL;
            *((_DWORD *)this - 28) = v13;
            *((_DWORD *)this - 27) = v14;
            *((_DWORD *)this - 26) = 0;
            *((_DWORD *)this - 25) = 1065353216;
            v15 = *((_BYTE *)this - 95) & 0xC0 | 0x17;
            *((_BYTE *)this - 96) = 84;
            *((_BYTE *)this - 95) = v15;
            *((_QWORD *)this - 8) = _mm_unpacklo_ps(v11, v12).m128_u64[0];
            CDirtyRegion::ForceFullDirty(v10);
          }
          v16 = CRemoteAppRenderTarget::CalcVailAlphaMode((CRemoteAppRenderTarget *)((char *)this - 344));
          v17 = (__int64 (__fastcall ***)(_QWORD, float *))(*(int *)(*(_QWORD *)(*((_QWORD *)this - 22) + 8LL) + 8LL)
                                                          + *((_QWORD *)this - 22)
                                                          + 8LL);
          if ( v16 != *(_DWORD *)((**v17)(v17, &v38) + 4) )
          {
            if ( v16 == 3 )
              v18 = (int)FLOAT_1_0;
            else
              v18 = 0;
            *((_DWORD *)this - 52) = v18;
            (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this - 22) + 56LL))(*((_QWORD *)this - 22), v16);
            CDirtyRegion::ForceFullDirty(v10);
          }
          v9 = 1;
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this - 41) + 256LL) + 88LL) = ((unsigned __int64)this - 192) & -(__int64)(this != (CRemoteAppRenderTarget *)344);
          v19 = CRemoteAppRenderTarget::RenderDirtyRegion(
                  (CRemoteAppRenderTarget *)((char *)this - 344),
                  a2,
                  *((struct ISwapChain **)this - 22),
                  v10,
                  (enum CRemoteAppRenderTarget::ProtectionMode *)&v38);
          v8 = v19;
          if ( v19 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0LL, v19, 0xC6u);
          }
          else
          {
            if ( v38 == 0.0 || LODWORD(v38) == *((_DWORD *)this - 14) )
            {
LABEL_25:
              *((_BYTE *)this - 50) = 1;
              *a4 = 1;
              goto LABEL_26;
            }
            v21 = *((_QWORD *)this - 22);
            v22 = 32LL;
            v23 = LODWORD(v38) == 2;
            *((float *)this - 14) = v38;
            if ( !v23 )
              v22 = 0LL;
            v24 = (*(__int64 (__fastcall **)(__int64, char *, __int64, _QWORD))(*(_QWORD *)v21 + 48LL))(
                    v21,
                    (char *)this - 240,
                    v22,
                    0LL);
            v8 = v24;
            if ( v24 >= 0 )
            {
              CDirtyRegion::ForceFullDirty(v10);
              v26 = CRemoteAppRenderTarget::RenderDirtyRegion(
                      (CRemoteAppRenderTarget *)((char *)this - 344),
                      a2,
                      *((struct ISwapChain **)this - 22),
                      v10,
                      (enum CRemoteAppRenderTarget::ProtectionMode *)&v38);
              v8 = v26;
              if ( v26 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0LL, v26, 0xDAu);
                goto LABEL_35;
              }
              goto LABEL_25;
            }
            MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0LL, v24, 0xD3u);
          }
LABEL_35:
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this - 41) + 256LL) + 88LL) = 0LL;
          return v8;
        }
      }
    }
  }
LABEL_26:
  if ( *(_DWORD *)(*((_QWORD *)this - 41) + 1104LL) == 6 && *((_QWORD *)this - 31) )
  {
    CRemoteAppRenderTarget::GetTreeBounds((__int64)this - 344, (__int64)&v38);
    v35 = 0LL;
    v36 = (int)(float)(v40 - v38);
    v37 = (int)(float)(v41 - v39);
    v28 = CSuperWetInkManager::ScheduleScribblesForRenderTarget(
            *(struct ID3D12Device **)(*((_QWORD *)this - 41) + 256LL),
            ((unsigned __int64)this - 192) & -(__int64)(this != (CRemoteAppRenderTarget *)344),
            (__int64)&v35,
            v34);
    v8 = v28;
    if ( v28 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0LL, v28, 0xF7u);
    }
    else
    {
      v30 = v34[0];
      *((_BYTE *)this - 50) |= v34[0];
      *a4 |= v30;
    }
  }
  if ( v9 )
    goto LABEL_35;
  return v8;
}
