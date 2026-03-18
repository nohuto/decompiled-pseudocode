/*
 * XREFs of ?OnDisconnected@DataSourceProxy@@MEAAJXZ @ 0x180180020
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveSourceEntry@DataProviderProxy@@QEAAJPEAVBamoDataSourceProxy@@@Z @ 0x1801814A8 (-RemoveSourceEntry@DataProviderProxy@@QEAAJPEAVBamoDataSourceProxy@@@Z.c)
 */

__int64 __fastcall DataSourceProxy::OnDisconnected(DataProviderProxy **this)
{
  if ( this[24] )
    DataProviderProxy::RemoveSourceEntry(this[24], (struct BamoDataSourceProxy *)this);
  return 0LL;
}
