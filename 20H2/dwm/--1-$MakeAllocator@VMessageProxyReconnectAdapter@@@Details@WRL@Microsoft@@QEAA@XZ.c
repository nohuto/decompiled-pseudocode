/*
 * XREFs of ??1?$MakeAllocator@VMessageProxyReconnectAdapter@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x14000A960
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_MessageProxyReconnectAdapter_MessageProxyReconnectAdapter__GUID_const_&_unsigned_short_const___const_&_HotKeyClient____::_1_::dtor$0 @ 0x14000A537 (_Microsoft--WRL--Details--MakeAndInitialize_MessageProxyReconnectAdapter_MessageProxyReconnectAd.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1400031B8 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAllocator<MessageProxyReconnectAdapter>::~MakeAllocator<MessageProxyReconnectAdapter>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
