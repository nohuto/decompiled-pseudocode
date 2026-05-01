/*
 * XREFs of ?AddView@ViewGroup@@UEAAJPEAUIApplicationView@@@Z @ 0x180295E60
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1800303B0 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18003A530 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x18003C7E4 (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180092228 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180139588 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??4?$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIPrivilegedForegroundOperations@@@Z @ 0x18015A7B8 (--4-$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEA.c)
 *     ??$_Insert_nohint@AEAV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAU?$_Tree_node@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAX@std@@@?$_Tree@V?$_Tset_traits@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@U?$less@X@std@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@_N@1@_NAEAV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAU?$_Tree_node@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAX@1@@Z @ 0x18028AD44 (--$_Insert_nohint@AEAV-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAU-$_Tre.c)
 *     ?AreViewTabsAppManaged@ViewGroup@@AEAA_NPEAUIApplicationView@@@Z @ 0x1802962A8 (-AreViewTabsAppManaged@ViewGroup@@AEAA_NPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=4 #try_helpers=1
__int64 __fastcall ViewGroup::AddView(
        ViewGroup *this,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64 *))
{
  const char *v4; // r9
  __int64 v5; // r13
  _QWORD *v6; // r14
  __int64 v7; // r8
  __int64 v8; // rdx
  char v9; // r14
  int v10; // eax
  __int64 v11; // r9
  int v13; // eax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  _BYTE v18[16]; // [rsp+38h] [rbp-70h] BYREF
  char *v19; // [rsp+48h] [rbp-60h]
  _BYTE *v20; // [rsp+50h] [rbp-58h]
  char v21; // [rsp+58h] [rbp-50h]
  char *v22; // [rsp+60h] [rbp-48h]
  __int64 *p_WindowForView; // [rsp+68h] [rbp-40h]
  __int64 *v24; // [rsp+70h] [rbp-38h]
  char v25; // [rsp+78h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  __int64 WindowForView; // [rsp+C0h] [rbp+18h] BYREF
  __int64 v28; // [rsp+C8h] [rbp+20h] BYREF

  WindowForView = ApplicationViewHelpers::GetWindowForView(a2, (struct IApplicationView *)a2);
  AcquireSRWLockExclusive((PSRWLOCK)this + 21);
  if ( *((_BYTE *)this + 213) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      176LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroup.cpp",
      v4);
  v5 = *((_QWORD *)this + 22);
  v19 = (char *)this + 176;
  v20 = 0LL;
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x28uLL);
  wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
    v6 + 4,
    (__int64)a2);
  *v6 = v5;
  v6[1] = v5;
  v6[2] = v5;
  *((_WORD *)v6 + 12) = 0;
  std::_Tree<std::_Tset_traits<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,std::less<void>,std::allocator<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>,0>>::_Insert_nohint<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> &,std::_Tree_node<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,void *> *>(
    (__int64 *)this + 22,
    (__int64)v18,
    v7,
    v6 + 4,
    v6);
  if ( !v18[8] )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      179LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroup.cpp",
      (const char *)0x80070057LL);
  v19 = (char *)this - 8;
  v20 = v18;
  v21 = 1;
  v8 = *((_QWORD *)this + 23);
  v28 = v8;
  if ( v8 == 1 )
  {
    v9 = 1;
    *((_BYTE *)this + 212) = ViewGroup::AreViewTabsAppManaged(
                               (ViewGroup *)((char *)this - 8),
                               (struct IApplicationView *)a2);
    LODWORD(v8) = v28;
  }
  else
  {
    v9 = 0;
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(**((_QWORD **)this + 9) + 32LL))(
          *((_QWORD *)this + 9),
          WindowForView,
          *((unsigned int *)this + 30),
          (unsigned int)v8);
  if ( v10 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      203LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroup.cpp",
      (const char *)(unsigned int)v10);
  v22 = (char *)this - 8;
  p_WindowForView = &WindowForView;
  v24 = &v28;
  v25 = 1;
  if ( v9 )
  {
    wil::com_ptr_t<IPrivilegedForegroundOperations,wil::err_exception_policy>::operator=(
      (__int64 *)this + 24,
      (__int64)a2);
  }
  else
  {
    v13 = (*a2)[12]((ApplicationViewHelpers *)a2, (GUID *)1, (__int64 *)1);
    if ( v13 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        216LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroup.cpp",
        (const char *)(unsigned int)v13);
    v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(**((_QWORD **)this + 9) + 56LL))(
            *((_QWORD *)this + 9),
            *((unsigned int *)this + 30),
            WindowForView,
            2LL);
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        222LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroup.cpp",
        (const char *)(unsigned int)v14);
      __debugbreak();
      return ViewGroup::AddView_::_1_::dtor_0(v16, v15, v17);
    }
  }
  if ( this != (ViewGroup *)-168LL )
    ReleaseSRWLockExclusive((PSRWLOCK)this + 21);
  if ( !*((_BYTE *)this + 212) )
  {
    LOBYTE(v11) = v9;
    (*(void (__fastcall **)(_QWORD, __int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *), char *, __int64))(**((_QWORD **)this + 10) + 56LL))(
      *((_QWORD *)this + 10),
      a2,
      (char *)this + 104,
      v11);
  }
  return 0LL;
}
