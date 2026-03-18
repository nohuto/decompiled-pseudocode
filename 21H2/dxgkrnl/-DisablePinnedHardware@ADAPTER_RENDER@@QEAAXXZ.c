/*
 * XREFs of ?DisablePinnedHardware@ADAPTER_RENDER@@QEAAXXZ @ 0x1C01EFC0C
 * Callers:
 *     ?ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z @ 0x1C01EF9A0 (-ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z.c)
 *     ?Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C02C452C (-Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00131F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DisablePinnedHardware@DXGDEVICE@@QEAAXXZ @ 0x1C01EFC88 (-DisablePinnedHardware@DXGDEVICE@@QEAAXXZ.c)
 */

void __fastcall ADAPTER_RENDER::DisablePinnedHardware(PERESOURCE **this)
{
  DXGDEVICE *i; // rbx
  DXGDEVICE **v3; // rdi
  DXGDEVICE *j; // rbx

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    WdLogSingleEntry1(1LL, 2007LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceExclusiveOwner()", 2007LL, 0LL, 0LL, 0LL, 0LL);
  }
  for ( i = (DXGDEVICE *)this[18]; i != (DXGDEVICE *)(this + 18) && i; i = *(DXGDEVICE **)i )
    DXGDEVICE::DisablePinnedHardware(i);
  v3 = (DXGDEVICE **)(this + 20);
  for ( j = *v3; j != (DXGDEVICE *)v3 && j; j = *(DXGDEVICE **)j )
    DXGDEVICE::DisablePinnedHardware(j);
}
