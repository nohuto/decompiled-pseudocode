/*
 * XREFs of ?OnSpatialNavigationUpdated@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAUISpatialNavigationUpdatedEventArgs@3456@@Z @ 0x1800815C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InjectScrollZoom@MPCSpatialGestureRecognizerHandler@@AEAAXPEAUISpatialNavigationUpdatedEventArgs@Spatial@Input@UI@Windows@@@Z @ 0x180080FC8 (-InjectScrollZoom@MPCSpatialGestureRecognizerHandler@@AEAAXPEAUISpatialNavigationUpdatedEventArg.c)
 */

__int64 __fastcall MPCSpatialGestureRecognizerHandler::OnSpatialNavigationUpdated(
        MPCSpatialGestureRecognizerHandler *this,
        struct Windows::UI::Input::Spatial::ISpatialGestureRecognizer *a2,
        struct Windows::UI::Input::Spatial::ISpatialNavigationUpdatedEventArgs *a3)
{
  __int64 result; // rax

  MPCSpatialGestureRecognizerHandler::InjectScrollZoom(this, a3);
  result = 0LL;
  *((_BYTE *)this + 172) = 1;
  return result;
}
