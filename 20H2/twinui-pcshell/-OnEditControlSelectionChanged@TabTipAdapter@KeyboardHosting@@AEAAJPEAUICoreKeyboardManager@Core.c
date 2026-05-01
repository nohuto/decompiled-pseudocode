/*
 * XREFs of ?OnEditControlSelectionChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlSelectionChangedEventArgs@45678@@Z @ 0x18035E490
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?ExecuteDeferredRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4DeferredShowRequestExecutionReason@2@@Z @ 0x18035C670 (-ExecuteDeferredRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4DeferredShowRequestExecutionReason.c)
 *     ?IsRectNull@KeyboardHosting@@YA_NURect@Foundation@Windows@@@Z @ 0x18035DBFC (-IsRectNull@KeyboardHosting@@YA_NURect@Foundation@Windows@@@Z.c)
 *     ?HandleEditControlSelectionChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Windows@@PEAW4ShellRequestType@Text@Shell@Internal@5@@Z @ 0x180368130 (-HandleEditControlSelectionChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Wi.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnEditControlSelectionChanged(
        KeyboardHosting::TabTipAdapter *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlSelectionChangedEventArgs *a3)
{
  __int64 v3; // rax
  int v5; // edi
  __int64 v6; // rdx
  __int128 v8; // xmm6
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11; // eax
  unsigned int v12; // ebx
  __int128 v13; // [rsp+20h] [rbp-40h] BYREF
  _BYTE v14[8]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v15; // [rsp+38h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  v3 = *(_QWORD *)a3;
  v15 = 0LL;
  v5 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlSelectionChangedEventArgs *, __int128 *))(v3 + 48))(
         a3,
         &v15);
  if ( v5 < 0 )
  {
    v6 = 484LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v8 = v15;
  v13 = v15;
  if ( KeyboardHosting::IsRectNull((float *)&v13) )
    return 0LL;
  v9 = *((_QWORD *)this + 13);
  *(_OWORD *)((char *)this + 472) = v8;
  v13 = v8;
  v5 = KeyboardHosting::TabTipAdapterPolicy::HandleEditControlSelectionChanged(v9, &v13, v14);
  if ( v5 < 0 )
  {
    v6 = 498LL;
    goto LABEL_3;
  }
  v10 = *((_QWORD *)this + 6);
  if ( v10 )
  {
    LODWORD(v13) = (int)*(float *)&v15;
    DWORD1(v13) = (int)*((float *)&v15 + 1);
    DWORD2(v13) = (int)(float)(*((float *)&v15 + 2) + *(float *)&v15);
    HIDWORD(v13) = (int)(float)(*((float *)&v15 + 1) + *((float *)&v15 + 3));
    v5 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v10 + 64LL))(v10, &v13);
    if ( v5 < 0 )
    {
      v6 = 502LL;
      goto LABEL_3;
    }
  }
  v11 = KeyboardHosting::TabTipAdapter::ExecuteDeferredRequest((__int64)this, 1);
  v12 = v11;
  if ( v11 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1FB,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v11);
  return v12;
}
