/*
 * XREFs of ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x18001A8C0
 * Callers:
 *     _lambda_95d8fb2efa1b08d320c8654ffeeb34da_::operator() @ 0x180006494 (_lambda_95d8fb2efa1b08d320c8654ffeeb34da_--operator().c)
 *     ?StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180009B08 (-StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ??1CTopLevelWindow3D@@MEAA@XZ @ 0x18000F558 (--1CTopLevelWindow3D@@MEAA@XZ.c)
 *     ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x180015CD8 (-ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z.c)
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x180016DA0 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180026264 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x18002A0F0 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?_StopAnimations@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z @ 0x180035618 (-_StopAnimations@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z.c)
 *     ?SetParent@CTopLevelWindow3D@@UEAAJPEAVCVisual@@@Z @ 0x18003B7A0 (-SetParent@CTopLevelWindow3D@@UEAAJPEAVCVisual@@@Z.c)
 *     ?OnSizeChanged@CTopLevelWindow3D@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18003EE00 (-OnSizeChanged@CTopLevelWindow3D@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x1800172D0 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18001A02C (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?ReleaseSceneObjects@CTopLevelWindow3D@@AEAAXXZ @ 0x18001A850 (-ReleaseSceneObjects@CTopLevelWindow3D@@AEAAXXZ.c)
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x18003E2D4 (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 *     ?QueueDestroySprite@CWindowList@@QEAAJPEAVCWindowData@@@Z @ 0x18003EA4C (-QueueDestroySprite@CWindowList@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?GetScenarioGuid@CTopLevelWindow3D@@AEAAXW4WindowAnimationType@1@PEAU_GUID@@@Z @ 0x18003FCC4 (-GetScenarioGuid@CTopLevelWindow3D@@AEAAXW4WindowAnimationType@1@PEAU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x180053520 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 *     ?_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x1800837A4 (-_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 *     McTemplateU0qp_EtwEventWriteTransfer @ 0x180085510 (McTemplateU0qp_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CTopLevelWindow3D::StopAnimation(unsigned __int64 this)
{
  int v2; // eax
  unsigned int v3; // edi
  __int64 v4; // rdx
  char v5; // r11
  char v6; // r11
  CTopLevelWindow *v7; // rcx
  int v8; // eax
  CLivePreview *v10; // rcx
  bool v11; // al
  __int64 v12; // rax
  char v13; // cl
  __int64 *v14; // rax
  __int64 v15; // r8
  __int64 v16; // rdx
  bool v17; // zf
  __int64 v18; // rax
  bool v19; // al
  int v20; // ecx
  int v21; // eax
  _QWORD v22[2]; // [rsp+30h] [rbp-28h] BYREF

  if ( *(_QWORD *)(this + 360) )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0qp_EtwEventWriteTransfer(this, &UdwmAnimation_Stop, *(unsigned int *)(this + 368));
    CTopLevelWindow3D::GetScenarioGuid(this, *(unsigned int *)(this + 368), v22);
    v12 = v22[0] - *(_QWORD *)&GUID_NULL.Data1;
    if ( v22[0] == *(_QWORD *)&GUID_NULL.Data1 )
      v12 = v22[1] - *(_QWORD *)GUID_NULL.Data4;
    if ( v12 )
      (*(void (__fastcall **)(_QWORD, _QWORD *, unsigned __int64))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                                 + 5)
                                                                               + 16LL)
                                                                 + 224LL))(
        *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL),
        v22,
        this | 0xD100000000000000uLL);
    v13 = CDesktopManager::s_fTimelineDirty;
    v14 = (__int64 *)(this + 376);
    v15 = 10LL;
    do
    {
      v16 = *v14;
      if ( *v14 )
      {
        v17 = (*(_DWORD *)(v16 + 8))-- == 1;
        if ( v17 )
          v13 = 1;
        *v14 = 0LL;
        CDesktopManager::s_fTimelineDirty = v13;
      }
      ++v14;
      --v15;
    }
    while ( v15 );
    v18 = *(_QWORD *)(this + 360);
    if ( v18 )
    {
      v17 = (*(_DWORD *)(v18 + 8))-- == 1;
      v19 = v13;
      if ( v17 )
        v19 = 1;
      *(_QWORD *)(this + 360) = 0LL;
      CDesktopManager::s_fTimelineDirty = v19;
    }
    if ( CDesktopManager::UnregisterForGlobalTimeChangeNotification((struct CVisual *)this) )
      --*((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 8);
    v20 = *(_DWORD *)(this + 368);
    if ( v20 == 9 && !*(_BYTE *)(this + 288) || *(_DWORD *)(this + 372) && (unsigned int)(v20 - 7) > 2 )
      *(_OWORD *)(this + 308) = *(_OWORD *)(*(_QWORD *)(this + 328) + 48LL);
    if ( (unsigned int)(v20 - 7) > 2 )
      *(_DWORD *)(this + 372) = 0;
    *(_DWORD *)(this + 368) = 0;
  }
  else if ( *(_BYTE *)(this + 480) && CDesktopManager::UnregisterForGlobalTimeChangeNotification((struct CVisual *)this) )
  {
    *(_BYTE *)(this + 480) = 0;
  }
  v2 = CRenderDataVisual::ClearInstructions((CRenderDataVisual *)this);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x55Du);
  }
  else
  {
    CTopLevelWindow3D::ReleaseSceneObjects((CTopLevelWindow3D *)this);
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)*(double *)(this + 184) - 1.0) & _xmm) > 0.0000011920929 )
    {
      *(_QWORD *)(this + 184) = 0x3FF0000000000000LL;
      (*(void (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)this + 24LL))(this, 32LL);
    }
    v4 = *(_QWORD *)(this + 328);
    v5 = *(_BYTE *)(v4 + 608);
    if ( (v5 & 4) != 0 )
    {
      v21 = CWindowList::QueueDestroySprite(
              *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
              (struct CWindowData *)v4);
      v3 = v21;
      if ( v21 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v21, 0x573u);
    }
    else
    {
      v6 = v5 & 1;
      if ( !v6
        || ((v10 = (CLivePreview *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 64), !*((_BYTE *)v10 + 280))
         || !v4
          ? (v11 = 0)
          : (v11 = CLivePreview::_IsInLivePreview(v10, (const struct CWindowData *)v4)),
            !v11) )
      {
        v7 = *(CTopLevelWindow **)(v4 + 384);
        if ( v7 )
        {
          v8 = CTopLevelWindow::ShowWindow(v7, v6);
          v3 = v8;
          if ( v8 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x56Eu);
        }
      }
    }
  }
  return v3;
}
