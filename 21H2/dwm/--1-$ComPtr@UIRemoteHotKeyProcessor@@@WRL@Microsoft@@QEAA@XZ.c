/*
 * XREFs of ??1?$ComPtr@UIRemoteHotKeyProcessor@@@WRL@Microsoft@@QEAA@XZ @ 0x14000A954
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_MessageProxyReconnectAdapter_MessageProxyReconnectAdapter__GUID_const_&_unsigned_short_const___const_&_HotKeyClient____::_1_::dtor$2 @ 0x14000A560 (_Microsoft--WRL--Details--MakeAndInitialize_MessageProxyReconnectAdapter_MessagePro_ea_14000A560.c)
 *     _HotKeyClient::RegisterHotKey_::_1_::dtor$0 @ 0x14000B382 (_HotKeyClient--RegisterHotKey_--_1_--dtor$0.c)
 *     _MessageProxyReconnectAdapter::CreateRemoteProxy_::_1_::dtor$0 @ 0x14000C55A (_MessageProxyReconnectAdapter--CreateRemoteProxy_--_1_--dtor$0.c)
 *     _MessageProxyReconnectAdapter::RuntimeClassInitialize_::_1_::dtor$0 @ 0x14000CBA0 (_MessageProxyReconnectAdapter--RuntimeClassInitialize_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<IRemoteHotKeyProcessor>::~ComPtr<IRemoteHotKeyProcessor>(__int64 a1)
{
  return Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(a1);
}
