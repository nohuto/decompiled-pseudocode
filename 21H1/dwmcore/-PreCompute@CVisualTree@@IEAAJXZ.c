/*
 * XREFs of ?PreCompute@CVisualTree@@IEAAJXZ @ 0x180069908
 * Callers:
 *     ?CleanTree@CVisualTree@@UEAAJXZ @ 0x18006A520 (-CleanTree@CVisualTree@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Optimize@CDirtyRegion@@QEAAXXZ @ 0x180067630 (-Optimize@CDirtyRegion@@QEAAXXZ.c)
 *     ?PreCompute@CPreComputeContext@@IEAAJPEAVCDirtyRegion@@@Z @ 0x180068790 (-PreCompute@CPreComputeContext@@IEAAJPEAVCDirtyRegion@@@Z.c)
 *     ?IsEmpty@CDirtyRegion@@QEBA_NXZ @ 0x180069EBC (-IsEmpty@CDirtyRegion@@QEBA_NXZ.c)
 *     ?Initialize@CDirtyRegion@@IEAAX_N@Z @ 0x18006A070 (-Initialize@CDirtyRegion@@IEAAX_N@Z.c)
 *     ?AddAdditionalDirtyRect@CVisual@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007AA50 (-AddAdditionalDirtyRect@CVisual@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF.c)
 *     ?GetUnoptimizedDirtyRects@CDirtyRegion@@IEBA?AV?$span@$$CBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@XZ @ 0x1800BB680 (-GetUnoptimizedDirtyRects@CDirtyRegion@@IEBA-AV-$span@$$CBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0xq_EventWriteTransfer @ 0x180156064 (McTemplateU0xq_EventWriteTransfer.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x1801576F4 (McTemplateU0x_EventWriteTransfer.c)
 */

__int64 __fastcall CVisualTree::PreCompute(__m128 *this)
{
  unsigned int v1; // edi
  unsigned __int64 v3; // r12
  int v4; // eax
  __int64 v5; // rcx
  CVisual *v6; // r15
  __int64 i; // rsi
  __int64 v8; // rcx
  __int64 j; // rsi
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int128 *v13; // rsi
  __int64 v14; // r14
  unsigned __int8 v15; // al
  __int64 v16; // rcx
  __int128 v17; // [rsp+30h] [rbp-48h] BYREF

  v1 = 0;
  v3 = *(_QWORD *)(this[1].m128_u64[0] + 352);
  if ( this[368].m128_i8[6] )
  {
    v1 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2003292412, 0x13Cu, 0LL);
  }
  else
  {
    this[368].m128_i8[6] = 1;
    if ( this[5].m128_u64[1] != v3 )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 4) != 0 )
      {
        v15 = (*(__int64 (__fastcall **)(__m128 *))(this->m128_u64[0] + 200))(this);
        McTemplateU0xq_EventWriteTransfer(v16, &EVTDESC_MILEVENT_MEDIA_UCE_PRECOMPUTEEVENT_Start, this, v15);
      }
      CDirtyRegion::Initialize((CDirtyRegion *)&this[79], this[368].m128_i8[4]);
      v4 = CPreComputeContext::PreCompute((CPreComputeContext *)&this[6], (struct CDirtyRegion *)&this[79]);
      v1 = v4;
      if ( v4 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x105u, 0LL);
      }
      else
      {
        this[368].m128_i8[4] = 0;
        if ( !CDirtyRegion::IsEmpty((CDirtyRegion *)&this[79]) )
        {
          v6 = *(CVisual **)(this[3].m128_u64[1] + 80);
          if ( v6 )
          {
            CDirtyRegion::GetUnoptimizedDirtyRects(&this[79], &v17);
            v13 = (__int128 *)*((_QWORD *)&v17 + 1);
            v14 = *((_QWORD *)&v17 + 1) + 16 * v17;
            while ( v13 != (__int128 *)v14 )
            {
              v17 = *v13;
              CVisual::AddAdditionalDirtyRect(v6);
              ++v13;
            }
          }
        }
        for ( i = (__int64)(this[358].m128_u64[1] - this[358].m128_u64[0]) >> 3; (int)i > 0; LODWORD(i) = i - 1 )
        {
          v11 = *(_QWORD *)(this[358].m128_u64[0] + 8LL * (unsigned int)(i - 1));
          (*(void (__fastcall **)(__int64, __m128 *, __m128 *))(*(_QWORD *)v11 + 16LL))(v11, this, this + 79);
        }
        CDirtyRegion::Optimize(this + 79);
        this[5].m128_u64[1] = v3;
        for ( j = (__int64)(this[358].m128_u64[1] - this[358].m128_u64[0]) >> 3; (int)j > 0; LODWORD(j) = j - 1 )
        {
          v12 = *(_QWORD *)(this[358].m128_u64[0] + 8LL * (unsigned int)(j - 1));
          (*(void (__fastcall **)(__int64, __m128 *, __m128 *))(*(_QWORD *)v12 + 8LL))(v12, this, this + 79);
        }
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        McTemplateU0x_EventWriteTransfer(v8, &EVTDESC_MILEVENT_MEDIA_UCE_PRECOMPUTEEVENT_Stop, this);
    }
    this[368].m128_i8[6] = 0;
  }
  return v1;
}
