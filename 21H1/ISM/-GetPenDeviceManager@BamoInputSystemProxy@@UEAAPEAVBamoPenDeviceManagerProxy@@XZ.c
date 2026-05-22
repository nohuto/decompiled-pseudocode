/*
 * XREFs of ?GetPenDeviceManager@BamoInputSystemProxy@@UEAAPEAVBamoPenDeviceManagerProxy@@XZ @ 0x1800E6890
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x18003EEE8 (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

struct BamoPenDeviceManagerProxy *__fastcall BamoInputSystemProxy::GetPenDeviceManager(BamoInputSystemProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 32LL));
  return (struct BamoPenDeviceManagerProxy *)*((_QWORD *)this + 14);
}
