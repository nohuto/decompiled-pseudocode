/*
 * XREFs of ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoDropTargetClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180043990
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateId@BamoDropTargetClientProxyImpl@BamoImpl@@QEAAJ_K@Z @ 0x1800EE4C0 (-UpdateId@BamoDropTargetClientProxyImpl@BamoImpl@@QEAAJ_K@Z.c)
 */

void __fastcall BamoImpl::BamoDropTargetClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        BamoImpl::BamoDropTargetClientProxyImpl *this,
        struct Microsoft::BamoImpl::BamoProxyImpl *a2)
{
  BamoImpl::BamoDropTargetClientProxyImpl::UpdateId(this, *((_QWORD *)a2 + 4));
  BamoImpl::BamoDropTargetClientProxyImpl::UpdateType(this, (struct _GUID *)((char *)a2 + 40));
}
