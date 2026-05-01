/*
 * XREFs of ?OnGroupWindowTemplateApplied@ViewGroupManager@@UEAAXPEAUHWND__@@KKUtagRECT@@1@Z @ 0x18028C440
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016FE4 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180088F6C (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?GetApplicableViewGroup@ViewGroupManager@@AEAA?AV?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@PEAUHWND__@@@Z @ 0x18028BEF0 (-GetApplicableViewGroup@ViewGroupManager@@AEAA-AV-$com_ptr_t@UIViewGroupInternal@@Uerr_exception.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall ViewGroupManager::OnGroupWindowTemplateApplied(
        ViewGroupManager *this,
        __int64 a2,
        unsigned int a3,
        int a4,
        struct tagRECT *a5,
        struct tagRECT *a6)
{
  void (*v10)(void); // rbx
  int v11; // eax
  const char *v12; // r9
  __int64 v13; // [rsp+40h] [rbp-58h] BYREF
  __int64 v14; // [rsp+48h] [rbp-50h] BYREF
  struct tagRECT *v15; // [rsp+50h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v15 = a6;
  v13 = 0LL;
  v10 = *(void (**)(void))(**((_QWORD **)this + 10) + 48LL);
  wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset(&v13);
  try
  {
    v10();
    ViewGroupManager::GetApplicableViewGroup((RTL_SRWLOCK *)this - 4, &v14, v13, a2);
    if ( v14 )
    {
      v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, int, struct tagRECT *, struct tagRECT *))(*(_QWORD *)v14 + 96LL))(
              v14,
              v13,
              a2,
              a3,
              a4,
              a5,
              v15);
      if ( v11 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          230LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroupmanager.cpp",
          (const char *)(unsigned int)v11);
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v14);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v13);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xE9,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroupmanager.cpp",
      v12);
  }
}
