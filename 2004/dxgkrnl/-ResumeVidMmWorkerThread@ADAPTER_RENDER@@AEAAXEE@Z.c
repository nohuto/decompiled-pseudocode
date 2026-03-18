/*
 * XREFs of ?ResumeVidMmWorkerThread@ADAPTER_RENDER@@AEAAXEE@Z @ 0x1C013A060
 * Callers:
 *     ?ResumeScheduler@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C0139F80 (-ResumeScheduler@ADAPTER_RENDER@@QEAAXEE@Z.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C020FA84 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 *     ?Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0216B40 (-Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C0216FBC (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000B3EC (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ADAPTER_RENDER::ResumeVidMmWorkerThread(PERESOURCE **this, char a2, char a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) && !a2 )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v8 + 24) = 2909LL;
    WdLogEvent5_WdAssertion(v8);
  }
  LOBYTE(v6) = a3;
  ((void (__fastcall *)(PERESOURCE *, __int64))this[80][1][9].SpinLock)(this[81], v6);
}
