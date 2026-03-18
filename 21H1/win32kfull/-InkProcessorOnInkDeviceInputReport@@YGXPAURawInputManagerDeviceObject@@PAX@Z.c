/*
 * XREFs of ?InkProcessorOnInkDeviceInputReport@@YGXPAURawInputManagerDeviceObject@@PAX@Z @ 0x183811
 * Callers:
 *     _EditionRimDeviceReadNotification@16 @ 0x1401E4 (_EditionRimDeviceReadNotification@16.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@@Z @ 0x14061B (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IP.c)
 *     ?ProcessInput@InkProcessor@@QAEXPAURawInputManagerDeviceObject@@PBX@Z @ 0x1AC3CE (-ProcessInput@InkProcessor@@QAEXPAURawInputManagerDeviceObject@@PBX@Z.c)
 */

void __cdecl InkProcessorOnInkDeviceInputReport()
{
  int v0; // [esp+4h] [ebp-4h] BYREF

  if ( InkProcessor::s_pInstance )
  {
    InkProcessor::ProcessInput(
      (InkProcessor *)InkProcessor::s_pInstance,
      (struct RawInputManagerDeviceObject *)InkProcessor::s_pInstance,
      InkProcessor::s_pInstance);
  }
  else if ( (unsigned int)CallbackContext > 2 )
  {
    v0 = -1073741823;
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
      (int)&CallbackContext,
      byte_2558E4,
      (int)InkProcessor::s_pInstance,
      (int)InkProcessor::s_pInstance,
      (int)&v0);
  }
}
