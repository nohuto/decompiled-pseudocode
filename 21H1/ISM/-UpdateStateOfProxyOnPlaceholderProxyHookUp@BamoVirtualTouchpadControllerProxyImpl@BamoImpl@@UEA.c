/*
 * XREFs of ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoVirtualTouchpadControllerProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180044270
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateIsActive@BamoVirtualTouchpadControllerProxyImpl@BamoImpl@@QEAAJ_N@Z @ 0x1800F1000 (-UpdateIsActive@BamoVirtualTouchpadControllerProxyImpl@BamoImpl@@QEAAJ_N@Z.c)
 */

void __fastcall BamoImpl::BamoVirtualTouchpadControllerProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        BamoImpl::BamoVirtualTouchpadControllerProxyImpl *this,
        struct Microsoft::BamoImpl::BamoProxyImpl *a2)
{
  BamoImpl::BamoVirtualTouchpadControllerProxyImpl::UpdateIsActive(this, *((_BYTE *)a2 + 32));
  BamoImpl::BamoVirtualTouchpadControllerProxyImpl::UpdateTouchpadRect(this, (struct tagRECT *)((char *)a2 + 36));
}
