/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8cb864d560eabf2ff9644d5f66b5c768___::Run @ 0x1802BA750
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??0CRPCTimeout@@QEAA@K@Z @ 0x180155718 (--0CRPCTimeout@@QEAA@K@Z.c)
 *     ?Disarm@CBaseRPCTimeout@@QEAAXXZ @ 0x180157904 (-Disarm@CBaseRPCTimeout@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8cb864d560eabf2ff9644d5f66b5c768___::Run(
        __int64 a1)
{
  _BYTE v2[40]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v3; // [rsp+50h] [rbp+8h] BYREF

  CRPCTimeout::CRPCTimeout((CRPCTimeout *)v2, 0);
  v3 = 0LL;
  if ( (int)CoreQueryWindowService(
              *(_QWORD *)(a1 + 16),
              &GUID_592e523e_f578_42d3_9b29_307fc423ae43,
              &GUID_67b602d0_b85e_4f98_881f_7df997231b5b,
              &v3) >= 0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  CBaseRPCTimeout::Disarm((CBaseRPCTimeout *)v2);
}
