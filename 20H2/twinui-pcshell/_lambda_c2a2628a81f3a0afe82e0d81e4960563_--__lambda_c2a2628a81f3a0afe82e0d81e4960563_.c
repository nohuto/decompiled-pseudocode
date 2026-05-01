/*
 * XREFs of _lambda_c2a2628a81f3a0afe82e0d81e4960563_::__lambda_c2a2628a81f3a0afe82e0d81e4960563_ @ 0x1803AD4F0
 * Callers:
 *     ??$CallControllerAsync@UISwitchItemController@@UISwitchItem@@UIVirtualDesktopItem@@@AsyncControllerHelpers@@YAXAEAV?$ComPtr@UISwitchItemController@@@WRL@Microsoft@@P8ISwitchItemController@@EAAXPEAUISwitchItem@@PEAUIVirtualDesktopItem@@@ZV?$ComPtr@UISwitchItem@@@23@V?$ComPtr@UIVirtualDesktopItem@@@23@@Z @ 0x1803AD1E0 (--$CallControllerAsync@UISwitchItemController@@UISwitchItem@@UIVirtualDesktopItem@@@AsyncControl.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c2a2628a81f3a0afe82e0d81e4960563___::_scalar_deleting_destructor_ @ 0x1803AD580 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c2a2628a81f3a0afe82e0d81e4960563___--_scala.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall lambda_c2a2628a81f3a0afe82e0d81e4960563_::__lambda_c2a2628a81f3a0afe82e0d81e4960563_(__int64 *a1)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 3);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 2);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 1);
}
