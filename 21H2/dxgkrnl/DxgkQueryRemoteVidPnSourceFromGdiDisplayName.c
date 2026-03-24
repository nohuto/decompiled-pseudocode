/*
 * XREFs of DxgkQueryRemoteVidPnSourceFromGdiDisplayName @ 0x1C00448F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkQueryRemoteVidPnSourceFromGdiDisplayName(__int64 a1)
{
  struct DXGPROCESS *Current; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rbx

  Current = DXGPROCESS::GetCurrent();
  if ( Current )
    return (*(__int64 (__fastcall **)(__int64))(*((_QWORD *)Current + 11) + 440LL))(a1);
  v5 = WdLogNewEntry5_WdError(v4, v3);
  *(_QWORD *)(v5 + 24) = -1073741811LL;
  *(_QWORD *)(v5 + 32) = PsGetCurrentProcess();
  WdLogEvent5_WdError(v5);
  return 3221225485LL;
}
