/*
 * XREFs of ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEBGI@Z @ 0x14000CBB4
 * Callers:
 *     ?RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyReconnectAdapterOwner@@@Z @ 0x14000C9F0 (-RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyRecon.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall Microsoft::WRL::Wrappers::HString::Set(HSTRING *this, const unsigned __int16 *a2, UINT32 a3)
{
  WindowsDeleteString(*this);
  *this = 0LL;
  return WindowsCreateString(a2, a3, this);
}
