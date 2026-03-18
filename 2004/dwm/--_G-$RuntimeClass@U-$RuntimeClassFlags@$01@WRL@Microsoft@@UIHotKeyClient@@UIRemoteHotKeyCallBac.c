/*
 * XREFs of ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIHotKeyClient@@UIRemoteHotKeyCallBack@@UIMessageProxyReconnectAdapterOwner@@UIUnknown@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x14000AAF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1400031B8 (--3@YAXPEAX_K@Z.c)
 */

_DWORD *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IHotKeyClient,IRemoteHotKeyCallBack,IMessageProxyReconnectAdapterOwner,IUnknown>::`scalar deleting destructor'(
        _DWORD *a1,
        char a2)
{
  a1[9] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
