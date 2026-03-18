/*
 * XREFs of ?GetMmioSpaceInfo@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEA_K0@Z @ 0x1C0364B10
 * Callers:
 *     ?InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z @ 0x1C02BBED4 (-InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXG_GUEST_GLOBAL_VMBUS::GetMmioSpaceInfo(
        DXG_GUEST_GLOBAL_VMBUS *this,
        unsigned __int64 *a2,
        unsigned __int64 *a3)
{
  ((void (__fastcall *)(_QWORD))qword_1C0131BE0)(*(_QWORD *)this);
  if ( *a3 >= *((_QWORD *)DXGGLOBAL_GetGlobal() + 224) && *a2 )
    return 0LL;
  WdLogSingleEntry1(2LL, 13521LL);
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"GetMmioSpaceInfo failed", 13521LL, 0LL, 0LL, 0LL, 0LL);
  return 3221225485LL;
}
