/*
 * XREFs of ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoPenDeviceProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180043B40
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateHaptics@BamoPenDeviceProxyImpl@BamoImpl@@QEAAJI@Z @ 0x1800EE0B8 (-UpdateHaptics@BamoPenDeviceProxyImpl@BamoImpl@@QEAAJI@Z.c)
 *     ?UpdateUniqueId@BamoPenDeviceProxyImpl@BamoImpl@@QEAAJPEAU_GUID@@@Z @ 0x1800EFCB4 (-UpdateUniqueId@BamoPenDeviceProxyImpl@BamoImpl@@QEAAJPEAU_GUID@@@Z.c)
 */

void __fastcall BamoImpl::BamoPenDeviceProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        BamoImpl::BamoPenDeviceProxyImpl *this,
        struct _GUID *a2)
{
  __int64 v4; // rax

  BamoImpl::BamoPenDeviceProxyImpl::UpdateUniqueId(this, a2 + 2);
  v4 = *(_QWORD *)&a2[3].Data1;
  if ( v4 )
    BamoImpl::BamoPenDeviceProxyImpl::UpdateHaptics(this, *(_DWORD *)(v4 + 40));
}
