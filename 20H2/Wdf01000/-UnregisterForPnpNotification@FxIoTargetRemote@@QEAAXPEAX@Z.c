/*
 * XREFs of ?UnregisterForPnpNotification@FxIoTargetRemote@@QEAAXPEAX@Z @ 0x1C0067A2C
 * Callers:
 *     ?Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z @ 0x1C00662CC (-Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z.c)
 *     ?Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z @ 0x1C0066750 (-Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxIoTargetRemote::UnregisterForPnpNotification(FxIoTargetRemote *this, void *Handle)
{
  if ( Handle )
  {
    if ( *(_QWORD *)&WPP_GLOBAL_WDF_Control.Queue.Wcb.NumberOfMapRegisters )
      (*(void (__fastcall **)(void *))&WPP_GLOBAL_WDF_Control.Queue.Wcb.NumberOfMapRegisters)(Handle);
    else
      IoUnregisterPlugPlayNotification(Handle);
  }
}
