/*
 * XREFs of ?CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z @ 0x1C01E3518
 * Callers:
 *     ?DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01BB9EC (-DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOUR.c)
 *     ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x1C039CA5C (-DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z.c)
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKW4_DMM_CLIENT_TYPE@@PEAVDXGDEVICE@@@Z @ 0x1C03A478C (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKW4_DMM_CLIENT_TYPE@@PEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000FBD8 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C000FD8C (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?FindByValue@?$Set@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@QEBV2@@Z @ 0x1C0010580 (-FindByValue@-$Set@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@QEBV2@@Z.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPN@@U?$DoubleLinkedListElementDeleter@VDMMVIDPN@@@@@@QEAAEQEBVDMMVIDPN@@@Z @ 0x1C0010610 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPN@@U-$DoubleLinkedListElementDeleter@VDMMVIDPN@@.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0010C30 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0011924 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C0011B4C (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?DivideAndRound@DMMVIDEOSIGNALMODE@@SA_K_K0@Z @ 0x1C0013758 (-DivideAndRound@DMMVIDEOSIGNALMODE@@SA_K_K0@Z.c)
 *     DpiMiracastHandleDisplayConfigChange @ 0x1C00611D0 (DpiMiracastHandleDisplayConfigChange.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C01A8564 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     ?SetPrimaryPath@ADAPTER_DISPLAY@@QEAAXIIW4_DXGK_PRIMARY_TARGET_TYPE@@@Z @ 0x1C01E369C (-SetPrimaryPath@ADAPTER_DISPLAY@@QEAAXIIW4_DXGK_PRIMARY_TARGET_TYPE@@@Z.c)
 *     ?GetMostImportantPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@XZ @ 0x1C01E3948 (-GetMostImportantPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@XZ.c)
 */

__int64 __fastcall VIDPN_MGR::CacheLastClientCommittedVidPnRef(VIDPN_MGR *this, struct DMMVIDPN *const a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // r10
  __int64 v7; // rdi
  __int64 v8; // r11
  _QWORD *v9; // rax
  __int64 v10; // rcx
  _QWORD *v11; // rdx
  DMMVIDPNTOPOLOGY *v12; // rsi
  unsigned int v13; // edi
  struct DMMVIDPNPRESENTPATH *MostImportantPath; // rdi
  __int64 v15; // rcx
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // rdx
  _QWORD *v19; // rdx
  _QWORD *v20; // rdi
  _QWORD *v21; // rdi
  __int64 v22; // rax
  _QWORD *v23; // r14
  int v24; // esi
  __int64 v25; // rdi
  __int64 v27; // r14
  unsigned int PathSourceFromTarget; // eax
  _QWORD *v29; // rax
  _QWORD *v30; // r15
  _QWORD *v31; // rax
  UINT cx; // r12d
  UINT cy; // r13d
  int v34; // r15d
  __int64 v35; // rdi
  __int64 v36; // rax
  __int64 v37; // rdi
  DMMVIDPNSOURCEMODE *v38; // rdi
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  unsigned int v43; // ecx
  unsigned __int64 v44; // rax
  int v45; // ecx
  __int64 v46; // rcx
  __int64 v47; // [rsp+80h] [rbp+8h]
  unsigned __int64 v48; // [rsp+80h] [rbp+8h]
  __int64 v49; // [rsp+88h] [rbp+10h] BYREF
  __int64 v50; // [rsp+90h] [rbp+18h] BYREF
  __int64 v51; // [rsp+98h] [rbp+20h] BYREF

  v2 = 0;
  v49 = 0LL;
  _InterlockedAdd((volatile signed __int32 *)a2 + 8, 1u);
  auto_rc<DMMVIDPN>::reset(&v49, (__int64)a2);
  v4 = v49;
  v47 = v49;
  v5 = Set<DMMVIDPN>::FindByValue((__int64)this + 136, v49);
  v7 = v6 + 8;
  if ( !DoublyLinkedList<DMMVIDPN,DoubleLinkedListElementDeleter<DMMVIDPN>>::ContainsByReference(v6 + 8, v5) )
  {
    WdLogSingleEntry2(2LL, v4, this);
    v2 = -1071774973;
    goto LABEL_21;
  }
  v9 = (_QWORD *)(v8 + 8);
  v10 = *(_QWORD *)(v8 + 8);
  if ( *(_QWORD *)(v10 + 8) != v8 + 8 || (v11 = *(_QWORD **)(v8 + 16), (_QWORD *)*v11 != v9) )
    __fastfail(3u);
  *v11 = v10;
  v12 = (DMMVIDPNTOPOLOGY *)(v4 + 96);
  *(_QWORD *)(v10 + 8) = v11;
  *v9 = 0LL;
  *(_QWORD *)(v8 + 16) = 0LL;
  --*(_QWORD *)(v7 + 32);
  if ( *((_QWORD *)v12 + 5) )
  {
    v13 = *((_DWORD *)this + 138);
    if ( v13 == -1 || !DMMVIDPNTOPOLOGY::IsTargetInTopology(v12, v13) )
    {
      MostImportantPath = DMMVIDPNTOPOLOGY::GetMostImportantPath(v12);
      if ( !MostImportantPath )
        goto LABEL_11;
      v15 = *((_QWORD *)this + 1);
      if ( !v15 )
      {
        WdLogSingleEntry0(1LL);
        v15 = *((_QWORD *)this + 1);
      }
      v16 = 2LL;
      v17 = *(unsigned int *)(*((_QWORD *)MostImportantPath + 12) + 24LL);
      v18 = *(unsigned int *)(*((_QWORD *)MostImportantPath + 11) + 24LL);
    }
    else
    {
      v27 = *((_QWORD *)this + 1);
      if ( !v27 )
      {
        WdLogSingleEntry0(1LL);
        v27 = *((_QWORD *)this + 1);
        v13 = *((_DWORD *)this + 138);
      }
      PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(v12, v13);
      v16 = 0LL;
      v17 = v13;
      v18 = PathSourceFromTarget;
      v15 = v27;
    }
  }
  else
  {
    v15 = *((_QWORD *)this + 1);
    if ( !v15 )
    {
      WdLogSingleEntry0(1LL);
      v15 = *((_QWORD *)this + 1);
    }
    v17 = 0xFFFFFFFFLL;
    v16 = 3LL;
    v18 = 0xFFFFFFFFLL;
  }
  ADAPTER_DISPLAY::SetPrimaryPath(v15, v18, v17, v16);
LABEL_11:
  v19 = (_QWORD *)((char *)v12 + 24);
  v20 = (_QWORD *)*((_QWORD *)v12 + 3);
  if ( v20 == (_QWORD *)((char *)v12 + 24) )
    v21 = 0LL;
  else
    v21 = v20 - 1;
  v22 = *((_QWORD *)v12 + 5);
  v23 = v21;
  if ( v22 == 1 )
  {
    if ( !v21 )
      WdLogSingleEntry0(1LL);
    v24 = 0;
    if ( *(_DWORD *)(*(_QWORD *)(v21[12] + 96LL) + 84LL) == 15 )
      v24 = 8;
  }
  else
  {
    if ( v22 != 2 )
    {
      if ( !v21 )
        goto LABEL_19;
      while ( *(_DWORD *)(*(_QWORD *)(v23[12] + 96LL) + 84LL) != 15 )
      {
        v31 = (_QWORD *)v23[1];
        v23 = v31 - 1;
        if ( v31 == v19 )
          v23 = 0LL;
        if ( !v23 )
          goto LABEL_19;
      }
      v24 = 1;
LABEL_49:
      cx = 0;
      cy = 0;
      v34 = 0;
      if ( !v23 )
        WdLogSingleEntry0(1LL);
      v35 = v23[11];
      v36 = *(_QWORD *)(v35 + 104);
      if ( v36 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v36 + 96));
        v37 = *(_QWORD *)(v35 + 104);
        v47 = v49;
      }
      else
      {
        v37 = 0LL;
      }
      v51 = v37;
      v38 = *(DMMVIDPNSOURCEMODE **)(v37 + 144);
      if ( v38 && *((_DWORD *)v38 + 18) != 2 )
      {
        cx = DMMVIDPNSOURCEMODE::GetGraphicsInfo(v38)->PrimSurfSize.cx;
        cy = DMMVIDPNSOURCEMODE::GetGraphicsInfo(v38)->PrimSurfSize.cy;
      }
      v39 = v23[12];
      v40 = *(_QWORD *)(v39 + 104);
      if ( v40 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v40 + 96));
        v41 = *(_QWORD *)(v39 + 104);
        v25 = v49;
      }
      else
      {
        v25 = v47;
        v41 = 0LL;
      }
      v50 = v41;
      v42 = *(_QWORD *)(v41 + 144);
      if ( v42 )
      {
        v43 = *(_DWORD *)(v42 + 120);
        v44 = *(_QWORD *)(v42 + 92);
        v45 = (v43 >> 3) & 0x3F;
        if ( v45 )
        {
          LODWORD(v48) = v44;
          HIDWORD(v48) = v45 * HIDWORD(v44);
          v44 = v48;
        }
        v34 = DMMVIDEOSIGNALMODE::DivideAndRound((unsigned int)v44, HIDWORD(v44));
      }
      v46 = *((_QWORD *)this + 1);
      if ( !v46 )
      {
        WdLogSingleEntry0(1LL);
        v46 = *((_QWORD *)this + 1);
      }
      DpiMiracastHandleDisplayConfigChange(*(_QWORD *)(*(_QWORD *)(v46 + 16) + 216LL), v24, cx, cy, v34);
      auto_rc<DMMVIDPNTARGETMODESET>::reset(&v50, 0LL);
      auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v51, 0LL);
      goto LABEL_20;
    }
    v29 = (_QWORD *)v21[1];
    v30 = v29 - 1;
    if ( v29 == v19 )
      v30 = 0LL;
    if ( !v30 )
      WdLogSingleEntry0(1LL);
    if ( *(_DWORD *)(*(_QWORD *)(v21[12] + 96LL) + 84LL) != 15 )
    {
      if ( *(_DWORD *)(*(_QWORD *)(v30[12] + 96LL) + 84LL) != 15 )
        goto LABEL_19;
      v23 = v30;
    }
    v24 = 2;
    if ( v21[11] != v30[11] )
      v24 = 4;
  }
  if ( v24 )
    goto LABEL_49;
LABEL_19:
  v25 = v47;
LABEL_20:
  v49 = 0LL;
  auto_rc<DMMVIDPN>::reset((__int64 *)this + 16, v25);
LABEL_21:
  auto_rc<DMMVIDPN>::reset(&v49, 0LL);
  return v2;
}
