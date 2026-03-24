/*
 * XREFs of ?FreeProxyAtShutdown@BaseBamoConnectionImpl@BamoImpl@Microsoft@@CAJPEAXIIPEBX@Z @ 0x1801662C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Disconnect@BamoProxyImpl@BamoImpl@Microsoft@@QEAAX_N@Z @ 0x180166104 (-Disconnect@BamoProxyImpl@BamoImpl@Microsoft@@QEAAX_N@Z.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::FreeProxyAtShutdown(
        void *a1,
        __int64 a2,
        __int64 a3,
        Microsoft::BamoImpl::BamoProxyImpl *a4)
{
  if ( a4 )
    Microsoft::BamoImpl::BamoProxyImpl::Disconnect(a4, 1);
  return 0LL;
}
