/*
 * XREFs of ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoActivationControllerProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180046280
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateId@BamoActivationControllerProxyImpl@BamoImpl@@QEAAJ_K@Z @ 0x180104E14 (-UpdateId@BamoActivationControllerProxyImpl@BamoImpl@@QEAAJ_K@Z.c)
 *     ?UpdateLuid@BamoActivationControllerProxyImpl@BamoImpl@@QEAAJPEAU_LUID@@@Z @ 0x180104EB8 (-UpdateLuid@BamoActivationControllerProxyImpl@BamoImpl@@QEAAJPEAU_LUID@@@Z.c)
 */

void __fastcall BamoImpl::BamoActivationControllerProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        BamoImpl::BamoActivationControllerProxyImpl *this,
        struct Microsoft::BamoImpl::BamoProxyImpl *a2)
{
  BamoImpl::BamoActivationControllerProxyImpl::UpdateId(this, *((_QWORD *)a2 + 5));
  BamoImpl::BamoActivationControllerProxyImpl::UpdateLuid(this, (struct _LUID *)a2 + 6);
  BamoImpl::BamoActivationControllerProxyImpl::UpdateAutoForwardId(this, *((_QWORD *)a2 + 7));
}
