/*
 * XREFs of ?SelectView@ViewGroup@@UEAAJPEAUIApplicationView@@W4ViewGroupSelectViewReason@@@Z @ 0x180276770
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180038D30 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003EF48 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18008887C (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091B88 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??4?$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIPrivilegedForegroundOperations@@@Z @ 0x1801363F8 (--4-$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEA.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewGroup::SelectView(
        __int64 a1,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64 *),
        int a3)
{
  __int64 WindowForView; // r15
  __int64 v7; // rcx
  int v8; // eax
  const char *v9; // r9
  __int64 result; // rax
  __int64 *v11; // rdx
  __int64 *v12; // rcx
  __int64 *v13; // rax
  HWND i; // rax
  __int64 v15; // r9
  int v16; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  try
  {
    if ( a2 )
      WindowForView = ApplicationViewHelpers::GetWindowForView(a2, (struct IApplicationView *)a2);
    else
      WindowForView = 0LL;
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 168));
    if ( a2 )
    {
      v11 = *(__int64 **)(a1 + 176);
      v12 = v11;
      v13 = (__int64 *)v11[1];
      if ( *((_BYTE *)v13 + 25) )
        goto LABEL_20;
      do
      {
        if ( v13[4] >= (unsigned __int64)a2 )
        {
          v12 = v13;
          v13 = (__int64 *)*v13;
        }
        else
        {
          v13 = (__int64 *)v13[2];
        }
      }
      while ( !*((_BYTE *)v13 + 25) );
      if ( v12 == v11 || (unsigned __int64)a2 < v12[4] )
LABEL_20:
        v12 = *(__int64 **)(a1 + 176);
      if ( v12 == v11 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          339LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroup.cpp",
          (const char *)0x80070490LL);
      if ( a3 == 1 )
      {
        if ( a2 == *(__int64 (__fastcall ****)(ApplicationViewHelpers *, GUID *, __int64 *))(a1 + 216) )
        {
          wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)(a1 + 216));
          if ( a1 != -168 )
            ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 168));
          result = 0LL;
        }
        else
        {
          for ( i = GetForegroundWindow(); i; i = GetWindow(i, 4u) )
          {
            if ( i == (HWND)WindowForView )
              goto LABEL_35;
          }
          if ( a1 != -168 )
            ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 168));
          result = 0LL;
        }
      }
      else
      {
LABEL_35:
        if ( (unsigned int)SHIsSameObject(*(struct IUnknown **)(a1 + 200), (struct IUnknown *)a2) )
        {
          if ( a1 != -168 )
            ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 168));
          result = 0LL;
        }
        else if ( (unsigned int)SHIsSameObject(*(struct IUnknown **)(a1 + 192), (struct IUnknown *)a2) )
        {
          wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)(a1 + 200));
          if ( a1 != -168 )
            ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 168));
          result = 0LL;
        }
        else
        {
          v15 = 2LL;
          if ( a3 != 1 )
            v15 = 0LL;
          v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(**(_QWORD **)(a1 + 72) + 56LL))(
                  *(_QWORD *)(a1 + 72),
                  *(unsigned int *)(a1 + 120),
                  WindowForView,
                  v15);
          if ( v16 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              384LL,
              (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroup.cpp",
              (const char *)(unsigned int)v16);
          wil::com_ptr_t<IPrivilegedForegroundOperations,wil::err_exception_policy>::operator=(
            (__int64 *)(a1 + 200),
            (__int64)a2);
          if ( a1 != -168 )
            ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 168));
          result = 0LL;
        }
      }
    }
    else
    {
      v7 = *(_QWORD *)(a1 + 192);
      if ( v7 )
      {
        v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v7 + 96LL))(v7, 1LL, 1LL);
        if ( v8 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x14A,
            (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroup.cpp",
            (const char *)(unsigned int)v8);
        wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)(a1 + 192));
      }
      wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)(a1 + 200));
      *(_DWORD *)(a1 + 208) = 0;
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 72) + 72LL))(
        *(_QWORD *)(a1 + 72),
        *(unsigned int *)(a1 + 120));
      if ( a1 != -168 )
        ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 168));
      result = 0LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x186,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroup.cpp",
                           v9);
  }
  return result;
}
