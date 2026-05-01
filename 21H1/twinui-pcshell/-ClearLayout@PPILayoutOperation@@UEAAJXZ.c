/*
 * XREFs of ?ClearLayout@PPILayoutOperation@@UEAAJXZ @ 0x1803E95A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18007C124 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z @ 0x18045C48C (-_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z.c)
 *     ?_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z @ 0x18045CE08 (-_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z.c)
 */

__int64 __fastcall PPILayoutOperation::ClearLayout(PPILayoutOperation *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  CAppLayoutOperation *v3; // r14
  int v4; // ebp
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 16) & -(__int64)(this != (PPILayoutOperation *)176));
  v3 = (PPILayoutOperation *)((char *)this - 152);
  v4 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v2, 1);
  v5 = CAppLayoutOperation::_VerifyAndPrepareLayout(v3, 0LL, 0);
  v6 = v5;
  if ( v5 >= 0 )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this - 14) + 264LL))(*((_QWORD *)this - 14), 7LL);
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this - 14) + 240LL))(
      *((_QWORD *)this - 14),
      1LL,
      0LL);
    *((_DWORD *)this - 18) = 1;
    v5 = CAppLayoutOperation::_FinalizeLayout((char *)this - 152, 2LL);
    v6 = v5;
    if ( v5 >= 0 )
      goto LABEL_6;
    v7 = 123LL;
  }
  else
  {
    v7 = 119LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\ppilayoutoperation.cpp",
    (const char *)(unsigned int)v5);
LABEL_6:
  if ( v4 >= 0 )
    LeaveCriticalSection(v2);
  return v6;
}
