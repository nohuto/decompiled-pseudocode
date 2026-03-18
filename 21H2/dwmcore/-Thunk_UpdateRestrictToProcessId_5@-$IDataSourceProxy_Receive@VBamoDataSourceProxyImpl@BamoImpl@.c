/*
 * XREFs of ?Thunk_UpdateRestrictToProcessId_5@?$IDataSourceProxy_Receive@VBamoDataSourceProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801E08F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IDataSourceProxy_Receive<BamoImpl::BamoDataSourceProxyImpl>::Thunk_UpdateRestrictToProcessId_5(
        BamoImpl::BamoDataSourceProxyImpl *a1,
        unsigned int **a2)
{
  return BamoImpl::BamoDataSourceProxyImpl::UpdateRestrictToProcessId(a1, 1, **a2);
}
