/*
 * XREFs of ?Thunk_SetQuaternionValue_32@?$IDataSourceProxy_Receive@VBamoDataSourceProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801957F0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetQuaternionValue@BamoDataSourceProxyImpl@BamoImpl@@QEAAJIMMMM@Z @ 0x180195248 (-SetQuaternionValue@BamoDataSourceProxyImpl@BamoImpl@@QEAAJIMMMM@Z.c)
 */

__int64 __fastcall IDataSourceProxy_Receive<BamoImpl::BamoDataSourceProxyImpl>::Thunk_SetQuaternionValue_32(
        BamoImpl::BamoDataSourceProxyImpl *a1,
        __int64 a2)
{
  return BamoImpl::BamoDataSourceProxyImpl::SetQuaternionValue(
           a1,
           **(_DWORD **)a2,
           **(float **)(a2 + 8),
           **(float **)(a2 + 16));
}
