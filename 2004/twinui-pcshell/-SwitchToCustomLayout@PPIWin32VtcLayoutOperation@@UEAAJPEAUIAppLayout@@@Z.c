/*
 * XREFs of ?SwitchToCustomLayout@PPIWin32VtcLayoutOperation@@UEAAJPEAUIAppLayout@@@Z @ 0x1800B8BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18007C8B4 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?_FinalizeLayout@PPIWin32VtcLayoutOperation@@AEAAJW4APP_LAYOUT_INSERT_LOCATION@@@Z @ 0x1800B90E0 (-_FinalizeLayout@PPIWin32VtcLayoutOperation@@AEAAJW4APP_LAYOUT_INSERT_LOCATION@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x1801479A4 (--1CThreadUseDetector@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PPIWin32VtcLayoutOperation::SwitchToCustomLayout(
        PPIWin32VtcLayoutOperation *this,
        struct IAppLayout *a2)
{
  char *v4; // rdi
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  int v9[2]; // [rsp+20h] [rbp-18h] BYREF
  int v10; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (char *)this - 176;
  *(_QWORD *)v9 = ((unsigned __int64)this + 16) & -(__int64)(this != (PPIWin32VtcLayoutOperation *)176);
  v10 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(*(__int64 *)v9, 1);
  v5 = (*(__int64 (__fastcall **)(char *, struct IAppLayout *))(*(_QWORD *)v4 + 48LL))(v4, a2);
  v6 = v5;
  if ( v5 >= 0 )
  {
    *((_DWORD *)this - 18) = 1;
    v5 = PPIWin32VtcLayoutOperation::_FinalizeLayout(v4);
    v6 = v5;
    if ( v5 >= 0 )
    {
      v6 = 0;
      goto LABEL_7;
    }
    v7 = 233LL;
  }
  else
  {
    v7 = 231LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\ppiwin32vtclayoutoperation.cpp",
    (const char *)(unsigned int)v5);
LABEL_7:
  CThreadUseDetector::~CThreadUseDetector((CThreadUseDetector *)v9);
  return v6;
}
