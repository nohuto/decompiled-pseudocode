/*
 * XREFs of ?TimerCallback@CWorkFifo@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1801099E0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x18000457C (-SetEvent@details@wil@@YAXPEAX@Z.c)
 */

void __fastcall CWorkFifo::TimerCallback(PTP_CALLBACK_INSTANCE Instance, PVOID Context, PTP_TIMER Timer)
{
  *((_BYTE *)Context + 137) = 0;
  if ( !*((_BYTE *)Context + 136) )
  {
    if ( *((_QWORD *)Context + 16) )
      SubmitThreadpoolWork(*((PTP_WORK *)Context + 2));
    else
      wil::details::SetEvent(*((wil::details **)Context + 28), Context);
  }
}
