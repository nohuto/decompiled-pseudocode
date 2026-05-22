/*
 * XREFs of ?GetPenEventsDispatcher@BamoInputSystemProxy@@UEAAPEAVBamoPenEventsDispatcherProxy@@XZ @ 0x1800E67D0
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x18003F878 (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

struct BamoPenEventsDispatcherProxy *__fastcall BamoInputSystemProxy::GetPenEventsDispatcher(
        BamoInputSystemProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 32LL));
  return (struct BamoPenEventsDispatcherProxy *)*((_QWORD *)this + 15);
}
