/*
 * XREFs of ?IncrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x1C000D37C
 * Callers:
 *     ?AddMapping@REMOTEVSYNCMAPPING@@QEAAJPEAUREMOTE_VYSNC_MAPPING@1@@Z @ 0x1C004E4E0 (-AddMapping@REMOTEVSYNCMAPPING@@QEAAJPEAUREMOTE_VYSNC_MAPPING@1@@Z.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C0148508 (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C014A790 (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C0211B58 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGADAPTER::IncrementVSyncWaiter(DXGADAPTER *this, int a2)
{
  __int64 v2; // r8

  v2 = a2 & (unsigned int)-((*((_DWORD *)this + 642) & 0x10) != 0);
  if ( (unsigned int)v2 < 0x10 )
    _InterlockedIncrement((volatile signed __int32 *)this + v2 + 682);
}
