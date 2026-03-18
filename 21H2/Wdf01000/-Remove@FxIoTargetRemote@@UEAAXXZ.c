/*
 * XREFs of ?Remove@FxIoTargetRemote@@UEAAXXZ @ 0x1C002C5E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z @ 0x1C002C5FC (-Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z.c)
 */

void __fastcall FxIoTargetRemote::Remove(FxIoTargetRemote *this)
{
  FxIoTargetRemote::Close(this, FxIoTargetRemoteCloseReasonDelete);
}
