/*
 * XREFs of ?RestoreFromPurgeSegments@ADAPTER_RENDER@@AEAAXXZ @ 0x1C01F2E10
 * Callers:
 *     ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C01B41A0 (-ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C02C452C (-Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00131F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ADAPTER_RENDER::RestoreFromPurgeSegments(PERESOURCE **this)
{
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    WdLogSingleEntry1(1LL, 2930LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceExclusiveOwner()", 2930LL, 0LL, 0LL, 0LL, 0LL);
  }
  ((void (__fastcall *)(PERESOURCE *))this[81][1]->SpinLock)(this[82]);
}
