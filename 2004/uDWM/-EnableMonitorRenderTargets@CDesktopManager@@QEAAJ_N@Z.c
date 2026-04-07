/*
 * XREFs of ?EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z @ 0x180052320
 * Callers:
 *     ?StartupEnd@CWindowList@@AEAAJXZ @ 0x1800522C0 (-StartupEnd@CWindowList@@AEAAJXZ.c)
 *     ?NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ @ 0x180086C78 (-NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z @ 0x18002BEAC (-BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z.c)
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18002DCF4 (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 *     ?SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z @ 0x180030AB8 (-SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z.c)
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x180035E2C (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?InsertChildAt@CVisualProxy@@QEAAJPEAV1@I@Z @ 0x18003FF54 (-InsertChildAt@CVisualProxy@@QEAAJPEAV1@I@Z.c)
 *     ?CreateOrDestroyDesktopWindowReplacementForDesktops@CWindowList@@QEAAX_N@Z @ 0x180052408 (-CreateOrDestroyDesktopWindowReplacementForDesktops@CWindowList@@QEAAX_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x180087220 (-ReleaseMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 */

__int64 __fastcall CDesktopManager::EnableMonitorRenderTargets(CVisualProxy **this, char a2)
{
  unsigned int v2; // ebx
  int v5; // eax
  CWindowList *v6; // rbx
  struct CVisual *RenderTargetRootVisualForDesktop; // rax
  int inserted; // eax
  int MonitorRenderTargets; // eax
  bool v10; // dl
  int v12; // eax
  unsigned __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  if ( a2 != *((_BYTE *)this + 16) )
  {
    if ( a2 )
    {
      GetDesktopID(1LL, &v13);
      v5 = CDesktopManager::SendSwitchModeCommand(v13);
      v2 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x63Fu);
        return v2;
      }
      v6 = (CWindowList *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 61);
      RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop(v6, v13);
      CWindowList::BringDesktopToFront(v6, RenderTargetRootVisualForDesktop);
      inserted = CVisualProxy::InsertChildAt(
                   this[11],
                   *(struct CVisualProxy **)(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 61)
                                                       + 80LL)
                                           + 16LL),
                   0);
      v2 = inserted;
      if ( inserted < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x645u);
        return v2;
      }
      MonitorRenderTargets = CDesktopManager::CreateMonitorRenderTargets((CDesktopManager *)this);
      v2 = MonitorRenderTargets;
      if ( MonitorRenderTargets < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, MonitorRenderTargets, 0x647u);
        return v2;
      }
      v10 = 1;
    }
    else
    {
      (*(void (__fastcall **)(CVisualProxy *, _QWORD))(*(_QWORD *)this[9] + 24LL))(this[9], 0LL);
      v12 = CDesktopManager::ReleaseMonitorRenderTargets((CDesktopManager *)this);
      v2 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x651u);
        return v2;
      }
      v10 = 0;
    }
    CWindowList::CreateOrDestroyDesktopWindowReplacementForDesktops(
      *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
      v10);
    *((_BYTE *)this + 16) = a2;
  }
  return v2;
}
