/*
 * XREFs of ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoDataSourceProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x1801985C0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateUniqueId@BamoDataSourceProxyImpl@BamoImpl@@QEAAJPEAU_LUID@@@Z @ 0x1801985F4 (-UpdateUniqueId@BamoDataSourceProxyImpl@BamoImpl@@QEAAJPEAU_LUID@@@Z.c)
 */

void __fastcall BamoImpl::BamoDataSourceProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        BamoImpl::BamoDataSourceProxyImpl *this,
        struct _LUID *a2)
{
  BamoImpl::BamoDataSourceProxyImpl::UpdateUniqueId(this, a2 + 4);
  BamoImpl::BamoDataSourceProxyImpl::UpdateRestrictToProcessId(this, a2[5].LowPart);
}
