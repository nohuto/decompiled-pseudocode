/*
 * XREFs of ?PauseVmBusChannels@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C028122C
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C011BAD8 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?ResetVirtualMachine@DXGVIRTUALMACHINE@@QEAAXE@Z @ 0x1C0281438 (-ResetVirtualMachine@DXGVIRTUALMACHINE@@QEAAXE@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000A788 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?RemoveMapping@REMOTEVSYNCMAPPING@@QEAAJPEAX_N@Z @ 0x1C004D858 (-RemoveMapping@REMOTEVSYNCMAPPING@@QEAAJPEAX_N@Z.c)
 *     ?PauseChannel@DXG_VMBUS_CHANNEL_BASE@@QEAAXXZ @ 0x1C02368C0 (-PauseChannel@DXG_VMBUS_CHANNEL_BASE@@QEAAXXZ.c)
 */

void __fastcall DXGVIRTUALMACHINE::PauseVmBusChannels(struct _KTHREAD **this)
{
  char *v1; // rsi
  struct _KTHREAD *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct DXGGLOBAL *Global; // rax
  struct _KTHREAD ***v7; // rdi
  struct _KTHREAD **i; // rbx

  v1 = (char *)(this + 8);
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(this + 8));
  DXG_VMBUS_CHANNEL_BASE::PauseChannel(this + 16);
  v3 = this[16];
  Global = DXGGLOBAL::GetGlobal(v5, v4);
  REMOTEVSYNCMAPPING::RemoveMapping((struct DXGGLOBAL *)((char *)Global + 304552), v3);
  v7 = (struct _KTHREAD ***)(this + 5);
  for ( i = *v7; i != (struct _KTHREAD **)v7; i = (struct _KTHREAD **)*i )
  {
    if ( *((_BYTE *)i + 16) )
      DXG_VMBUS_CHANNEL_BASE::PauseChannel(i + 4);
  }
  *((_QWORD *)v1 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v1, 0LL);
  KeLeaveCriticalRegion();
}
