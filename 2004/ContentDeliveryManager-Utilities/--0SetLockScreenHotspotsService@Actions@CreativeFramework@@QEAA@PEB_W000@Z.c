/*
 * XREFs of ??0SetLockScreenHotspotsService@Actions@CreativeFramework@@QEAA@PEB_W000@Z @ 0x180098E9C
 * Callers:
 *     ?MakeSetLockScreenHotspotsService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x180099C60 (-MakeSetLockScreenHotspotsService@Actions@CreativeFramework@@YA-AV-$shared_ptr@VIActionService@A.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F48 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180042990 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x18006B30C (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?GetCurrentUserSidString@Actions@CreativeFramework@@YAJPEAPEA_W@Z @ 0x180098CB0 (-GetCurrentUserSidString@Actions@CreativeFramework@@YAJPEAPEA_W@Z.c)
 *     ??1?$out_param_t@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEA_WP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x18009A03C (--1-$out_param_t@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEA_WP6AXPEAX@Z$1-CoTaskMe.c)
 */

// Hidden C++ exception states: #wind=8
CreativeFramework::Actions::SetLockScreenHotspotsService *__fastcall CreativeFramework::Actions::SetLockScreenHotspotsService::SetLockScreenHotspotsService(
        CreativeFramework::Actions::SetLockScreenHotspotsService *this,
        wchar_t *a2,
        wchar_t *a3,
        wchar_t *a4,
        const wchar_t *lpString1)
{
  PSID *v8; // r12
  LPCWSTR *v9; // r14
  char *v10; // rcx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r8
  wchar_t **v14; // rdx
  int CurrentUserSidString; // eax
  wil::details::in1diag3 *v16; // rcx
  BOOL v17; // eax
  const char *v18; // r9
  wil::details::in1diag3 *v19; // rcx
  PSID v20; // r15
  void **v21; // rsi
  void *v22; // r14
  DWORD LastError; // ebx
  void **v25; // [rsp+38h] [rbp-18h] BYREF
  PSID Sid; // [rsp+40h] [rbp-10h] BYREF
  char v27; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]

  *(_QWORD *)this = &CreativeFramework::Actions::SetLockScreenHotspotsService::`vftable';
  v8 = (PSID *)((char *)this + 8);
  *((_QWORD *)this + 1) = 0LL;
  v9 = (LPCWSTR *)((char *)this + 16);
  *((_QWORD *)this + 2) = 0LL;
  v10 = (char *)this + 24;
  *((_QWORD *)v10 + 3) = 7LL;
  *((_QWORD *)v10 + 2) = 0LL;
  *(_WORD *)v10 = 0;
  if ( *a2 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( a2[v11] );
  }
  else
  {
    v11 = 0LL;
  }
  std::wstring::assign((void **)v10, (char *)a2, v11);
  *((_QWORD *)this + 10) = 7LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_WORD *)this + 28) = 0;
  if ( *a3 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( a3[v12] );
  }
  else
  {
    v12 = 0LL;
  }
  std::wstring::assign((void **)this + 7, (char *)a3, v12);
  *((_QWORD *)this + 14) = 7LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_WORD *)this + 44) = 0;
  if ( *a4 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( a4[v13] );
  }
  else
  {
    v13 = 0LL;
  }
  std::wstring::assign((void **)this + 11, (char *)a4, v13);
  *((_BYTE *)this + 124) = 1;
  if ( lpString1 && CompareStringOrdinal(lpString1, -1, L"true", -1, 1) == 2 )
    *((_DWORD *)this + 30) = 1;
  v25 = (void **)v9;
  Sid = 0LL;
  v27 = 1;
  CurrentUserSidString = CreativeFramework::Actions::GetCurrentUserSidString((CreativeFramework::Actions *)&Sid, v14);
  v16 = retaddr;
  if ( CurrentUserSidString < 0 )
    goto LABEL_25;
  wil::details::out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>>>::~out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>>>(&v25);
  v25 = v8;
  Sid = 0LL;
  v27 = 1;
  v17 = ConvertStringSidToSidW(*v9, &Sid);
  v19 = retaddr;
  if ( !v17 )
  {
LABEL_26:
    wil::details::in1diag3::_Throw_GetLastError(
      v19,
      (void *)0x3F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
      v18);
    JUMPOUT(0x1800990D4LL);
  }
  if ( v27 )
  {
    v20 = Sid;
    v21 = v25;
    v22 = *v25;
    if ( *v25 )
    {
      LastError = GetLastError();
      LocalFree(v22);
      SetLastError(LastError);
    }
    *v21 = v20;
  }
  if ( !IsValidSid(*v8) )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x40,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
      (const char *)0x8000FFFFLL);
LABEL_25:
    wil::details::in1diag3::Throw_Hr(
      v16,
      (void *)0x3E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
      (const char *)(unsigned int)CurrentUserSidString);
    goto LABEL_26;
  }
  return this;
}
