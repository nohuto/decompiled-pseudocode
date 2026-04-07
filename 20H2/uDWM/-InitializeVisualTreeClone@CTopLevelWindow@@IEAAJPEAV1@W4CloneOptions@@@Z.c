/*
 * XREFs of ?InitializeVisualTreeClone@CTopLevelWindow@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180029B5C
 * Callers:
 *     ?CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x180029AA0 (-CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800160D0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017394 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x18001FF68 (-InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x1800248DC (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?SetShadowOpacity@CTopLevelWindow@@QEAAXM@Z @ 0x18002AA3C (-SetShadowOpacity@CTopLevelWindow@@QEAAXM@Z.c)
 *     ?ApplyCorrectionScaleForUniformSpaceWindow@CTopLevelWindow@@AEAAXPEAVCWindowData@@@Z @ 0x18002AAA4 (-ApplyCorrectionScaleForUniformSpaceWindow@CTopLevelWindow@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?SetCloneVisuals@AcrylicHostBackdrop@@QEAAJPEAVCVisual@@0@Z @ 0x18002AAE8 (-SetCloneVisuals@AcrylicHostBackdrop@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?SetExcludeFromDDA@CTopLevelWindow@@QEAAJ_N@Z @ 0x18003D5C4 (-SetExcludeFromDDA@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?SetVisualProtectContent@CTopLevelWindow@@QEAAJ_N@Z @ 0x180094DFC (-SetVisualProtectContent@CTopLevelWindow@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CTopLevelWindow::InitializeVisualTreeClone(__int64 a1, __int64 a2, unsigned int a3)
{
  int v5; // eax
  unsigned int v6; // esi
  char v7; // dl
  bool v8; // dl
  __int64 v9; // rdx
  struct CVisual **v10; // rax
  AcrylicHostBackdrop *v11; // rcx
  struct CVisual *v12; // rbp
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  char v31; // al
  CRenderDataVisual *v32; // rcx
  CBaseObject *v33; // rcx
  CBaseObject *v34; // rcx
  CBaseObject *v35; // rcx
  CBaseObject *v36; // rcx
  int v38; // eax

  *(_BYTE *)(a1 + 240) &= ~0x10u;
  *(_BYTE *)(a1 + 240) |= 8 * (a3 & 2);
  v5 = CVisual::InitializeVisualTreeClone(a1, (__int64 *)a2, a3);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x137Eu);
    goto LABEL_45;
  }
  v7 = *(_BYTE *)(a1 + 241);
  if ( (v7 & 4) != 0 )
  {
    v38 = CTopLevelWindow::SetExcludeFromDDA((CTopLevelWindow *)a2, (*(_BYTE *)(a1 + 241) & 4) != 0);
    v6 = v38;
    if ( v38 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v38, 0x1383u);
      goto LABEL_45;
    }
    v7 = *(_BYTE *)(a1 + 241);
  }
  v8 = (v7 & 0x40) != 0;
  if ( v8 )
    CTopLevelWindow::SetVisualProtectContent((CTopLevelWindow *)a2, v8);
  v9 = **(_QWORD **)(a2 + 48);
  if ( *(_BYTE *)(a1 + 816) )
  {
    *(_QWORD *)(a2 + 256) = v9;
    if ( !v9 )
      goto LABEL_11;
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
  }
  else
  {
    v10 = *(struct CVisual ***)(v9 + 48);
    v11 = *(AcrylicHostBackdrop **)(a2 + 808);
    v12 = *v10;
    if ( v11 )
    {
      v13 = AcrylicHostBackdrop::SetCloneVisuals(v11, (struct CVisual *)v9, *v10);
      v6 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x1398u);
        goto LABEL_45;
      }
    }
    *(_QWORD *)(a2 + 256) = **((_QWORD **)v12 + 6);
    v14 = *((_QWORD *)v12 + 6);
    if ( *(_QWORD *)v14 )
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v14 + 8LL));
  }
  v9 = *(_QWORD *)(a2 + 256);
LABEL_11:
  *(_QWORD *)(a2 + 264) = **(_QWORD **)(v9 + 48);
  v15 = *(_QWORD *)(v9 + 48);
  if ( *(_QWORD *)v15 )
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v15 + 8LL));
  v16 = *(_QWORD *)(a1 + 544);
  v17 = 8LL;
  if ( v16 && (*(_BYTE *)(v16 + 84) & 8) == 0 )
  {
    v18 = *(_QWORD *)(a2 + 264);
    v19 = *(_QWORD *)(*(_QWORD *)(v18 + 48) + 8LL * (unsigned int)(*(_DWORD *)(v18 + 72) - 1));
    *(_QWORD *)(a2 + 544) = v19;
    v20 = *(_QWORD *)(*(_QWORD *)(v18 + 48) + 8LL * (unsigned int)(*(_DWORD *)(v18 + 72) - 1));
    if ( v20 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v20 + 8));
      v19 = *(_QWORD *)(a2 + 544);
    }
    *(_QWORD *)(a2 + 536) = **(_QWORD **)(v19 + 48);
    v21 = *(_QWORD *)(v19 + 48);
    if ( *(_QWORD *)v21 )
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v21 + 8LL));
  }
  v22 = *(_QWORD *)(a1 + 520);
  if ( v22 )
  {
    if ( (*(_BYTE *)(v22 + 84) & 8) == 0 )
    {
      v23 = *(_QWORD *)(a1 + 280);
      if ( v23 )
      {
        if ( (*(_BYTE *)(v23 + 84) & 8) == 0 )
        {
          v24 = *(_QWORD *)(a1 + 288);
          if ( !v24 || (*(_BYTE *)(v24 + 84) & 8) != 0 )
            v25 = 0LL;
          else
            v25 = 8LL;
          v26 = *(_QWORD *)(a1 + 296);
          if ( !v26 || (*(_BYTE *)(v26 + 84) & 8) != 0 )
            v27 = 0LL;
          else
            v27 = 8LL;
          v28 = *(_QWORD *)(a1 + 272);
          if ( !v28 || (*(_BYTE *)(v28 + 84) & 8) != 0 )
            v17 = 0LL;
          v29 = *(_QWORD *)(v27 + v17 + *(_QWORD *)(*(_QWORD *)(a2 + 264) + 48LL) + v25);
          if ( v29 )
          {
            *(_QWORD *)(a2 + 520) = **(_QWORD **)(v29 + 48);
            v30 = *(_QWORD *)(v29 + 48);
            if ( *(_QWORD *)v30 )
              _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v30 + 8LL));
          }
        }
      }
    }
  }
  v31 = *(_BYTE *)(a2 + 240);
  *(_OWORD *)(a2 + 596) = *(_OWORD *)(a1 + 596);
  *(_OWORD *)(a2 + 612) = *(_OWORD *)(a1 + 612);
  *(_OWORD *)(a2 + 628) = *(_OWORD *)(a1 + 628);
  *(_OWORD *)(a2 + 644) = *(_OWORD *)(a1 + 644);
  *(_OWORD *)(a2 + 660) = *(_OWORD *)(a1 + 660);
  *(_BYTE *)(a2 + 240) ^= (*(_BYTE *)(a1 + 240) ^ v31) & 4;
  *(_BYTE *)(a2 + 241) ^= (*(_BYTE *)(a1 + 241) ^ *(_BYTE *)(a2 + 241)) & 1;
  if ( (*(_BYTE *)(a1 + 240) & 0x10) == 0 )
  {
    CTopLevelWindow::ApplyCorrectionScaleForUniformSpaceWindow(
      (CTopLevelWindow *)a2,
      *(struct CWindowData **)(a1 + 728));
    v32 = *(CRenderDataVisual **)(a1 + 288);
    if ( v32 )
      CRenderDataVisual::ClearInstructions(v32);
    CTopLevelWindow::SetShadowOpacity((CTopLevelWindow *)a2, 0.0);
    v33 = *(CBaseObject **)(a1 + 552);
    if ( v33 )
    {
      CBaseObject::Release(v33);
      *(_QWORD *)(a1 + 552) = 0LL;
    }
    v34 = *(CBaseObject **)(a1 + 560);
    if ( v34 )
    {
      CBaseObject::Release(v34);
      *(_QWORD *)(a1 + 560) = 0LL;
    }
    v35 = *(CBaseObject **)(a1 + 576);
    if ( v35 )
    {
      CBaseObject::Release(v35);
      *(_QWORD *)(a1 + 576) = 0LL;
    }
    v36 = *(CBaseObject **)(a1 + 584);
    if ( v36 )
    {
      CBaseObject::Release(v36);
      *(_QWORD *)(a1 + 584) = 0LL;
    }
    CVisual::SetDirtyFlags((CVisual *)a1, 0x4000);
  }
LABEL_45:
  *(_BYTE *)(a1 + 240) &= ~0x10u;
  return v6;
}
