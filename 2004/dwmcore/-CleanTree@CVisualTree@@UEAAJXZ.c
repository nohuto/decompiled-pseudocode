/*
 * XREFs of ?CleanTree@CVisualTree@@UEAAJXZ @ 0x18007B490
 * Callers:
 *     ?CleanTree@CDesktopTree@@UEAAJXZ @ 0x18007B3F0 (-CleanTree@CDesktopTree@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PreCompute@CVisualTree@@IEAAJXZ @ 0x18007A254 (-PreCompute@CVisualTree@@IEAAJXZ.c)
 *     ?Optimize@CDirtyRegion@@QEAAXXZ @ 0x18007A420 (-Optimize@CDirtyRegion@@QEAAXXZ.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x18007AFB4 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?Initialize@CDirtyRegion@@IEAAX_N@Z @ 0x18007AFE0 (-Initialize@CDirtyRegion@@IEAAX_N@Z.c)
 *     ?UpdateTransformChildren@CPreComputeContext@@AEAAJ_N@Z @ 0x1800D02B0 (-UpdateTransformChildren@CPreComputeContext@@AEAAJ_N@Z.c)
 *     ?UpdateProjectedShadowCasters@CPreComputeContext@@AEAAJ_N@Z @ 0x1800D5044 (-UpdateProjectedShadowCasters@CPreComputeContext@@AEAAJ_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisualTree::CleanTree(CVisualTree *this)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rcx
  __int64 v7; // rax
  __int64 i; // rsi
  __int64 v9; // rcx
  __int64 j; // rsi
  __int64 v11; // rcx
  int updated; // eax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx

  v2 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 504LL) + 104LL))(*(_QWORD *)(*((_QWORD *)this + 2) + 504LL)) )
  {
    (*(void (__fastcall **)(CVisualTree *))(*(_QWORD *)this + 240LL))(this);
    if ( *(_BYTE *)(*((_QWORD *)this + 7) + 88LL) )
    {
      v4 = CVisualTree::PreCompute(this);
      v2 = v4;
      if ( v4 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0xA8u, 0LL);
    }
    else
    {
      v7 = 0LL;
      if ( g_pComposition )
        v7 = *((_QWORD *)g_pComposition + 44);
      if ( *((_QWORD *)this + 159) != v7 )
      {
        if ( !(*(unsigned __int8 (__fastcall **)(CVisualTree *))(*(_QWORD *)this + 200LL))(this) )
        {
          updated = CPreComputeContext::UpdateTransformChildren((CVisualTree *)((char *)this + 96), 1);
          if ( updated < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, updated, 0xB1u, 0LL);
          v14 = CPreComputeContext::UpdateProjectedShadowCasters((CVisualTree *)((char *)this + 96), 1);
          v2 = v14;
          if ( v14 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0xB3u, 0LL);
        }
        CDirtyRegion::Initialize((CVisualTree *)((char *)this + 1264), *((_BYTE *)this + 5892));
        *((_QWORD *)this + 159) = GetCurrentFrameId();
        *((_BYTE *)this + 5892) = 0;
        for ( i = (__int64)(*((_QWORD *)this + 717) - *((_QWORD *)this + 716)) >> 3; (int)i > 0; LODWORD(i) = i - 1 )
        {
          v9 = *(_QWORD *)(*((_QWORD *)this + 716) + 8LL * (unsigned int)(i - 1));
          (*(void (__fastcall **)(__int64, CVisualTree *, char *))(*(_QWORD *)v9 + 16LL))(v9, this, (char *)this + 1264);
        }
        CDirtyRegion::Optimize((__m128 *)this + 79);
        for ( j = (__int64)(*((_QWORD *)this + 717) - *((_QWORD *)this + 716)) >> 3; (int)j > 0; LODWORD(j) = j - 1 )
        {
          v11 = *(_QWORD *)(*((_QWORD *)this + 716) + 8LL * (unsigned int)(j - 1));
          (*(void (__fastcall **)(__int64, CVisualTree *, char *))(*(_QWORD *)v11 + 8LL))(
            v11,
            this,
            (char *)this + 1264);
        }
      }
    }
  }
  else
  {
    v2 = -2003304315;
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, -2003304315, 0xC6u, 0LL);
  }
  return v2;
}
