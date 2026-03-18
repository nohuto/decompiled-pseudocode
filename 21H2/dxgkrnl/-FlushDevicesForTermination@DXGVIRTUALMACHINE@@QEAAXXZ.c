/*
 * XREFs of ?FlushDevicesForTermination@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C0336108
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0186C8C (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?FlushDevicesForTermination@DXGPROCESSVM@@QEAAXXZ @ 0x1C0336000 (-FlushDevicesForTermination@DXGPROCESSVM@@QEAAXXZ.c)
 */

void __fastcall DXGVIRTUALMACHINE::FlushDevicesForTermination(DXGVIRTUALMACHINE *this)
{
  char *v1; // rsi
  _QWORD **v2; // rdi
  _QWORD *i; // rbx

  v1 = (char *)this + 128;
  v2 = (_QWORD **)((char *)this + 24);
  DXGPUSHLOCK::AcquireShared((DXGVIRTUALMACHINE *)((char *)this + 128));
  for ( i = *v2; i != v2; i = (_QWORD *)*i )
    DXGPROCESSVM::FlushDevicesForTermination((DXGPROCESSVM *)(i - 78));
  ExReleasePushLockSharedEx(v1, 0LL);
  KeLeaveCriticalRegion();
}
