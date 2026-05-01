/*
 * XREFs of ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x180341DD8
 * Callers:
 *     ?SetOverrideMonitorSizeForSIP@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x18002B410 (-SetOverrideMonitorSizeForSIP@TabTipAdapter@KeyboardHosting@@QEAAJXZ.c)
 *     ?InitializeShellPreferencesDesktop@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1800A2B84 (-InitializeShellPreferencesDesktop@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?InitializeShellPreferencesHub@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1800A3560 (-InitializeShellPreferencesHub@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?OnHolographicDisplayChanged@TouchKeyboardExperienceManager@@AEAAJAEBW4UserDisplayContext@Holographic@Shell@Internal@Windows@@@Z @ 0x18032C408 (-OnHolographicDisplayChanged@TouchKeyboardExperienceManager@@AEAAJAEBW4UserDisplayContext@Hologr.c)
 *     ?OnLockScreenActiveChanged@TouchKeyboardExperienceManager@@AEAAJ_N@Z @ 0x18032CE18 (-OnLockScreenActiveChanged@TouchKeyboardExperienceManager@@AEAAJ_N@Z.c)
 *     ?OnRudeWindowStateChange@TouchKeyboardExperienceManager@@UEAAJPEAUIImmersiveMonitor@@W4RudeWindowStateChangeFlags@@PEAUHWND__@@@Z @ 0x18032D130 (-OnRudeWindowStateChange@TouchKeyboardExperienceManager@@UEAAJPEAUIImmersiveMonitor@@W4RudeWindo.c)
 *     ?UpdateDictationAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1803336C0 (-UpdateDictationAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateDockedModeAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1803338B0 (-UpdateDockedModeAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateEmojiInputAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x180333ED4 (-UpdateEmojiInputAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateFullLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x180334144 (-UpdateFullLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateHandwritingAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x180334468 (-UpdateHandwritingAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateLinguisticDataAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x180334730 (-UpdateLinguisticDataAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateNarrowLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1803348D0 (-UpdateNarrowLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateOobeRunningState@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x180334CBC (-UpdateOobeRunningState@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateSettingsLauncherAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x180334D9C (-UpdateSettingsLauncherAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateSplitLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x180334F58 (-UpdateSplitLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateViewVisibilityInShellPreference@TouchKeyboardExperienceManager@@QEAAXI_N@Z @ 0x180335100 (-UpdateViewVisibilityInShellPreference@TouchKeyboardExperienceManager@@QEAAXI_N@Z.c)
 *     ?UpdateWideLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x18033530C (-UpdateWideLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?OnInPrivateModeChanged@TabTipAdapter@KeyboardHosting@@UEAAJ_N@Z @ 0x18033DA00 (-OnInPrivateModeChanged@TabTipAdapter@KeyboardHosting@@UEAAJ_N@Z.c)
 *     ?OnInputPaneTryShowRequested@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputPaneTryShowRequestedEventArgs@45678@@Z @ 0x18033EE10 (-OnInputPaneTryShowRequested@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@T.c)
 *     ?OnShellHotKey@TabTipAdapter@KeyboardHosting@@QEAAJW4_TouchKeyboardShellHotKeyType@@@Z @ 0x18033F724 (-OnShellHotKey@TabTipAdapter@KeyboardHosting@@QEAAJW4_TouchKeyboardShellHotKeyType@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapter::SetShellPreference(
        KeyboardHosting::TabTipAdapter *this,
        HSTRING a2,
        HSTRING a3)
{
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, __int64 *); // rbx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v12 = 0LL;
  v5 = *((_QWORD *)this + 3);
  v6 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 600LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  v7 = v6(v5, &v12);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, HSTRING, HSTRING))(*(_QWORD *)v12 + 48LL))(v12, a2, a3);
    v8 = v7;
    if ( v7 >= 0 )
    {
      v8 = 0;
      goto LABEL_7;
    }
    v9 = 317LL;
  }
  else
  {
    v9 = 316LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v7);
LABEL_7:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  return v8;
}
