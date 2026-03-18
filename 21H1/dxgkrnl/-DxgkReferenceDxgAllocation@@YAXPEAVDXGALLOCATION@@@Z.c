/*
 * XREFs of ?DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1C0104248
 * Callers:
 *     ?CreateAllocationObjects@DXGDEVICE@@QEAAJIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@0@Z @ 0x1C0103F30 (-CreateAllocationObjects@DXGDEVICE@@QEAAJIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@0@Z.c)
 *     ?ValidateDestroyAllocation@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEBIIPEAPEAVDXGALLOCATION@@PEAPEAVDXGRESOURCE@@@Z @ 0x1C010BEA0 (-ValidateDestroyAllocation@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEBIIPEAPEAVDXGALLOCATION@@PEAPEA.c)
 *     ?PopDirectFlipAllocationFromList@DXGDEVICE@@AEAAPEAVDXGALLOCATION@@IPEAIPEAE@Z @ 0x1C0140DCC (-PopDirectFlipAllocationFromList@DXGDEVICE@@AEAAPEAVDXGALLOCATION@@IPEAIPEAE@Z.c)
 *     ?UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C015EE0C (-UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?CheckPrimaryContent@VIDPNSOURCEINFO@@QEAAJXZ @ 0x1C02B50CC (-CheckPrimaryContent@VIDPNSOURCEINFO@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DxgkReferenceDxgAllocation(struct _EX_RUNDOWN_REF *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax

  if ( !ExAcquireRundownProtection(a1 + 11) )
  {
    v4 = WdLogNewEntry5_WdCriticalError(v3, v2);
    *(_QWORD *)(v4 + 24) = 275LL;
    *(_QWORD *)(v4 + 32) = 38LL;
    *(_QWORD *)(v4 + 40) = a1;
    *(_OWORD *)(v4 + 48) = 0LL;
    WdLogEvent5_WdCriticalError(v4);
  }
}
