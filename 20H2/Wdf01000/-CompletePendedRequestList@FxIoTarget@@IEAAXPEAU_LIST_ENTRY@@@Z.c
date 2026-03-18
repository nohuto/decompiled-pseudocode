/*
 * XREFs of ?CompletePendedRequestList@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0064000
 * Callers:
 *     ?Purge@FxIoTarget@@UEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@@Z @ 0x1C0064EC0 (-Purge@FxIoTarget@@UEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@@Z.c)
 *     ?Remove@FxIoTarget@@UEAAXXZ @ 0x1C0064FE0 (-Remove@FxIoTarget@@UEAAXXZ.c)
 *     ?Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z @ 0x1C00662CC (-Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z.c)
 *     ?Purge@FxUsbDevice@@MEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@@Z @ 0x1C0070320 (-Purge@FxUsbDevice@@MEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@@Z.c)
 * Callees:
 *     ?RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C006508C (-RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z.c)
 */

void __fastcall FxIoTarget::CompletePendedRequestList(FxIoTarget *this, _LIST_ENTRY *RequestListHead)
{
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *v5; // rax
  FxRequestBase *p_Blink; // rdx

  while ( 1 )
  {
    Flink = RequestListHead->Flink;
    if ( RequestListHead->Flink == RequestListHead )
      break;
    if ( Flink->Blink != RequestListHead || (v5 = Flink->Flink, Flink->Flink->Blink != Flink) )
      __fastfail(3u);
    RequestListHead->Flink = v5;
    v5->Blink = RequestListHead;
    Flink->Blink = Flink;
    Flink->Flink = Flink;
    p_Blink = (FxRequestBase *)&Flink[-8].Blink;
    p_Blink->m_Irp.m_Irp->IoStatus.Status = -1071644154;
    p_Blink->m_Irp.m_Irp->IoStatus.Information = 0LL;
    FxIoTarget::RequestCompletionRoutine(this, p_Blink);
  }
}
