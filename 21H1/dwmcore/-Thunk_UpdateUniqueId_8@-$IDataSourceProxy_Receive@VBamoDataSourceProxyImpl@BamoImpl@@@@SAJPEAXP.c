/*
 * XREFs of ?Thunk_UpdateUniqueId_8@?$IDataSourceProxy_Receive@VBamoDataSourceProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180198500
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall IDataSourceProxy_Receive<BamoImpl::BamoDataSourceProxyImpl>::Thunk_UpdateUniqueId_8(
        BamoImpl::BamoDataSourceProxyImpl *a1,
        struct _LUID **a2)
{
  return BamoImpl::BamoDataSourceProxyImpl::UpdateUniqueId(a1, *a2);
}
