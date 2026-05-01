/*
 * XREFs of ?SwitchToEmptyLayout@TabletModePositionerOperation@@UEAAJW4SwitchToEmptyLayoutFlags@@@Z @ 0x1803E9130
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18007C124 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?_EvictAllItems@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@PEA_N@Z @ 0x18045C05C (-_EvictAllItems@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@PEA.c)
 *     ?_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z @ 0x18045C48C (-_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z.c)
 *     ?_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z @ 0x18045CE08 (-_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z.c)
 */

__int64 __fastcall TabletModePositionerOperation::SwitchToEmptyLayout(__int64 a1, char a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbp
  CAppLayoutOperation *v5; // rsi
  int v6; // r15d
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((a1 + 16) & -(__int64)(a1 != 176));
  v5 = (CAppLayoutOperation *)(a1 - 152);
  v6 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v4, 1);
  v7 = CAppLayoutOperation::_VerifyAndPrepareLayout(v5, 0LL, 0);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 171LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioneroperation.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_9;
  }
  v7 = CAppLayoutOperation::_EvictAllItems(a1 - 152, 0LL, 5LL);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 174LL;
    goto LABEL_5;
  }
  *(_DWORD *)(a1 - 72) = 1;
  if ( (a2 & 1) != 0 )
    *(_DWORD *)(a1 - 72) = 33;
  CAppLayoutOperation::_FinalizeLayout(a1 - 152, 2LL);
  v8 = 0;
LABEL_9:
  if ( v6 >= 0 )
    LeaveCriticalSection(v4);
  return v8;
}
