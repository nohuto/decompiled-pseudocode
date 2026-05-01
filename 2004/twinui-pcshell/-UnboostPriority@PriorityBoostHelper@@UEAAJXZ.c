/*
 * XREFs of ?UnboostPriority@PriorityBoostHelper@@UEAAJXZ @ 0x180060A50
 * Callers:
 *     <none>
 * Callees:
 *     ??$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18001D7A0 (--$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@.c)
 *     ??$OnPriorityUnboostProcessed@AEAJAEAI@ExperienceHostLoggingTelemetry@@SAXAEAJAEAI@Z @ 0x1800607D0 (--$OnPriorityUnboostProcessed@AEAJAEAI@ExperienceHostLoggingTelemetry@@SAXAEAJAEAI@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180139748 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PriorityBoostHelper::UnboostPriority(PriorityBoostHelper *this)
{
  int v1; // ebx
  int *v2; // rsi
  const char *v4; // r9
  int v5; // eax
  int v6; // eax
  __int64 (__fastcall ****v7)(_QWORD, GUID *, __int64); // rcx
  wil::details::in1diag3 *v8; // rcx
  int v9; // eax
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v13; // [rsp+30h] [rbp+8h] BYREF
  __int64 v14; // [rsp+38h] [rbp+10h] BYREF

  if ( GetCurrentThreadId() != *((_DWORD *)this + 22) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x68,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\priorityboosthelper.cpp",
      v4);
LABEL_14:
    wil::details::in1diag3::_Log_Hr(
      v8,
      (void *)0x72,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\priorityboosthelper.cpp",
      (const char *)(unsigned int)v1,
      v11);
    goto LABEL_6;
  }
  v13 = 0;
  v2 = (int *)((char *)this + 92);
  v5 = *((_DWORD *)this + 23);
  v1 = 0;
  if ( !v5 )
    goto LABEL_11;
  v6 = v5 - 1;
  *v2 = v6;
  if ( v6 )
    goto LABEL_11;
  v7 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64))(*((_QWORD *)this + 6) + 24LL);
  if ( !*v7 )
    goto LABEL_11;
  v14 = 0LL;
  v1 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies>(
         v7,
         (__int64)&v14);
  v8 = retaddr;
  if ( v1 < 0 )
    goto LABEL_14;
LABEL_6:
  v13 = v1;
  if ( v1 >= 0 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 56LL))(v14);
    v1 = v9;
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x75,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\priorityboosthelper.cpp",
        (const char *)(unsigned int)v9,
        v11);
    v13 = v1;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
LABEL_11:
  ExperienceHostLoggingTelemetry::OnPriorityUnboostProcessed<long &,unsigned int &>(&v13, v2);
  if ( v1 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x7B,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\priorityboosthelper.cpp",
    (const char *)(unsigned int)v1,
    v11);
  return (unsigned int)v1;
}
