/*
 * XREFs of ?GetTouchpadRect@BamoVirtualTouchpadControllerProxy@@UEAAAEBUtagRECT@@XZ @ 0x1800F0540
 * Callers:
 *     ?OnIsActiveChanged@VirtualTouchpadControllerProxy@@MEAAJXZ @ 0x1800F0570 (-OnIsActiveChanged@VirtualTouchpadControllerProxy@@MEAAJXZ.c)
 *     ?OnTouchpadRectChanged@VirtualTouchpadControllerProxy@@MEAAJXZ @ 0x1800F06D0 (-OnTouchpadRectChanged@VirtualTouchpadControllerProxy@@MEAAJXZ.c)
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x18003EF48 (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

const struct tagRECT *__fastcall BamoVirtualTouchpadControllerProxy::GetTouchpadRect(
        BamoVirtualTouchpadControllerProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 32LL));
  return (const struct tagRECT *)((char *)this + 44);
}
