/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_8ad2649c1bd26c54604c8d00330738ee___::Run @ 0x18004B370
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B910 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
int *__fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_8ad2649c1bd26c54604c8d00330738ee___::Run(
        __int64 a1)
{
  __int64 *v2; // rcx
  __int64 v3; // rax
  int v4; // eax
  int v5; // ebx
  int *result; // rax
  __int64 v7; // rdx
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = 0LL;
  v2 = **(__int64 ***)(a1 + 16);
  v3 = *v2;
  v10 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v3 + 48))(v2, &v10);
  v5 = v4;
  if ( v4 < 0 )
  {
    v7 = 447LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
      (const char *)(unsigned int)v4,
      v8);
    goto LABEL_4;
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 24) + 280LL) + 48LL))(
         *(_QWORD *)(*(_QWORD *)(a1 + 24) + 280LL),
         v10);
  v5 = v4;
  if ( v4 < 0 )
  {
    v7 = 448LL;
    goto LABEL_7;
  }
  v5 = 0;
LABEL_4:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v10);
  result = *(int **)(a1 + 32);
  *result = v5;
  return result;
}
