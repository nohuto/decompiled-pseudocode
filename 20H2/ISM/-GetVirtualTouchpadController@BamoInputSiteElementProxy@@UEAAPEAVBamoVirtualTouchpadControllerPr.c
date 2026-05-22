/*
 * XREFs of ?GetVirtualTouchpadController@BamoInputSiteElementProxy@@UEAAPEAVBamoVirtualTouchpadControllerProxy@@XZ @ 0x1800F1E50
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x18003EEB8 (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

struct BamoVirtualTouchpadControllerProxy *__fastcall BamoInputSiteElementProxy::GetVirtualTouchpadController(
        BamoInputSiteElementProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 32LL));
  return (struct BamoVirtualTouchpadControllerProxy *)*((_QWORD *)this + 26);
}
