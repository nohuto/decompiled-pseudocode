/*
 * XREFs of ?PushLayerTransformOnExplicitSurfaceInput@CTreeEffectLayer@@IEAAXXZ @ 0x180005A30
 * Callers:
 *     ?RenderEffect@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@@Z @ 0x1800051C4 (-RenderEffect@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUMilR.c)
 * Callees:
 *     ?IsAutomaticBoundsToLocalSpaceEnabled@CLayerVisual@@QEBA_NXZ @ 0x180005C44 (-IsAutomaticBoundsToLocalSpaceEnabled@CLayerVisual@@QEBA_NXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800E9464 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ?GetTransformToLayerSpace@CTreeEffectLayer@@IEBA?AVMatrix3x2F@D2D1@@XZ @ 0x180190858 (-GetTransformToLayerSpace@CTreeEffectLayer@@IEBA-AVMatrix3x2F@D2D1@@XZ.c)
 */

void __fastcall CTreeEffectLayer::PushLayerTransformOnExplicitSurfaceInput(CTreeEffectLayer *this)
{
  CLayerVisual *v2; // rcx
  __int64 v3; // rcx
  unsigned int v4; // ebx
  unsigned int v5; // ebp
  __int64 v6; // r8
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r14
  __int64 v11; // xmm0_8
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = (CLayerVisual *)*((_QWORD *)this + 32);
  if ( v2 )
  {
    if ( CLayerVisual::IsAutomaticBoundsToLocalSpaceEnabled(v2) )
    {
      v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 31) + 88LL) + 72LL) + 48LL);
      v4 = 0;
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3);
      if ( v5 )
      {
        v7 = 0LL;
        do
        {
          v8 = *((_QWORD *)this + 31);
          if ( v4 >= *(_DWORD *)(v8 + 136) )
          {
            wil::details::in1diag3::_FailFast_Unexpected(
              retaddr,
              (void *)0x1E8,
              (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\effectbrush.cpp",
              (const char *)retaddr);
            JUMPOUT(0x180005B2DLL);
          }
          v9 = *(_QWORD *)(v8 + 112);
          v10 = *(_QWORD *)(v7 + v9);
          if ( v10 )
          {
            if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, __int64, wil::details::in1diag3 *))(*(_QWORD *)v10 + 56LL))(
                   *(_QWORD *)(v7 + v9),
                   180LL,
                   v6,
                   retaddr) )
            {
              CTreeEffectLayer::GetTransformToLayerSpace(this, &v12);
              v11 = v13;
              *(_OWORD *)(v10 + 112) = v12;
              *(_QWORD *)(v10 + 128) = v11;
            }
          }
          ++v4;
          v7 += 8LL;
        }
        while ( v4 < v5 );
      }
    }
  }
}
