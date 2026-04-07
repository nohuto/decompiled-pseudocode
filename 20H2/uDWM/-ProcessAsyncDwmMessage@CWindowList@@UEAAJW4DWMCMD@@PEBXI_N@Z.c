/*
 * XREFs of ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180015780
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IconChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYICONCHANGE@@@Z @ 0x180012C50 (-IconChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYICONCHANGE@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012D2C (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z @ 0x180014C94 (-SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z.c)
 *     ?TextChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYTEXTCHANGE@@@Z @ 0x1800159FC (-TextChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYTEXTCHANGE@@@Z.c)
 *     ?MouseLeaveWindow@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_MOUSELEAVEWINDOW@@@Z @ 0x18002AC64 (-MouseLeaveWindow@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_MOUSELEAVEWINDOW@@@Z.c)
 *     ?EndTransition@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ENDTRANSITION@@@Z @ 0x180032458 (-EndTransition@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ENDTRANSITION@@@Z.c)
 *     ?SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z @ 0x18003887C (-SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z.c)
 *     ?AnimationChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYANIMATIONCHANGE@@@Z @ 0x180040900 (-AnimationChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYANIMATIONCHANGE@@@Z.c)
 *     ?SetWindowAttribute@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWATTRIBUTE@@@Z @ 0x1800414A0 (-SetWindowAttribute@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWATTRIBUTE@@@Z.c)
 *     ?DesktopCreate@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE@@@Z @ 0x180045948 (-DesktopCreate@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE@@@Z.c)
 *     ?GetMagnifierControlForDesktop@CWindowList@@QEAAPEAVCMagnifierControl@@_K@Z @ 0x180046B3C (-GetMagnifierControlForDesktop@CWindowList@@QEAAPEAVCMagnifierControl@@_K@Z.c)
 *     ?ShellWindowChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSHELLWINDOWCHANGE@@@Z @ 0x1800502F8 (-ShellWindowChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSHELLWINDOWCHANGE@@@Z.c)
 *     ?StartupEnd@CWindowList@@AEAAJXZ @ 0x180051A54 (-StartupEnd@CWindowList@@AEAAJXZ.c)
 *     ?StartupBegin@CWindowList@@AEAAJXZ @ 0x180051EB0 (-StartupBegin@CWindowList@@AEAAJXZ.c)
 *     ?SetNotifyWindow@CImmersiveIconicBitmapRegistry@@QEAAXPEAUHWND__@@@Z @ 0x180052CB0 (-SetNotifyWindow@CImmersiveIconicBitmapRegistry@@QEAAXPEAUHWND__@@@Z.c)
 *     ?SetExclusiveView@CAnalogCompositorManager@@SAJI@Z @ 0x180080720 (-SetExclusiveView@CAnalogCompositorManager@@SAJI@Z.c)
 *     ?UpdateEnableClearForRenderTargets@CDesktopManager@@QEAAXXZ @ 0x180086D14 (-UpdateEnableClearForRenderTargets@CDesktopManager@@QEAAXXZ.c)
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x18008BCEC (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MagnifierWithinEdgesNoJitter@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18008CAC0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MagnifierWithinEdgesNoJitter@@@details@wi.c)
 *     ?DesktopFree@CWindowList@@AEAAXPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPFREE@@@Z @ 0x180096A90 (-DesktopFree@CWindowList@@AEAAXPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPFREE@@@Z.c)
 *     ?ModeChange@CWindowList@@AEAAJXZ @ 0x180097F7C (-ModeChange@CWindowList@@AEAAJXZ.c)
 *     ?OnWindowArrangementContinue@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x1800980C0 (-OnWindowArrangementContinue@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z.c)
 *     ?OnWindowArrangementEnd@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x180098158 (-OnWindowArrangementEnd@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z.c)
 *     ?OnWindowArrangementStart@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x1800981E4 (-OnWindowArrangementStart@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z.c)
 *     ?RegisterSharedVirtualDesktopVisual@CWindowList@@UEAAJPEAUHWND__@@T_LARGE_INTEGER@@PEAX@Z @ 0x180098810 (-RegisterSharedVirtualDesktopVisual@CWindowList@@UEAAJPEAUHWND__@@T_LARGE_INTEGER@@PEAX@Z.c)
 *     ?RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z @ 0x180098F6C (-RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z.c)
 *     ?OnContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTCONTACT@@@Z @ 0x18009DE50 (-OnContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTCONTACT@@@Z.c)
 *     ?OnMultiContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTMULTICONTACT@@@Z @ 0x18009ECA4 (-OnMultiContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTMULTICONTACT@@@Z.c)
 *     ?OnShowContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_SHOWCONTACT@@@Z @ 0x18009EDE8 (-OnShowContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_SHOWCONTACT@@@Z.c)
 *     ?OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z @ 0x18009EFF4 (-OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z.c)
 *     ?OnTextTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERTEXTCONTACT@@@Z @ 0x18009F31C (-OnTextTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERTEXTCONTACT@@@Z.c)
 *     ?SkipAnimationDelays@CScreenRotation@@QEAAJXZ @ 0x1800ACA64 (-SkipAnimationDelays@CScreenRotation@@QEAAJXZ.c)
 */

__int64 __fastcall CWindowList::ProcessAsyncDwmMessage(CWindowList *a1, int a2, __int64 a3, unsigned int a4, char a5)
{
  unsigned int v7; // ebx
  int v8; // edx
  int v9; // edx
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // edx
  int v16; // edx
  int v17; // edx
  int v18; // edx
  int v19; // edx
  int v20; // eax
  int v21; // edx
  int v22; // edx
  int v23; // edx
  int v24; // edx
  int v25; // edx
  int v26; // edx
  int v27; // edx
  struct CMagnifierControl *v28; // rax
  __int64 v29; // r9
  int v30; // eax
  int v31; // r9d
  struct CMagnifierControl *v32; // rax
  __int64 v33; // r9
  int v34; // eax
  int v35; // edx
  int v36; // edx
  int v37; // edx
  int v38; // edx
  int v39; // edx
  int v40; // edx
  const struct MILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION *v41; // rdx
  struct CMagnifierControl *v42; // rax
  __int64 v43; // r9
  int v44; // eax
  struct CMagnifierControl *v45; // rax
  __int64 v46; // r9
  int v47; // eax
  struct CMagnifierControl *v48; // rax
  __int64 v49; // r9
  int v50; // eax
  struct CMagnifierControl *v51; // rax
  __int64 v52; // r9
  int v53; // eax
  struct CMagnifierControl *v54; // rax
  __int64 v55; // r9
  int v56; // eax
  struct CMagnifierControl *v57; // rax
  __int64 v58; // r9
  int v59; // eax
  int v60; // edx
  int v61; // edx
  int v62; // edx
  int v63; // edx
  __int64 v64; // rdx
  CScreenRotation *v65; // rcx
  struct CMagnifierControl *MagnifierControlForDesktop; // rax
  __int64 v67; // r9
  int v68; // eax
  struct CMagnifierControl *v69; // rax
  __int64 v70; // r9
  int v71; // eax
  struct CMagnifierControl *v72; // rax
  __int64 v73; // r9
  int v74; // eax
  struct CMagnifierControl *v75; // rax
  __int64 v76; // r9
  int v77; // eax
  struct CMagnifierControl *v78; // rax
  __int64 v79; // r9
  int v80; // eax
  int v81; // edx
  unsigned int v82; // [rsp+20h] [rbp-20h]
  unsigned __int64 v83[2]; // [rsp+30h] [rbp-10h] BYREF

  v7 = -2147467263;
  if ( a2 == 1073741851 && a4 == 12 )
  {
    CWindowList::MouseLeaveWindow(a1, (const struct MILCMD_DWM_REDIRECTION_MOUSELEAVEWINDOW *)a3);
    return 0;
  }
  if ( !a5 )
  {
    if ( a2 > 1073741891 )
    {
      v21 = a2 - 1073741896;
      if ( !v21 )
      {
        if ( a4 != 8 )
          return v7;
        CWindowList::EndTransition(a1, (const struct MILCMD_DWM_REDIRECTION_ENDTRANSITION *)a3);
        return 0;
      }
      v23 = v21 - 11;
      if ( !v23 )
      {
        if ( a4 != 12 )
          return v7;
        CImmersiveIconicBitmapRegistry::SetNotifyWindow(
          *((CImmersiveIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance + 38),
          *(HWND *)(a3 + 4));
        return 0;
      }
      v81 = v23 - 30;
      if ( !v81 )
      {
        if ( a4 != 28 )
          return v7;
        CContactManager::OnTextTether(
          *((CContactManager **)CDesktopManager::s_pDesktopManagerInstance + 24),
          (const struct MILCMD_DWM_REDIRECTION_TETHERTEXTCONTACT *)a3);
        return 0;
      }
      if ( v81 != 6 )
        return v7;
      if ( a4 == 8 )
        return (unsigned int)CAnalogCompositorManager::SetExclusiveView(*(_DWORD *)(a3 + 4));
      v31 = -2003303421;
      v82 = 713;
      v7 = -2003303421;
LABEL_84:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v31, v82);
      return v7;
    }
    if ( a2 == 1073741891 )
    {
      if ( a4 != 20 )
        return v7;
      CContactManager::OnTether(
        *((CContactManager **)CDesktopManager::s_pDesktopManagerInstance + 24),
        (const struct MILCMD_DWM_REDIRECTION_TETHERCONTACT *)a3);
      return 0;
    }
    v16 = a2 - 1073741860;
    if ( v16 )
    {
      v17 = v16 - 1;
      if ( v17 )
      {
        v18 = v17 - 9;
        if ( v18 )
        {
          v19 = v18 - 1;
          if ( v19 )
          {
            if ( v19 == 19 && a4 == 12 )
            {
              CContactManager::OnShowContact(
                *((CContactManager **)CDesktopManager::s_pDesktopManagerInstance + 24),
                (const struct MILCMD_DWM_REDIRECTION_SHOWCONTACT *)a3);
              return 0;
            }
            return v7;
          }
          if ( a4 != 8 )
            return v7;
          v20 = CWindowList::SettingsChange(a1, (const struct MILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE *)a3);
          v7 = v20;
          if ( v20 >= 0 )
            return v7;
          v82 = 664;
        }
        else
        {
          v20 = CWindowList::ModeChange(a1);
          v7 = v20;
          if ( v20 >= 0 )
            return v7;
          v82 = 658;
        }
      }
      else
      {
        v20 = CWindowList::StartupEnd(a1);
        v7 = v20;
        if ( v20 >= 0 )
          return v7;
        v82 = 654;
      }
    }
    else
    {
      v20 = CWindowList::StartupBegin(a1);
      v7 = v20;
      if ( v20 >= 0 )
        return v7;
      v82 = 650;
    }
    goto LABEL_82;
  }
  if ( a2 > 1073741920 )
  {
    if ( a2 > 1073741929 )
    {
      v60 = a2 - 1073741930;
      if ( v60 )
      {
        v61 = v60 - 1;
        if ( v61 )
        {
          v62 = v61 - 1;
          if ( v62 )
          {
            v63 = v62 - 1;
            if ( v63 )
            {
              v64 = (unsigned int)(v63 - 1);
              if ( (_DWORD)v64 )
              {
                if ( (_DWORD)v64 == 2 && a4 == 4 )
                {
                  v65 = (CScreenRotation *)*((_QWORD *)a1 + 62);
                  if ( !v65 )
                    return 0;
                  return (unsigned int)CScreenRotation::SkipAnimationDelays(v65);
                }
                return v7;
              }
              LODWORD(v64) = 1;
              wil::details::FeatureImpl<__WilFeatureTraits_Feature_MagnifierWithinEdgesNoJitter>::ReportUsage(
                &`wil::Feature<__WilFeatureTraits_Feature_MagnifierWithinEdgesNoJitter>::GetImpl'::`2'::impl,
                v64,
                12LL);
              if ( a4 != 24 )
              {
                v7 = -2003303421;
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2003303421, 0x244u);
                return v7;
              }
              v83[0] = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
              EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
              MagnifierControlForDesktop = CWindowList::GetMagnifierControlForDesktop(
                                             *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                                             *(_QWORD *)(a3 + 4));
              if ( MagnifierControlForDesktop )
              {
                LOBYTE(v67) = a5;
                v68 = CMagnifierControl::OnMagnifierApiMessage(MagnifierControlForDesktop, 1073741934LL, a3, v67);
                v7 = v68;
                if ( v68 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v68, 0x24Eu);
              }
            }
            else
            {
              if ( a4 != 16 )
              {
                v7 = -2003303421;
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2003303421, 0x231u);
                return v7;
              }
              v83[0] = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
              EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
              v69 = CWindowList::GetMagnifierControlForDesktop(
                      *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                      *(_QWORD *)(a3 + 4));
              if ( v69 )
              {
                LOBYTE(v70) = a5;
                v71 = CMagnifierControl::OnMagnifierApiMessage(v69, 1073741933LL, a3, v70);
                v7 = v71;
                if ( v71 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v71, 0x23Bu);
              }
            }
          }
          else
          {
            if ( a4 != 112 )
            {
              v7 = -2003303421;
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2003303421, 0x21Fu);
              return v7;
            }
            v83[0] = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
            EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
            v72 = CWindowList::GetMagnifierControlForDesktop(
                    *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                    *(_QWORD *)(a3 + 4));
            if ( v72 )
            {
              LOBYTE(v73) = a5;
              v74 = CMagnifierControl::OnMagnifierApiMessage(v72, 1073741932LL, a3, v73);
              v7 = v74;
              if ( v74 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v74, 0x229u);
            }
          }
        }
        else
        {
          if ( a4 != 16 )
          {
            v7 = -2003303421;
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2003303421, 0x20Fu);
            return v7;
          }
          v83[0] = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
          EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
          v75 = CWindowList::GetMagnifierControlForDesktop(
                  *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                  *(_QWORD *)(a3 + 4));
          if ( v75 )
          {
            LOBYTE(v76) = a5;
            v77 = CMagnifierControl::OnMagnifierApiMessage(v75, 1073741931LL, a3, v76);
            v7 = v77;
            if ( v77 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v77, 0x218u);
          }
        }
      }
      else
      {
        if ( a4 != 24 )
        {
          v7 = -2003303421;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2003303421, 0x1FFu);
          return v7;
        }
        v83[0] = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
        EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
        v78 = CWindowList::GetMagnifierControlForDesktop(
                *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                *(_QWORD *)(a3 + 12));
        if ( v78 )
        {
          LOBYTE(v79) = a5;
          v80 = CMagnifierControl::OnMagnifierApiMessage(v78, 1073741930LL, a3, v79);
          v7 = v80;
          if ( v80 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v80, 0x208u);
        }
      }
      goto LABEL_70;
    }
    if ( a2 == 1073741929 )
    {
      if ( a4 != 44 )
      {
        v7 = -2003303421;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2003303421, 0x1EFu);
        return v7;
      }
      v83[0] = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
      EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
      v57 = CWindowList::GetMagnifierControlForDesktop(
              *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
              *(_QWORD *)(a3 + 12));
      if ( v57 )
      {
        LOBYTE(v58) = a5;
        v59 = CMagnifierControl::OnMagnifierApiMessage(v57, 1073741929LL, a3, v58);
        v7 = v59;
        if ( v59 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v59, 0x1F8u);
      }
      goto LABEL_70;
    }
    v35 = a2 - 1073741921;
    if ( !v35 )
    {
      if ( a4 != 120 )
      {
        v7 = -2003303421;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2003303421, 0x19Eu);
        return v7;
      }
      v83[0] = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
      EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
      v54 = CWindowList::GetMagnifierControlForDesktop(
              *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
              *(_QWORD *)(a3 + 12));
      if ( v54 )
      {
        LOBYTE(v55) = a5;
        v56 = CMagnifierControl::OnMagnifierApiMessage(v54, 1073741921LL, a3, v55);
        v7 = v56;
        if ( v56 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v56, 0x1A7u);
      }
      goto LABEL_70;
    }
    v36 = v35 - 1;
    if ( !v36 )
    {
      if ( a4 != 232 )
      {
        v7 = -2003303421;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2003303421, 0x1AEu);
        return v7;
      }
      v83[0] = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
      EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
      v51 = CWindowList::GetMagnifierControlForDesktop(
              *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
              *(_QWORD *)(a3 + 224));
      if ( v51 )
      {
        LOBYTE(v52) = a5;
        v53 = CMagnifierControl::OnMagnifierApiMessage(v51, 1073741922LL, a3, v52);
        v7 = v53;
        if ( v53 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v53, 0x1B7u);
      }
      goto LABEL_70;
    }
    v37 = v36 - 1;
    if ( !v37 )
    {
      if ( a4 != 232 )
      {
        v7 = -2003303421;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2003303421, 0x1BEu);
        return v7;
      }
      v83[0] = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
      EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
      v48 = CWindowList::GetMagnifierControlForDesktop(
              *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
              *(_QWORD *)(a3 + 224));
      if ( v48 )
      {
        LOBYTE(v49) = a5;
        v50 = CMagnifierControl::OnMagnifierApiMessage(v48, 1073741923LL, a3, v49);
        v7 = v50;
        if ( v50 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v50, 0x1C7u);
      }
      goto LABEL_70;
    }
    v38 = v37 - 3;
    if ( !v38 )
    {
      if ( a4 != 112 )
      {
        v7 = -2003303421;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2003303421, 0x1CEu);
        return v7;
      }
      v83[0] = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
      EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
      v45 = CWindowList::GetMagnifierControlForDesktop(
              *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
              *(_QWORD *)(a3 + 4));
      if ( v45 )
      {
        LOBYTE(v46) = a5;
        v47 = CMagnifierControl::OnMagnifierApiMessage(v45, 1073741926LL, a3, v46);
        v7 = v47;
        if ( v47 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v47, 0x1D7u);
      }
      goto LABEL_70;
    }
    v39 = v38 - 1;
    if ( !v39 )
    {
      if ( a4 != 28 )
      {
        v7 = -2003303421;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2003303421, 0x1DEu);
        return v7;
      }
      v83[0] = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
      EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
      v42 = CWindowList::GetMagnifierControlForDesktop(
              *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
              *(_QWORD *)(a3 + 4));
      if ( v42
        && (LOBYTE(v43) = a5,
            v44 = CMagnifierControl::OnMagnifierApiMessage(v42, 1073741927LL, a3, v43),
            v7 = v44,
            v44 < 0) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v44, 0x1E7u);
      }
      else
      {
        CDesktopManager::UpdateEnableClearForRenderTargets(CDesktopManager::s_pDesktopManagerInstance);
      }
      goto LABEL_70;
    }
    if ( v39 != 1 )
      return v7;
    v40 = *(_DWORD *)(a3 + 4);
    if ( v40 )
    {
      v41 = (const struct MILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION *)(unsigned int)(v40 - 1);
      if ( (_DWORD)v41 )
      {
        if ( (_DWORD)v41 != 1 )
        {
          v7 = -2147024809;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x263u);
          return v7;
        }
        v20 = CWindowList::OnWindowArrangementEnd(a1, v41);
        v7 = v20;
        if ( v20 >= 0 )
          return v7;
        v82 = 608;
      }
      else
      {
        v20 = CWindowList::OnWindowArrangementContinue(a1, (const struct MILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION *)a3);
        v7 = v20;
        if ( v20 >= 0 )
          return v7;
        v82 = 605;
      }
    }
    else
    {
      v20 = CWindowList::OnWindowArrangementStart(a1, (const struct MILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION *)a3);
      v7 = v20;
      if ( v20 >= 0 )
        return v7;
      v82 = 602;
    }
LABEL_82:
    v31 = v20;
    goto LABEL_84;
  }
  if ( a2 == 1073741920 )
  {
    if ( a4 != 20 )
    {
      v7 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2003303421, 0x18Eu);
      return v7;
    }
    v83[0] = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v32 = CWindowList::GetMagnifierControlForDesktop(
            *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
            *(_QWORD *)(a3 + 12));
    if ( v32 )
    {
      LOBYTE(v33) = a5;
      v34 = CMagnifierControl::OnMagnifierApiMessage(v32, 1073741920LL, a3, v33);
      v7 = v34;
      if ( v34 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v34, 0x197u);
    }
    goto LABEL_70;
  }
  if ( a2 == 1073741868 )
  {
    if ( a4 != 16 )
      return v7;
    CWindowList::AnimationChange(a1, (const struct MILCMD_DWM_REDIRECTION_NOTIFYANIMATIONCHANGE *)a3);
    return 0;
  }
  if ( a2 > 1073741868 )
  {
    v22 = a2 - 1073741873;
    if ( !v22 )
    {
      GetDesktopID(1LL, v83);
      v20 = CDesktopManager::SendSwitchModeCommand(v83[0]);
      v7 = v20;
      if ( v20 >= 0 )
        return v7;
      v82 = 637;
      goto LABEL_82;
    }
    v24 = v22 - 6;
    if ( !v24 )
    {
      if ( a4 != 8 )
        return v7;
      return (unsigned int)CWindowList::RotationModeChange(
                             a1,
                             (const struct MILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE *)a3);
    }
    v25 = v24 - 7;
    if ( !v25 )
    {
      if ( a4 != 56 )
        return v7;
      v20 = CContactManager::OnContact(
              *((CContactManager **)CDesktopManager::s_pDesktopManagerInstance + 24),
              (const struct MILCMD_DWM_REDIRECTION_NATURALINPUTCONTACT *)a3);
      v7 = v20;
      if ( v20 >= 0 )
        return v7;
      v82 = 264;
      goto LABEL_82;
    }
    v26 = v25 - 1;
    if ( !v26 )
    {
      if ( a4 - 21 > 0x13D7 )
        return v7;
      if ( *(_DWORD *)(a3 + 8) >= 0xFFFFFFEC )
        return v7;
      if ( a4 != *(_DWORD *)(a3 + 8) + 20 )
        return v7;
      v20 = CContactManager::OnMultiContact(
              *((CContactManager **)CDesktopManager::s_pDesktopManagerInstance + 24),
              (const struct MILCMD_DWM_REDIRECTION_NATURALINPUTMULTICONTACT *)a3);
      v7 = v20;
      if ( v20 >= 0 )
        return v7;
      v82 = 287;
      goto LABEL_82;
    }
    v27 = v26 - 17;
    if ( !v27 )
    {
      if ( a4 == 28 )
      {
        CWindowList::RegisterSharedVirtualDesktopVisual(
          *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
          *(HWND *)(a3 + 4),
          *(union _LARGE_INTEGER *)(a3 + 12),
          *(void **)(a3 + 20));
      }
      else
      {
        v7 = -2003303421;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2003303421, 0x269u);
      }
      return v7;
    }
    if ( v27 != 15 )
      return v7;
    if ( a4 != 24 )
    {
      v7 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2003303421, 0x17Eu);
      return v7;
    }
    v83[0] = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v28 = CWindowList::GetMagnifierControlForDesktop(
            *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
            *(_QWORD *)(a3 + 12));
    if ( v28 )
    {
      LOBYTE(v29) = a5;
      v30 = CMagnifierControl::OnMagnifierApiMessage(v28, 1073741919LL, a3, v29);
      v7 = v30;
      if ( v30 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v30, 0x187u);
    }
LABEL_70:
    CGuard<CDwmCS>::~CGuard<CDwmCS>((struct _RTL_CRITICAL_SECTION **)v83);
    return v7;
  }
  v8 = a2 - 1073741832;
  if ( !v8 )
  {
    if ( a4 != 28 )
      return v7;
    return (unsigned int)CWindowList::IconChange(a1, (const struct MILCMD_DWM_REDIRECTION_NOTIFYICONCHANGE *)a3);
  }
  v9 = v8 - 1;
  if ( v9 )
  {
    v12 = v9 - 4;
    if ( !v12 )
    {
      if ( a4 != 20 )
        return v7;
      CWindowList::ShellWindowChange(a1, (const struct MILCMD_DWM_REDIRECTION_NOTIFYSHELLWINDOWCHANGE *)a3);
      return 0;
    }
    v13 = v12 - 1;
    if ( !v13 )
    {
      if ( a4 != 12 )
        return v7;
      return (unsigned int)CWindowList::DesktopCreate(a1, (const struct MILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE *)a3);
    }
    v14 = v13 - 2;
    if ( !v14 )
    {
      if ( a4 != 12 )
        return v7;
      CWindowList::DesktopFree(a1, (const struct MILCMD_DWM_REDIRECTION_NOTIFYDESKTOPFREE *)a3);
      return 0;
    }
    v15 = v14 - 7;
    if ( !v15 )
      return 0;
    if ( v15 == 19
      && a4 > 0x18
      && *(_DWORD *)(a3 + 20) < 0xFFFFFFE8
      && a4 >= *(_DWORD *)(a3 + 20) + 24
      && !*(_DWORD *)(a3 + 4) )
    {
      return (unsigned int)CWindowList::SetWindowAttribute(a1, (const struct MILCMD_DWM_WINDOWATTRIBUTE *)a3);
    }
  }
  else if ( a4 == 12 )
  {
    return (unsigned int)CWindowList::TextChange(a1, (const struct MILCMD_DWM_REDIRECTION_NOTIFYTEXTCHANGE *)a3);
  }
  return v7;
}
