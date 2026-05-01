/*
 * XREFs of _lambda_cf21efff913cfa189e82bd10310d9d23_::operator() @ 0x18026B714
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_cf21efff913cfa189e82bd10310d9d23___::Run @ 0x1802772E0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_cf21efff913cfa189e82bd10310d9d23___--Run.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??0CRPCTimeout@@QEAA@K@Z @ 0x180179C58 (--0CRPCTimeout@@QEAA@K@Z.c)
 *     ?Disarm@CBaseRPCTimeout@@QEAAXXZ @ 0x18017BD24 (-Disarm@CBaseRPCTimeout@@QEAAXXZ.c)
 *     ?TryGetApplicationViewTabManager@@YA?AV?$com_ptr_with_timeout@UIApplicationViewTabManagerPrivate@Tabs@ComposableShell@Internal@Windows@@@@PEAUHWND__@@PEBD@Z @ 0x18027E884 (-TryGetApplicationViewTabManager@@YA-AV-$com_ptr_with_timeout@UIApplicationViewTabManagerPrivate.c)
 */

__int64 __fastcall lambda_cf21efff913cfa189e82bd10310d9d23_::operator()(_QWORD *a1)
{
  __int64 v1; // rbx
  int v2; // eax
  _BYTE v4[24]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF

  TryGetApplicationViewTabManager(&v7, *a1, "NotifyGroupChanged");
  v1 = v7;
  if ( v7 )
  {
    CRPCTimeout::CRPCTimeout((CRPCTimeout *)v4, 0);
    v5 = v1;
    v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 48LL))(v1);
    if ( v2 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xD40,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v2);
    CBaseRPCTimeout::Disarm((CBaseRPCTimeout *)v4);
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return 0LL;
}
