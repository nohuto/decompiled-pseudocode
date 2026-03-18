/*
 * XREFs of ?SubmitPendedRequests@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0065E6C
 * Callers:
 *     ?Start@FxIoTarget@@UEAAJXZ @ 0x1C0065B40 (-Start@FxIoTarget@@UEAAJXZ.c)
 *     ?Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z @ 0x1C0067030 (-Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z.c)
 * Callees:
 *     ?SubmitPendedRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x1C0065D18 (-SubmitPendedRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z.c)
 */

void __fastcall FxIoTarget::SubmitPendedRequests(FxIoTarget *this, _LIST_ENTRY *RequestListHead)
{
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *v5; // rax

  while ( 1 )
  {
    Flink = RequestListHead->Flink;
    if ( RequestListHead->Flink == RequestListHead )
      break;
    if ( Flink->Blink != RequestListHead || (v5 = Flink->Flink, Flink->Flink->Blink != Flink) )
      __fastfail(3u);
    RequestListHead->Flink = v5;
    v5->Blink = RequestListHead;
    FxIoTarget::SubmitPendedRequest(this, (FxRequestBase *)&Flink[-8].Blink);
  }
}
