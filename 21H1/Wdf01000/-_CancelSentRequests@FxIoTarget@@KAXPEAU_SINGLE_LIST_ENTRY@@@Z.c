/*
 * XREFs of ?_CancelSentRequests@FxIoTarget@@KAXPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1C0066260
 * Callers:
 *     ?CancelSentIo@FxIoTarget@@QEAAXXZ @ 0x1C00647EC (-CancelSentIo@FxIoTarget@@QEAAXXZ.c)
 *     ?Purge@FxIoTarget@@UEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@@Z @ 0x1C00657A0 (-Purge@FxIoTarget@@UEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@@Z.c)
 *     ?Remove@FxIoTarget@@UEAAXXZ @ 0x1C00658C0 (-Remove@FxIoTarget@@UEAAXXZ.c)
 *     ?Stop@FxIoTarget@@UEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@@Z @ 0x1C0065BE0 (-Stop@FxIoTarget@@UEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@@Z.c)
 *     ?Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z @ 0x1C0066BAC (-Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z.c)
 *     ?Purge@FxUsbDevice@@MEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@@Z @ 0x1C0070C00 (-Purge@FxUsbDevice@@MEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@@Z.c)
 *     ?Stop@FxUsbDevice@@MEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@@Z @ 0x1C0071860 (-Stop@FxUsbDevice@@MEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@@Z.c)
 *     ?_CleanupPipesRequests@FxUsbDevice@@KAXPEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1C00719E0 (-_CleanupPipesRequests@FxUsbDevice@@KAXPEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@@Z.c)
 * Callees:
 *     ?Cancel@FxRequestBase@@QEAAEXZ @ 0x1C00190D0 (-Cancel@FxRequestBase@@QEAAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxIoTarget::_CancelSentRequests(_SINGLE_LIST_ENTRY *RequestListHead)
{
  _SINGLE_LIST_ENTRY *i; // rdx
  _SINGLE_LIST_ENTRY *v3; // rbx

  for ( i = RequestListHead->Next; i; i = RequestListHead->Next )
  {
    v3 = i - 18;
    RequestListHead->Next = i->Next;
    i->Next = 0LL;
    FxRequestBase::Cancel((FxRequestBase *)&i[-18]);
    ((void (__fastcall *)(_SINGLE_LIST_ENTRY *, __int64, __int64, const char *))v3->Next[2].Next)(
      v3,
      1818455619LL,
      548LL,
      "minkernel\\wdf\\framework\\shared\\targets\\general\\fxiotarget.cpp");
  }
}
