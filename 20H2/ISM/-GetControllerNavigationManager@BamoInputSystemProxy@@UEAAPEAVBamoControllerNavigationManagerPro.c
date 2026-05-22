/*
 * XREFs of ?GetControllerNavigationManager@BamoInputSystemProxy@@UEAAPEAVBamoControllerNavigationManagerProxy@@XZ @ 0x1800E5EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x18003EEB8 (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

struct BamoControllerNavigationManagerProxy *__fastcall BamoInputSystemProxy::GetControllerNavigationManager(
        BamoInputSystemProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 32LL));
  return (struct BamoControllerNavigationManagerProxy *)*((_QWORD *)this + 6);
}
