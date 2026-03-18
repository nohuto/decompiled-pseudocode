/*
 * XREFs of ?CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z @ 0x1C0163F68
 * Callers:
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKW4_DMM_CLIENT_TYPE@@PEAVDXGDEVICE@@@Z @ 0x1C00DBBE4 (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKW4_DMM_CLIENT_TYPE@@PEAVDXGDEVICE@@@Z.c)
 *     ?DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C013E2E0 (-DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOUR.c)
 *     ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x1C02DD464 (-DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z.c)
 * Callees:
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0007CA8 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0008108 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0008208 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0008344 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?FindByValue@?$Set@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@QEBV2@@Z @ 0x1C0008C20 (-FindByValue@-$Set@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@QEBV2@@Z.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPN@@U?$DoubleLinkedListElementDeleter@VDMMVIDPN@@@@@@QEAAEQEBVDMMVIDPN@@@Z @ 0x1C0008CB0 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPN@@U-$DoubleLinkedListElementDeleter@VDMMVIDPN@@.c)
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C000A278 (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?DivideAndRound@DMMVIDEOSIGNALMODE@@SA_K_K0@Z @ 0x1C001999C (-DivideAndRound@DMMVIDEOSIGNALMODE@@SA_K_K0@Z.c)
 *     DpiMiracastHandleDisplayConfigChange @ 0x1C0052610 (DpiMiracastHandleDisplayConfigChange.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C010DEDC (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     ?DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x1C0136F44 (-DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z.c)
 *     ?SetPrimaryPath@ADAPTER_DISPLAY@@QEAAXIIW4_DXGK_PRIMARY_TARGET_TYPE@@@Z @ 0x1C01640D0 (-SetPrimaryPath@ADAPTER_DISPLAY@@QEAAXIIW4_DXGK_PRIMARY_TARGET_TYPE@@@Z.c)
 *     ?GetMostImportantPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@XZ @ 0x1C0164220 (-GetMostImportantPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@XZ.c)
 */

__int64 __fastcall VIDPN_MGR::CacheLastClientCommittedVidPnRef(VIDPN_MGR *this, struct DMMVIDPN *const a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r11
  _QWORD *v9; // rcx
  __int64 v10; // rdx
  _QWORD *v11; // rax
  DMMVIDPNTOPOLOGY *v12; // rsi
  unsigned int v13; // edi
  struct DMMVIDPNPRESENTPATH *MostImportantPath; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  unsigned int v18; // r14d
  __int64 v19; // r9
  __int64 PathSourceFromTarget; // rdx
  __int64 v21; // r8
  _QWORD *v22; // rdx
  _QWORD *v23; // rdi
  _QWORD *v24; // rdi
  __int64 v25; // rax
  _QWORD *v26; // r14
  int v27; // esi
  __int64 v28; // rcx
  __int64 v29; // r14
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  char *v34; // r8
  __int64 v35; // r14
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  _QWORD *v39; // rax
  _QWORD *v40; // r13
  __int64 v41; // rax
  _QWORD *v42; // rax
  UINT cx; // r12d
  UINT cy; // r13d
  __int64 v45; // rax
  __int64 v46; // rdi
  __int64 v47; // rax
  __int64 v48; // rdi
  DMMVIDPNSOURCEMODE *v49; // rdi
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rcx
  int v54; // edi
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // [rsp+30h] [rbp-18h] BYREF
  __int64 v59; // [rsp+38h] [rbp-10h] BYREF
  __int64 v60; // [rsp+90h] [rbp+48h]
  __int64 v61; // [rsp+98h] [rbp+50h] BYREF
  struct _D3DDDI_RATIONAL v62; // [rsp+A0h] [rbp+58h] BYREF
  __int64 v63; // [rsp+A8h] [rbp+60h]

  v2 = 0;
  v61 = 0LL;
  _InterlockedIncrement((volatile signed __int32 *)a2 + 8);
  auto_rc<DMMVIDPN>::reset(&v61, (__int64)a2);
  v4 = v61;
  v60 = v61;
  v5 = Set<DMMVIDPN>::FindByValue((__int64)this + 96, v61);
  if ( !DoublyLinkedList<DMMVIDPN,DoubleLinkedListElementDeleter<DMMVIDPN>>::ContainsByReference(
          (__int64)this + 104,
          v5) )
  {
    v57 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v57 + 24) = v4;
    *(_QWORD *)(v57 + 32) = this;
    WdLogEvent5_WdError(v57);
    v2 = -1071774973;
    goto LABEL_22;
  }
  v9 = (_QWORD *)(v8 + 8);
  v10 = *(_QWORD *)(v8 + 8);
  if ( *(_QWORD *)(v10 + 8) != v8 + 8 || (v11 = *(_QWORD **)(v8 + 16), (_QWORD *)*v11 != v9) )
    __fastfail(3u);
  *v11 = v10;
  *(_QWORD *)(v10 + 8) = v11;
  v12 = (DMMVIDPNTOPOLOGY *)(v4 + 96);
  *v9 = 0LL;
  *(_QWORD *)(v8 + 16) = 0LL;
  --*((_QWORD *)this + 17);
  if ( *((_QWORD *)v12 + 5) )
  {
    v13 = *((_DWORD *)this + 124);
    if ( v13 == -1 || !DMMVIDPNTOPOLOGY::IsTargetInTopology(v12, v13) )
    {
      MostImportantPath = DMMVIDPNTOPOLOGY::GetMostImportantPath(v12);
      if ( !MostImportantPath )
        goto LABEL_12;
      v13 = *(_DWORD *)(*((_QWORD *)MostImportantPath + 12) + 24LL);
      v17 = *((_QWORD *)this + 1);
      v18 = *(_DWORD *)(*((_QWORD *)MostImportantPath + 11) + 24LL);
      if ( !v17 )
      {
        v37 = WdLogNewEntry5_WdAssertion(0LL, v15);
        WdLogEvent5_WdAssertion(v37);
        v17 = *((_QWORD *)this + 1);
      }
      v19 = 2LL;
      PathSourceFromTarget = v18;
    }
    else
    {
      v35 = *((_QWORD *)this + 1);
      if ( !v35 )
      {
        v36 = WdLogNewEntry5_WdAssertion(v33, v32);
        WdLogEvent5_WdAssertion(v36);
        v35 = *((_QWORD *)this + 1);
        v13 = *((_DWORD *)this + 124);
      }
      PathSourceFromTarget = (unsigned int)DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(v12, v13, v34);
      v19 = 0LL;
      v17 = v35;
    }
    v21 = v13;
  }
  else
  {
    v17 = *((_QWORD *)this + 1);
    if ( !v17 )
    {
      v31 = WdLogNewEntry5_WdAssertion(0LL, v10);
      WdLogEvent5_WdAssertion(v31);
      v17 = *((_QWORD *)this + 1);
    }
    v21 = 0xFFFFFFFFLL;
    v19 = 3LL;
    PathSourceFromTarget = 0xFFFFFFFFLL;
  }
  ADAPTER_DISPLAY::SetPrimaryPath(v17, PathSourceFromTarget, v21, v19);
LABEL_12:
  v22 = (_QWORD *)((char *)v12 + 24);
  v23 = (_QWORD *)*((_QWORD *)v12 + 3);
  if ( v23 == (_QWORD *)((char *)v12 + 24) )
    v24 = 0LL;
  else
    v24 = v23 - 1;
  v25 = *((_QWORD *)v12 + 5);
  v26 = v24;
  if ( v25 == 1 )
  {
    if ( !v24 )
    {
      v38 = WdLogNewEntry5_WdAssertion(v16, v22);
      WdLogEvent5_WdAssertion(v38);
    }
    v27 = 0;
    v28 = *(_QWORD *)(v24[12] + 96LL);
    if ( *(_DWORD *)(v28 + 84) == 15 )
      v27 = 8;
  }
  else if ( v25 == 2 )
  {
    v39 = (_QWORD *)v24[1];
    v40 = v39 - 1;
    if ( v39 == v22 )
      v40 = 0LL;
    if ( !v40 )
    {
      v41 = WdLogNewEntry5_WdAssertion(v16, v22);
      WdLogEvent5_WdAssertion(v41);
    }
    if ( *(_DWORD *)(*(_QWORD *)(v24[12] + 96LL) + 84LL) != 15 )
    {
      if ( *(_DWORD *)(*(_QWORD *)(v40[12] + 96LL) + 84LL) != 15 )
        goto LABEL_20;
      v26 = v40;
    }
    v27 = 2;
    v28 = 4LL;
    if ( v24[11] != v40[11] )
      v27 = 4;
  }
  else
  {
    if ( !v24 )
      goto LABEL_20;
    while ( 1 )
    {
      v28 = *(_QWORD *)(v26[12] + 96LL);
      if ( *(_DWORD *)(v28 + 84) == 15 )
        break;
      v42 = (_QWORD *)v26[1];
      v26 = v42 - 1;
      if ( v42 == v22 )
        v26 = 0LL;
      if ( !v26 )
        goto LABEL_20;
    }
    v27 = 1;
  }
  if ( v27 )
  {
    LODWORD(v63) = 0;
    cx = 0;
    cy = 0;
    if ( !v26 )
    {
      v45 = WdLogNewEntry5_WdAssertion(v28, v22);
      WdLogEvent5_WdAssertion(v45);
    }
    v46 = v26[11];
    v47 = *(_QWORD *)(v46 + 104);
    if ( v47 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v47 + 96));
      v48 = *(_QWORD *)(v46 + 104);
      v60 = v61;
    }
    else
    {
      v48 = 0LL;
    }
    v59 = v48;
    v49 = *(DMMVIDPNSOURCEMODE **)(v48 + 144);
    if ( v49 && *((_DWORD *)v49 + 18) != 2 )
    {
      cx = DMMVIDPNSOURCEMODE::GetGraphicsInfo(v49)->PrimSurfSize.cx;
      cy = DMMVIDPNSOURCEMODE::GetGraphicsInfo(v49)->PrimSurfSize.cy;
    }
    v50 = v26[12];
    v51 = *(_QWORD *)(v50 + 104);
    if ( v51 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v51 + 96));
      v52 = *(_QWORD *)(v50 + 104);
      v29 = v61;
    }
    else
    {
      v29 = v60;
      v52 = 0LL;
    }
    v53 = *(_QWORD *)(v52 + 144);
    v58 = v52;
    if ( v53 )
    {
      v62 = *(struct _D3DDDI_RATIONAL *)(v53 + 92);
      DmmCalculatePresentationVSync((const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v53 + 72), &v62);
      v54 = DMMVIDEOSIGNALMODE::DivideAndRound(v62.Numerator, v62.Denominator);
    }
    else
    {
      v54 = v63;
    }
    v55 = *((_QWORD *)this + 1);
    if ( !v55 )
    {
      v56 = WdLogNewEntry5_WdAssertion(0LL, v22);
      WdLogEvent5_WdAssertion(v56);
      v55 = *((_QWORD *)this + 1);
    }
    DpiMiracastHandleDisplayConfigChange(*(_QWORD *)(*(_QWORD *)(v55 + 16) + 216LL), v27, cx, cy, v54);
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v58, 0LL);
    auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v59, 0LL);
    goto LABEL_21;
  }
LABEL_20:
  v29 = v60;
LABEL_21:
  v61 = 0LL;
  auto_rc<DMMVIDPN>::reset((__int64 *)this + 11, v29);
LABEL_22:
  auto_rc<DMMVIDPN>::reset(&v61, 0LL);
  return v2;
}
