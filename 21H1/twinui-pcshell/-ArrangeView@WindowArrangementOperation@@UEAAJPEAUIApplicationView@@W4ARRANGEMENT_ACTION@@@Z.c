/*
 * XREFs of ?ArrangeView@WindowArrangementOperation@@UEAAJPEAUIApplicationView@@W4ARRANGEMENT_ACTION@@@Z @ 0x1803E65C0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z @ 0x180025184 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18007C124 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?QueryArrangeView@WindowArrangementOperation@@AEAAJPEAUIApplicationView@@W4ARRANGEMENT_ACTION@@PEAW4FinalizeLayoutFlags@@@Z @ 0x1803E6768 (-QueryArrangeView@WindowArrangementOperation@@AEAAJPEAUIApplicationView@@W4ARRANGEMENT_ACTION@@P.c)
 *     ?_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z @ 0x18045C48C (-_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z.c)
 *     ?_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z @ 0x18045CE08 (-_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z.c)
 */

__int64 __fastcall WindowArrangementOperation::ArrangeView(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r15
  struct _RTL_CRITICAL_SECTION *v7; // rsi
  CAppLayoutOperation *v8; // r14
  int v9; // r12d
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v15; // [rsp+50h] [rbp+8h] BYREF

  v3 = a1 - 176;
  v7 = (struct _RTL_CRITICAL_SECTION *)((a1 + 16) & -(__int64)(a1 != 176));
  v8 = (CAppLayoutOperation *)(a1 - 152);
  v9 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v7, 1);
  v10 = CAppLayoutOperation::_VerifyAndPrepareLayout(v8, 0LL, 0);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v10 = WindowArrangementOperation::QueryArrangeView(v3, a2, a3, &v15);
    v11 = v10;
    if ( v10 >= 0 )
    {
      *(_DWORD *)(a1 - 72) = 65539;
      Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)(a1 - 88), a2);
      v10 = CAppLayoutOperation::_FinalizeLayout(a1 - 152, v15);
      v11 = v10;
      if ( v10 >= 0 )
        goto LABEL_8;
      v12 = 66LL;
    }
    else
    {
      v12 = 63LL;
    }
  }
  else
  {
    v12 = 60LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementoperation.cpp",
    (const char *)(unsigned int)v10);
LABEL_8:
  if ( v9 >= 0 )
    LeaveCriticalSection(v7);
  return v11;
}
