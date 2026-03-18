/*
 * XREFs of ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x14000AC7C
 * Callers:
 *     ??$MakeAndInitialize@VMessageProxyReconnectAdapter@@V1@AEBU_GUID@@AEBQEBGPEAVHotKeyClient@@@Details@WRL@Microsoft@@YAJPEAPEAVMessageProxyReconnectAdapter@@AEBU_GUID@@AEBQEBG$$QEAPEAVHotKeyClient@@@Z @ 0x14000A468 (--$MakeAndInitialize@VMessageProxyReconnectAdapter@@V1@AEBU_GUID@@AEBQEBGPEAVHotKeyClient@@@Deta.c)
 *     ??1?$ComPtr@UIRemoteHotKeyProcessor@@@WRL@Microsoft@@QEAA@XZ @ 0x14000A954 (--1-$ComPtr@UIRemoteHotKeyProcessor@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1HotKeyClient@@UEAA@XZ @ 0x14000A984 (--1HotKeyClient@@UEAA@XZ.c)
 *     ?OnDisconnected@HotKeyClient@@UEAAJPEAUIMessageProxy@@@Z @ 0x14000AE80 (-OnDisconnected@HotKeyClient@@UEAAJPEAUIMessageProxy@@@Z.c)
 *     ?OnHotKeyAcknowledged@HotKeyClient@@UEAAJXZ @ 0x14000AEF0 (-OnHotKeyAcknowledged@HotKeyClient@@UEAAJXZ.c)
 *     ?OnProxyCreated@HotKeyClient@@UEAAJPEAUIMessageProxy@@@Z @ 0x14000B010 (-OnProxyCreated@HotKeyClient@@UEAAJPEAUIMessageProxy@@@Z.c)
 *     ?RegisterHotKey@HotKeyClient@@UEAAJIII_N@Z @ 0x14000B1D0 (-RegisterHotKey@HotKeyClient@@UEAAJIII_N@Z.c)
 *     ?RuntimeClassInitialize@HotKeyClient@@QEAAJPEAUIHotKeyClientOwner@@_N@Z @ 0x14000B7A4 (-RuntimeClassInitialize@HotKeyClient@@QEAAJPEAUIHotKeyClientOwner@@_N@Z.c)
 *     ?UnregisterHotKey@HotKeyClient@@UEAAJII@Z @ 0x14000BC90 (-UnregisterHotKey@HotKeyClient@@UEAAJII@Z.c)
 *     ??_EMessageProxyReconnectAdapter@@UEAAPEAXI@Z @ 0x14000C2B0 (--_EMessageProxyReconnectAdapter@@UEAAPEAXI@Z.c)
 *     ?CreateRemoteProxy@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x14000C430 (-CreateRemoteProxy@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 *     ?OnDisconnected@MessageProxyReconnectAdapter@@UEAAJPEAUIMessageProxy@@@Z @ 0x14000C6C0 (-OnDisconnected@MessageProxyReconnectAdapter@@UEAAJPEAUIMessageProxy@@@Z.c)
 *     ?RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyReconnectAdapterOwner@@@Z @ 0x14000C9F0 (-RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyRecon.c)
 *     ?StartConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x14000CC08 (-StartConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 *     ?StopConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x14000CD10 (-StopConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140004B00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(__int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = 0LL;
  v3 = *a1;
  if ( v3 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return result;
}
