/*
 * XREFs of ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x18002ACE8
 * Callers:
 *     ?OnVisibilityUpdated@CWindowData@@QEAAJXZ @ 0x1800161D8 (-OnVisibilityUpdated@CWindowData@@QEAAJXZ.c)
 *     ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x180032778 (-SetupZOrder@CTransitionVisualController@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_IsAnimationComponentVisible@CTransitionVisualController@@IEAA_NPEAVCAnimationComponent@@@Z @ 0x1800069A4 (-_IsAnimationComponentVisible@CTransitionVisualController@@IEAA_NPEAVCAnimationComponent@@@Z.c)
 *     ?_IsOwnedByVisibleAC@CTransitionVisualController@@IEAA_NPEBVCWindowData@@@Z @ 0x1800082C8 (-_IsOwnedByVisibleAC@CTransitionVisualController@@IEAA_NPEBVCWindowData@@@Z.c)
 *     ?_ShouldMoveOriginalWindowOffscreenForClone@CTransitionVisualController@@IEAA_NPEAVCWindowData@@@Z @ 0x1800084F4 (-_ShouldMoveOriginalWindowOffscreenForClone@CTransitionVisualController@@IEAA_NPEAVCWindowData@@.c)
 *     ?_FindClone@CTransitionVisualController@@IEAAIPEAVCWindowData@@_N@Z @ 0x18000B050 (-_FindClone@CTransitionVisualController@@IEAAIPEAVCWindowData@@_N@Z.c)
 *     ?ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x18000C8D4 (-ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017394 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180018A6C (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x1800242F0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x18002B1BC (-HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?IsWindowVisibleAndUncloaked@CWindowData@@QEBA_NXZ @ 0x18002B44C (-IsWindowVisibleAndUncloaked@CWindowData@@QEBA_NXZ.c)
 *     ?Create@CImmersiveState@@SAJPEAPEAV1@_K@Z @ 0x18003C390 (-Create@CImmersiveState@@SAJPEAPEAV1@_K@Z.c)
 *     ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N122PEA_N@Z @ 0x180041618 (-_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N122PE.c)
 *     ?RemoveAt@?$DynArray@UTlwPair@CTransitionVisualController@@$0A@@@QEAAJI@Z @ 0x1800427C8 (-RemoveAt@-$DynArray@UTlwPair@CTransitionVisualController@@$0A@@@QEAAJI@Z.c)
 *     ?IsLauncherShownAboveWindow@CImmersiveState@@QEAA_NPEBVCWindowData@@@Z @ 0x1800429E4 (-IsLauncherShownAboveWindow@CImmersiveState@@QEAA_NPEBVCWindowData@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Hub_20H2_UDWM@@@details@wil@@QEAA_NXZ @ 0x1800561E8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Hub_20H2_UDWM@@@details@wil@@QEAA.c)
 *     memset_0 @ 0x1800563D2 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0pp_EtwEventWriteTransfer @ 0x180093018 (McTemplateU0pp_EtwEventWriteTransfer.c)
 *     ?_CleanupHighZOrderClone@CTransitionVisualController@@IEAAXAEAUTlwPair@1@@Z @ 0x1800AAE1C (-_CleanupHighZOrderClone@CTransitionVisualController@@IEAAXAEAUTlwPair@1@@Z.c)
 */

__int64 __fastcall CTransitionVisualController::_SetupHighZOrderStaticWindows(CTransitionVisualController *this)
{
  bool v2; // zf
  unsigned int v3; // ebp
  _BYTE *v4; // r13
  char v5; // r14
  unsigned int v6; // edx
  __int64 v7; // rax
  size_t v8; // rdi
  _BYTE *v9; // rax
  __int64 v10; // r12
  int v11; // r15d
  struct _LIST_ENTRY *v12; // rsi
  int v13; // eax
  struct _LIST_ENTRY *Blink; // rdi
  __int64 v15; // rdx
  char v16; // bp
  __int64 v17; // r14
  HWND v18; // rcx
  CTransitionVisualController *v19; // rcx
  bool HasVisibleStyle; // al
  char v21; // r14
  __int64 v22; // rsi
  __int64 v23; // rbp
  __int64 v24; // rcx
  unsigned int Flink; // eax
  int v26; // ecx
  unsigned int Clone; // eax
  CTransitionVisualController *v28; // rcx
  char v29; // r8
  __int64 v30; // r14
  __int64 v31; // rdx
  struct CVisual *v32; // rsi
  __int64 v33; // rcx
  bool ShouldMoveOriginalWindowOffscreenForClone; // al
  int v35; // eax
  __int64 v36; // r9
  __int64 v37; // rdi
  __int64 v38; // rsi
  __int64 v39; // rdx
  __int64 v41; // [rsp+40h] [rbp-68h]
  size_t v42; // [rsp+48h] [rbp-60h]
  struct _LIST_ENTRY *WindowListForDesktop; // [rsp+50h] [rbp-58h]
  char i; // [rsp+B0h] [rbp+8h]
  unsigned int v45; // [rsp+B8h] [rbp+10h]
  __int64 v46; // [rsp+C0h] [rbp+18h]
  CImmersiveState *v47; // [rsp+C8h] [rbp+20h] BYREF

  v2 = *((_QWORD *)this + 12) == -1LL;
  v3 = 0;
  v4 = 0LL;
  v47 = 0LL;
  if ( v2 )
    goto LABEL_72;
  v5 = 1;
  v6 = 0;
  for ( i = 1; v6 < *((_DWORD *)this + 12); *(_BYTE *)(*((_QWORD *)this + 3) + 24 * v7 + 17) = 0 )
    v7 = v6++;
  v8 = *((int *)this + 34);
  v42 = v8;
  v9 = (_BYTE *)(*(__int64 (__fastcall **)(WPF::HeapBase *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                  WPF::g_pProcessHeap,
                  v8);
  v4 = v9;
  if ( !v9 )
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      -2147024882,
      0x7B8u);
    goto LABEL_72;
  }
  memset_0(v9, 0, v8);
  v10 = (unsigned int)(v8 - 1);
  v11 = v8 - 1;
  WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                           *((_QWORD *)this + 12));
  v12 = WindowListForDesktop;
  if ( !WindowListForDesktop )
    goto LABEL_62;
  v13 = CImmersiveState::Create(&v47, *((_QWORD *)this + 12));
  v45 = v13;
  v3 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      v13,
      0x7C1u);
    goto LABEL_70;
  }
  Blink = WindowListForDesktop->Blink;
  if ( (int)v10 < 0 )
  {
LABEL_62:
    if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Hub_20H2_UDWM>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Hub_20H2_UDWM>::GetImpl'::`2'::impl)
      || v5 )
    {
      v37 = (unsigned int)(*((_DWORD *)this + 12) - 1);
      if ( (int)v37 >= 0 )
      {
        v38 = 24LL * (int)v37;
        do
        {
          v39 = *((_QWORD *)this + 3);
          if ( *(_BYTE *)(v39 + v38 + 16) && !*(_BYTE *)(v39 + v38 + 17) )
          {
            CTransitionVisualController::_CleanupHighZOrderClone(
              this,
              (struct CTransitionVisualController::TlwPair *)(v39 + 24 * v37));
            DynArray<CTransitionVisualController::TlwPair,0>::RemoveAt((char *)this + 24, (unsigned int)v37);
          }
          v38 -= 24LL;
          v37 = (unsigned int)(v37 - 1);
        }
        while ( (int)v37 >= 0 );
      }
    }
    goto LABEL_70;
  }
  v15 = (int)v10;
  v46 = (int)v10;
  v41 = (int)v10;
  while ( 2 )
  {
    if ( Blink == v12 || v11 < 0 )
    {
LABEL_61:
      v5 = i;
      goto LABEL_62;
    }
    v16 = i;
    while ( 1 )
    {
      v17 = v15;
      v18 = *(HWND *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL * (unsigned int)v11) + 16LL);
      if ( v18 != HWND_MESSAGE|0x2LL )
        break;
LABEL_19:
      --v15;
      v4[v17] = 1;
      --v11;
      v46 = v15;
      if ( v11 < 0 )
        goto LABEL_20;
    }
    if ( (GetWindowLongPtrW(v18, -16) & 0x10000000) == 0
      && !CTransitionVisualController::_IsAnimationComponentVisible(
            v19,
            *(struct CAnimationComponent **)(*((_QWORD *)this + 14) + 8LL * (unsigned int)v11)) )
    {
      HasVisibleStyle = CTransitionVisualController::HasVisibleStyle(*(HWND *)(*(_QWORD *)(*((_QWORD *)this + 14)
                                                                                         + 8LL * (unsigned int)v11)
                                                                             + 16LL));
      v15 = v46;
      v16 = HasVisibleStyle ? v16 : 0;
      goto LABEL_19;
    }
LABEL_20:
    i = v16;
    v3 = v45;
    if ( v11 < 0 )
      goto LABEL_61;
    v21 = 0;
    v22 = v42 - 1;
    if ( (__int64)(v42 - 1) >= 0 )
    {
      v23 = v46;
      do
      {
        v24 = *(_QWORD *)(*((_QWORD *)this + 14) + 8 * v22);
        if ( !*(_BYTE *)(v24 + 65)
          && *(_DWORD *)(*(_QWORD *)(v24 + 128) + 24LL) != 4
          && (*(_BYTE *)(v24 + 67) || CTransitionVisualController::HasVisibleStyle(*(HWND *)(v24 + 16)))
          && *(struct _LIST_ENTRY **)(*(_QWORD *)(*((_QWORD *)this + 14) + 8 * v22) + 16LL) == Blink[2].Blink )
        {
          v21 = 1;
          --v11;
          v4[v22] = 1;
          --v23;
        }
        --v22;
      }
      while ( v22 >= 0 );
      v46 = v23;
      v3 = v45;
      if ( v21 )
        goto LABEL_58;
    }
    if ( !Blink[1].Blink )
      goto LABEL_58;
    if ( !Blink[24].Flink )
      goto LABEL_58;
    if ( !CWindowData::IsWindowVisibleAndUncloaked((CWindowData *)Blink) )
      goto LABEL_58;
    if ( (HIDWORD(Blink[6].Flink) & 0x20000000) != 0 )
      goto LABEL_58;
    Flink = (unsigned int)Blink[7].Flink;
    if ( Flink <= 0xC )
    {
      v26 = 4162;
      if ( _bittest(&v26, Flink) )
        goto LABEL_58;
    }
    if ( !CTransitionVisualController::ShouldCloneWindow((HWND)Blink[2].Blink)
      || CImmersiveState::IsLauncherShownAboveWindow(v47, (const struct CWindowData *)Blink)
      || CTransitionVisualController::_IsOwnedByVisibleAC(this, (const struct CWindowData *)Blink) )
    {
      goto LABEL_58;
    }
    Clone = CTransitionVisualController::_FindClone(this, (struct CWindowData *)Blink, 1);
    if ( Clone >= *((_DWORD *)this + 12) )
    {
      v29 = 0;
    }
    else
    {
      v28 = (CTransitionVisualController *)*((_QWORD *)this + 3);
      *((_BYTE *)v28 + 24 * Clone + 17) = v29;
    }
    v30 = v41;
    if ( v41 >= 0 )
    {
      do
      {
        if ( !v4[v30] )
          break;
        v10 = (unsigned int)(v10 - 1);
        --v30;
      }
      while ( v30 >= 0 );
      v41 = v30;
    }
    if ( (int)v10 < 0 )
    {
      v31 = 0LL;
    }
    else
    {
      _mm_lfence();
      v28 = *(CTransitionVisualController **)(*((_QWORD *)this + 14) + 8 * v10);
      v31 = *((_QWORD *)v28 + 5);
    }
    v32 = (struct CVisual *)((v31 + 8) & -(__int64)(v31 != 0));
    if ( v29 )
    {
      VisualCollection::InsertRelative(
        (VisualCollection *)(*((_QWORD *)this + 2) + 32LL),
        *(struct CVisual **)(*((_QWORD *)this + 3) + 24LL * Clone + 8),
        v32,
        1u,
        1);
LABEL_53:
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      {
        if ( (int)v10 < 0 )
        {
          v36 = 0LL;
        }
        else
        {
          _mm_lfence();
          v33 = *(_QWORD *)(*((_QWORD *)this + 14) + 8 * v10);
          v36 = *(_QWORD *)(v33 + 16);
        }
        McTemplateU0pp_EtwEventWriteTransfer(v33, &UdwmSystemAnimation_ZOrderClone, Blink[2].Blink, v36);
      }
LABEL_58:
      Blink = Blink->Blink;
      if ( v11 >= 0 )
      {
        v15 = v46;
        v12 = WindowListForDesktop;
        continue;
      }
      goto LABEL_61;
    }
    break;
  }
  ShouldMoveOriginalWindowOffscreenForClone = CTransitionVisualController::_ShouldMoveOriginalWindowOffscreenForClone(
                                                v28,
                                                (struct CWindowData *)Blink);
  v35 = CTransitionVisualController::_StageCloneRelative(
          this,
          (struct CTopLevelWindow *)Blink[24].Flink,
          *((struct CVisual **)this + 2),
          1,
          v32,
          1,
          ShouldMoveOriginalWindowOffscreenForClone,
          0LL);
  v45 = v35;
  v3 = v35;
  if ( v35 >= 0 )
    goto LABEL_53;
  MilInstrumentationCheckHR_MaybeFailFast(
    0x14u,
    &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
    2LL,
    v35,
    0x83Fu);
LABEL_70:
  if ( v47 )
    CBaseObject::Release(v47);
LABEL_72:
  (*(void (__fastcall **)(WPF::HeapBase *, _BYTE *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, v4);
  return v3;
}
