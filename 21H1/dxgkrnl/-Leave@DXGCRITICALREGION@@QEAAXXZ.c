/*
 * XREFs of ?Leave@DXGCRITICALREGION@@QEAAXXZ @ 0x1C0021DD0
 * Callers:
 *     ??1DXGCRITICALREGION@@QEAA@XZ @ 0x1C0035164 (--1DXGCRITICALREGION@@QEAA@XZ.c)
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C016DC78 (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?PrepareToReset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C020A3D8 (-PrepareToReset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?PresentDisplayOnlyRecoveryWorker@DXGADAPTER@@SAXPEAX@Z @ 0x1C020A620 (-PresentDisplayOnlyRecoveryWorker@DXGADAPTER@@SAXPEAX@Z.c)
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C020B0C0 (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0211650 (-Destroy@ADAPTER_RENDER@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGCRITICALREGION::Leave(DXGCRITICALREGION *this, __int64 a2)
{
  __int64 v3; // rax

  if ( !*((_BYTE *)this + 1) )
  {
    v3 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v3 + 24) = 875LL;
    WdLogEvent5_WdAssertion(v3);
  }
  *((_BYTE *)this + 1) = 0;
  KeLeaveCriticalRegion();
}
