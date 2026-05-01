/*
 * XREFs of ?ResizeApps@AppResizeOperation@@UEAAJW4ResizeAction@@AEBUtagPOINT@@@Z @ 0x1803E7750
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18007C124 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?QueryResizeApps@AppResizeOperation@@AEAAJW4ResizeAction@@AEBUtagPOINT@@@Z @ 0x1803E70A8 (-QueryResizeApps@AppResizeOperation@@AEAAJW4ResizeAction@@AEBUtagPOINT@@@Z.c)
 *     ?_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z @ 0x18045C48C (-_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z.c)
 *     ?_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z @ 0x18045CE08 (-_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z.c)
 */

__int64 __fastcall AppResizeOperation::ResizeApps(__int64 a1, int a2, _DWORD *a3)
{
  __int64 v3; // r14
  struct _RTL_CRITICAL_SECTION *v7; // rdi
  int v8; // r15d
  int ResizeApps; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = a1 - 176;
  v7 = (struct _RTL_CRITICAL_SECTION *)((a1 + 16) & -(__int64)(a1 != 176));
  v8 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v7, 1);
  ResizeApps = CAppLayoutOperation::_VerifyAndPrepareLayout((CAppLayoutOperation *)(a1 - 152), 0LL, 0);
  v10 = ResizeApps;
  if ( ResizeApps >= 0 )
  {
    *(_DWORD *)(a1 - 72) = 1;
    ResizeApps = AppResizeOperation::QueryResizeApps(v3, a2, a3);
    v10 = ResizeApps;
    if ( ResizeApps >= 0 )
    {
      ResizeApps = CAppLayoutOperation::_FinalizeLayout(a1 - 152, 0LL);
      v10 = ResizeApps;
      if ( ResizeApps >= 0 )
        goto LABEL_8;
      v11 = 61LL;
    }
    else
    {
      v11 = 60LL;
    }
  }
  else
  {
    v11 = 58LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeoperation.cpp",
    (const char *)(unsigned int)ResizeApps);
LABEL_8:
  if ( v8 >= 0 )
    LeaveCriticalSection(v7);
  return v10;
}
