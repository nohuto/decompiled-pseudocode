/*
 * XREFs of ?GetEdgyControllerServer@BamoInputSystemProxy@@UEAAPEAVBamoEdgyControllerServerProxy@@XZ @ 0x1800E6530
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x18003EEE8 (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

struct BamoEdgyControllerServerProxy *__fastcall BamoInputSystemProxy::GetEdgyControllerServer(
        BamoInputSystemProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 32LL));
  return (struct BamoEdgyControllerServerProxy *)*((_QWORD *)this + 8);
}
