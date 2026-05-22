/*
 * XREFs of ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoDragAreaClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x1800447B0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateType@BamoDragAreaClientProxyImpl@BamoImpl@@QEAAJPEAU_GUID@@@Z @ 0x1800F57F4 (-UpdateType@BamoDragAreaClientProxyImpl@BamoImpl@@QEAAJPEAU_GUID@@@Z.c)
 */

void __fastcall BamoImpl::BamoDragAreaClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        BamoImpl::BamoDragAreaClientProxyImpl *this,
        struct Microsoft::BamoImpl::BamoProxyImpl *a2)
{
  BamoImpl::BamoDragAreaClientProxyImpl::UpdateType(this, (struct _GUID *)a2 + 2);
  BamoImpl::BamoDragAreaClientProxyImpl::UpdateIsHitTestDisabled(this, *((_BYTE *)a2 + 48));
}
