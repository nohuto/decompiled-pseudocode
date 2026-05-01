/*
 * XREFs of _lambda_4b23a44972d25bfc52aa58256fd4c9b9_::operator() @ 0x18026AF34
 * Callers:
 *     _lambda_92d3fc369c3cea5b70dbdb6349205bce_::operator() @ 0x18026B324 (_lambda_92d3fc369c3cea5b70dbdb6349205bce_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??0CRPCTimeout@@QEAA@K@Z @ 0x180179C58 (--0CRPCTimeout@@QEAA@K@Z.c)
 *     ?Disarm@CBaseRPCTimeout@@QEAAXXZ @ 0x18017BD24 (-Disarm@CBaseRPCTimeout@@QEAAXXZ.c)
 *     ??$TabViewManager_CloseRequestedRpcTimeout@AEBJ@TabViewManagerCloseTabRequested@TabViewManagerMeasures@@QEAAXAEBJ@Z @ 0x180265A38 (--$TabViewManager_CloseRequestedRpcTimeout@AEBJ@TabViewManagerCloseTabRequested@TabViewManagerMe.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_4b23a44972d25bfc52aa58256fd4c9b9_::operator()(__int64 **a1)
{
  __int64 v2; // rbx
  int v3; // ebx
  _BYTE v5[24]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v8; // [rsp+50h] [rbp+8h] BYREF

  v2 = **a1;
  CRPCTimeout::CRPCTimeout((CRPCTimeout *)v5, 0);
  v6 = v2;
  v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v2 + 72LL))(v2, *a1[1], a1[2]);
  v8 = v3;
  CBaseRPCTimeout::Disarm((CBaseRPCTimeout *)v5);
  if ( v3 == -2147418110 )
  {
    TabViewManagerMeasures::TabViewManagerCloseTabRequested::TabViewManager_CloseRequestedRpcTimeout<long const &>(
      (__int64)a1[3],
      &v8);
    return 2147549186LL;
  }
  else if ( v3 >= 0 )
  {
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9FD,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
}
