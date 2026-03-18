/*
 * XREFs of ?Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV?$span@$$CBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@MAEBV?$span@PEAVCOverlayContext@@$0?0@4@@Z @ 0x18004FAB0
 * Callers:
 *     ?CalcOcclusionAndCollectOverlayCandidates@CDesktopTree@@QEAAJXZ @ 0x180069B08 (-CalcOcclusionAndCollectOverlayCandidates@CDesktopTree@@QEAAJXZ.c)
 *     ?CalcOcclusion@CVisualTree@@UEAAJAEBV?$span@$$CBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@PEAVCOcclusionContext@@M@Z @ 0x1800C36C0 (-CalcOcclusion@CVisualTree@@UEAAJAEBV-$span@$$CBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointA.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x180062E20 (--$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCOcclusionContext.c)
 *     ?Inflate@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x180068020 (-Inflate@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800B5618 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?SetDeviceTransform@CArrayBasedCoverageSet@@QEAAXPEBVCMILMatrix@@@Z @ 0x1800C9994 (-SetDeviceTransform@CArrayBasedCoverageSet@@QEAAXPEBVCMILMatrix@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0xq_EventWriteTransfer @ 0x180156064 (McTemplateU0xq_EventWriteTransfer.c)
 */

__int64 __fastcall COcclusionContext::Compute(__int64 a1, __int64 a2, _QWORD *a3, float a4, _OWORD *a5)
{
  float v8; // xmm6_4
  __int64 v9; // rdx
  char v10; // al
  __int64 v11; // rcx
  unsigned int v12; // ebp
  __int64 v13; // r8
  float v14; // xmm0_4
  __int64 v15; // rax
  float v16; // xmm0_4
  float v17; // xmm1_4
  float v18; // xmm0_4
  float v19; // xmm2_4
  float v20; // xmm1_4
  float *v21; // rax
  __int64 v22; // rax
  char v23; // dl
  __int64 v24; // rcx
  __int64 v25; // r8
  int v26; // eax
  __int64 v27; // rcx
  struct CComposition *v28; // rcx
  __int64 v29; // rax
  unsigned int i; // esi
  __int64 v31; // rcx
  __int64 result; // rax
  __int64 v33; // rcx

  v8 = 0.0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0xq_EventWriteTransfer(a1, &EVTDESC_ETWGUID_OCCLUSIONEVENT_Start, a2, 0LL);
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 1460) = 0LL;
  *(_DWORD *)(a1 + 432) = 0;
  DynArrayImpl<0>::ShrinkToSize(a1 + 408, 36LL);
  *(_DWORD *)(a1 + 824) = 0;
  DynArrayImpl<0>::ShrinkToSize(a1 + 800, 36LL);
  v10 = 0;
  *(_DWORD *)(a1 + 1456) = 0;
  if ( *(_BYTE *)(a1 + 1244) )
  {
    *(_BYTE *)(a1 + 1244) = 0;
    v10 = 1;
  }
  v11 = 1065353216LL;
  *(_QWORD *)(a1 + 1248) = 1065353216LL;
  *(_QWORD *)(a1 + 1256) = 0LL;
  *(_DWORD *)(a1 + 1264) = 0;
  *(_QWORD *)(a1 + 1268) = 1065353216LL;
  *(_QWORD *)(a1 + 1276) = 0LL;
  *(_DWORD *)(a1 + 1284) = 0;
  *(_QWORD *)(a1 + 1288) = 1065353216LL;
  *(_QWORD *)(a1 + 1296) = 0LL;
  *(_DWORD *)(a1 + 1304) = 0;
  *(_DWORD *)(a1 + 1308) = 1065353216;
  *(_WORD *)(a1 + 1312) = 32085;
  *(_QWORD *)(a1 + 1316) = 1065353216LL;
  *(_QWORD *)(a1 + 1324) = 0LL;
  *(_DWORD *)(a1 + 1332) = 0;
  *(_QWORD *)(a1 + 1336) = 1065353216LL;
  *(_QWORD *)(a1 + 1344) = 0LL;
  *(_DWORD *)(a1 + 1352) = 0;
  *(_QWORD *)(a1 + 1356) = 1065353216LL;
  *(_QWORD *)(a1 + 1364) = 0LL;
  *(_DWORD *)(a1 + 1372) = 0;
  *(_DWORD *)(a1 + 1376) = 1065353216;
  *(_WORD *)(a1 + 1380) = 32085;
  if ( v10 )
    CArrayBasedCoverageSet::SetDeviceTransform((CArrayBasedCoverageSet *)(a1 + 408), 0LL);
  *(_QWORD *)(a1 + 1064) = 0LL;
  v12 = 0;
  v13 = 0LL;
  if ( *(_DWORD *)a3 )
  {
    v9 = 0LL;
    do
    {
      if ( (unsigned __int64)(unsigned int)v13 >= *a3 )
      {
        ((void (__fastcall *)(__int64, __int64))`gsl::details::get_terminate_handler'::`2'::handler)(v11, v9);
        __debugbreak();
      }
      v11 = 2LL * (unsigned int)v13;
      *(_OWORD *)(a1 + 16 * (v9 + 67)) = *(_OWORD *)(a3[1] + 16LL * (unsigned int)v13);
      v14 = *(float *)(a2 + 64);
      v15 = 2 * (*(_QWORD *)(a1 + 1064) + 67LL);
      if ( v14 > *(float *)(a1 + 16 * (*(_QWORD *)(a1 + 1064) + 67LL)) )
        *(float *)(a1 + 16 * (*(_QWORD *)(a1 + 1064) + 67LL)) = v14;
      v16 = *(float *)(a2 + 68);
      if ( v16 > *(float *)(a1 + 8 * v15 + 4) )
        *(float *)(a1 + 8 * v15 + 4) = v16;
      v17 = *(float *)(a2 + 72);
      v18 = *(float *)(a1 + 8 * v15 + 8);
      if ( v18 > v17 )
      {
        *(float *)(a1 + 8 * v15 + 8) = v17;
        v18 = v17;
      }
      v19 = *(float *)(a2 + 76);
      v20 = *(float *)(a1 + 8 * v15 + 12);
      if ( v20 > v19 )
      {
        *(float *)(a1 + 8 * v15 + 12) = v19;
        v20 = v19;
        v18 = *(float *)(a1 + 8 * v15 + 8);
      }
      if ( v18 <= *(float *)(a1 + 8 * v15) || v20 <= *(float *)(a1 + 8 * v15 + 4) )
      {
        *(_QWORD *)(a1 + 8 * v15 + 8) = 0LL;
        *(_QWORD *)(a1 + 8 * v15) = 0LL;
      }
      v9 = *(_QWORD *)(a1 + 1064);
      v21 = (float *)(a1 + 16 * (v9 + 67));
      if ( v21[2] > *v21 && v21[3] > v21[1] )
      {
        if ( COERCE_FLOAT(LODWORD(a4) & _xmm) >= 0.0000011920929 )
        {
          TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::Inflate(a1 + 16 * ((unsigned int)v13 + 67LL));
          v9 = *(_QWORD *)(a1 + 1064);
        }
        *(float *)(a1 + 4 * v9 + 1200) = (float)(*(float *)(a1 + 16 * (v9 + 67) + 12)
                                               - *(float *)(a1 + 16 * (v9 + 67) + 4))
                                       * (float)(*(float *)(a1 + 16 * (v9 + 67) + 8) - *(float *)(a1 + 16 * (v9 + 67)));
        v22 = *(_QWORD *)(a1 + 1064);
        v8 = v8 + *(float *)(a1 + 4 * v22 + 1200);
        v9 = v22 + 1;
        *(_QWORD *)(a1 + 1064) = v22 + 1;
      }
      v13 = (unsigned int)(v13 + 1);
    }
    while ( (unsigned int)v13 < *(_DWORD *)a3 );
  }
  **(_DWORD **)(a1 + 1384) = 0;
  if ( !*(_QWORD *)(a1 + 1064) || COERCE_FLOAT(LODWORD(v8) & _xmm) < 0.0000011920929 )
    goto LABEL_33;
  v23 = 0;
  *(_OWORD *)(a1 + 1568) = *a5;
  v24 = *(_QWORD *)(a1 + 1576);
  v25 = v24 + 8LL * *(_QWORD *)(a1 + 1568);
  while ( v24 != v25 )
  {
    if ( *(_BYTE *)(*(_QWORD *)v24 + 11421LL) )
    {
      v23 = 1;
      break;
    }
    v24 += 8LL;
  }
  *(_BYTE *)(a1 + 1245) = v23;
  *(_QWORD *)(a1 + 120) = a2;
  v26 = CVisualTreeIterator::WalkSubtree<COcclusionContext>(a1 + 56, *(_QWORD *)(a2 + 56), a1);
  v12 = v26;
  if ( v26 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0xAFu, 0LL);
  }
  else
  {
LABEL_33:
    v28 = g_pComposition;
    v29 = 0LL;
    if ( g_pComposition )
      v29 = *((_QWORD *)g_pComposition + 44);
    *(_QWORD *)(a1 + 16) = v29;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0xq_EventWriteTransfer(v28, &EVTDESC_ETWGUID_OCCLUSIONEVENT_Stop, a2, 0LL);
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 136) = 0;
  for ( i = 0; i < *(_DWORD *)(a1 + 192); ++i )
  {
    v33 = *(_QWORD *)(*(_QWORD *)(a1 + 168) + 16LL * i);
    if ( v33 )
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v33 + 16LL))(v33, v9, v13);
  }
  *(_DWORD *)(a1 + 192) = 0;
  DynArrayImpl<0>::ShrinkToSize(a1 + 168, 16LL);
  v31 = *(_QWORD *)(a1 + 272);
  if ( v31 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 8LL))(v31);
    *(_QWORD *)(a1 + 272) = 0LL;
  }
  *(_DWORD *)(a1 + 376) = 0;
  DynArrayImpl<0>::ShrinkToSize(a1 + 352, 8LL);
  **(_DWORD **)(a1 + 1384) = 0;
  result = v12;
  *(_OWORD *)(a1 + 1568) = 0LL;
  return result;
}
