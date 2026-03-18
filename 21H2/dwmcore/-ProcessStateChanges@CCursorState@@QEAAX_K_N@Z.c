/*
 * XREFs of ?ProcessStateChanges@CCursorState@@QEAAX_K_N@Z @ 0x180269F68
 * Callers:
 *     ?BeginUpdateCursors@CGlobalComposition@@UEAAXXZ @ 0x1800E16C0 (-BeginUpdateCursors@CGlobalComposition@@UEAAXXZ.c)
 *     ?TrySetVisual@CCursorState@@QEAA_NPEAVCCursorVisual@@_K@Z @ 0x18026B494 (-TrySetVisual@CCursorState@@QEAA_NPEAVCCursorVisual@@_K@Z.c)
 * Callees:
 *     ??0?$shared_ptr@UShapeData@CCursorState@@@std@@QEAA@AEBV01@@Z @ 0x18000889C (--0-$shared_ptr@UShapeData@CCursorState@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18000E7B0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800443B0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800B3CA0 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800C9E90 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$shared_ptr@UShapeData@CCursorState@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1801DEE78 (--4-$shared_ptr@UShapeData@CCursorState@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$?0AEA_KPEAVIBitmapRealization@@AEA_NAEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAVMILMatrix3x2@@@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@UTrailPoint@CCursorState@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@UTrailPoint@CCursorState@@PEAX@std@@@1@AEA_K$$QEAPEAVIBitmapRealization@@AEA_NAEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAVMILMatrix3x2@@@Z @ 0x180267920 (--$-0AEA_KPEAVIBitmapRealization@@AEA_NAEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSize.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@UShapeData@CCursorState@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@UShapeData@CCursorState@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@UShapeData@CCursorState@@@std@@@0@@Z @ 0x180267BA4 (--$_Destroy_range@V-$allocator@V-$shared_ptr@UShapeData@CCursorState@@@std@@@std@@@std@@YAXPEAV-.c)
 *     ??$emplace_back@AEAV?$shared_ptr@UShapeData@CCursorState@@@std@@@?$vector@V?$shared_ptr@UShapeData@CCursorState@@@std@@V?$allocator@V?$shared_ptr@UShapeData@CCursorState@@@std@@@2@@std@@QEAAAEAV?$shared_ptr@UShapeData@CCursorState@@@1@AEAV21@@Z @ 0x1802689C4 (--$emplace_back@AEAV-$shared_ptr@UShapeData@CCursorState@@@std@@@-$vector@V-$shared_ptr@UShapeDa.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@UTrailPoint@CCursorState@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180268AAC (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@UTrailPoint@CCursorState@@PEAX@std@@@std@.c)
 *     ??4?$shared_ptr@UShapeData@CCursorState@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180268CC4 (--4-$shared_ptr@UShapeData@CCursorState@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?EnsureCompositionResources@CCursorState@@QEAAXXZ @ 0x1802698F4 (-EnsureCompositionResources@CCursorState@@QEAAXXZ.c)
 *     ?EnsureDestRectAndTransform@CCursorState@@AEAAX_N@Z @ 0x180269A54 (-EnsureDestRectAndTransform@CCursorState@@AEAAX_N@Z.c)
 *     ?ScheduleCompositionPass@CCursorState@@AEAAXXZ @ 0x18026AAB8 (-ScheduleCompositionPass@CCursorState@@AEAAXXZ.c)
 */

void __fastcall CCursorState::ProcessStateChanges(CCursorState *this, __int64 a2, char a3)
{
  char v3; // r12
  _QWORD *v4; // r14
  char v5; // r13
  char v9; // si
  int v10; // xmm6_4
  int v11; // xmm7_4
  bool v12; // r8
  int v13; // eax
  char v14; // dl
  __int64 v15; // rcx
  char v16; // al
  __int64 i; // rax
  __int64 v18; // rcx
  char v19; // r8
  unsigned __int64 v20; // rbx
  __int64 *v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rsi
  _BYTE *v25; // r15
  std::_Ref_count_base *v26; // rax
  std::_Ref_count_base **v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  float *v32; // rcx
  __int64 *v33; // rbx
  __int64 j; // r11
  __int64 *v35; // r11
  __int64 v36; // [rsp+48h] [rbp-39h] BYREF
  __int64 v37; // [rsp+50h] [rbp-31h] BYREF
  std::_Ref_count_base *v38; // [rsp+58h] [rbp-29h]
  std::_Ref_count_base *v39[2]; // [rsp+60h] [rbp-21h] BYREF
  char v40; // [rsp+E8h] [rbp+67h]
  __int64 v41; // [rsp+F0h] [rbp+6Fh] BYREF
  char v42; // [rsp+F8h] [rbp+77h]
  bool v43; // [rsp+100h] [rbp+7Fh]

  v41 = a2;
  v3 = *((_BYTE *)this + 104);
  v4 = (_QWORD *)((char *)this + 184);
  v5 = 0;
  v42 = 0;
  v43 = 0;
  std::shared_ptr<CCursorState::ShapeData>::shared_ptr<CCursorState::ShapeData>(&v37, (_QWORD *)this + 23);
  v9 = *((_BYTE *)this + 72);
  v10 = *((_DWORD *)this + 51);
  v11 = *((_DWORD *)this + 52);
  v40 = v9;
  EnterCriticalSection(&g_CursorManager);
  v12 = 1;
  if ( *((_BYTE *)this + 21) )
  {
    std::shared_ptr<CCursorState::ShapeData>::operator=(&v37, (_QWORD *)this + 4);
    *(_OWORD *)v39 = 0LL;
    std::shared_ptr<CCursorState::ShapeData>::operator=((_QWORD *)this + 4, (__int64 *)v39);
    if ( v39[1] )
      std::_Ref_count_base::_Decref(v39[1]);
    v9 = *((_BYTE *)this + 18);
    v12 = 1;
    v13 = *((_DWORD *)this + 7);
    v5 = 1;
    v40 = v9;
    a3 = 1;
    *((_BYTE *)this + 19) = 1;
    v14 = 1;
    *((_DWORD *)this + 44) = v13;
    *((_BYTE *)this + 21) = 0;
  }
  else
  {
    v14 = *((_BYTE *)this + 19);
  }
  v15 = v37;
  v16 = *((_BYTE *)this + 16) && v37 && !v9;
  *((_BYTE *)this + 104) = v16;
  if ( v5 || v16 != v3 )
    *((_BYTE *)this + 105) = v16;
  if ( *((_BYTE *)this + 20) )
  {
    if ( v15 )
      a3 = 1;
    *((_DWORD *)this + 50) = *((_DWORD *)this + 6);
    *((_BYTE *)this + 20) = 0;
  }
  if ( v14 )
  {
    v10 = *((_DWORD *)this + 12);
    v11 = *((_DWORD *)this + 13);
    v42 = *((_BYTE *)this + 17);
    if ( *((_BYTE *)this + 106)
      && (v15 || !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)this + 34)) )
    {
      v43 = v12;
      a3 = v12;
    }
    *((_BYTE *)this + 19) = 0;
  }
  LeaveCriticalSection(&g_CursorManager);
  if ( g_disableHardwareCursors )
  {
    for ( i = *((_QWORD *)this + 10); i != *((_QWORD *)this + 11); i += 144LL )
    {
      if ( *(_BYTE *)(i + 140) )
      {
        a3 = 1;
        break;
      }
    }
  }
  v18 = *((_QWORD *)this + 32);
  v19 = 0;
  if ( v18 )
  {
    v20 = 10LL * *((_QWORD *)this + 33);
    while ( 1 )
    {
      v18 = *((_QWORD *)this + 32);
      if ( !v18 )
        break;
      v21 = (__int64 *)**((_QWORD **)this + 31);
      if ( a2 - v21[2] < v20 )
        break;
      v22 = *v21;
      *((_QWORD *)this + 32) = v18 - 1;
      *(_QWORD *)v21[1] = v22;
      *(_QWORD *)(v22 + 8) = v21[1];
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)(v21 + 3));
      std::_Deallocate<16,0>(v21, 0x50uLL);
      v19 = 1;
    }
    a3 = 1;
  }
  v23 = v18;
  if ( v42
    && *v4
    && (!v18
     || (unsigned __int64)(a2 - *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 31) + 8LL) + 16LL)) >= *((_QWORD *)this + 33)) )
  {
    CCursorState::EnsureCompositionResources(this);
    v24 = *((_QWORD *)this + 31);
    v36 = *((_QWORD *)this + 14);
    if ( *((_QWORD *)this + 32) == 0x333333333333333LL )
      std::_Xlength_error("list too long");
    v25 = (char *)this + 72;
    std::_List_node_emplace_op2<std::allocator<std::_List_node<CCursorState::TrailPoint,void *>>>::_List_node_emplace_op2<std::allocator<std::_List_node<CCursorState::TrailPoint,void *>>>(
      v39,
      (__int64)this + 248,
      &v41,
      &v36,
      (char *)this + 72,
      (const __m128i *)((char *)this + 136),
      (__int128 *)((char *)this + 152));
    v26 = v39[1];
    ++*((_QWORD *)this + 32);
    v27 = *(std::_Ref_count_base ***)(v24 + 8);
    v39[1] = 0LL;
    *(_QWORD *)v26 = v24;
    *((_QWORD *)v26 + 1) = v27;
    *(_QWORD *)(v24 + 8) = v26;
    *v27 = v26;
    std::_List_node_emplace_op2<std::allocator<std::_List_node<CCursorState::TrailPoint,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<CCursorState::TrailPoint,void *>>>((__int64)v39);
    v23 = *((_QWORD *)this + 32);
    v19 = 1;
    a3 = 1;
  }
  else
  {
    v25 = (char *)this + 72;
  }
  if ( v23 )
  {
    CCursorState::ScheduleCompositionPass(this);
    v19 = 0;
  }
  *((_BYTE *)this + 107) = v19;
  *((_DWORD *)this + 51) = v10;
  *((_DWORD *)this + 52) = v11;
  if ( a3 || *((_BYTE *)this + 104) != v3 )
  {
    if ( v5 )
    {
      v28 = *((_QWORD *)this + 14);
      *((_QWORD *)this + 14) = 0LL;
      if ( v28 )
      {
        v29 = v28 + 8 + *(int *)(*(_QWORD *)(v28 + 8) + 4LL);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
      }
      *((_BYTE *)this + 106) = 0;
      std::_Destroy_range<std::allocator<std::shared_ptr<CCursorState::ShapeData>>>(
        *((_QWORD *)this + 27),
        *((_QWORD *)this + 28));
      *((_QWORD *)this + 28) = *((_QWORD *)this + 27);
      std::shared_ptr<CCursorState::ShapeData>::operator=(v4, &v37);
      *v25 = v40;
      if ( *v4 )
        std::vector<std::shared_ptr<CCursorState::ShapeData>>::emplace_back<std::shared_ptr<CCursorState::ShapeData> &>(
          (__int64 *)this + 27,
          v4);
    }
    else
    {
      if ( *((_BYTE *)this + 104) == v3 )
        goto LABEL_59;
      v30 = *((_QWORD *)this + 14);
      *((_QWORD *)this + 14) = 0LL;
      if ( v30 )
      {
        v31 = v30 + 8 + *(int *)(*(_QWORD *)(v30 + 8) + 4LL);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
      }
      *((_BYTE *)this + 106) = 0;
    }
    ++*((_DWORD *)this + 60);
LABEL_59:
    CCursorState::EnsureDestRectAndTransform(this, v43);
    v32 = (float *)((char *)this + 120);
    *(_OWORD *)((char *)this + 120) = *(_OWORD *)((char *)this + 136);
    v33 = (__int64 *)*((_QWORD *)this + 31);
    for ( j = *v33; (__int64 *)j != v33; j = *v35 )
      TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v32, (float *)(j + 36));
    CResource::NotifyOnChanged(*((_QWORD *)this + 8), 0, 0LL);
  }
  if ( v38 )
    std::_Ref_count_base::_Decref(v38);
}
