/*
 * XREFs of ?UpdateStatsAndCustomPresentDuration@CompositionSurfaceObject@@QEAAX_KAEBUDXGI_FRAME_STATISTICS@@IW4BufferFlipMode@@@Z @ 0x1C001BE4C
 * Callers:
 *     ?CompleteIndendentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z @ 0x1C001BBF0 (-CompleteIndendentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000EDCC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0010BD4 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?UpdateStatsAndCustomPresentDuration@CCompositionSurface@@IEAAJ_KAEBUDXGI_FRAME_STATISTICS@@IW4BufferFlipMode@@@Z @ 0x1C001BEBC (-UpdateStatsAndCustomPresentDuration@CCompositionSurface@@IEAAJ_KAEBUDXGI_FRAME_STATISTICS@@IW4B.c)
 */

void __fastcall CompositionSurfaceObject::UpdateStatsAndCustomPresentDuration(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  if ( (int)CPushLock::AcquireLockExclusive((CPushLock *)(a1 + 48)) >= 0 )
  {
    CCompositionSurface::UpdateStatsAndCustomPresentDuration(a1 + 40, a2, a3, a4);
    CPushLock::ReleaseLock((CPushLock *)(a1 + 48));
  }
}
