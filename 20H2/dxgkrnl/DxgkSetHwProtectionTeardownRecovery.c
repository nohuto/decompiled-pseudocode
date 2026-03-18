/*
 * XREFs of DxgkSetHwProtectionTeardownRecovery @ 0x1C00439E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkSetHwProtectionTeardownRecovery(__int64 *a1)
{
  struct DXGPROCESS *Current; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (__int64 *)MmUserProbeAddress;
  v6 = *a1;
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
    return (*(__int64 (__fastcall **)(__int64 *))(*((_QWORD *)Current + 11) + 432LL))(&v6);
  v4 = WdLogNewEntry5_WdError(v3, v2);
  *(_QWORD *)(v4 + 24) = -1073741811LL;
  *(_QWORD *)(v4 + 32) = PsGetCurrentProcess();
  WdLogEvent5_WdError(v4);
  return 3221225485LL;
}
