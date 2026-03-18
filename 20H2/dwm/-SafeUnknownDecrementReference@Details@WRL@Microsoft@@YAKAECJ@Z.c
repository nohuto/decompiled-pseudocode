/*
 * XREFs of ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1400048F8
 * Callers:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIHotKeyClientOwner@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140006F20 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIHotKeyClientOwn.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIHotKeyClient@@UIRemoteHotKeyCallBack@@UIMessageProxyReconnectAdapterOwner@@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x14000B3A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIHo_ea_14000B3A0.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMessageProxyReconnectAdapter@@UIMessageProxyListener@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x14000C880 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMe_ea_14000C880.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::SafeUnknownDecrementReference(
        Microsoft::WRL::Details *this,
        volatile int *a2)
{
  signed __int32 v2; // r8d

  do
    v2 = *(_DWORD *)this;
  while ( *(_DWORD *)this != 0x7FFFFFFF
       && v2 != _InterlockedCompareExchange((volatile signed __int32 *)this, v2 - 1, v2) );
  return (unsigned int)(v2 - 1);
}
