/*
 * XREFs of ?GetResumePosition@BamoControllerNavigationOverrideProxy@@UEAAAEBUtagPOINT@@XZ @ 0x18011E790
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x18003F878 (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

const struct tagPOINT *__fastcall BamoControllerNavigationOverrideProxy::GetResumePosition(
        BamoControllerNavigationOverrideProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 32LL));
  return (const struct tagPOINT *)((char *)this + 64);
}
