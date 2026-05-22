/*
 * XREFs of ?Close@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAXXZ @ 0x180159DC0
 * Callers:
 *     ??1HolographicDriverHandleWrapper@Holographic@Internal@Windows@@UEAA@XZ @ 0x1801578B4 (--1HolographicDriverHandleWrapper@Holographic@Internal@Windows@@UEAA@XZ.c)
 *     ?PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJXZ @ 0x180162598 (-PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAA.c)
 * Callees:
 *     ?UnregisterCmNotif@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAX_N@Z @ 0x1801666E0 (-UnregisterCmNotif@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAX_N@Z.c)
 */

void __fastcall Windows::Internal::Holographic::HolographicDriverHandleWrapper::Close(
        Windows::Internal::Holographic::HolographicDriverHandleWrapper *this)
{
  Windows::Internal::Holographic::HolographicDriverHandleWrapper::UnregisterCmNotif(this, 0);
  Windows::Internal::Holographic::HolographicDriverHandleWrapper::CloseDriverHandle(this, 6u);
}
