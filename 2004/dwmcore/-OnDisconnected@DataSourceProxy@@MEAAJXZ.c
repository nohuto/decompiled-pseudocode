/*
 * XREFs of ?OnDisconnected@DataSourceProxy@@MEAAJXZ @ 0x180181C70
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveSourceEntry@DataProviderProxy@@QEAAJPEAVBamoDataSourceProxy@@@Z @ 0x1801830F8 (-RemoveSourceEntry@DataProviderProxy@@QEAAJPEAVBamoDataSourceProxy@@@Z.c)
 */

__int64 __fastcall DataSourceProxy::OnDisconnected(DataProviderProxy **this)
{
  if ( this[24] )
    DataProviderProxy::RemoveSourceEntry(this[24], (struct BamoDataSourceProxy *)this);
  return 0LL;
}
