/*
 * XREFs of ?InkProcessorOnInkDeviceClosed@@YGXPAURawInputManagerDeviceObject@@@Z @ 0x1837CF
 * Callers:
 *     _EditionDevicePnpNotification@4 @ 0xEAF6A (_EditionDevicePnpNotification@4.c)
 *     _Win32kRIMDevChangeCallback@4 @ 0x1403EC (_Win32kRIMDevChangeCallback@4.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@@Z @ 0x14061B (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IP.c)
 *     ?OnDeviceClosed@InkProcessor@@QAEXPAURawInputManagerDeviceObject@@@Z @ 0x1ABFB7 (-OnDeviceClosed@InkProcessor@@QAEXPAURawInputManagerDeviceObject@@@Z.c)
 */

void __thiscall InkProcessorOnInkDeviceClosed(struct RawInputManagerDeviceObject *this)
{
  int v1; // [esp+4h] [ebp-4h] BYREF

  if ( InkProcessor::s_pInstance )
  {
    InkProcessor::OnDeviceClosed((InkProcessor *)InkProcessor::s_pInstance, this);
  }
  else if ( (unsigned int)CallbackContext > 2 )
  {
    v1 = -1073741823;
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
      (int)&CallbackContext,
      byte_2558E4,
      (int)InkProcessor::s_pInstance,
      (int)InkProcessor::s_pInstance,
      (int)&v1);
  }
}
