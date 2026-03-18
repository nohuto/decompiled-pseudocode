/*
 * XREFs of ?_CleanupPipesRequests@FxUsbDevice@@KAXPEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1C007E1A0
 * Callers:
 *     ?CleanupInterfacePipesAndDelete@FxUsbDevice@@IEAAXPEAVFxUsbInterface@@@Z @ 0x1C007C124 (-CleanupInterfacePipesAndDelete@FxUsbDevice@@IEAAXPEAVFxUsbInterface@@@Z.c)
 *     ?PipesGotoRemoveState@FxUsbDevice@@IEAAXE@Z @ 0x1C007D260 (-PipesGotoRemoveState@FxUsbDevice@@IEAAXE@Z.c)
 * Callees:
 *     ?_CancelSentRequests@FxIoTarget@@KAXPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1C002CF10 (-_CancelSentRequests@FxIoTarget@@KAXPEAU_SINGLE_LIST_ENTRY@@@Z.c)
 *     ?RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C00742EC (-RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z.c)
 */

void __fastcall FxUsbDevice::_CleanupPipesRequests(
        _LIST_ENTRY *PendHead,
        _SINGLE_LIST_ENTRY *SentHead,
        unsigned __int8 a3)
{
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *v6; // rax
  FxRequestBase *p_Blink; // rdx
  FxIoTarget *m_Target; // rcx

  while ( 1 )
  {
    Flink = PendHead->Flink;
    if ( PendHead->Flink == PendHead )
      break;
    if ( Flink->Blink != PendHead || (v6 = Flink->Flink, Flink->Flink->Blink != Flink) )
      __fastfail(3u);
    PendHead->Flink = v6;
    v6->Blink = PendHead;
    Flink->Blink = Flink;
    Flink->Flink = Flink;
    p_Blink = (FxRequestBase *)&Flink[-8].Blink;
    m_Target = p_Blink->m_Target;
    p_Blink->m_Irp.m_Irp->IoStatus.Status = -1071644154;
    p_Blink->m_Irp.m_Irp->IoStatus.Information = 0LL;
    FxIoTarget::RequestCompletionRoutine(m_Target, p_Blink, a3);
  }
  FxIoTarget::_CancelSentRequests(SentHead);
}
