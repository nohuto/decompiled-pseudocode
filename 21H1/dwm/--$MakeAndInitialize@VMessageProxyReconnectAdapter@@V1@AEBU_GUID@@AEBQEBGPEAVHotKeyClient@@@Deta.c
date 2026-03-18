/*
 * XREFs of ??$MakeAndInitialize@VMessageProxyReconnectAdapter@@V1@AEBU_GUID@@AEBQEBGPEAVHotKeyClient@@@Details@WRL@Microsoft@@YAJPEAPEAVMessageProxyReconnectAdapter@@AEBU_GUID@@AEBQEBG$$QEAPEAVHotKeyClient@@@Z @ 0x14000A468
 * Callers:
 *     ?RuntimeClassInitialize@HotKeyClient@@QEAAJPEAUIHotKeyClientOwner@@_N@Z @ 0x14000B7A4 (-RuntimeClassInitialize@HotKeyClient@@QEAAJPEAUIHotKeyClientOwner@@_N@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140003980 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140004B00 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x14000AC7C (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0MessageProxyReconnectAdapter@@QEAA@XZ @ 0x14000C200 (--0MessageProxyReconnectAdapter@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyReconnectAdapterOwner@@@Z @ 0x14000C9F0 (-RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyRecon.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<MessageProxyReconnectAdapter,MessageProxyReconnectAdapter,_GUID const &,unsigned short const * const &,HotKeyClient *>(
        MessageProxyReconnectAdapter **a1,
        const struct _GUID *a2,
        const unsigned __int16 **a3,
        _QWORD *a4)
{
  MessageProxyReconnectAdapter *v8; // rax
  int v9; // edi
  MessageProxyReconnectAdapter *v10; // rbx
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  *a1 = 0LL;
  v8 = (MessageProxyReconnectAdapter *)operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12[0] = v8;
  if ( v8 )
  {
    v12[1] = v8;
    v10 = MessageProxyReconnectAdapter::MessageProxyReconnectAdapter(v8);
    v12[0] = v10;
    v9 = MessageProxyReconnectAdapter::RuntimeClassInitialize(
           v10,
           a2,
           *a3,
           (struct IMessageProxyReconnectAdapterOwner *)((*a4 + 16LL) & -(__int64)(*a4 != 0LL)));
    if ( v9 >= 0 )
    {
      if ( v10 )
        (*(void (__fastcall **)(MessageProxyReconnectAdapter *))(*(_QWORD *)v10 + 8LL))(v10);
      *a1 = v10;
      v9 = 0;
    }
    Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(v12);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v9;
}
