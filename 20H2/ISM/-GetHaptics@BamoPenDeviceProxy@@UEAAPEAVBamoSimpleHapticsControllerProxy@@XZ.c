/*
 * XREFs of ?GetHaptics@BamoPenDeviceProxy@@UEAAPEAVBamoSimpleHapticsControllerProxy@@XZ @ 0x1800E5FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x18003EEB8 (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

struct BamoSimpleHapticsControllerProxy *__fastcall BamoPenDeviceProxy::GetHaptics(BamoPenDeviceProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 32LL));
  return (struct BamoSimpleHapticsControllerProxy *)*((_QWORD *)this + 7);
}
