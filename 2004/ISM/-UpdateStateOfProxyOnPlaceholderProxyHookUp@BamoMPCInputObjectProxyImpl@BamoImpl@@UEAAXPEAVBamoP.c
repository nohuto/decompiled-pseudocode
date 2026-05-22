/*
 * XREFs of ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCInputObjectProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180043B50
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateEventSubscriptions@BamoMPCInputObjectProxyImpl@BamoImpl@@QEAAJI@Z @ 0x1800EE000 (-UpdateEventSubscriptions@BamoMPCInputObjectProxyImpl@BamoImpl@@QEAAJI@Z.c)
 */

void __fastcall BamoImpl::BamoMPCInputObjectProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        BamoImpl::BamoMPCInputObjectProxyImpl *this,
        struct Microsoft::BamoImpl::BamoProxyImpl *a2)
{
  BamoImpl::BamoMPCInputObjectProxyImpl::UpdateEventSubscriptions(this, *((_DWORD *)a2 + 8));
  BamoImpl::BamoMPCInputObjectProxyImpl::UpdateCalledGetDetectedSourcesAtTimestampRecently(this, *((_BYTE *)a2 + 36));
}
