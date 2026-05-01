/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_829246a92e7fd2c43aed041559db21ca___::Run @ 0x180030FB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016FE4 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
int *__fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_829246a92e7fd2c43aed041559db21ca___::Run(
        __int64 a1)
{
  __int64 *v2; // rcx
  __int64 v3; // rax
  int v4; // eax
  int v5; // ebx
  RTL_SRWLOCK *v6; // rbx
  __int64 v7; // rcx
  BOOL v8; // esi
  int *result; // rax
  __int64 v10; // rdx
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  v13 = 0LL;
  v2 = **(__int64 ***)(a1 + 16);
  v3 = *v2;
  v13 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v3 + 48))(v2, &v13);
  v5 = v4;
  if ( v4 < 0 )
  {
    v10 = 657LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
      (const char *)(unsigned int)v4,
      v11);
    goto LABEL_6;
  }
  v6 = (RTL_SRWLOCK *)(*(_QWORD *)(a1 + 24) + 248LL);
  AcquireSRWLockShared(v6);
  v7 = *(_QWORD *)(a1 + 24);
  v8 = *(_BYTE *)(v7 + 200) == 0;
  if ( v6 )
  {
    ReleaseSRWLockShared(v6);
    v7 = *(_QWORD *)(a1 + 24);
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, BOOL))(**(_QWORD **)(v7 + 280) + 128LL))(
         *(_QWORD *)(v7 + 280),
         v13,
         v8);
  v5 = v4;
  if ( v4 < 0 )
  {
    v10 = 664LL;
    goto LABEL_9;
  }
  v5 = 0;
LABEL_6:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v13);
  result = *(int **)(a1 + 32);
  *result = v5;
  return result;
}
