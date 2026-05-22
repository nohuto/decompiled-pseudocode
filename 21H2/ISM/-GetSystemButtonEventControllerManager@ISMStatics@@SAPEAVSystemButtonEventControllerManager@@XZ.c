/*
 * XREFs of ?GetSystemButtonEventControllerManager@ISMStatics@@SAPEAVSystemButtonEventControllerManager@@XZ @ 0x1800BC008
 * Callers:
 *     ?DeliverToNextTarget@SystemButtonEventController@@AEAAXAEBUSystemButtonEventInfo@@@Z @ 0x180102300 (-DeliverToNextTarget@SystemButtonEventController@@AEAAXAEBUSystemButtonEventInfo@@@Z.c)
 *     ?OnConnected@SystemButtonEventController@@MEAAJXZ @ 0x180102320 (-OnConnected@SystemButtonEventController@@MEAAJXZ.c)
 *     ?OnContinueProcessing@SystemButtonEventController@@MEAAJAEBUSystemButtonEventInfo@@@Z @ 0x1801023B0 (-OnContinueProcessing@SystemButtonEventController@@MEAAJAEBUSystemButtonEventInfo@@@Z.c)
 *     ?OnDisconnected@SystemButtonEventController@@MEAAJXZ @ 0x1801024B0 (-OnDisconnected@SystemButtonEventController@@MEAAJXZ.c)
 *     ?OnInput@SystemButtonProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180182AE0 (-OnInput@SystemButtonProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRes.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18003C7B8 (--2@YAPEAX_K@Z.c)
 */

struct SystemButtonEventControllerManager *ISMStatics::GetSystemButtonEventControllerManager(void)
{
  struct SystemButtonEventControllerManager *result; // rax

  result = ISMStatics::s_systemButtonControllerManager;
  if ( !ISMStatics::s_systemButtonControllerManager )
  {
    result = (struct SystemButtonEventControllerManager *)operator new(0x10uLL);
    ISMStatics::s_systemButtonControllerManager = result;
    *(_QWORD *)result = 0LL;
    *((_QWORD *)result + 1) = 0LL;
  }
  return result;
}
