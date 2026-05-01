/*
 * XREFs of ?SwitchBack@BackOperation@@UEAAJPEAUIApplicationView@@W4BackOperationFlags@@@Z @ 0x180409950
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z @ 0x18001DB14 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18007A004 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z @ 0x18047FB3C (-_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z.c)
 *     ?_MakeViewFullScreen@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x180480160 (-_MakeViewFullScreen@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE.c)
 *     ?_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z @ 0x1804804B8 (-_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BackOperation::SwitchBack(__int64 a1, __int64 a2, char a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // r15
  int v7; // r13d
  int v8; // eax
  int v9; // ebx
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  int v12; // esi
  int ViewFullScreen; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v6 = (struct _RTL_CRITICAL_SECTION *)((a1 + 16) & -(__int64)(a1 != 176));
  v7 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v6, 1);
  v8 = CAppLayoutOperation::_VerifyAndPrepareLayout((CAppLayoutOperation *)(a1 - 152), 0LL, 0);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = (unsigned int)v8;
    v11 = 55LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\backoperation.cpp",
      (const char *)v10);
    goto LABEL_12;
  }
  v12 = 589889;
  if ( (a3 & 1) != 0 )
  {
    ViewFullScreen = CAppLayoutOperation::_MakeViewFullScreen(a1 - 152, a2, 10LL);
    v9 = ViewFullScreen;
    if ( ViewFullScreen < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x47,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\backoperation.cpp",
        (const char *)(unsigned int)ViewFullScreen);
      goto LABEL_8;
    }
    Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)(a1 - 88), a2);
    v12 = 589891;
  }
  v9 = 0;
LABEL_8:
  if ( v9 < 0 )
  {
    v10 = (unsigned int)v9;
    v11 = 58LL;
    goto LABEL_10;
  }
  CAppLayoutOperation::_FinalizeLayout(a1 - 152);
  *(_DWORD *)(a1 - 72) = v12;
  v9 = 0;
LABEL_12:
  if ( v7 >= 0 )
    LeaveCriticalSection(v6);
  return (unsigned int)v9;
}
