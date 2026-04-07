/*
 * XREFs of ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x18002AAA0
 * Callers:
 *     <none>
 * Callees:
 *     ?_UpdateAccentBlurBehind@CAccent@@IEAAXXZ @ 0x18000215C (-_UpdateAccentBlurBehind@CAccent@@IEAAXXZ.c)
 *     ?_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ @ 0x180004648 (-_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ.c)
 *     ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x180004B08 (-_UpdateBorderShadowParts@CAccent@@IEAAJXZ.c)
 *     ?_UpdateSolidFill@CAccent@@IEAAJPEAVCRenderDataVisual@@KPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x180005280 (-_UpdateSolidFill@CAccent@@IEAAJPEAVCRenderDataVisual@@KPEBV-$TMilRect_@MUMilRectF@@UMilPointAnd.c)
 *     ?_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x180005DA4 (-_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006618 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateAcrylicBackgroundBrush@CAccent@@IEAAJXZ @ 0x180010174 (-UpdateAcrylicBackgroundBrush@CAccent@@IEAAJXZ.c)
 *     ?UpdateLayout@CCanvasVisual@@UEAAJ_N@Z @ 0x180028B90 (-UpdateLayout@CCanvasVisual@@UEAAJ_N@Z.c)
 *     ?MoveNext@VisualCollectionIterator@@QEAA_NXZ @ 0x18002AC40 (-MoveNext@VisualCollectionIterator@@QEAA_NXZ.c)
 *     ?_UpdateResources@CAccent@@IEAAJXZ @ 0x18002B198 (-_UpdateResources@CAccent@@IEAAJXZ.c)
 *     ?_UpdateAcrylicBlurBehind@CAccent@@IEAAJXZ @ 0x180045220 (-_UpdateAcrylicBlurBehind@CAccent@@IEAAJXZ.c)
 *     __security_check_cookie @ 0x180053520 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 *     ?_GetSolidFillOpacity@CAccent@@IEAAMXZ @ 0x180093C10 (-_GetSolidFillOpacity@CAccent@@IEAAMXZ.c)
 */

__int64 __fastcall CAccent::UpdateLayout(CAccent *this)
{
  int v2; // ecx
  int updated; // edi
  __int64 v4; // rcx
  __int64 v6; // rcx
  unsigned int v7; // eax
  int v8; // edx
  int v9; // ecx
  __m128i v10; // xmm0
  int v11; // eax
  float v12; // xmm0_4
  int v13; // xmm0_4
  _DWORD *v14; // rcx
  __int64 v15; // rdx
  __m128i v16; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]

  v2 = *((_DWORD *)this + 70);
  if ( (unsigned int)(v2 - 2) > 3 )
  {
    updated = CAccent::_UpdateResources(this);
    if ( updated < 0 )
    {
      v15 = 539LL;
      goto LABEL_24;
    }
  }
  else
  {
    switch ( v2 )
    {
      case 3:
        CAccent::_UpdateAccentBlurBehind(this);
        break;
      case 4:
        updated = CAccent::_UpdateAcrylicBlurBehind(this);
        if ( updated < 0 )
        {
          v15 = 547LL;
          goto LABEL_24;
        }
        break;
      case 5:
        updated = CAccent::UpdateAcrylicBackgroundBrush((struct Windows::UI::Composition::ICompositionBrush **)this);
        if ( updated < 0 )
        {
          v15 = 551LL;
          goto LABEL_24;
        }
        break;
      default:
        v7 = 0;
        v8 = *((_DWORD *)this + 157) - *((_DWORD *)this + 155);
        v9 = *((_DWORD *)this + 156) - *((_DWORD *)this + 154);
        v16.m128i_i64[0] = 0LL;
        if ( v9 >= 0 )
          v7 = v9;
        v10 = _mm_cvtsi32_si128(v7);
        v11 = 0;
        LODWORD(v12) = _mm_cvtepi32_ps(v10).m128_u32[0];
        if ( v8 >= 0 )
          v11 = v8;
        *(float *)&v16.m128i_i32[2] = v12 + 0.0;
        *(float *)&v16.m128i_i32[3] = (float)v11 + 0.0;
        *(float *)&v13 = CAccent::_GetSolidFillOpacity(this);
        updated = CAccent::_UpdateSolidFill(v14, this, *((_DWORD *)this + 94), &v16, v13);
        if ( updated < 0 )
        {
          v15 = 562LL;
          goto LABEL_24;
        }
        break;
    }
  }
  if ( (*((_BYTE *)this + 284) & 0xE0) != 0 )
  {
    updated = CAccent::_EnsureBorderShadowAtlas(this);
    if ( updated < 0 )
    {
      v15 = 567LL;
      goto LABEL_24;
    }
    updated = CAccent::_UpdateBorderShadowParts((CAtlasedRectsVisual **)this);
    if ( updated < 0 )
    {
      v15 = 568LL;
      goto LABEL_24;
    }
    updated = CAccent::_UpdateBorderShadowForAccent(this);
    if ( updated < 0 )
    {
      v15 = 569LL;
LABEL_24:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (__int64)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
        (const char *)(unsigned int)updated);
      return (unsigned int)updated;
    }
  }
  updated = CCanvasVisual::UpdateLayout(this);
  if ( updated < 0 )
  {
    v15 = 572LL;
    goto LABEL_24;
  }
  v4 = *((_QWORD *)this + 54);
  if ( v4 )
  {
    updated = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v4 + 96LL))(v4, (char *)this + 120);
    if ( updated < 0 )
    {
      v15 = 577LL;
      goto LABEL_24;
    }
  }
  v16.m128i_i32[2] = -1;
  v16.m128i_i16[6] = 0;
  v16.m128i_i64[0] = (__int64)this + 32;
  while ( VisualCollectionIterator::MoveNext((VisualCollectionIterator *)&v16) )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(v16.m128i_i64[0] + 16) + 8LL * v16.m128i_u32[2]);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 24LL))(v6, 2LL);
  }
  return 0LL;
}
