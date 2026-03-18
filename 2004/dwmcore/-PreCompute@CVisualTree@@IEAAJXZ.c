/*
 * XREFs of ?PreCompute@CVisualTree@@IEAAJXZ @ 0x18007A254
 * Callers:
 *     ?CleanTree@CVisualTree@@UEAAJXZ @ 0x18007B490 (-CleanTree@CVisualTree@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddAdditionalDirtyRect@CVisual@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180041370 (-AddAdditionalDirtyRect@CVisual@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF.c)
 *     ?PreCompute@CPreComputeContext@@IEAAJPEAVCDirtyRegion@@@Z @ 0x180079150 (-PreCompute@CPreComputeContext@@IEAAJPEAVCDirtyRegion@@@Z.c)
 *     ?Optimize@CDirtyRegion@@QEAAXXZ @ 0x18007A420 (-Optimize@CDirtyRegion@@QEAAXXZ.c)
 *     ?IsEmpty@CDirtyRegion@@QEBA_NXZ @ 0x18007AE4C (-IsEmpty@CDirtyRegion@@QEBA_NXZ.c)
 *     ?Initialize@CDirtyRegion@@IEAAX_N@Z @ 0x18007AFE0 (-Initialize@CDirtyRegion@@IEAAX_N@Z.c)
 *     ?GetUnoptimizedDirtyRects@CDirtyRegion@@IEBA?AV?$span@$$CBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@XZ @ 0x1800C0CE4 (-GetUnoptimizedDirtyRects@CDirtyRegion@@IEBA-AV-$span@$$CBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0xq_EventWriteTransfer @ 0x1801544F4 (McTemplateU0xq_EventWriteTransfer.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x180155A68 (McTemplateU0x_EventWriteTransfer.c)
 */

__int64 __fastcall CVisualTree::PreCompute(CVisualTree *this)
{
  unsigned int v1; // edi
  __int64 v3; // r12
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
  v3 = *(_QWORD *)(*((_QWORD *)this + 2) + 352LL);
  if ( *((_BYTE *)this + 5894) )
  {
    v1 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2003292412, 0x13Cu, 0LL);
  }
  else
  {
    *((_BYTE *)this + 5894) = 1;
    if ( *((_QWORD *)this + 11) != v3 )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 4) != 0 )
      {
        v15 = (*(__int64 (__fastcall **)(CVisualTree *))(*(_QWORD *)this + 200LL))(this);
        McTemplateU0xq_EventWriteTransfer(v16, &EVTDESC_MILEVENT_MEDIA_UCE_PRECOMPUTEEVENT_Start, this, v15);
      }
      CDirtyRegion::Initialize((CVisualTree *)((char *)this + 1264), *((_BYTE *)this + 5892));
      v4 = CPreComputeContext::PreCompute((CVisualTree *)((char *)this + 96), (CVisualTree *)((char *)this + 1264));
      v1 = v4;
      if ( v4 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x105u, 0LL);
      }
      else
      {
        *((_BYTE *)this + 5892) = 0;
        if ( !CDirtyRegion::IsEmpty((CVisualTree *)((char *)this + 1264)) )
        {
          v6 = *(CVisual **)(*((_QWORD *)this + 7) + 80LL);
          if ( v6 )
          {
            CDirtyRegion::GetUnoptimizedDirtyRects((char *)this + 1264, &v17);
            v13 = (__int128 *)*((_QWORD *)&v17 + 1);
            v14 = *((_QWORD *)&v17 + 1) + 16 * v17;
            while ( v13 != (__int128 *)v14 )
            {
              v17 = *v13;
              CVisual::AddAdditionalDirtyRect(v6, (__int64)&v17);
              ++v13;
            }
          }
        }
        for ( i = (__int64)(*((_QWORD *)this + 717) - *((_QWORD *)this + 716)) >> 3; (int)i > 0; LODWORD(i) = i - 1 )
        {
          v11 = *(_QWORD *)(*((_QWORD *)this + 716) + 8LL * (unsigned int)(i - 1));
          (*(void (__fastcall **)(__int64, CVisualTree *, char *))(*(_QWORD *)v11 + 16LL))(
            v11,
            this,
            (char *)this + 1264);
        }
        CDirtyRegion::Optimize((CVisualTree *)((char *)this + 1264));
        *((_QWORD *)this + 11) = v3;
        for ( j = (__int64)(*((_QWORD *)this + 717) - *((_QWORD *)this + 716)) >> 3; (int)j > 0; LODWORD(j) = j - 1 )
        {
          v12 = *(_QWORD *)(*((_QWORD *)this + 716) + 8LL * (unsigned int)(j - 1));
          (*(void (__fastcall **)(__int64, CVisualTree *, char *))(*(_QWORD *)v12 + 8LL))(
            v12,
            this,
            (char *)this + 1264);
        }
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        McTemplateU0x_EventWriteTransfer(v8, &EVTDESC_MILEVENT_MEDIA_UCE_PRECOMPUTEEVENT_Stop, this);
    }
    *((_BYTE *)this + 5894) = 0;
  }
  return v1;
}
