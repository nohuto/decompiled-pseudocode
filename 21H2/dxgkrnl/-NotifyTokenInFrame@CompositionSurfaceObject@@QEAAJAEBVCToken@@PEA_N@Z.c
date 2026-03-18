/*
 * XREFs of ?NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N@Z @ 0x1C0076FAC
 * Callers:
 *     ?CanReleaseAnalogToken@CFlipToken@@UEAAJIPEA_N@Z @ 0x1C0076BB0 (-CanReleaseAnalogToken@CFlipToken@@UEAAJIPEA_N@Z.c)
 *     ?NotifySurfaceOfSkippedToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0077584 (-NotifySurfaceOfSkippedToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?InFrame@CDisableScanoutToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z @ 0x1C0082A20 (-InFrame@CDisableScanoutToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z.c)
 *     ?InFrame@CFlipContentToken@@QEAAJPEA_N@Z @ 0x1C0082D24 (-InFrame@CFlipContentToken@@QEAAJPEA_N@Z.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00069FC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0007EB4 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?NotifyTokenInFrame@CCompositionSurface@@IEAAJAEBVCToken@@PEA_N@Z @ 0x1C0077FB4 (-NotifyTokenInFrame@CCompositionSurface@@IEAAJAEBVCToken@@PEA_N@Z.c)
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
