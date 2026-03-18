/*
 * XREFs of ??_EMessageProxyReconnectAdapter@@UEAAPEAXI@Z @ 0x14000C2B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1400031B8 (--3@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x14000AC7C (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 */

MessageProxyReconnectAdapter *__fastcall MessageProxyReconnectAdapter::`vector deleting destructor'(
        MessageProxyReconnectAdapter *this,
        char a2)
{
  WindowsDeleteString(*((HSTRING *)this + 11));
  *((_QWORD *)this + 11) = 0LL;
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 10);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 9);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 8);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 7);
  *((_DWORD *)this + 5) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
