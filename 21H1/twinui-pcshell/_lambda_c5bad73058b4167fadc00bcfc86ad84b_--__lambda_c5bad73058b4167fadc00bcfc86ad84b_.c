/*
 * XREFs of _lambda_c5bad73058b4167fadc00bcfc86ad84b_::__lambda_c5bad73058b4167fadc00bcfc86ad84b_ @ 0x18014313C
 * Callers:
 *     _CAppViewManager::PrepareToSwitch_::_1_::dtor$2 @ 0x180147A3C (_CAppViewManager--PrepareToSwitch_--_1_--dtor$2.c)
 *     _CAppViewManager::ShowView_::_1_::dtor$2 @ 0x1801481C9 (_CAppViewManager--ShowView_--_1_--dtor$2.c)
 *     _CAppViewManager::SwitchViews_::_1_::dtor$2 @ 0x18014B58C (_CAppViewManager--SwitchViews_--_1_--dtor$2.c)
 *     _CAppViewManager::_WindowProvidedWorker_::_1_::dtor$5 @ 0x18014EE15 (_CAppViewManager--_WindowProvidedWorker_--_1_--dtor$5.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall lambda_c5bad73058b4167fadc00bcfc86ad84b_::__lambda_c5bad73058b4167fadc00bcfc86ad84b_(__int64 *a1)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 4);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1);
}
