/*
 * XREFs of ?GetPanelId@BamoDockDeviceProxy@@UEAAPEBGXZ @ 0x1800E6270
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x18003F878 (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

const unsigned __int16 *__fastcall BamoDockDeviceProxy::GetPanelId(BamoDockDeviceProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 32LL));
  return (const unsigned __int16 *)*((_QWORD *)this + 5);
}
