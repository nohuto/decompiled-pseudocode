/*
 * XREFs of ??_ERawButtonProcessor@@UEAAPEAXI@Z @ 0x180181D10
 * Callers:
 *     ??_ERawButtonProcessor@@W7EAAPEAXI@Z @ 0x18004CEE0 (--_ERawButtonProcessor@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180001E00 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x180036B0C (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180037660 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1PrivateMessageSession@RawButtonProcessor@@QEAA@XZ @ 0x180181C64 (--1PrivateMessageSession@RawButtonProcessor@@QEAA@XZ.c)
 */

RawButtonProcessor *__fastcall RawButtonProcessor::`vector deleting destructor'(RawButtonProcessor *this, char a2)
{
  unsigned __int64 v4; // r8

  RawButtonProcessor::PrivateMessageSession::~PrivateMessageSession((RawButtonProcessor *)((char *)this + 328));
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (wil::details **)this + 4,
    0LL,
    v4);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 3);
  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0x158);
    else
      free(this);
  }
  return this;
}
