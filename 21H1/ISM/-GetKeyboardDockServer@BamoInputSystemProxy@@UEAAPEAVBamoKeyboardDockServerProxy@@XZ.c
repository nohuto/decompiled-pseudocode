/*
 * XREFs of ?GetKeyboardDockServer@BamoInputSystemProxy@@UEAAPEAVBamoKeyboardDockServerProxy@@XZ @ 0x1800E6820
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x18003EEE8 (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

struct BamoKeyboardDockServerProxy *__fastcall BamoInputSystemProxy::GetKeyboardDockServer(BamoInputSystemProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 32LL));
  return (struct BamoKeyboardDockServerProxy *)*((_QWORD *)this + 13);
}
