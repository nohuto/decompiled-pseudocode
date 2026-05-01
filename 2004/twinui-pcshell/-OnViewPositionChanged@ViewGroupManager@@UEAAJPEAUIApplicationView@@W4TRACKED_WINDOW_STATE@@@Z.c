/*
 * XREFs of ?OnViewPositionChanged@ViewGroupManager@@UEAAJPEAUIApplicationView@@W4TRACKED_WINDOW_STATE@@@Z @ 0x18028C7A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016FE4 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?GetViewGroup@ViewGroupManager@@AEAA?AV?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x18028C0A0 (-GetViewGroup@ViewGroupManager@@AEAA-AV-$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wi.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewGroupManager::OnViewPositionChanged(__int64 a1, __int64 a2, int a3, const char *a4)
{
  int v5; // eax
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+48h] [rbp+20h] BYREF

  try
  {
    if ( a3 != 2 )
    {
      ViewGroupManager::GetViewGroup((RTL_SRWLOCK *)(a1 - 8), &v8, a2);
      if ( v8 )
      {
        v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 112LL))(v8, a2);
        if ( v5 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            121LL,
            (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroupmanager.cpp",
            (const char *)(unsigned int)v5);
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v8);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x7E,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroupmanager.cpp",
                           a4);
  }
  return result;
}
