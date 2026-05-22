/*
 * XREFs of ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoActivationConfigurationInputObjectProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180043DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateActivatePolicy@BamoActivationConfigurationInputObjectProxyImpl@BamoImpl@@QEAAJI@Z @ 0x1800ED944 (-UpdateActivatePolicy@BamoActivationConfigurationInputObjectProxyImpl@BamoImpl@@QEAAJI@Z.c)
 */

void __fastcall BamoImpl::BamoActivationConfigurationInputObjectProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        BamoImpl::BamoActivationConfigurationInputObjectProxyImpl *this,
        struct Microsoft::BamoImpl::BamoProxyImpl *a2)
{
  BamoImpl::BamoActivationConfigurationInputObjectProxyImpl::UpdateActivatePolicy(this, *((_DWORD *)a2 + 8));
  BamoImpl::BamoActivationConfigurationInputObjectProxyImpl::UpdateEatPolicy(this, *((_DWORD *)a2 + 9));
}
