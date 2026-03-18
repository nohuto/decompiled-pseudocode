/*
 * XREFs of ?RestoreFromPurgeSegments@ADAPTER_RENDER@@AEAAXXZ @ 0x1C017356C
 * Callers:
 *     ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C011E094 (-ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0215990 (-Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000B3EC (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ADAPTER_RENDER::RestoreFromPurgeSegments(PERESOURCE **this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v4 = WdLogNewEntry5_WdAssertion(v3, v2);
    *(_QWORD *)(v4 + 24) = 2886LL;
    WdLogEvent5_WdAssertion(v4);
  }
  ((void (__fastcall *)(PERESOURCE *))this[80][1]->SpinLock)(this[81]);
}
