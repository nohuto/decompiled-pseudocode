/*
 * XREFs of ?PresentNeeded@COverlayContext@@QEAA_NXZ @ 0x18002FDD8
 * Callers:
 *     ?Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800ECE84 (-Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?Render@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800EE604 (-Render@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N@Z @ 0x18017BE00 (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N@Z.c)
 *     ?RequiresFrontPlane@OverlayPlaneInfo@COverlayContext@@QEBA_NXZ @ 0x18017CE38 (-RequiresFrontPlane@OverlayPlaneInfo@COverlayContext@@QEBA_NXZ.c)
 *     ?IsIndependentFlip@CDirectFlipInfo@@QEBA_NXZ @ 0x18018455C (-IsIndependentFlip@CDirectFlipInfo@@QEBA_NXZ.c)
 *     ?RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ @ 0x1801845A0 (-RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ.c)
 *     ?SetIndependentFlip@CDirectFlipInfo@@QEAAJ_N@Z @ 0x1801845F8 (-SetIndependentFlip@CDirectFlipInfo@@QEAAJ_N@Z.c)
 */

char __fastcall COverlayContext::PresentNeeded(COverlayContext *this)
{
  CDirectFlipInfo *v2; // rcx
  char v3; // r14
  __int64 v4; // r8
  __int64 v5; // rbp
  unsigned int v6; // r12d
  __int64 v8; // rsi
  int v9; // eax
  __int64 v10; // rdx
  int v11; // r13d
  bool v12; // bl
  __int64 v13; // rbx
  char v14; // [rsp+60h] [rbp+8h]
  int v15; // [rsp+68h] [rbp+10h]
  __int64 v16; // [rsp+70h] [rbp+18h]

  v2 = (CDirectFlipInfo *)*((_QWORD *)this + 1412);
  v3 = 0;
  if ( !v2 )
  {
    v4 = *((_QWORD *)this + 914);
    v5 = (*((_QWORD *)this + 915) - v4) / 224;
    if ( !(_DWORD)v5
      || (v15 = 0,
          !COverlayContext::OverlayPlaneInfo::RequiresFrontPlane(*((COverlayContext::OverlayPlaneInfo **)this + 914))) )
    {
      v15 = 1;
    }
    v6 = 0;
    if ( !(_DWORD)v5 )
      goto LABEL_5;
    v8 = 0LL;
    v16 = 0LL;
    while ( 1 )
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v8 + v4 + 16) + 264LL))(*(_QWORD *)(v8 + v4 + 16));
      v10 = *((_QWORD *)this + 914);
      v11 = v9;
      v14 = 0;
      v12 = 1;
      if ( *(_DWORD *)(v8 + v10 + 204) != v6 + v15
        || *(_BYTE *)(v8 + v10 + 217) && (v9 < 3 || !*(_BYTE *)(v8 + v10 + 218)) )
      {
        break;
      }
      if ( *((_BYTE *)this + 11423) || v9 == -1 || CCommonRegistryData::m_fDisableIndependentFlip )
        goto LABEL_22;
LABEL_23:
      COverlayContext::EnsureIndependentFlipState(this, (struct COverlayContext::OverlayPlaneInfo *)(v16 + v10), v12);
      if ( v14
        || (!v12 || v11 < 3)
        && (v13 = *((_QWORD *)this + 914),
            *(_DWORD *)(v8 + v13 + 212) != (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(v8 + v13 + 16) + 232LL))(*(_QWORD *)(v8 + v13 + 16))) )
      {
        *(_BYTE *)(v8 + *((_QWORD *)this + 914) + 220) = 1;
      }
      v4 = *((_QWORD *)this + 914);
      v16 += 224LL;
      ++v6;
      v3 |= *(_BYTE *)(v8 + v4 + 220);
      v8 += 224LL;
      if ( v6 >= (unsigned int)v5 )
        goto LABEL_5;
    }
    v14 = 1;
LABEL_22:
    v12 = 0;
    goto LABEL_23;
  }
  if ( *((_BYTE *)this + 11423) && CDirectFlipInfo::IsIndependentFlip(v2) )
    CDirectFlipInfo::SetIndependentFlip(*((CDirectFlipInfo **)this + 1412), 0);
  v3 = CDirectFlipInfo::RenderingRealizationChanged(*((CDirectFlipInfo **)this + 1412));
LABEL_5:
  *((_BYTE *)this + 11423) = 0;
  return v3;
}
