/*
 * XREFs of _lambda_b97f6338922ac33e763b003ae07478e0_::__lambda_b97f6338922ac33e763b003ae07478e0_ @ 0x180092C80
 * Callers:
 *     _lambda_8d958b4643e24e2ce219100e0108e65c_::operator() @ 0x180092D94 (_lambda_8d958b4643e24e2ce219100e0108e65c_--operator().c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2e6c0e67d25ef7981bec7826e7d1a764___::_scalar_deleting_destructor_ @ 0x180093180 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2e6c0e67d25ef7981bec7826e7d1a764___--_scala.c)
 *     _CAppViewManager::Switch_::_1_::dtor$2 @ 0x18016F7EE (_CAppViewManager--Switch_--_1_--dtor$2.c)
 *     _TabletModePositionerManager::NotifyAppLayoutChanged_::_1_::dtor$2 @ 0x1803F1F43 (_TabletModePositionerManager--NotifyAppLayoutChanged_--_1_--dtor$2.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall lambda_b97f6338922ac33e763b003ae07478e0_::__lambda_b97f6338922ac33e763b003ae07478e0_(__int64 *a1)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 1);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1);
}
