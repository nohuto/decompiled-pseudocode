/*
 * XREFs of ?GetTestCommands@BamoInputSystemProxy@@UEAAPEAVBamoTestCommandsProxy@@XZ @ 0x1800E6A20
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x18003EEE8 (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

struct BamoTestCommandsProxy *__fastcall BamoInputSystemProxy::GetTestCommands(BamoInputSystemProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 32LL));
  return (struct BamoTestCommandsProxy *)*((_QWORD *)this + 18);
}
