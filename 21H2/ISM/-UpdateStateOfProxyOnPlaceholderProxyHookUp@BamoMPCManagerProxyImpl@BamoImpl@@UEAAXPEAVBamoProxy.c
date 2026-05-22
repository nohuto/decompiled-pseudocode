/*
 * XREFs of ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCManagerProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180047570
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateMPCConstantManagerClient@BamoMPCManagerProxyImpl@BamoImpl@@QEAAJI@Z @ 0x18010C374 (-UpdateMPCConstantManagerClient@BamoMPCManagerProxyImpl@BamoImpl@@QEAAJI@Z.c)
 */

void __fastcall BamoImpl::BamoMPCManagerProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        BamoImpl::BamoMPCManagerProxyImpl *this,
        struct Microsoft::BamoImpl::BamoProxyImpl *a2)
{
  __int64 v2; // rax

  v2 = *((_QWORD *)a2 + 4);
  if ( v2 )
    BamoImpl::BamoMPCManagerProxyImpl::UpdateMPCConstantManagerClient(this, *(_DWORD *)(v2 + 40));
}
