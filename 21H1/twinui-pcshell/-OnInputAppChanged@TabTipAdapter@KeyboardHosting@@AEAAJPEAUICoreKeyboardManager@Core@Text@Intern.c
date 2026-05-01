/*
 * XREFs of ?OnInputAppChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppChangedEventArgs@45678@@Z @ 0x18033DE00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?OnInputAppChangeApproved@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z @ 0x18033DB98 (-OnInputAppChangeApproved@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z.c)
 *     ?SetInputAppAUMID@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z @ 0x180341C98 (-SetInputAppAUMID@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapter::OnInputAppChanged(
        KeyboardHosting::TabTipAdapter *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppChangedEventArgs *a3)
{
  __int64 (__fastcall *v5)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppChangedEventArgs *, HSTRING *); // rbx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  unsigned __int16 *StringRawBuffer; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  UINT32 length; // [rsp+40h] [rbp+18h] BYREF
  HSTRING string; // [rsp+48h] [rbp+20h] BYREF

  string = 0LL;
  length = 0;
  v5 = *(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppChangedEventArgs *, HSTRING *))(*(_QWORD *)a3 + 48LL);
  WindowsDeleteString(0LL);
  string = 0LL;
  v6 = v5(a3, &string);
  v7 = v6;
  if ( v6 >= 0 )
  {
    StringRawBuffer = (unsigned __int16 *)WindowsGetStringRawBuffer(string, &length);
    if ( length )
    {
      if ( *((_QWORD *)this + 6) )
      {
        v6 = KeyboardHosting::TabTipAdapter::SetInputAppAUMID(this, StringRawBuffer);
        v7 = v6;
        if ( v6 < 0 )
        {
          v8 = 838LL;
          goto LABEL_9;
        }
      }
      else
      {
        v6 = KeyboardHosting::TabTipAdapter::OnInputAppChangeApproved(this, StringRawBuffer);
        v7 = v6;
        if ( v6 < 0 )
        {
          v8 = 842LL;
          goto LABEL_9;
        }
      }
    }
    v7 = 0;
    goto LABEL_11;
  }
  v8 = 823LL;
LABEL_9:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v6);
LABEL_11:
  WindowsDeleteString(string);
  return v7;
}
