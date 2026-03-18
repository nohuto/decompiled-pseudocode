/*
 * XREFs of OutputDuplProcessTerminateForWddm @ 0x1C01BAF88
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0186C8C (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000F718 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00131F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?IterateOutputDuplMgrsForRender@@YAJPEAVDXGADAPTER@@P6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z2@Z @ 0x1C016D5C8 (-IterateOutputDuplMgrsForRender@@YAJPEAVDXGADAPTER@@P6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z2@Z.c)
 */

void __fastcall OutputDuplProcessTerminateForWddm(PERESOURCE *a1, PERESOURCE *this)
{
  _BYTE v4[144]; // [rsp+50h] [rbp-A8h] BYREF

  if ( DXGADAPTER::IsCoreResourceExclusiveOwner(a1) )
  {
    WdLogSingleEntry1(1LL, 3021LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"!pRenderAdapter->IsCoreResourceExclusiveOwner()",
      3021LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( this && DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
  {
    WdLogSingleEntry1(1LL, 3022LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"!pDisplayAdapter || !pDisplayAdapter->IsCoreResourceExclusiveOwner()",
      3022LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  COREADAPTERACCESS::COREADAPTERACCESS(
    (COREADAPTERACCESS *)v4,
    (struct DXGADAPTER *const)a1,
    (struct DXGADAPTER *const)this);
  if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v4, 0LL) >= 0 )
  {
    if ( !this )
      this = a1;
    IterateOutputDuplMgrsForRender(
      (struct DXGADAPTER *)this,
      (__int64 (__fastcall *)(__int64, void *))lambda_79eef42207348a29c4e9c7f357f04a2a_::_lambda_invoker_cdecl_,
      0LL);
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v4);
}
