/*
 * XREFs of ?RegisterForStartReady@PriorityBoostHelper@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801D5E78
 * Callers:
 *     ?RuntimeClassInitialize@CStartExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801B15CC (-RuntimeClassInitialize@CStartExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180115128 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180116F18 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall PriorityBoostHelper::RegisterForStartReady(PriorityBoostHelper *this, struct IServiceProvider *a2)
{
  const char *v4; // r9
  _QWORD *v5; // r14
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v7; // ebx
  __int64 v8; // rdx
  UINT v10; // eax
  const char *v11; // r9
  __int64 v12; // rdx
  UINT v13; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( GetCurrentThreadId() != *((_DWORD *)this + 26) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      24LL,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\priorityboosthelper.cpp",
      v4);
    __debugbreak();
  }
  v5 = (_QWORD *)((char *)this + 56);
  QueryService = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 7);
  v7 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))QueryService)(
         a2,
         &IID_IImmersiveWindowMessageService,
         &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca,
         (char *)this + 56);
  if ( v7 < 0 )
  {
    v8 = 25LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\priorityboosthelper.cpp",
      (const char *)(unsigned int)v7);
    return (unsigned int)v7;
  }
  v10 = RegisterWindowMessageW(L"HostExperienceManager.StartReadyMessage");
  *((_DWORD *)this + 29) = v10;
  if ( !v10 )
  {
    v12 = 31LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v12,
             (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\priorityboosthelper.cpp",
             v11);
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *, char *))(*(_QWORD *)*v5 + 24LL))(
         *v5,
         v10,
         (char *)this + 24,
         (char *)this + 96);
  if ( v7 < 0 )
  {
    v8 = 32LL;
    goto LABEL_5;
  }
  v13 = RegisterWindowMessageW(L"HostExperienceManager.ResetActivationTimeoutPolicyMessage");
  *((_DWORD *)this + 28) = v13;
  if ( !v13 )
  {
    v12 = 37LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v12,
             (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\priorityboosthelper.cpp",
             v11);
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *, char *))(*(_QWORD *)*v5 + 24LL))(
         *v5,
         v13,
         (char *)this + 24,
         (char *)this + 100);
  if ( v7 < 0 )
  {
    v8 = 38LL;
    goto LABEL_5;
  }
  return 0LL;
}
