/*
 * XREFs of _InkProcessorIsInkDevice@16 @ 0x183963
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@@Z @ 0x14061B (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IP.c)
 *     ?IsEnabled@InkProcessor@@QBE_NXZ @ 0x1ABE03 (-IsEnabled@InkProcessor@@QBE_NXZ.c)
 *     ?IsInkDevice@InkDeviceParser@@SG_NGGPBG0@Z @ 0x1AC683 (-IsInkDevice@InkDeviceParser@@SG_NGGPBG0@Z.c)
 */

BOOL __stdcall InkProcessorIsInkDevice(int a1, int a2, unsigned __int16 a3, int a4)
{
  int v4; // esi
  const unsigned __int16 *v6; // [esp+0h] [ebp-4h]
  const unsigned __int16 *savedregs; // [esp+4h] [ebp+0h]

  v4 = 0;
  if ( InkProcessor::s_pInstance )
  {
    if ( InkProcessor::IsEnabled((InkProcessor *)InkProcessor::s_pInstance) )
      return InkDeviceParser::IsInkDevice(a3, a4, v6, savedregs);
  }
  else if ( (unsigned int)CallbackContext > 2 )
  {
    a4 = -1073741823;
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
      (int)&CallbackContext,
      byte_2558E4,
      (int)InkProcessor::s_pInstance,
      (int)InkProcessor::s_pInstance,
      (int)&a4);
  }
  return v4;
}
