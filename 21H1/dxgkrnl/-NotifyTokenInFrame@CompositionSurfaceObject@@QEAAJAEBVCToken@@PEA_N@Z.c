/*
 * XREFs of ?NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N@Z @ 0x1C001C388
 * Callers:
 *     ?InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NW4TokenState@CTokenBase@@@Z @ 0x1C00064CC (-InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NW4TokenState@.c)
 *     ?CanReleaseAnalogToken@CFlipToken@@UEAAJIPEA_N@Z @ 0x1C0062D90 (-CanReleaseAnalogToken@CFlipToken@@UEAAJIPEA_N@Z.c)
 *     ?NotifySurfaceOfSkippedToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0063560 (-NotifySurfaceOfSkippedToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?InFrame@CFlipContentToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z @ 0x1C006DE40 (-InFrame@CFlipContentToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z.c)
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0004688 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0004704 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?NotifyTokenInFrame@CCompositionSurface@@IEAAJAEBVCToken@@PEA_N@Z @ 0x1C001C3FC (-NotifyTokenInFrame@CCompositionSurface@@IEAAJAEBVCToken@@PEA_N@Z.c)
 */

__int64 __fastcall CompositionSurfaceObject::NotifyTokenInFrame(
        CompositionSurfaceObject *this,
        const struct CToken *a2,
        bool *a3)
{
  int v6; // ebx

  *a3 = 0;
  v6 = CPushLock::AcquireLockExclusive((CompositionSurfaceObject *)((char *)this + 48));
  if ( v6 >= 0 )
  {
    v6 = CCompositionSurface::NotifyTokenInFrame((CompositionSurfaceObject *)((char *)this + 40), a2, a3);
    CPushLock::ReleaseLock((CompositionSurfaceObject *)((char *)this + 48));
  }
  return (unsigned int)v6;
}
