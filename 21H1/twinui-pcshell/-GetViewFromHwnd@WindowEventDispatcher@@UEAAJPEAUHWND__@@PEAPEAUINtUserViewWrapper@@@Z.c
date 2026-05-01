/*
 * XREFs of ?GetViewFromHwnd@WindowEventDispatcher@@UEAAJPEAUHWND__@@PEAPEAUINtUserViewWrapper@@@Z @ 0x180294710
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCachedView@WindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@I@Z @ 0x1800584F8 (-GetCachedView@WindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception.c)
 *     ??1?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180058B78 (--1-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091B88 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall WindowEventDispatcher::GetViewFromHwnd(RTL_SRWLOCK *this, HWND a2, struct INtUserViewWrapper **a3)
{
  unsigned int PropW; // eax
  const char *v6; // r9
  int v7; // edi
  __int64 *CachedView; // rax
  __int64 (__fastcall ***v9)(_QWORD, _QWORD, _QWORD); // rdi
  int v10; // eax
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 (__fastcall ***v13)(_QWORD, _QWORD, _QWORD); // [rsp+60h] [rbp+18h] BYREF
  __int64 v14; // [rsp+68h] [rbp+20h] BYREF

  *a3 = 0LL;
  PropW = (unsigned int)GetPropW(a2, L"Microsoft.Windows.WindowFactory.ViewId");
  try
  {
    v7 = PropW;
    if ( PropW )
    {
      v13 = 0LL;
      AcquireSRWLockExclusive(this + 32);
      CachedView = WindowEventDispatcher::GetCachedView((__int64)&this[-27], &v14, v7);
      v9 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))*CachedView;
      *CachedView = 0LL;
      v13 = v9;
      wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::~com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>(&v14);
      if ( v9 )
      {
        v10 = (**v9)(v9, &GUID_6d043cea_6cdf_43a3_b9d0_d755297c11d2, a3);
        if ( v10 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            5495LL,
            (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
            (const char *)(unsigned int)v10);
        if ( this != (RTL_SRWLOCK *)-256LL )
          ReleaseSRWLockExclusive(this + 32);
        wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::~com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>((__int64 *)&v13);
        return 0LL;
      }
      if ( this != (RTL_SRWLOCK *)-256LL )
        ReleaseSRWLockExclusive(this + 32);
      wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::~com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>((__int64 *)&v13);
    }
    result = 2147549183LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xB90,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                           v6);
  }
  return result;
}
