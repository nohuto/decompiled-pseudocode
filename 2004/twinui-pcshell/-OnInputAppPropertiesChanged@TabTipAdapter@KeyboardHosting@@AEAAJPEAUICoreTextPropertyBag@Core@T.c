/*
 * XREFs of ?OnInputAppPropertiesChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreTextPropertyBag@Core@Text@Internal@UI@Windows@@PEAUICoreTextPropertyBagPropertyValueChangedEventArgs@45678@@Z @ 0x18035F5A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?OnInputAppPropertyChanged@TouchKeyboardExperienceManager@@QEAAJPEAUHSTRING__@@0@Z @ 0x18034E274 (-OnInputAppPropertyChanged@TouchKeyboardExperienceManager@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?OnInputAppPropertyChanged@TabTipAdapterPolicy@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x18036973C (-OnInputAppPropertyChanged@TabTipAdapterPolicy@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall KeyboardHosting::TabTipAdapter::OnInputAppPropertiesChanged(
        TouchKeyboardExperienceManager **this,
        struct Windows::UI::Internal::Text::Core::ICoreTextPropertyBag *a2,
        struct Windows::UI::Internal::Text::Core::ICoreTextPropertyBagPropertyValueChangedEventArgs *a3)
{
  __int64 (__fastcall *v5)(struct Windows::UI::Internal::Text::Core::ICoreTextPropertyBagPropertyValueChangedEventArgs *, HSTRING *); // rbx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 (__fastcall *v8)(struct Windows::UI::Internal::Text::Core::ICoreTextPropertyBagPropertyValueChangedEventArgs *, HSTRING *); // rbx
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  HSTRING string; // [rsp+50h] [rbp+30h] BYREF
  HSTRING v13; // [rsp+58h] [rbp+38h] BYREF

  v13 = 0LL;
  v5 = *(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreTextPropertyBagPropertyValueChangedEventArgs *, HSTRING *))(*(_QWORD *)a3 + 48LL);
  WindowsDeleteString(0LL);
  v13 = 0LL;
  v6 = v5(a3, &v13);
  v7 = v6;
  if ( v6 >= 0 )
  {
    string = 0LL;
    v8 = *(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreTextPropertyBagPropertyValueChangedEventArgs *, HSTRING *))(*(_QWORD *)a3 + 56LL);
    WindowsDeleteString(0LL);
    string = 0LL;
    v9 = v8(a3, &string);
    v7 = v9;
    if ( v9 >= 0 )
    {
      TouchKeyboardExperienceManager::OnInputAppPropertyChanged(this[8], v13, string);
      KeyboardHosting::TabTipAdapterPolicy::OnInputAppPropertyChanged(this[13], v13, string);
      v7 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x32B,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v9);
    }
    WindowsDeleteString(string);
    string = 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x329,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v6);
  }
  WindowsDeleteString(v13);
  return v7;
}
