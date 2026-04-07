/*
 * XREFs of ?ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z @ 0x180009F5C
 * Callers:
 *     ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x18000A494 (-StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z.c)
 *     ?CreateDesktopSnapshotComponent@CTransitionVisualController@@QEAAJW4DWMTRANSITION_TARGET@@AEBUtagRECT@@PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x1800AA96C (-CreateDesktopSnapshotComponent@CTransitionVisualController@@QEAAJW4DWMTRANSITION_TARGET@@AEBUta.c)
 *     ?OnTransitionWindow@CAppArrangementDelayed@@UEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z @ 0x1800B0200 (-OnTransitionWindow@CAppArrangementDelayed@@UEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z.c)
 *     ?_CreateMonitorSnapshot@CVirtualDesktopSwitch@@AEAAJPEAVCWindowData@@UtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800B148C (-_CreateMonitorSnapshot@CVirtualDesktopSwitch@@AEAAJPEAVCWindowData@@UtagRECT@@_NPEAPEAVCAnimati.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Snapshot@CCachedVisualImageProxy@@QEAAJAEBUtagRECT@@@Z @ 0x18000BF9C (-Snapshot@CCachedVisualImageProxy@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18000FA58 (-EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     __security_check_cookie @ 0x180053520 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180085078 (McGenEventWrite_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::ProcessSnapshotOnVisual(
        CCachedVisualImageProxy **this,
        struct CVisual *a2,
        const struct tagRECT *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // r8d
  _BYTE v13[16]; // [rsp+30h] [rbp-38h] BYREF

  v6 = CAnimatedTransitionVisual::EnsureResources((CAnimatedTransitionVisual *)this);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x309u);
  }
  else
  {
    v8 = (*(__int64 (__fastcall **)(struct CVisual *))(*(_QWORD *)a2 + 64LL))(a2);
    v7 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x30Du);
    }
    else
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5)
                                                           + 16LL)
                                             + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                  + 5)
                                                                + 16LL));
      v7 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x30Eu);
      }
      else
      {
        v10 = CCachedVisualImageProxy::Snapshot(this[72], a3);
        v7 = v10;
        if ( v10 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x311u);
        }
        else if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        {
          McGenEventWrite_EtwEventWriteTransfer(
            (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
            (unsigned int)&UdwmTransitionProcessSnapshotOnVisual_Info,
            v11,
            1,
            (__int64)v13);
        }
      }
    }
  }
  return v7;
}
