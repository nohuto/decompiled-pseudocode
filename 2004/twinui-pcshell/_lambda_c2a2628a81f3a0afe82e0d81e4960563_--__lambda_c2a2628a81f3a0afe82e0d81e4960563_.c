/*
 * XREFs of _lambda_c2a2628a81f3a0afe82e0d81e4960563_::__lambda_c2a2628a81f3a0afe82e0d81e4960563_ @ 0x1803ADDB0
 * Callers:
 *     ??$CallControllerAsync@UISwitchItemController@@UISwitchItem@@UIVirtualDesktopItem@@@AsyncControllerHelpers@@YAXAEAV?$ComPtr@UISwitchItemController@@@WRL@Microsoft@@P8ISwitchItemController@@EAAXPEAUISwitchItem@@PEAUIVirtualDesktopItem@@@ZV?$ComPtr@UISwitchItem@@@23@V?$ComPtr@UIVirtualDesktopItem@@@23@@Z @ 0x1803ADAA0 (--$CallControllerAsync@UISwitchItemController@@UISwitchItem@@UIVirtualDesktopItem@@@AsyncControl.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c2a2628a81f3a0afe82e0d81e4960563___::_scalar_deleting_destructor_ @ 0x1803ADE40 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c2a2628a81f3a0afe82e0d81e4960563___--_scala.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall lambda_c2a2628a81f3a0afe82e0d81e4960563_::__lambda_c2a2628a81f3a0afe82e0d81e4960563_(__int64 *a1)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 3);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 2);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 1);
}
