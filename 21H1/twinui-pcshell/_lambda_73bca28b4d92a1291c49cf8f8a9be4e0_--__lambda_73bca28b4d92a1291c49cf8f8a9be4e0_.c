/*
 * XREFs of _lambda_73bca28b4d92a1291c49cf8f8a9be4e0_::__lambda_73bca28b4d92a1291c49cf8f8a9be4e0_ @ 0x180092760
 * Callers:
 *     _lambda_b23abe9d39d62f1b1f2aa55395b19976_::operator() @ 0x180092A84 (_lambda_b23abe9d39d62f1b1f2aa55395b19976_--operator().c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4750d18d7a662ed65e9d2f2e69490731___::_scalar_deleting_destructor_ @ 0x180092C20 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_4750d18d7a662ed65e9d2f2e69490731___--_scala.c)
 *     _CAppViewManager::Switch_::_1_::dtor$2 @ 0x18014B46E (_CAppViewManager--Switch_--_1_--dtor$2.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall lambda_73bca28b4d92a1291c49cf8f8a9be4e0_::__lambda_73bca28b4d92a1291c49cf8f8a9be4e0_(__int64 *a1)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 1);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1);
}
