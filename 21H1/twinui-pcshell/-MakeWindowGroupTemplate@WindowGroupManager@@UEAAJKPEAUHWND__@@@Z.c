/*
 * XREFs of ?MakeWindowGroupTemplate@WindowGroupManager@@UEAAJKPEAUHWND__@@@Z @ 0x180273310
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016A14 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091B88 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?TryGetWindowGroupById@WindowGroupManager@@AEAA?AV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@K@Z @ 0x1802738F4 (-TryGetWindowGroupById@WindowGroupManager@@AEAA-AV-$com_ptr_t@UIWindowGroup@@Uerr_exception_poli.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowGroupManager::MakeWindowGroupTemplate(WindowGroupManager *this, unsigned int a2, HWND a3)
{
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // r8
  int v8; // eax
  const char *v9; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v5 = *((_QWORD *)this + 11);
  try
  {
    v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 40LL))(v5);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        196LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\windowgroupmanager.cpp",
        (const char *)(unsigned int)v6);
    WindowGroupManager::TryGetWindowGroupById((char *)this - 8, &v12, a2);
    if ( v12 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 32LL))(v12);
      if ( v7 )
      {
        v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD, int))(**((_QWORD **)this + 11) + 40LL))(
               *((_QWORD *)this + 11),
               a2,
               v7,
               0LL,
               2);
        if ( v8 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            205LL,
            (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\windowgroupmanager.cpp",
            (const char *)(unsigned int)v8);
      }
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v12);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xD2,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\windowgroupmanager.cpp",
                           v9);
  }
  return result;
}
