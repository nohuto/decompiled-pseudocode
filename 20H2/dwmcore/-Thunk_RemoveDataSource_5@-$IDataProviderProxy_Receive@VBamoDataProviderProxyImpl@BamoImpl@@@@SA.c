/*
 * XREFs of ?Thunk_RemoveDataSource_5@?$IDataProviderProxy_Receive@VBamoDataProviderProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180193930
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IDataProviderProxy_Receive<BamoImpl::BamoDataProviderProxyImpl>::Thunk_RemoveDataSource_5(
        BamoImpl::BamoDataProviderProxyImpl *a1,
        unsigned int **a2)
{
  return BamoImpl::BamoDataProviderProxyImpl::RemoveDataSource(a1, **a2);
}
