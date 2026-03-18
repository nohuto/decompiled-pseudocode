/*
 * XREFs of ?DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z @ 0x1C010AFD0
 * Callers:
 *     ?CreateResourceHandleSafe@DXGPROCESS@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C0004468 (-CreateResourceHandleSafe@DXGPROCESS@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 *     ?PopDirectFlipAllocationFromList@DXGDEVICE@@AEAAPEAVDXGALLOCATION@@IPEAIPEAE@Z @ 0x1C014B17C (-PopDirectFlipAllocationFromList@DXGDEVICE@@AEAAPEAVDXGALLOCATION@@IPEAIPEAE@Z.c)
 *     DxgkAcquireHandleDataCB @ 0x1C014E270 (DxgkAcquireHandleDataCB.c)
 *     ?UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C016E86C (-UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DxgkReferenceDxgResource(struct _EX_RUNDOWN_REF *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax

  if ( !ExAcquireRundownProtection(a1 + 9) )
  {
    v4 = WdLogNewEntry5_WdCriticalError(v3, v2);
    *(_QWORD *)(v4 + 24) = 275LL;
    *(_QWORD *)(v4 + 32) = 38LL;
    *(_QWORD *)(v4 + 40) = a1;
    *(_OWORD *)(v4 + 48) = 0LL;
    WdLogEvent5_WdCriticalError(v4);
  }
}
