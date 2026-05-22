/*
 * XREFs of ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoDragSourceClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180043F60
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateId@BamoDragSourceClientProxyImpl@BamoImpl@@QEAAJ_K@Z @ 0x1800EE8DC (-UpdateId@BamoDragSourceClientProxyImpl@BamoImpl@@QEAAJ_K@Z.c)
 *     ?UpdateType@BamoDragSourceClientProxyImpl@BamoImpl@@QEAAJPEAU_GUID@@@Z @ 0x1800EFE44 (-UpdateType@BamoDragSourceClientProxyImpl@BamoImpl@@QEAAJPEAU_GUID@@@Z.c)
 */

void __fastcall BamoImpl::BamoDragSourceClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        BamoImpl::BamoDragSourceClientProxyImpl *this,
        struct Microsoft::BamoImpl::BamoProxyImpl *a2)
{
  BamoImpl::BamoDragSourceClientProxyImpl::UpdateType(this, (struct _GUID *)a2 + 2);
  BamoImpl::BamoDragSourceClientProxyImpl::UpdateId(this, *((_QWORD *)a2 + 6));
  BamoImpl::BamoDragSourceClientProxyImpl::UpdateHitTestConfiguration(this, *((unsigned int *)a2 + 14));
}
