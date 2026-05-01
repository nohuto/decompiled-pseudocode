/*
 * XREFs of ?ChangeLayoutEnvironment@TabletModePositionerOperation@@UEAAJAEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x18040A830
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18007C8B4 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z @ 0x1804804DC (-_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z.c)
 *     ?_HandleNormalLayoutEnvChange@CAppLayoutOperation@@IEAAJPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x1804808D4 (-_HandleNormalLayoutEnvChange@CAppLayoutOperation@@IEAAJPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 *     ?_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z @ 0x180480E58 (-_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TabletModePositionerOperation::ChangeLayoutEnvironment(
        TabletModePositionerOperation *this,
        const struct LAYOUT_ENVIRONMENT_DETAILS *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // r15
  int v5; // r12d
  int v6; // eax
  int v7; // ebx
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  _DWORD v11[10]; // [rsp+30h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v4 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 16) & -(__int64)(this != (TabletModePositionerOperation *)176));
  v5 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v4, 1);
  v6 = CAppLayoutOperation::_VerifyAndPrepareLayout((TabletModePositionerOperation *)((char *)this - 152), 0LL, 0);
  v7 = v6;
  if ( v6 >= 0 )
  {
    (*(void (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)this - 15) + 24LL))(*((_QWORD *)this - 15), v11);
    v7 = 0;
    if ( *((_DWORD *)a2 + 2) - *(_DWORD *)a2 == v11[2] - v11[0]
      && *((_DWORD *)a2 + 3) - *((_DWORD *)a2 + 1) == v11[3] - v11[1]
      && *((_DWORD *)a2 + 4) == v11[4] )
    {
      (*(void (__fastcall **)(_QWORD, const struct LAYOUT_ENVIRONMENT_DETAILS *))(**((_QWORD **)this - 14) + 216LL))(
        *((_QWORD *)this - 14),
        a2);
    }
    else
    {
      v7 = CAppLayoutOperation::_HandleNormalLayoutEnvChange((TabletModePositionerOperation *)((char *)this - 152), a2);
    }
    if ( v7 >= 0 )
    {
      v7 = CAppLayoutOperation::_FinalizeLayout((char *)this - 152);
      if ( v7 >= 0 )
      {
        *((_DWORD *)this - 18) = 33;
        v7 = 0;
        goto LABEL_13;
      }
    }
    v8 = (unsigned int)v7;
    v9 = 251LL;
  }
  else
  {
    v8 = (unsigned int)v6;
    v9 = 246LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioneroperation.cpp",
    (const char *)v8);
LABEL_13:
  if ( v5 >= 0 )
    LeaveCriticalSection(v4);
  return (unsigned int)v7;
}
