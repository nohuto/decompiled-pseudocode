/*
 * XREFs of ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoDataSourceProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x1801E0A50
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateUniqueId@BamoDataSourceProxyImpl@BamoImpl@@QEAAJ_NPEBU_LUID@@@Z @ 0x1801E0A8C (-UpdateUniqueId@BamoDataSourceProxyImpl@BamoImpl@@QEAAJ_NPEBU_LUID@@@Z.c)
 */

void __fastcall BamoImpl::BamoDataSourceProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        BamoImpl::BamoDataSourceProxyImpl *this,
        const struct _LUID *a2)
{
  BamoImpl::BamoDataSourceProxyImpl::UpdateUniqueId(this, 0, a2 + 4);
  BamoImpl::BamoDataSourceProxyImpl::UpdateRestrictToProcessId(this, 0LL, a2[5].LowPart);
}
