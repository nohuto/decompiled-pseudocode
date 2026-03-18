/*
 * XREFs of ?InkProcessorOnInkDeviceAttached@@YGJPAURawInputManagerDeviceObject@@@Z @ 0x183775
 * Callers:
 *     _EditionDevicePnpNotification@4 @ 0xEAF6A (_EditionDevicePnpNotification@4.c)
 *     _Win32kRIMDevChangeCallback@4 @ 0x1403EC (_Win32kRIMDevChangeCallback@4.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@@Z @ 0x14061B (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IP.c)
 *     ?OnDeviceAttached@InkProcessor@@QAEJPAURawInputManagerDeviceObject@@@Z @ 0x1ABE31 (-OnDeviceAttached@InkProcessor@@QAEJPAURawInputManagerDeviceObject@@@Z.c)
 */

int __thiscall InkProcessorOnInkDeviceAttached(struct RawInputManagerDeviceObject *this)
{
  struct tagPOINTER_INFO **v2; // ecx
  int v3; // esi
  int v5; // [esp+4h] [ebp-4h] BYREF

  v2 = InkProcessor::s_pInstance;
  if ( InkProcessor::s_pInstance )
  {
    v3 = InkProcessor::OnDeviceAttached((InkProcessor *)InkProcessor::s_pInstance, this);
    if ( v3 < 0 && (unsigned int)CallbackContext > 2 )
      goto LABEL_6;
  }
  else
  {
    v3 = -1073741823;
    if ( (unsigned int)CallbackContext > 2 )
    {
LABEL_6:
      v5 = v3;
      _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        (int)&CallbackContext,
        byte_2558E4,
        (int)v2,
        (int)v2,
        (int)&v5);
    }
  }
  return v3;
}
