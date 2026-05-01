/*
 * XREFs of ?ChangeLayoutEnvironment@TabletModePositionerOperation@@UEAAJAEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x1803E8150
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18007C124 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z @ 0x18045C48C (-_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z.c)
 *     ?_HandleNormalLayoutEnvChange@CAppLayoutOperation@@IEAAJPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x18045C884 (-_HandleNormalLayoutEnvChange@CAppLayoutOperation@@IEAAJPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 *     ?_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z @ 0x18045CE08 (-_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z.c)
 */

__int64 __fastcall TabletModePositionerOperation::ChangeLayoutEnvironment(
        TabletModePositionerOperation *this,
        const struct LAYOUT_ENVIRONMENT_DETAILS *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // r15
  CAppLayoutOperation *v5; // rsi
  int v6; // r12d
  int v7; // eax
  int v8; // ebx
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  unsigned int v11; // r14d
  _DWORD v13[10]; // [rsp+20h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v4 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 16) & -(__int64)(this != (TabletModePositionerOperation *)176));
  v5 = (TabletModePositionerOperation *)((char *)this - 152);
  v6 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v4, 1);
  v7 = CAppLayoutOperation::_VerifyAndPrepareLayout(v5, 0LL, 0);
  v8 = v7;
  if ( v7 >= 0 )
  {
    (*(void (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)this - 15) + 24LL))(*((_QWORD *)this - 15), v13);
    v11 = 0;
    if ( *((_DWORD *)a2 + 2) - *(_DWORD *)a2 == v13[2] - v13[0]
      && *((_DWORD *)a2 + 3) - *((_DWORD *)a2 + 1) == v13[3] - v13[1]
      && *((_DWORD *)a2 + 4) == v13[4] )
    {
      (*(void (__fastcall **)(_QWORD *, const struct LAYOUT_ENVIRONMENT_DETAILS *))(**((_QWORD **)v5 + 5) + 216LL))(
        *((_QWORD **)v5 + 5),
        a2);
    }
    else
    {
      v11 = 2;
      v8 = CAppLayoutOperation::_HandleNormalLayoutEnvChange((TabletModePositionerOperation *)((char *)this - 152), a2);
      if ( v8 < 0 )
      {
LABEL_10:
        v9 = (unsigned int)v8;
        v10 = 251LL;
        goto LABEL_11;
      }
    }
    v8 = CAppLayoutOperation::_FinalizeLayout((char *)this - 152, v11);
    if ( v8 >= 0 )
    {
      *((_DWORD *)this - 18) = 33;
      v8 = 0;
      goto LABEL_12;
    }
    goto LABEL_10;
  }
  v9 = (unsigned int)v7;
  v10 = 246LL;
LABEL_11:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioneroperation.cpp",
    (const char *)v9);
LABEL_12:
  if ( v6 >= 0 )
    LeaveCriticalSection(v4);
  return (unsigned int)v8;
}
