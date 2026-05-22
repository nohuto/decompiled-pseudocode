/*
 * XREFs of ?OnSpatialNavigationStarted@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAUISpatialNavigationStartedEventArgs@3456@@Z @ 0x180081570
 * Callers:
 *     <none>
 * Callees:
 *     ??$GestureRecognizer_GestureDetected@AEAY0O@$$CBG@ISMTracing@@SAXAEAY0O@$$CBG@Z @ 0x18007F8A8 (--$GestureRecognizer_GestureDetected@AEAY0O@$$CBG@ISMTracing@@SAXAEAY0O@$$CBG@Z.c)
 */

__int64 __fastcall MPCSpatialGestureRecognizerHandler::OnSpatialNavigationStarted(
        MPCSpatialGestureRecognizerHandler *this,
        struct Windows::UI::Input::Spatial::ISpatialGestureRecognizer *a2,
        struct Windows::UI::Input::Spatial::ISpatialNavigationStartedEventArgs *a3)
{
  __int64 v3; // rax

  v3 = *((_QWORD *)this + 13);
  if ( *((_DWORD *)this + 42) == 1 )
  {
    *(_DWORD *)(v3 + 656) = 5;
    ISMTracing::GestureRecognizer_GestureDetected<unsigned short const (&)[14]>(L"ScrollStarted");
  }
  else
  {
    *(_DWORD *)(v3 + 656) = 6;
    ISMTracing::GestureRecognizer_GestureDetected<unsigned short const (&)[14]>(L"ZoomStarted");
  }
  return 0LL;
}
