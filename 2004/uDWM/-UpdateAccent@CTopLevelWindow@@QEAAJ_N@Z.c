/*
 * XREFs of ?UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z @ 0x18000F078
 * Callers:
 *     ?OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18000F044 (-OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?OnWindowCloakChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@_N2@Z @ 0x180038C08 (-OnWindowCloakChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@_N2@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006618 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@CAccent@@SAJPEAPEAV1@@Z @ 0x18000D47C (-Create@CAccent@@SAJPEAPEAV1@@Z.c)
 *     ?RegisterAccentState@CWindowList@@QEAAXPEAVCWindowData@@W4ACCENT_STATE@@@Z @ 0x18000D6EC (-RegisterAccentState@CWindowList@@QEAAXPEAVCWindowData@@W4ACCENT_STATE@@@Z.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x18000FC64 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z.c)
 *     ?UpdateAcrylicBackgroundBrush@CAccent@@IEAAJXZ @ 0x180010174 (-UpdateAcrylicBackgroundBrush@CAccent@@IEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017894 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180019A40 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?UnregisterAccentState@CWindowList@@QEAAXPEAVCWindowData@@@Z @ 0x180026E30 (-UnregisterAccentState@CWindowList@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18003B030 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 *     ?GetTransparentGradientColorForAccent@CTopLevelWindow@@AEBAKXZ @ 0x180094974 (-GetTransparentGradientColorForAccent@CTopLevelWindow@@AEBAKXZ.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateAccent(CTopLevelWindow *this, char a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  int v6; // eax
  struct CVisual **v8; // rsi
  struct CVisual *v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rax
  struct CWindowData *v12; // rdx
  signed int v13; // r8d
  CAccent *v14; // rbx
  int inserted; // eax
  CAccent *v16; // rcx
  int updated; // eax
  CBaseObject *v18; // rcx
  int v19; // r9d
  unsigned int v20; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = 0;
  v4 = *((_QWORD *)this + 91);
  v6 = *(_DWORD *)(v4 + 152);
  if ( !v6 || v6 == 6 )
  {
    if ( *((_QWORD *)this + 34) )
    {
      CWindowList::UnregisterAccentState(
        *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
        (struct CWindowData *)v4);
      inserted = VisualCollection::Remove(
                   (VisualCollection *)(*((_QWORD *)this + 33) + 32LL),
                   *((struct CVisual **)this + 34));
      v3 = inserted;
      if ( inserted < 0 )
      {
        v20 = 3416;
        goto LABEL_29;
      }
      v18 = (CBaseObject *)*((_QWORD *)this + 34);
      if ( v18 )
      {
        CBaseObject::Release(v18);
        *((_QWORD *)this + 34) = 0LL;
      }
    }
  }
  else
  {
    v8 = (struct CVisual **)((char *)this + 272);
    v9 = (struct CVisual *)*((_QWORD *)this + 34);
    if ( !v9 )
    {
      inserted = CAccent::Create((struct CAccent **)this + 34);
      v3 = inserted;
      if ( inserted < 0 )
      {
        v20 = 3377;
        goto LABEL_29;
      }
      v16 = *v8;
      *((_QWORD *)v16 + 46) = *((_QWORD *)this + 101);
      updated = CAccent::UpdateAcrylicBackgroundBrush(v16);
      v3 = updated;
      if ( updated < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xB8,
          (__int64)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
          (const char *)(unsigned int)updated);
      else
        v3 = 0;
      if ( v3 < 0 )
      {
        v20 = 3378;
        v19 = v3;
        goto LABEL_31;
      }
      *((_BYTE *)*v8 + 632) = (*(_DWORD *)(*((_QWORD *)this + 91) + 104LL) & 0x400000) != 0;
      inserted = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 33) + 32LL), *v8, 0LL, 1, 1);
      v3 = inserted;
      if ( inserted < 0 )
      {
        v20 = 3380;
        goto LABEL_29;
      }
      v4 = *((_QWORD *)this + 91);
      v9 = *v8;
    }
    v10 = *(_QWORD *)(v4 + 120);
    *((_QWORD *)v9 + 50) = *(_QWORD *)(v4 + 40);
    *((_QWORD *)v9 + 51) = v10;
    v11 = *((_QWORD *)this + 91);
    v12 = (struct CWindowData *)v11;
    if ( !*(_DWORD *)(v11 + 160) && (*(_BYTE *)(v11 + 156) & 2) == 0 && *(_DWORD *)(v11 + 152) == 2 )
    {
      *(_DWORD *)(*((_QWORD *)this + 91) + 160LL) = CTopLevelWindow::GetTransparentGradientColorForAccent(this);
      v12 = (struct CWindowData *)*((_QWORD *)this + 91);
    }
    v13 = *((_DWORD *)v12 + 38);
    if ( v13 < 3 || v13 > 5 )
      CWindowList::UnregisterAccentState(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61), v12);
    else
      CWindowList::RegisterAccentState(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 61), v12, v13);
    v14 = *v8;
    if ( a2 != *((_BYTE *)*v8 + 397) )
    {
      (*(void (__fastcall **)(struct CVisual *, __int64))(*(_QWORD *)v14 + 24LL))(*v8, 0x10000LL);
      *((_BYTE *)v14 + 397) = a2;
      v14 = *v8;
    }
    inserted = CAccent::UpdateAccentPolicy(
                 v14,
                 (const struct tagRECT *)(*((_QWORD *)this + 91) + 48LL),
                 (const struct ACCENT_POLICY *)(*((_QWORD *)this + 91) + 152LL),
                 *(struct CBaseGeometryProxy **)(*((_QWORD *)this + 91) + 368LL));
    v3 = inserted;
    if ( inserted < 0 )
    {
      v20 = 3409;
LABEL_29:
      v19 = inserted;
LABEL_31:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v19, v20);
    }
  }
  return (unsigned int)v3;
}
