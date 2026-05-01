/*
 * XREFs of ?RuntimeClassInitialize@CWinRTApplicationView@@QEAAJXZ @ 0x18000C340
 * Callers:
 *     ?AddWinRTApplicationView@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@PEAUIUnknown@@@Z @ 0x18000C150 (-AddWinRTApplicationView@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@PEAUIUnknown@@.c)
 * Callees:
 *     GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_0067f30f54eb0de3635ee7c500c831b5___ @ 0x18000D234 (GlobalsUtility--CGlobals_ApplicationViewManagement--CGlobals_--Get__lambda_0067f30f54eb0de3635ee.c)
 *     ?RuntimeClassInitialize@CApplicationViewBase@@QEAAJXZ @ 0x18000D33C (-RuntimeClassInitialize@CApplicationViewBase@@QEAAJXZ.c)
 *     ?GetViewId@CWinRTApplicationView@@UEAAJPEAPEAG@Z @ 0x180034C10 (-GetViewId@CWinRTApplicationView@@UEAAJPEAPEAG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWinRTApplicationView::RuntimeClassInitialize(CWinRTApplicationView *this)
{
  int ViewId; // eax
  unsigned int v3; // ebx
  __int64 v5; // rdx
  int v6[2]; // [rsp+20h] [rbp-38h] BYREF
  CWinRTApplicationView *v7; // [rsp+28h] [rbp-30h]
  LPVOID pv[5]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  pv[0] = 0LL;
  pv[1] = (LPVOID)-1LL;
  pv[2] = (LPVOID)-1LL;
  ViewId = CWinRTApplicationView::GetViewId((CWinRTApplicationView *)((char *)this + 16), (unsigned __int16 **)pv);
  v3 = ViewId;
  if ( ViewId < 0 )
  {
    v5 = 35LL;
  }
  else
  {
    *(_QWORD *)v6 = pv;
    v7 = this;
    GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_0067f30f54eb0de3635ee7c500c831b5___(v6);
    ViewId = CApplicationViewBase::RuntimeClassInitialize(this);
    v3 = ViewId;
    if ( ViewId >= 0 )
      goto LABEL_3;
    v5 = 47LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
    (const char *)(unsigned int)ViewId,
    v6[0]);
LABEL_3:
  if ( pv[0] )
    CoTaskMemFree(pv[0]);
  return v3;
}
