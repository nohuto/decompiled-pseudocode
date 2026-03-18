/*
 * XREFs of ?GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ @ 0x1800D2250
 * Callers:
 *     ?PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAIPEAVBaseBamoPeerImpl@23@@Z @ 0x1800D21B0 (-PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAIPEAVBaseBamoPeerImpl@23@@Z.c)
 *     ?PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x18017E948 (-PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x1801801A0 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?UpdateNumberOfReadersRemoteCache@BamoDataProviderProxyImpl@BamoImpl@@AEAAXXZ @ 0x18018161C (-UpdateNumberOfReadersRemoteCache@BamoDataProviderProxyImpl@BamoImpl@@AEAAXXZ.c)
 * Callees:
 *     ?GetBufferingMessageCallHost@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBufferingMessageCallHost@23@XZ @ 0x180165DC4 (-GetBufferingMessageCallHost@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBufferingMessage.c)
 */

struct IMessageCallSendHost *__fastcall Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost(
        Microsoft::BamoImpl::BaseBamoPeerImpl *this)
{
  __int64 v1; // rbx
  struct Microsoft::BamoImpl::BufferingMessageCallHost *v3; // rax

  v1 = 0LL;
  if ( !*((_BYTE *)this + 44) )
    return *(struct IMessageCallSendHost **)(*(_QWORD *)(*((_QWORD *)this + 3) + 32LL) + 64LL);
  v3 = Microsoft::BamoImpl::BaseBamoConnectionImpl::GetBufferingMessageCallHost(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*((_QWORD *)this + 3) + 32LL));
  if ( v3 )
    return (struct Microsoft::BamoImpl::BufferingMessageCallHost *)((char *)v3 + 16);
  return (struct IMessageCallSendHost *)v1;
}
