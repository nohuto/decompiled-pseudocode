/*
 * XREFs of ?EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x18035C4E8
 * Callers:
 *     ?OnEditControlFocusChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlFocusChangedEventArgs@45678@@Z @ 0x18006A2D0 (-OnEditControlFocusChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Tex.c)
 *     _lambda_8d7094fcdaf208e2f7ec2dcb3e2d0518_::operator() @ 0x1800B191C (_lambda_8d7094fcdaf208e2f7ec2dcb3e2d0518_--operator().c)
 *     ?OnShellRequestedShow@TabTipAdapter@KeyboardHosting@@UEAAJII@Z @ 0x180360890 (-OnShellRequestedShow@TabTipAdapter@KeyboardHosting@@UEAAJII@Z.c)
 *     ?OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@W4ShellRequestedStateChangeReason@2@@Z @ 0x180360B10 (-OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Tex.c)
 *     ?RefreshHardwareKeyboardUIState@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x180361FC4 (-RefreshHardwareKeyboardUIState@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180084658 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18014DC88 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?EnsureInputAppIsActivated@TouchKeyboardExperienceManager@@QEAAJXZ @ 0x180348A94 (-EnsureInputAppIsActivated@TouchKeyboardExperienceManager@@QEAAJXZ.c)
 *     ?GetDefaultInputAppId@TabTipAdapter@KeyboardHosting@@SAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18035D1B8 (-GetDefaultInputAppId@TabTipAdapter@KeyboardHosting@@SAJAEAV-$basic_string@GU-$char_traits@G@std.c)
 *     ?OnInputAppChangeApproved@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z @ 0x18035E8E8 (-OnInputAppChangeApproved@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z.c)
 *     ?SetInputAppAUMID@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z @ 0x180362A78 (-SetInputAppAUMID@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z.c)
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
      v5 = 1752LL;
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
          v5 = 1758LL;
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
          v5 = 1762LL;
          goto LABEL_14;
        }
      }
    }
    else
    {
      wil::details::in1diag3::Log_Hr(
        retaddr,
        1767LL,
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
    (void *)0x6ED,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)IsActivated);
LABEL_18:
  if ( v2 )
    LeaveCriticalSection(v2);
  return v4;
}
