/*
 * XREFs of ??0TabWrapper@@QEAA@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@W4TabWrapperOptions@@@Z @ 0x180248304
 * Callers:
 *     ?TryRemoveViewFromTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@@Z @ 0x18025D560 (-TryRemoveViewFromTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?UpdateViewAnimationStateForTab@TabViewManager@@AEAAXPEAUIApplicationView@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18025E928 (-UpdateViewAnimationStateForTab@TabViewManager@@AEAAXPEAUIApplicationView@@PEAUIShellTab@Tabs@Co.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016A14 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091B88 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 **__fastcall TabWrapper::TabWrapper(__int64 **a1, __int64 a2, char a3)
{
  __int64 (__fastcall *v6)(__int64, __int64 **); // rbp
  __int64 *v7; // rcx
  int v8; // eax
  int v9; // eax
  __int64 *v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  int v13; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v16; // [rsp+68h] [rbp+20h] BYREF

  *a1 = 0LL;
  *(_OWORD *)(a1 + 1) = 0LL;
  *((_DWORD *)a1 + 6) = 0;
  if ( (a3 & 7) != 0 )
  {
    v6 = *(__int64 (__fastcall **)(__int64, __int64 **))(*(_QWORD *)a2 + 168LL);
    v7 = *a1;
    *a1 = 0LL;
    if ( v7 )
      (*(void (__fastcall **)(__int64 *))(*v7 + 16))(v7);
    v8 = v6(a2, a1);
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        28LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\TabWrapper.h",
        (const char *)(unsigned int)v8);
      __debugbreak();
    }
    if ( *a1 )
    {
      if ( (a3 & 2) != 0 )
      {
        v9 = (*(__int64 (__fastcall **)(__int64 *, __int64 **))(**a1 + 48))(*a1, a1 + 1);
        if ( v9 < 0 )
        {
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            33LL,
            (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\TabWrapper.h",
            (const char *)(unsigned int)v9);
          __debugbreak();
        }
      }
      if ( (a3 & 4) != 0 )
      {
        v16 = 0LL;
        v10 = *a1;
        v11 = **a1;
        v16 = 0LL;
        v12 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v11 + 56))(v10, &v16);
        if ( v12 < 0 )
        {
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            39LL,
            (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\TabWrapper.h",
            (const char *)(unsigned int)v12);
          __debugbreak();
        }
        v13 = (*(__int64 (__fastcall **)(__int64, __int64 **))(*(_QWORD *)v16 + 56LL))(v16, a1 + 3);
        if ( v13 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            40LL,
            (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\TabWrapper.h",
            (const char *)(unsigned int)v13);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v16);
      }
    }
  }
  return a1;
}
