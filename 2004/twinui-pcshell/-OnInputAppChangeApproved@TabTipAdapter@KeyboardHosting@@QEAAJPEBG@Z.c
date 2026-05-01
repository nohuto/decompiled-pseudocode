/*
 * XREFs of ?OnInputAppChangeApproved@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z @ 0x18035F238
 * Callers:
 *     ?EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x18035CE38 (-EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?OnInputAppChangeApproved@TabTipAdapter@KeyboardHosting@@UEAAJPEAUMsgString@@@Z @ 0x18035F440 (-OnInputAppChangeApproved@TabTipAdapter@KeyboardHosting@@UEAAJPEAUMsgString@@@Z.c)
 *     ?OnInputAppChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppChangedEventArgs@45678@@Z @ 0x18035F4A0 (-OnInputAppChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Intern.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800684D8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180085BB8 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18008C5D8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ?OnInputAppChangeApproved@TouchKeyboardExperienceManager@@QEAAJPEBG@Z @ 0x18034DFE0 (-OnInputAppChangeApproved@TouchKeyboardExperienceManager@@QEAAJPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall KeyboardHosting::TabTipAdapter::OnInputAppChangeApproved(
        KeyboardHosting::TabTipAdapter *this,
        unsigned __int16 *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  const WCHAR *v5; // r8
  LPCWCH *v6; // rbx
  const WCHAR *v7; // rcx
  _WORD *v8; // rax
  LPCWCH *v9; // rdx
  const char *v10; // r9
  int v11; // eax
  unsigned int v12; // ebx
  unsigned int v14; // [rsp+30h] [rbp-58h]
  char *v15; // [rsp+38h] [rbp-50h]
  struct _RTL_CRITICAL_SECTION *lpCriticalSection; // [rsp+40h] [rbp-48h]
  LPCWCH lpString2[2]; // [rsp+48h] [rbp-40h] BYREF
  int cchCount2[2]; // [rsp+58h] [rbp-30h]
  unsigned __int64 v19; // [rsp+60h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 400);
  v15 = (char *)this + 400;
  lpCriticalSection = (struct _RTL_CRITICAL_SECTION *)((char *)this + 400);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 10);
  std::wstring::wstring((__int64)lpString2, a2);
  v5 = (const WCHAR *)lpString2;
  if ( v19 >= 8 )
    v5 = lpString2[0];
  v6 = (LPCWCH *)((char *)this + 320);
  v7 = (const WCHAR *)((char *)this + 320);
  if ( *((_QWORD *)this + 43) >= 8uLL )
    v7 = *v6;
  if ( CompareStringOrdinal(v7, *((_DWORD *)this + 84), v5, cchCount2[0], 1) == 2 )
    goto LABEL_20;
  v8 = (_WORD *)((char *)this + 320);
  if ( *((_QWORD *)this + 43) >= 8uLL )
    v8 = *v6;
  *((_QWORD *)this + 42) = 0LL;
  *v8 = 0;
  if ( v6 != lpString2 )
  {
    v9 = lpString2;
    if ( v19 >= 8 )
      v9 = (LPCWCH *)lpString2[0];
    try
    {
      std::wstring::assign((char *)this + 320, v9, *(unsigned __int64 *)cchCount2);
    }
    catch ( ... )
    {
      v14 = wil::details::in1diag3::Return_CaughtException(
              retaddr,
              (void *)0x5DB,
              (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
              v10);
      std::wstring::_Tidy_deallocate(lpString2);
      if ( v15 )
        LeaveCriticalSection(lpCriticalSection);
      return v14;
    }
  }
  if ( *((_QWORD *)this + 43) >= 8uLL )
    v6 = (LPCWCH *)*v6;
  v11 = TouchKeyboardExperienceManager::OnInputAppChangeApproved(
          *((RTL_SRWLOCK **)this + 8),
          (const unsigned __int16 *)v6);
  v12 = v11;
  if ( v11 >= 0 )
  {
LABEL_20:
    std::wstring::_Tidy_deallocate(lpString2);
    if ( v4 )
      LeaveCriticalSection(v4);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5DC,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v11);
    std::wstring::_Tidy_deallocate(lpString2);
    if ( v4 )
      LeaveCriticalSection(v4);
    return v12;
  }
}
