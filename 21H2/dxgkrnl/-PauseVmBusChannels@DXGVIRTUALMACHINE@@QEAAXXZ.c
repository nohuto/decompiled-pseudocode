/*
 * XREFs of ?PauseVmBusChannels@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C0336CD0
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0186C8C (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?ResetVirtualMachine@DXGVIRTUALMACHINE@@QEAAXE@Z @ 0x1C0337008 (-ResetVirtualMachine@DXGVIRTUALMACHINE@@QEAAXE@Z.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EE00 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveMapping@HOSTVMMONITORMAPPING@@QEAAJPEAX_N@Z @ 0x1C00594B4 (-RemoveMapping@HOSTVMMONITORMAPPING@@QEAAJPEAX_N@Z.c)
 */

void __fastcall DXGVIRTUALMACHINE::PauseVmBusChannels(DXGVIRTUALMACHINE *this)
{
  char *v1; // rdi
  struct DXGGLOBAL *Global; // rax
  char *v4; // rsi
  char *i; // rbx

  v1 = (char *)this + 64;
  DXGPUSHLOCK::AcquireExclusive((DXGVIRTUALMACHINE *)((char *)this + 64));
  if ( *((_QWORD *)this + 20) )
    ((void (*)(void))qword_1C0131C48)();
  Global = DXGGLOBAL_GetGlobal();
  HOSTVMMONITORMAPPING::RemoveMapping((struct DXGGLOBAL *)((char *)Global + 304920), (char *)this + 160);
  v4 = (char *)this + 40;
  for ( i = (char *)*((_QWORD *)this + 5); i != v4; i = *(char **)i )
  {
    if ( i[16] && *((_QWORD *)i + 5) )
      ((void (*)(void))qword_1C0131C48)();
  }
  *((_QWORD *)v1 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v1, 0LL);
  KeLeaveCriticalRegion();
}
