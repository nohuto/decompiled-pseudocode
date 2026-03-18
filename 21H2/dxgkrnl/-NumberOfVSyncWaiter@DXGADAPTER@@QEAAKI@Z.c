/*
 * XREFs of ?NumberOfVSyncWaiter@DXGADAPTER@@QEAAKI@Z @ 0x1C004A1A8
 * Callers:
 *     ?SignalVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@IK_N@Z @ 0x1C006CFDC (-SignalVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@IK_N@Z.c)
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C0178000 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 *     ?SignalVSyncEvent@BLTQUEUE@@AEAAXXZ @ 0x1C01CED50 (-SignalVSyncEvent@BLTQUEUE@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGADAPTER::NumberOfVSyncWaiter(DXGADAPTER *this, int a2)
{
  __int64 v2; // r8

  v2 = a2 & (unsigned int)-((*((_DWORD *)this + 666) & 0x10) != 0);
  if ( (unsigned int)v2 < 0x10 )
    return *((unsigned int *)this + v2 + 706);
  else
    return 0LL;
}
