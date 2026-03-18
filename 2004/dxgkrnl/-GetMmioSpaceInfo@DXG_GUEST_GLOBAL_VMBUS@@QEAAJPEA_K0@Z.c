/*
 * XREFs of ?GetMmioSpaceInfo@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEA_K0@Z @ 0x1C023A7B0
 * Callers:
 *     ?InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z @ 0x1C020DB3C (-InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXG_GUEST_GLOBAL_VMBUS::GetMmioSpaceInfo(
        DXG_GUEST_GLOBAL_VMBUS *this,
        unsigned __int64 *a2,
        unsigned __int64 *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  __int64 v10; // rax

  ((void (__fastcall *)(_QWORD))qword_1C00B30C0)(*(_QWORD *)this);
  v8 = *((_QWORD *)DXGGLOBAL::GetGlobal(v6, v5) + 203);
  if ( *a3 >= v8 && *a2 )
    return 0LL;
  v10 = WdLogNewEntry5_WdError(v8, v7);
  *(_QWORD *)(v10 + 24) = 11775LL;
  WdLogEvent5_WdError(v10);
  return 3221225485LL;
}
