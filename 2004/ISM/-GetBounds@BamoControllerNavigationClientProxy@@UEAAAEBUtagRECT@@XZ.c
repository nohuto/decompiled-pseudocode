/*
 * XREFs of ?GetBounds@BamoControllerNavigationClientProxy@@UEAAAEBUtagRECT@@XZ @ 0x1800E5FA0
 * Callers:
 *     ?OnVertex1Changed@EdgyControllerClientProxy@@MEAAJXZ @ 0x1800FFCE0 (-OnVertex1Changed@EdgyControllerClientProxy@@MEAAJXZ.c)
 *     ?RegisterControllerClient@EdgyConnection@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x18017780C (-RegisterControllerClient@EdgyConnection@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x18003EF48 (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

const struct tagRECT *__fastcall BamoControllerNavigationClientProxy::GetBounds(
        BamoControllerNavigationClientProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 32LL));
  return (const struct tagRECT *)((char *)this + 48);
}
