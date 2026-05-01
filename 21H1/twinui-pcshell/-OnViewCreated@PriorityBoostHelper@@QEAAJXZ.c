/*
 * XREFs of ?OnViewCreated@PriorityBoostHelper@@QEAAJXZ @ 0x1801D5CA0
 * Callers:
 *     ?OnViewCreated@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801B0D30 (-OnViewCreated@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ??$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18001D260 (--$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x1800520CC (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?BoostPriorityHelper@PriorityBoostHelper@@AEAAJXZ @ 0x1800601AC (-BoostPriorityHelper@PriorityBoostHelper@@AEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180115128 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180116F18 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_WAIT@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolWait@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_WAIT@@@Z @ 0x18011DDEC (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_WAIT@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThreadP.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1801357D0 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PriorityBoostHelper::OnViewCreated(PriorityBoostHelper *this)
{
  const char *v2; // r9
  int v3; // eax
  HANDLE EventW; // rax
  const char *v5; // r9
  __int64 v6; // rdx
  struct _TP_WAIT *ThreadpoolWait; // rax
  struct _TP_WAIT *v9; // rcx
  struct _TP_TIMER *ThreadpoolTimer; // rax
  struct _TP_TIMER *v11; // rcx
  int v12; // eax
  wil::details::in1diag3 *v13; // rcx
  __int64 v14; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v16; // [rsp+40h] [rbp+8h] BYREF
  struct _FILETIME pftDueTime; // [rsp+48h] [rbp+10h] BYREF

  if ( GetCurrentThreadId() != *((_DWORD *)this + 26) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      129LL,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\priorityboosthelper.cpp",
      v2);
    __debugbreak();
  }
  if ( *((_DWORD *)this + 27) )
  {
    v3 = PriorityBoostHelper::BoostPriorityHelper(this);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x85,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\priorityboosthelper.cpp",
        (const char *)(unsigned int)v3);
  }
  EventW = CreateEventW(0LL, 1, 0, L"ShellStartReadyEvent");
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    (void **)this + 11,
    EventW);
  if ( !*((_QWORD *)this + 11) )
  {
    v6 = 138LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v6,
             (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\priorityboosthelper.cpp",
             v5);
  }
  ThreadpoolWait = CreateThreadpoolWait(
                     (PTP_WAIT_CALLBACK)lambda_df558bc7901e48a4a17d91fd5caa1bf4_::_lambda_invoker_cdecl_,
                     (PVOID)*((unsigned int *)this + 29),
                     0LL);
  wil::details::unique_storage<wil::details::resource_policy<_TP_WAIT *,void (*)(_TP_WAIT *),&public: static void wil::details::DestroyThreadPoolWait<0>::Destroy(_TP_WAIT *),wistd::integral_constant<unsigned __int64,0>,_TP_WAIT *,_TP_WAIT *,0,std::nullptr_t>>::reset(
    (struct _TP_WAIT **)this + 10,
    ThreadpoolWait);
  v9 = (struct _TP_WAIT *)*((_QWORD *)this + 10);
  if ( !v9 )
  {
    v6 = 146LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v6,
             (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\priorityboosthelper.cpp",
             v5);
  }
  SetThreadpoolWait(v9, *((HANDLE *)this + 11), 0LL);
  pftDueTime = (struct _FILETIME)-1200000000LL;
  ThreadpoolTimer = CreateThreadpoolTimer(
                      (PTP_TIMER_CALLBACK)lambda_b73f07922ca53c55ec272d654ca15780_::_lambda_invoker_cdecl_,
                      (PVOID)*((unsigned int *)this + 28),
                      0LL);
  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
    (struct _TP_TIMER **)this + 9,
    ThreadpoolTimer);
  v11 = (struct _TP_TIMER *)*((_QWORD *)this + 9);
  if ( !v11 )
  {
    v6 = 159LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v6,
             (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\priorityboosthelper.cpp",
             v5);
  }
  SetThreadpoolTimer(v11, &pftDueTime, 0, 0);
  v16 = 0LL;
  v12 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies>(
          (__int64 (__fastcall ****)(_QWORD, GUID *, __int64))(*((_QWORD *)this + 8) + 24LL),
          (__int64)&v16);
  v13 = retaddr;
  if ( v12 < 0 )
  {
    v14 = 163LL;
LABEL_17:
    wil::details::in1diag3::_Log_Hr(
      v13,
      (void *)v14,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\priorityboosthelper.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_18;
  }
  v12 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 88LL))(v16, 1LL);
  v13 = retaddr;
  if ( v12 < 0 )
  {
    v14 = 165LL;
    goto LABEL_17;
  }
LABEL_18:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  return 0LL;
}
