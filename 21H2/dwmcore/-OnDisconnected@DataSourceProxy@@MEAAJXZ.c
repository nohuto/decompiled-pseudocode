/*
 * XREFs of ?OnDisconnected@DataSourceProxy@@MEAAJXZ @ 0x1801BCAD0
 * Callers:
 *     <none>
 * Callees:
 *     ?QueueForDeferredDestruction@DataProviderProxy@@QEAAJPEAVBamoDataSourceProxy@@@Z @ 0x1801BE3CC (-QueueForDeferredDestruction@DataProviderProxy@@QEAAJPEAVBamoDataSourceProxy@@@Z.c)
 */

__int64 __fastcall DataSourceProxy::OnDisconnected(DataProviderProxy **this)
{
  if ( this[24] )
    DataProviderProxy::QueueForDeferredDestruction(this[24], (struct BamoDataSourceProxy *)this);
  return 0LL;
}
