/*
 * XREFs of _lambda_476f18e24aa1fbee26857ac5b809e782_::operator() @ 0x18026C418
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_476f18e24aa1fbee26857ac5b809e782___::Run @ 0x18026EC70 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_476f18e24aa1fbee26857ac5b809e782___--Run.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??0CRPCTimeout@@QEAA@K@Z @ 0x180155718 (--0CRPCTimeout@@QEAA@K@Z.c)
 *     ?Disarm@CBaseRPCTimeout@@QEAAXXZ @ 0x180157904 (-Disarm@CBaseRPCTimeout@@QEAAXXZ.c)
 *     ?TryGetApplicationViewTabManager@@YA?AV?$com_ptr_with_timeout@UIApplicationViewTabManagerPrivate@Tabs@ComposableShell@Internal@Windows@@@@PEAUHWND__@@PEBD@Z @ 0x18025CC04 (-TryGetApplicationViewTabManager@@YA-AV-$com_ptr_with_timeout@UIApplicationViewTabManagerPrivate.c)
 */

__int64 __fastcall lambda_476f18e24aa1fbee26857ac5b809e782_::operator()(__int64 a1)
{
  __int64 v2; // rbx
  int v3; // ebx
  _BYTE v5[24]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v6; // [rsp+48h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  char v8; // [rsp+60h] [rbp+8h] BYREF
  __int64 v9; // [rsp+68h] [rbp+10h] BYREF

  TryGetApplicationViewTabManager(&v9, *(HWND *)(a1 + 16), "PerformComplete");
  v2 = v9;
  if ( !v9 )
    return 0LL;
  CRPCTimeout::CRPCTimeout((CRPCTimeout *)v5, 0);
  v6 = v2;
  v3 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, char *))(*(_QWORD *)v2 + 80LL))(
         v2,
         2LL,
         *(_QWORD *)(a1 + 8),
         &v8);
  CBaseRPCTimeout::Disarm((CBaseRPCTimeout *)v5);
  if ( v3 >= 0 )
  {
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x245,
    (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfermanager.cpp",
    (const char *)(unsigned int)v3);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  return (unsigned int)v3;
}
