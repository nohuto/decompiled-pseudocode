/*
 * XREFs of ?ResumeVidMmWorkerThread@ADAPTER_RENDER@@AEAAXEE@Z @ 0x1C012BD58
 * Callers:
 *     ?ResumeScheduler@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C012BC78 (-ResumeScheduler@ADAPTER_RENDER@@QEAAXEE@Z.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C020B838 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 *     ?Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C02128F0 (-Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C0212D6C (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00115CC (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
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
