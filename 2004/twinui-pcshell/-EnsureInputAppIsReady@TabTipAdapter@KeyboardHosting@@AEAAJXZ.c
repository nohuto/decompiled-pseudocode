/*
 * XREFs of ?EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x18035CE38
 * Callers:
 *     ?OnEditControlFocusChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlFocusChangedEventArgs@45678@@Z @ 0x18006F130 (-OnEditControlFocusChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Tex.c)
 *     _lambda_da08d54169002be5ece525bde89b0b7d_::operator() @ 0x1800AF8E0 (_lambda_da08d54169002be5ece525bde89b0b7d_--operator().c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b2d628275170c96747651ea7a6282f40___::Run @ 0x1800B25C0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b2d628275170c96747651ea7a6282f40___--Run.c)
 *     ?OnShellRequestedShow@TabTipAdapter@KeyboardHosting@@UEAAJII@Z @ 0x1803611E0 (-OnShellRequestedShow@TabTipAdapter@KeyboardHosting@@UEAAJII@Z.c)
 *     ?OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@W4ShellRequestedStateChangeReason@2@@Z @ 0x180361460 (-OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Tex.c)
 *     ?RefreshHardwareKeyboardUIState@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x180362884 (-RefreshHardwareKeyboardUIState@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180085BB8 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18014DE38 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?EnsureInputAppIsActivated@TouchKeyboardExperienceManager@@QEAAJXZ @ 0x1803494F4 (-EnsureInputAppIsActivated@TouchKeyboardExperienceManager@@QEAAJXZ.c)
 *     ?GetDefaultInputAppId@TabTipAdapter@KeyboardHosting@@SAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18035DB08 (-GetDefaultInputAppId@TabTipAdapter@KeyboardHosting@@SAJAEAV-$basic_string@GU-$char_traits@G@std.c)
 *     ?OnInputAppChangeApproved@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z @ 0x18035F238 (-OnInputAppChangeApproved@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z.c)
 *     ?SetInputAppAUMID@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z @ 0x180363338 (-SetInputAppAUMID@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall KeyboardHosting::TabTipAdapter::EnsureInputAppIsReady(KeyboardHosting::TabTipAdapter *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  int DefaultInputAppId; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  const unsigned __int16 *v6; // rdx
  int IsActivated; // eax
  unsigned __int16 *v9[2]; // [rsp+28h] [rbp-28h] BYREF
  __int64 v10; // [rsp+38h] [rbp-18h]
  unsigned __int64 v11; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 400);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 10);
  if ( !*((_QWORD *)this + 42) )
  {
    v10 = 0LL;
    v11 = 7LL;
    LOWORD(v9[0]) = 0;
    DefaultInputAppId = KeyboardHosting::TabTipAdapter::GetDefaultInputAppId(v9);
    v4 = DefaultInputAppId;
    if ( DefaultInputAppId < 0 )
    {
      v5 = 1751LL;
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v5,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)DefaultInputAppId);
      std::wstring::_Tidy_deallocate(v9);
      goto LABEL_18;
    }
    if ( v10 )
    {
      v6 = (const unsigned __int16 *)v9;
      if ( *((_QWORD *)this + 6) )
      {
        if ( v11 >= 8 )
          v6 = v9[0];
        DefaultInputAppId = KeyboardHosting::TabTipAdapter::SetInputAppAUMID(this, v6);
        v4 = DefaultInputAppId;
        if ( DefaultInputAppId < 0 )
        {
          v5 = 1757LL;
          goto LABEL_14;
        }
      }
      else
      {
        if ( v11 >= 8 )
          v6 = v9[0];
        DefaultInputAppId = KeyboardHosting::TabTipAdapter::OnInputAppChangeApproved(this, v6);
        v4 = DefaultInputAppId;
        if ( DefaultInputAppId < 0 )
        {
          v5 = 1761LL;
          goto LABEL_14;
        }
      }
    }
    else
    {
      wil::details::in1diag3::Log_Hr(
        retaddr,
        1766LL,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)0x80004005LL);
    }
    std::wstring::_Tidy_deallocate(v9);
    goto LABEL_17;
  }
  IsActivated = TouchKeyboardExperienceManager::EnsureInputAppIsActivated(*((RTL_SRWLOCK **)this + 8));
  v4 = IsActivated;
  if ( IsActivated >= 0 )
  {
LABEL_17:
    v4 = 0;
    goto LABEL_18;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x6EC,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)IsActivated);
LABEL_18:
  if ( v2 )
    LeaveCriticalSection(v2);
  return v4;
}
