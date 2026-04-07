/*
 * XREFs of ?Initialize@CRippleEffect@@IEAAJPEAPEAVCBitmapSource@@@Z @ 0x18009B80C
 * Callers:
 *     ?Create@CRippleEffect@@SAJPEAPEAVCBitmapSource@@PEAPEAV1@@Z @ 0x18009B738 (-Create@CRippleEffect@@SAJPEAPEAVCBitmapSource@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x1800242F0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Initialize@CVisual@@MEAAJXZ @ 0x180027E10 (-Initialize@CVisual@@MEAAJXZ.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x18003B400 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?Create@CImage@@SAJPEAPEAV1@@Z @ 0x18003EB34 (-Create@CImage@@SAJPEAPEAV1@@Z.c)
 */

__int64 __fastcall CRippleEffect::Initialize(struct tagSIZE *this, struct CBitmapSource **a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int128 v6; // xmm1
  struct CVisual **v7; // rsi
  CDesktopManager *v8; // rcx
  __m128i v9; // xmm0
  int v10; // eax
  int inserted; // eax

  v4 = CVisual::Initialize((CVisual *)this);
  v5 = v4;
  if ( v4 >= 0 )
  {
    *(_OWORD *)&this[36].cx = *(_OWORD *)a2;
    *(_OWORD *)&this[38].cx = *((_OWORD *)a2 + 1);
    *(_OWORD *)&this[40].cx = *((_OWORD *)a2 + 2);
    *(_OWORD *)&this[42].cx = *((_OWORD *)a2 + 3);
    *(_OWORD *)&this[44].cx = *((_OWORD *)a2 + 4);
    v6 = *((_OWORD *)a2 + 5);
    v7 = (struct CVisual **)&this[35];
    *(_OWORD *)&this[46].cx = v6;
    this[31] = *(struct tagSIZE *)(*(_QWORD *)&this[36] + 24LL);
    v8 = CDesktopManager::s_pDesktopManagerInstance;
    v9 = _mm_cvtsi32_si128(this[31].cy);
    this[31].cx = (int)((double)this[31].cx * *((double *)CDesktopManager::s_pDesktopManagerInstance + 60));
    this[31].cy = (int)(_mm_cvtepi32_pd(v9).m128d_f64[0] * *((double *)v8 + 60));
    v10 = CImage::Create((struct CImage **)&this[35]);
    v5 = v10;
    if ( v10 >= 0 )
    {
      inserted = VisualCollection::InsertRelative((VisualCollection *)&this[4], *v7, 0LL, 0, 1);
      v5 = inserted;
      if ( inserted >= 0 )
        CVisual::SetSize(*v7, this + 31);
      else
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x55u);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x54u);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x46u);
  }
  return v5;
}
