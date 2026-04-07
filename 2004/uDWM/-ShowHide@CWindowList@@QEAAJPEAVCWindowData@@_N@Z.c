/*
 * XREFs of ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18001D264
 * Callers:
 *     ?ShowHide@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180011390 (-ShowHide@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180029020 (-CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z @ 0x180029680 (-CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z.c)
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x1800299D0 (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x180037B18 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006618 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnColorizationUpdated@CWindowData@@QEAAXXZ @ 0x18000A190 (-OnColorizationUpdated@CWindowData@@QEAAXXZ.c)
 *     ?OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18000F044 (-OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow@@QEAAJXZ @ 0x1800121C8 (-OnWindowStyleUpdated@CTopLevelWindow@@QEAAJXZ.c)
 *     ?EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x18001225C (-EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x180015CD8 (-ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180019A40 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x18001D170 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18001D740 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?FindElement@?$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@_K@Z @ 0x18001E064 (-FindElement@-$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_W.c)
 *     ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x180026F84 (-OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z.c)
 *     ?OnVisibilityUpdated@CWindowData@@QEAAJXZ @ 0x18002716C (-OnVisibilityUpdated@CWindowData@@QEAAJXZ.c)
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180027698 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?OnBlurBehindUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18002892C (-OnBlurBehindUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800289B0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z @ 0x18002BFA4 (-UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z.c)
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x180037CF4 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?FindPrecedingVisibleWindowVisual@CWindowList@@AEAAPEAVCVisual@@PEAU_LIST_ENTRY@@@Z @ 0x18003CCB8 (-FindPrecedingVisibleWindowVisual@CWindowList@@AEAAPEAVCVisual@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?SetPassiveUpdateMode@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z @ 0x18003D460 (-SetPassiveUpdateMode@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z.c)
 *     ?SetExcludeFromDDA@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z @ 0x18003D510 (-SetExcludeFromDDA@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z.c)
 *     ?ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18003E4AC (-ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?UpdateThumbnailsForNewWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x18003EB1C (-UpdateThumbnailsForNewWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 *     ?SetHolographic@CTopLevelWindow@@QEAAJ_N@Z @ 0x180095424 (-SetHolographic@CTopLevelWindow@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CWindowList::ShowHide(CWindowList *this, struct CWindowData *a2, char a3)
{
  __int64 v4; // rcx
  char v5; // al
  bool v8; // dl
  char v9; // cl
  int inserted; // ebx
  const struct CWindowData **v11; // rcx
  struct CVisual *PrecedingVisibleWindowVisual; // rbx
  __int64 Element; // rax
  __int64 v14; // rcx
  struct CVisual *v15; // r14
  CVisual *v16; // rbx
  __int64 v17; // rcx
  char v18; // al
  __int64 v19; // rcx
  char v20; // al
  CWindowList *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  _QWORD *v24; // rax
  __int64 v26; // rdx
  struct CVisual *v27; // rbx
  struct CRenderDataVisual *RootVisualForDesktop; // rax
  _QWORD Buffer[2]; // [rsp+38h] [rbp-19h] BYREF
  __int128 v30; // [rsp+48h] [rbp-9h]
  __int128 v31; // [rsp+58h] [rbp+7h]
  __int128 v32; // [rsp+68h] [rbp+17h]
  __int64 v33; // [rsp+78h] [rbp+27h]
  char v34; // [rsp+80h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]
  bool v36; // [rsp+C0h] [rbp+6Fh] BYREF

  v4 = *((_QWORD *)a2 + 5);
  v5 = *((_BYTE *)a2 + 608) & 1;
  v36 = 0;
  v8 = v4 && v4 == *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 84);
  v9 = 0;
  if ( !v8 )
    v9 = v5;
  if ( v9 )
  {
    inserted = CWindowList::EnsureTopLevelWindow(this, a2);
    if ( inserted < 0 )
    {
      v26 = 2795LL;
      goto LABEL_43;
    }
    PrecedingVisibleWindowVisual = CWindowList::FindPrecedingVisibleWindowVisual(this, (struct _LIST_ENTRY *)a2);
    Element = CGenericTableMap<unsigned __int64,CWindowList::DESKTOP_WINDOWLIST_MAP_ENTRY>::FindElement(
                (char *)this + 8,
                *((_QWORD *)a2 + 15));
    if ( Element )
      v14 = *(_QWORD *)(Element + 24);
    else
      v14 = 0LL;
    inserted = VisualCollection::InsertRelative(
                 (VisualCollection *)(v14 + 32),
                 *((struct CVisual **)a2 + 48),
                 PrecedingVisibleWindowVisual,
                 1u,
                 1);
    if ( inserted < 0 )
    {
      v26 = 2798LL;
      goto LABEL_43;
    }
    v15 = (struct CVisual *)*((_QWORD *)a2 + 50);
    if ( v15 )
    {
      if ( *((_QWORD *)v15 + 3) )
      {
        v27 = (struct CVisual *)*((_QWORD *)a2 + 48);
        RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(this, *((_QWORD *)a2 + 15));
        inserted = VisualCollection::InsertRelative(
                     (struct CRenderDataVisual *)((char *)RootVisualForDesktop + 32),
                     v15,
                     v27,
                     1u,
                     1);
        if ( inserted < 0 )
        {
          v26 = 2801LL;
          goto LABEL_43;
        }
      }
    }
    CVisual::SetDirtyFlags(*((CVisual **)a2 + 48), 0x400000u);
    inserted = CTopLevelWindow::OnWindowStyleUpdated(*((CTopLevelWindow **)a2 + 48));
    if ( inserted < 0 )
    {
      v26 = 2806LL;
      goto LABEL_43;
    }
    CVisual::SetDirtyFlags(*((CVisual **)a2 + 48), 0x10000u);
    CVisual::SetDirtyFlags(*((CVisual **)a2 + 48), 0x20000u);
    CVisual::SetOpacity(
      *((CVisual **)a2 + 48),
      (double)*(unsigned __int8 *)(*(_QWORD *)(*((_QWORD *)a2 + 48) + 728LL) + 352LL) / 255.0);
    v16 = (CVisual *)*((_QWORD *)a2 + 48);
    CVisual::SetDirtyFlags(v16, 0x40000u);
    CVisual::SetDirtyFlags(v16, 0x4000000u);
    CWindowData::OnColorizationUpdated(a2);
    CTopLevelWindow::OnBlurBehindUpdated(*((CTopLevelWindow **)a2 + 48));
    CVisual::SetDirtyFlags(*((CVisual **)a2 + 48), 0x4000u);
    CTopLevelWindow::OnAccentPolicyUpdated(*((CWindowData ***)a2 + 48));
    v17 = *((_QWORD *)a2 + 3);
    if ( v17 )
    {
      v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 304LL))(v17);
      CWindowList::SetExcludeFromDDA(this, *((struct IDwmWindow **)a2 + 3), v18);
      v19 = *((_QWORD *)a2 + 3);
      if ( v19 )
      {
        v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 312LL))(v19);
        CWindowList::SetPassiveUpdateMode(this, *((struct IDwmWindow **)a2 + 3), v20);
      }
    }
    if ( (*((_BYTE *)a2 + 613) & 4) != 0 )
    {
      inserted = CTopLevelWindow::SetHolographic(*((CTopLevelWindow **)a2 + 48), (*((_BYTE *)a2 + 613) & 4) != 0);
      if ( inserted < 0 )
      {
        v26 = 2828LL;
        goto LABEL_43;
      }
    }
    CWindowList::OnPositionChange(this, a2, 0);
    inserted = CWindowList::UpdateWindowScale(this, a2, 0);
    if ( inserted < 0 )
    {
      v26 = 2834LL;
      goto LABEL_43;
    }
    if ( *((_QWORD *)a2 + 48) )
    {
      CVisual::SetDirtyFlags(*((CVisual **)a2 + 48), 0x4000000u);
      v22 = *((_QWORD *)a2 + 48);
      if ( v22 )
      {
        if ( (*((_BYTE *)a2 + 609) & 0x20) != 0 )
          CVisual::SetDirtyFlags(*((CVisual **)a2 + 48), 0x2000000u);
        else
          *(_DWORD *)(v22 + 80) &= ~0x2000000u;
      }
    }
    inserted = CWindowList::UpdateThumbnailsForNewWindow(v21, a2);
    if ( inserted < 0 )
    {
      v26 = 2838LL;
      goto LABEL_43;
    }
    inserted = CLivePreview::OnWindowShowHide(
                 *((CLivePreview **)CDesktopManager::s_pDesktopManagerInstance + 64),
                 a2,
                 &v36,
                 0);
    if ( inserted < 0 )
    {
      v26 = 2842LL;
      goto LABEL_43;
    }
    CWindowList::ShowProjectionBorder(this, a2, *((_QWORD *)a2 + 50) != 0LL);
    if ( !v36 )
    {
      inserted = CTopLevelWindow3D::ShowWindow(
                   *((const struct CWindowData ***)a2 + 49),
                   1,
                   *(_BYTE *)(*((_QWORD *)a2 + 48) + 817LL) == 0);
      if ( inserted < 0 )
      {
        v26 = 2851LL;
        goto LABEL_43;
      }
    }
  }
  else
  {
    inserted = CLivePreview::OnWindowShowHide(
                 *((CLivePreview **)CDesktopManager::s_pDesktopManagerInstance + 64),
                 a2,
                 &v36,
                 0);
    if ( inserted < 0 )
    {
      v26 = 2858LL;
      goto LABEL_43;
    }
    if ( !v36 )
    {
      v11 = (const struct CWindowData **)*((_QWORD *)a2 + 49);
      if ( v11 )
      {
        inserted = CTopLevelWindow3D::ShowWindow(v11, 0, 0);
        if ( inserted < 0 )
        {
          v26 = 2864LL;
          goto LABEL_43;
        }
      }
    }
  }
  inserted = CWindowData::OnVisibilityUpdated(a2);
  if ( inserted < 0 )
  {
    v26 = 2869LL;
  }
  else
  {
    if ( !a3 )
      return 0LL;
    v23 = *((_QWORD *)a2 + 15);
    Buffer[1] = 0LL;
    v33 = -1LL;
    v30 = 0LL;
    v31 = 0LL;
    v32 = 0LL;
    Buffer[0] = v23;
    v34 = 0;
    v24 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), Buffer);
    if ( v24 )
      v24 = (_QWORD *)v24[8];
    if ( *((_QWORD **)a2 + 5) != v24 )
      return 0LL;
    inserted = CWindowList::UpdateDesktopWindowReplacement(this, *((_QWORD *)a2 + 15));
    if ( inserted >= 0 )
      return 0LL;
    v26 = 2879LL;
  }
LABEL_43:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v26,
    (__int64)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
    (const char *)(unsigned int)inserted);
  return (unsigned int)inserted;
}
