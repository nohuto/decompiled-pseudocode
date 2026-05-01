/*
 * XREFs of _lambda_52b61fe057652d6daae3134326b4df51_::operator() @ 0x18009E300
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_52b61fe057652d6daae3134326b4df51___::Run @ 0x18009E9F0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_52b61fe057652d6daae3134326b4df51___--.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016A14 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091B88 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_52b61fe057652d6daae3134326b4df51_::operator()(
        _QWORD **a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  _QWORD *v5; // rbx
  _QWORD *v6; // rsi
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, _QWORD, __int64 *); // rsi
  __int64 v11; // rcx
  int v12; // eax
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v15; // [rsp+30h] [rbp+8h] BYREF
  __int64 v16; // [rsp+38h] [rbp+10h] BYREF

  v5 = (_QWORD *)(*a1)[46];
  v6 = (_QWORD *)(*a1)[47];
  try
  {
    while ( v5 != v6 )
    {
      if ( (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 296LL))(*v5) == *a1[1] )
      {
        v7 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 288LL))(*v5);
        v15 = 0LL;
        v8 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(*a1)[39] + 40LL))((*a1)[39], &v16);
        v9 = *(_QWORD *)v8;
        v10 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(**(_QWORD **)v8 + 56LL);
        v11 = v15;
        v15 = 0LL;
        if ( v11 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        v12 = v10(v9, v7, &v15);
        if ( v12 < 0 )
        {
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            1967LL,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
            (const char *)(unsigned int)v12);
          JUMPOUT(0x18009E413LL);
        }
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v16);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v15);
        break;
      }
      ++v5;
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x7B4,
                           (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                           a4);
  }
  return result;
}
