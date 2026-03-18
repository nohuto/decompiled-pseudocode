/*
 * XREFs of ?CleanTree@CVisualTree@@UEAAJXZ @ 0x18006A520
 * Callers:
 *     ?CleanTree@CDesktopTree@@UEAAJXZ @ 0x18006A480 (-CleanTree@CDesktopTree@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Optimize@CDirtyRegion@@QEAAXXZ @ 0x180067630 (-Optimize@CDirtyRegion@@QEAAXXZ.c)
 *     ?PreCompute@CVisualTree@@IEAAJXZ @ 0x180069908 (-PreCompute@CVisualTree@@IEAAJXZ.c)
 *     ?Initialize@CDirtyRegion@@IEAAX_N@Z @ 0x18006A070 (-Initialize@CDirtyRegion@@IEAAX_N@Z.c)
 *     ?UpdateTransformChildren@CPreComputeContext@@AEAAJ_N@Z @ 0x1800C8EA0 (-UpdateTransformChildren@CPreComputeContext@@AEAAJ_N@Z.c)
 *     ?UpdateProjectedShadowCasters@CPreComputeContext@@AEAAJ_N@Z @ 0x1800CD274 (-UpdateProjectedShadowCasters@CPreComputeContext@@AEAAJ_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisualTree::CleanTree(__m128 *this)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rcx
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  __int64 i; // rsi
  __int64 v10; // rcx
  __int64 j; // rsi
  __int64 v12; // rcx
  int updated; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx

  v2 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(this[1].m128_u64[0] + 504) + 104LL))(*(_QWORD *)(this[1].m128_u64[0] + 504)) )
  {
    (*(void (__fastcall **)(__m128 *))(this->m128_u64[0] + 240))(this);
    if ( *(_BYTE *)(this[3].m128_u64[1] + 88) )
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
      if ( this[79].m128_u64[1] != v7 )
      {
        if ( !(*(unsigned __int8 (__fastcall **)(__m128 *))(this->m128_u64[0] + 200))(this) )
        {
          updated = CPreComputeContext::UpdateTransformChildren((CPreComputeContext *)&this[6], 1);
          if ( updated < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, updated, 0xB1u, 0LL);
          v15 = CPreComputeContext::UpdateProjectedShadowCasters((CPreComputeContext *)&this[6], 1);
          v2 = v15;
          if ( v15 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0xB3u, 0LL);
        }
        CDirtyRegion::Initialize((CDirtyRegion *)&this[79], this[368].m128_i8[4]);
        v8 = 0LL;
        if ( g_pComposition )
          v8 = *((_QWORD *)g_pComposition + 44);
        this[79].m128_u64[1] = v8;
        this[368].m128_i8[4] = 0;
        for ( i = (__int64)(this[358].m128_u64[1] - this[358].m128_u64[0]) >> 3; (int)i > 0; LODWORD(i) = i - 1 )
        {
          v10 = *(_QWORD *)(this[358].m128_u64[0] + 8LL * (unsigned int)(i - 1));
          (*(void (__fastcall **)(__int64, __m128 *, __m128 *))(*(_QWORD *)v10 + 16LL))(v10, this, this + 79);
        }
        CDirtyRegion::Optimize(this + 79);
        for ( j = (__int64)(this[358].m128_u64[1] - this[358].m128_u64[0]) >> 3; (int)j > 0; LODWORD(j) = j - 1 )
        {
          v12 = *(_QWORD *)(this[358].m128_u64[0] + 8LL * (unsigned int)(j - 1));
          (*(void (__fastcall **)(__int64, __m128 *, __m128 *))(*(_QWORD *)v12 + 8LL))(v12, this, this + 79);
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
