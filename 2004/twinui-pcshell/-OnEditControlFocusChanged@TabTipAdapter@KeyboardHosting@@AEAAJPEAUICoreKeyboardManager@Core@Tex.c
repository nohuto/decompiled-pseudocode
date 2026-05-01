/*
 * XREFs of ?OnEditControlFocusChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlFocusChangedEventArgs@45678@@Z @ 0x18006F130
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18006F2E0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800AEF40 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?IsActiveSessionCountLimited@@YA_NXZ @ 0x1800B2944 (-IsActiveSessionCountLimited@@YA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x18035CE38 (-EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?GetDefaultInputAppId@TabTipAdapter@KeyboardHosting@@SAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18035DB08 (-GetDefaultInputAppId@TabTipAdapter@KeyboardHosting@@SAJAEAV-$basic_string@GU-$char_traits@G@std.c)
 *     ?SetInputAppAUMID@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z @ 0x180363338 (-SetInputAppAUMID@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall KeyboardHosting::TabTipAdapter::OnEditControlFocusChanged(
        struct _RTL_CRITICAL_SECTION *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlFocusChangedEventArgs *a3)
{
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  int IsReady; // eax
  __int64 v7; // rdx
  unsigned int v8; // ebx
  __int64 v9; // rdx
  int DefaultInputAppId; // eax
  __int64 v11; // rdx
  const unsigned __int16 *v12; // rdx
  __int64 v13; // rcx
  _BYTE *LockSemaphore; // rcx
  char v16[8]; // [rsp+20h] [rbp-40h] BYREF
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+28h] [rbp-38h] BYREF
  unsigned __int16 *v18[2]; // [rsp+30h] [rbp-30h] BYREF
  __m128i si128; // [rsp+40h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  v5 = this + 10;
  EnterCriticalSection(this + 10);
  v17 = v5;
  v16[0] = 0;
  IsReady = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlFocusChangedEventArgs *, char *))(*(_QWORD *)a3 + 48LL))(
              a3,
              v16);
  v8 = IsReady;
  if ( IsReady < 0 )
  {
    v9 = 341LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)IsReady);
    goto LABEL_22;
  }
  if ( !v16[0] || this[8].OwningThread )
    goto LABEL_14;
  if ( *((_DWORD *)this[1].LockSemaphore + 132) != 1 )
  {
    if ( IsActiveSessionCountLimited() )
    {
      IsReady = KeyboardHosting::TabTipAdapter::EnsureInputAppIsReady((KeyboardHosting::TabTipAdapter *)this);
      v8 = IsReady;
      if ( IsReady < 0 )
      {
        v9 = 359LL;
        goto LABEL_17;
      }
    }
    goto LABEL_14;
  }
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(v18[0]) = 0;
  DefaultInputAppId = KeyboardHosting::TabTipAdapter::GetDefaultInputAppId(v18);
  v8 = DefaultInputAppId;
  if ( DefaultInputAppId >= 0 )
  {
    v12 = (const unsigned __int16 *)v18;
    if ( si128.m128i_i64[1] >= 8uLL )
      v12 = v18[0];
    DefaultInputAppId = KeyboardHosting::TabTipAdapter::SetInputAppAUMID((KeyboardHosting::TabTipAdapter *)this, v12);
    v8 = DefaultInputAppId;
    if ( DefaultInputAppId < 0 )
    {
      v11 = 355LL;
      goto LABEL_12;
    }
    std::wstring::~wstring(v18);
LABEL_14:
    v13 = *(_QWORD *)&this[1].LockCount;
    if ( !v13
      || (LOBYTE(v7) = v16[0] != 0,
          IsReady = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 24LL))(v13, v7),
          v8 = IsReady,
          IsReady >= 0) )
    {
      LockSemaphore = this[2].LockSemaphore;
      LockSemaphore[504] = v16[0] != 0;
      LockSemaphore[460] = 0;
      v8 = 0;
      goto LABEL_22;
    }
    v9 = 366LL;
    goto LABEL_17;
  }
  v11 = 351LL;
LABEL_12:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)DefaultInputAppId);
  std::wstring::~wstring(v18);
LABEL_22:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v17);
  return v8;
}
