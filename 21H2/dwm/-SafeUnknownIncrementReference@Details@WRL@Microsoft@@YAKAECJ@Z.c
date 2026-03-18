/*
 * XREFs of ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x140004924
 * Callers:
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIHotKeyClientOwner@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1400067F0 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIHotKeyCl.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIHotKeyClient@@UIRemoteHotKeyCallBack@@UIMessageProxyReconnectAdapterOwner@@UIUnknown@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x14000AC6C (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_14000AC6C.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMessageProxyReconnectAdapter@@UIMessageProxyListener@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x14000C5D8 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMessageP.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::SafeUnknownIncrementReference(
        Microsoft::WRL::Details *this,
        volatile int *a2)
{
  signed __int32 v2; // r8d
  __int64 result; // rax

  v2 = *(_DWORD *)this;
  if ( *(_DWORD *)this == 0x7FFFFFFF )
    return 0x7FFFFFFFLL;
  do
  {
    if ( v2 == _InterlockedCompareExchange((volatile signed __int32 *)this, v2 + 1, v2) )
      break;
    v2 = *(_DWORD *)this;
  }
  while ( *(_DWORD *)this != 0x7FFFFFFF );
  result = (unsigned int)(v2 + 1);
  if ( v2 == 0x7FFFFFFF )
    return 0x7FFFFFFFLL;
  return result;
}
