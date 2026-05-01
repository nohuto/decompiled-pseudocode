/*
 * XREFs of ?OnIdleStateChanged@WindowEventDispatcher@@UEAAJH@Z @ 0x1802B6DC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800595A8 (--1-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18005B120 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall WindowEventDispatcher::OnIdleStateChanged(RTL_SRWLOCK *this, int a2)
{
  RTL_SRWLOCK *v4; // rsi
  const char *v5; // r9
  __int64 *Ptr; // rdi
  __int64 *v7; // r15
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 result; // rax
  __int64 v11; // [rsp+20h] [rbp-28h] BYREF
  std::_Ref_count_base *v12; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF
  RTL_SRWLOCK *v15; // [rsp+60h] [rbp+18h]

  v4 = this + 34;
  AcquireSRWLockExclusive(this + 34);
  v15 = v4;
  Ptr = (__int64 *)this[21].Ptr;
  v7 = (__int64 *)this[22].Ptr;
  try
  {
    while ( Ptr != v7 )
    {
      v8 = *Ptr;
      v14 = v8;
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 264LL))(v8, &v11);
      if ( (*(_BYTE *)(v11 + 16) & 2) == 0 )
      {
        v9 = *(_QWORD *)v8;
        if ( a2 )
          (*(void (__fastcall **)(__int64))(v9 + 376))(v8);
        else
          (*(void (__fastcall **)(__int64))(v9 + 384))(v8);
      }
      if ( v12 )
        std::_Ref_count_base::_Decref(v12);
      wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::~com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>(&v14);
      ++Ptr;
    }
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1CC,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                           v5);
  }
  return result;
}
