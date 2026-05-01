/*
 * XREFs of ?AppToAppSwitch@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@01W4APP_TO_APP_SWITCH_FLAGS@@@Z @ 0x1803E5280
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z @ 0x180025184 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18007C124 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?QueryAppToAppSwitch@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@01PEAW4FinalizeLayoutFlags@@@Z @ 0x1803E5650 (-QueryAppToAppSwitch@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREF.c)
 *     ?_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z @ 0x18045C48C (-_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z.c)
 *     ?_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z @ 0x18045CE08 (-_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z.c)
 */

__int64 __fastcall AppSwitchOperation::AppToAppSwitch(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        char a6)
{
  __int64 v6; // r14
  struct _RTL_CRITICAL_SECTION *v10; // rsi
  CAppLayoutOperation *v11; // r15
  int v12; // r12d
  int AppToAppSwitch; // eax
  unsigned int v14; // ebx
  __int64 v15; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  int v18; // [rsp+70h] [rbp+8h]

  v6 = a1 - 176;
  v10 = (struct _RTL_CRITICAL_SECTION *)((a1 + 16) & -(__int64)(a1 != 176));
  v11 = (CAppLayoutOperation *)(a1 - 152);
  v12 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v10, 1);
  AppToAppSwitch = CAppLayoutOperation::_VerifyAndPrepareLayout(v11, 0LL, 0);
  v14 = AppToAppSwitch;
  if ( AppToAppSwitch < 0 )
  {
    v15 = 118LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\appswitchoperation.cpp",
      (const char *)(unsigned int)AppToAppSwitch);
    goto LABEL_11;
  }
  AppToAppSwitch = AppSwitchOperation::QueryAppToAppSwitch(v6, a2, a3, a4);
  v14 = AppToAppSwitch;
  if ( AppToAppSwitch < 0 )
  {
    v15 = 122LL;
    goto LABEL_9;
  }
  *(_DWORD *)(a1 - 72) = 327697;
  if ( (a6 & 1) == 0 )
    *(_DWORD *)(a1 - 72) = 327699;
  Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)(a1 - 88), a4);
  AppToAppSwitch = CAppLayoutOperation::_FinalizeLayout(a1 - 152, v18 | 4u);
  v14 = AppToAppSwitch;
  if ( AppToAppSwitch < 0 )
  {
    v15 = 136LL;
    goto LABEL_9;
  }
  v14 = 0;
LABEL_11:
  if ( v12 >= 0 )
    LeaveCriticalSection(v10);
  return v14;
}
