/*
 * XREFs of ?TryEnableHardwareCursor@CCursorState@@QEAA_NU_LUID@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@VCMILMatrix@@@Z @ 0x18026B004
 * Callers:
 *     ?TryEnableHardwareCursor@CCursorVisual@@QEAA_NU_LUID@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x180212104 (-TryEnableHardwareCursor@CCursorVisual@@QEAA_NU_LUID@@IAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@U.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18000E7B0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800A6570 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ?SetRotation@CMILMatrix@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@M@Z @ 0x180260E04 (-SetRotation@CMILMatrix@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@M@Z.c)
 *     ??$_Emplace_back_with_unused_capacity@UMonitorData@CCursorState@@@?$vector@UMonitorData@CCursorState@@V?$allocator@UMonitorData@CCursorState@@@std@@@std@@AEAAAEAUMonitorData@CCursorState@@$$QEAU23@@Z @ 0x180267BE4 (--$_Emplace_back_with_unused_capacity@UMonitorData@CCursorState@@@-$vector@UMonitorData@CCursorS.c)
 *     ??$_Emplace_reallocate@UMonitorData@CCursorState@@@?$vector@UMonitorData@CCursorState@@V?$allocator@UMonitorData@CCursorState@@@std@@@std@@QEAAPEAUMonitorData@CCursorState@@QEAU23@$$QEAU23@@Z @ 0x180267DC4 (--$_Emplace_reallocate@UMonitorData@CCursorState@@@-$vector@UMonitorData@CCursorState@@V-$alloca.c)
 *     ??4?$shared_ptr@UShapeData@CCursorState@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180268CC4 (--4-$shared_ptr@UShapeData@CCursorState@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?EnsureHardwareOverlayCleared@CCursorState@@AEAAXPEAUMonitorData@1@@Z @ 0x180269CF8 (-EnsureHardwareOverlayCleared@CCursorState@@AEAAXPEAUMonitorData@1@@Z.c)
 *     ?FindMonitorData@CCursorState@@AEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UMonitorData@CCursorState@@@std@@@std@@@std@@U_LUID@@I@Z @ 0x180269D84 (-FindMonitorData@CCursorState@@AEAA-AV-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@UMonito.c)
 *     ?GetScaleAndRotation@CCursorState@@CA_NAEBVCMILMatrix@@PEAMPEAW4DXGI_MODE_ROTATION@@@Z @ 0x180269DC4 (-GetScaleAndRotation@CCursorState@@CA_NAEBVCMILMatrix@@PEAMPEAW4DXGI_MODE_ROTATION@@@Z.c)
 *     ?TryGetShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@IW4DXGI_MODE_ROTATION@@_N@Z @ 0x18026B2D4 (-TryGetShape@CCursorState@@AEAA-AV-$shared_ptr@UShapeData@CCursorState@@@std@@IW4DXGI_MODE_ROTAT.c)
 *     ?UpdateHardwareCursorOverlay@CCursorState@@AEAAXPEAUMonitorData@1@_N@Z @ 0x18026B51C (-UpdateHardwareCursorOverlay@CCursorState@@AEAAXPEAUMonitorData@1@_N@Z.c)
 */

bool __fastcall CCursorState::TryEnableHardwareCursor(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int128 *a4,
        CMILMatrix *a5)
{
  __int64 v9; // rbx
  __int64 *v10; // rcx
  __int64 v11; // rdx
  __int128 v12; // xmm0
  int v13; // eax
  float v14; // xmm2_4
  __int64 v15; // r8
  __int64 v16; // r9
  enum DXGI_MODE_ROTATION v17; // r14d
  CCursorState *v18; // rcx
  int v19; // eax
  int v20; // edi
  __int64 *Shape; // rax
  __int64 v22; // rax
  bool v23; // zf
  bool v24; // bl
  float v26; // [rsp+30h] [rbp-D0h] BYREF
  enum DXGI_MODE_ROTATION v27[4]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v28[64]; // [rsp+50h] [rbp-B0h] BYREF
  int v29; // [rsp+90h] [rbp-70h]
  __int64 v30; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v31; // [rsp+A8h] [rbp-58h]
  int v32; // [rsp+ECh] [rbp-14h]
  int v33; // [rsp+F0h] [rbp-10h]
  int v34; // [rsp+F4h] [rbp-Ch]
  int v35; // [rsp+F8h] [rbp-8h]
  int v36; // [rsp+FCh] [rbp-4h]
  std::_Ref_count_base *v37[2]; // [rsp+100h] [rbp+0h]
  int v38; // [rsp+118h] [rbp+18h]
  char v39; // [rsp+12Ch] [rbp+2Ch]

  EnterCriticalSection(&g_CursorManager);
  CCursorState::FindMonitorData(a1, v27, a2, a3);
  v9 = *(_QWORD *)v27;
  if ( *(_QWORD *)v27 == *(_QWORD *)(a1 + 88) )
  {
    v32 = 0;
    v10 = (__int64 *)(a1 + 80);
    v33 = 0;
    v34 = 0;
    v35 = 0;
    v36 = 0;
    v38 = 0;
    v11 = *(_QWORD *)(a1 + 88);
    v30 = a2;
    v31 = a3;
    *(_OWORD *)v37 = 0LL;
    v39 = 0;
    if ( v11 == *(_QWORD *)(a1 + 96) )
      std::vector<CCursorState::MonitorData>::_Emplace_reallocate<CCursorState::MonitorData>(v10, v11, (__int64)&v30);
    else
      std::vector<CCursorState::MonitorData>::_Emplace_back_with_unused_capacity<CCursorState::MonitorData>(
        (__int64)v10,
        (__int64)&v30);
    if ( v37[1] )
      std::_Ref_count_base::_Decref(v37[1]);
    v9 = *(_QWORD *)(a1 + 88) - 144LL;
  }
  *(_OWORD *)(v9 + 12) = *(_OWORD *)a5;
  *(_OWORD *)(v9 + 28) = *((_OWORD *)a5 + 1);
  *(_OWORD *)(v9 + 44) = *((_OWORD *)a5 + 2);
  v12 = *a4;
  *(_OWORD *)(v9 + 60) = *((_OWORD *)a5 + 3);
  v13 = *((_DWORD *)a5 + 16);
  *(_OWORD *)(v9 + 80) = v12;
  *(_DWORD *)(v9 + 76) = v13;
  v14 = *(float *)(a1 + 200);
  if ( COERCE_FLOAT(LODWORD(v14) & _xmm) >= 0.0000011920929 )
  {
    v29 = 0;
    v27[0] = DXGI_MODE_ROTATION_UNSPECIFIED;
    v27[1] = DXGI_MODE_ROTATION_UNSPECIFIED;
    v27[2] = (int)FLOAT_1_0;
    CMILMatrix::SetRotation((CMILMatrix *)v28, (const struct Windows::Foundation::Numerics::float3 *)v27, v14);
    CMILMatrix::Multiply(a5, (const struct CMILMatrix *)v28, v15, v16);
  }
  if ( g_disableHardwareCursors || !CCursorState::GetScaleAndRotation(a5, &v26, v27) )
  {
    *(_OWORD *)v27 = 0LL;
    std::shared_ptr<CCursorState::ShapeData>::operator=((_QWORD *)(v9 + 96), (__int64 *)v27);
    v18 = *(CCursorState **)&v27[2];
    if ( *(_QWORD *)&v27[2] )
      std::_Ref_count_base::_Decref(*(std::_Ref_count_base **)&v27[2]);
    *(_DWORD *)(v9 + 120) = 0;
  }
  else
  {
    v17 = v27[0];
    v18 = (CCursorState *)*(unsigned int *)(*(_QWORD *)(a1 + 184) + 12LL);
    v19 = *(_DWORD *)(a1 + 240);
    v26 = (float)((float)(v26 / *(float *)(a1 + 176)) * (float)(int)v18) + 6291456.25;
    v20 = (int)(LODWORD(v26) << 10) >> 11;
    if ( *(_DWORD *)(v9 + 120) != v19 || *(_DWORD *)(v9 + 112) != v20 || *(_DWORD *)(v9 + 116) != v27[0] )
    {
      Shape = (__int64 *)CCursorState::TryGetShape((CCursorState *)a1, *(_BYTE *)(a1 + 104));
      std::shared_ptr<CCursorState::ShapeData>::operator=((_QWORD *)(v9 + 96), Shape);
      v18 = *(CCursorState **)&v27[2];
      if ( *(_QWORD *)&v27[2] )
        std::_Ref_count_base::_Decref(*(std::_Ref_count_base **)&v27[2]);
      if ( *(_QWORD *)(v9 + 96) )
        CCursorState::UpdateHardwareCursorOverlay((CCursorState *)a1, (struct CCursorState::MonitorData *)v9, 1);
      *(_DWORD *)(v9 + 120) = *(_DWORD *)(a1 + 240);
      *(_DWORD *)(v9 + 112) = v20;
      *(_DWORD *)(v9 + 116) = v17;
    }
  }
  v22 = *(_QWORD *)(v9 + 96);
  v23 = v22 == 0;
  if ( !v22 )
  {
    CCursorState::EnsureHardwareOverlayCleared(v18, (struct CCursorState::MonitorData *)v9);
    v23 = *(_QWORD *)(v9 + 96) == 0LL;
  }
  v24 = !v23;
  LeaveCriticalSection(&g_CursorManager);
  return v24;
}
