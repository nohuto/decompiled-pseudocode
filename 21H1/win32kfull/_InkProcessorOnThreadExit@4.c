/*
 * XREFs of _InkProcessorOnThreadExit@4 @ 0x99B32
 * Callers:
 *     <none>
 * Callees:
 *     ?OnThreadExit@InkProcessor@@QAEXPBUtagTHREADINFO@@@Z @ 0x99B5E (-OnThreadExit@InkProcessor@@QAEXPBUtagTHREADINFO@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@@Z @ 0x14061B (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IP.c)
 */

void __stdcall InkProcessorOnThreadExit(struct tagTHREADINFO *a1)
{
  if ( InkProcessor::s_pInstance )
  {
    InkProcessor::OnThreadExit((InkProcessor *)InkProcessor::s_pInstance, a1);
  }
  else if ( (unsigned int)CallbackContext > 2 )
  {
    a1 = (struct tagTHREADINFO *)-1073741823;
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
      (int)&CallbackContext,
      (int)&unk_2558E4,
      (int)InkProcessor::s_pInstance,
      (int)InkProcessor::s_pInstance,
      (int)&a1);
  }
}
