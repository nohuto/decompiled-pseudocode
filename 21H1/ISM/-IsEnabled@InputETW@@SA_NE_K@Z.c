/*
 * XREFs of ?IsEnabled@InputETW@@SA_NE_K@Z @ 0x180028D04
 * Callers:
 *     ?ProcessDeviceArrival@Win32kInterop@InputETW@@SAXK@Z @ 0x180028C9C (-ProcessDeviceArrival@Win32kInterop@InputETW@@SAXK@Z.c)
 *     ?ProcessDeviceRemoval@Win32kInterop@InputETW@@SAXK@Z @ 0x1800B1518 (-ProcessDeviceRemoval@Win32kInterop@InputETW@@SAXK@Z.c)
 *     ?ReceivedCursorPosMessage@Win32kInterop@InputETW@@SAXK@Z @ 0x1800B280C (-ReceivedCursorPosMessage@Win32kInterop@InputETW@@SAXK@Z.c)
 *     ?ReceivedInputMessage@Win32kInterop@InputETW@@SAXK@Z @ 0x1800B28B0 (-ReceivedInputMessage@Win32kInterop@InputETW@@SAXK@Z.c)
 *     ?ReceivedInterceptMessage@Win32kInterop@InputETW@@SAXK@Z @ 0x1800B2954 (-ReceivedInterceptMessage@Win32kInterop@InputETW@@SAXK@Z.c)
 *     ?DragCancelled@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@@Z @ 0x1800F8F10 (-DragCancelled@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@@.c)
 *     ?DragEnded@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@@Z @ 0x1800F903C (-DragEnded@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@@Z.c)
 *     ?DragInProgress@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@@Z @ 0x1800F9168 (-DragInProgress@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@.c)
 *     ?DragStarted@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@@Z @ 0x1800F9294 (-DragStarted@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@@Z.c)
 *     ?DropTargetChanged@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@@Z @ 0x1800F93C0 (-DropTargetChanged@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Window.c)
 *     ?FeedPositionData@DragNDrop@InputETW@@SAX_K00UtagPOINT@@@Z @ 0x1800F9718 (-FeedPositionData@DragNDrop@InputETW@@SAX_K00UtagPOINT@@@Z.c)
 *     ?ManualDragCancelled@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@@Z @ 0x1800FA24C (-ManualDragCancelled@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Wind.c)
 *     ?ManualDragStarted@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@@Z @ 0x1800FA374 (-ManualDragStarted@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Window.c)
 *     ?StartAnimationCallBack@DragNDrop@InputETW@@SAX_K00@Z @ 0x1800FB520 (-StartAnimationCallBack@DragNDrop@InputETW@@SAX_K00@Z.c)
 *     ?FeedPositionData@Resize@InputETW@@SAX_K00UtagPOINT@@@Z @ 0x1800FE224 (-FeedPositionData@Resize@InputETW@@SAX_K00UtagPOINT@@@Z.c)
 *     ?ResizeCancelled@Resize@InputETW@@SAXKPEAUtagPOINT@@0I@Z @ 0x1800FEB1C (-ResizeCancelled@Resize@InputETW@@SAXKPEAUtagPOINT@@0I@Z.c)
 *     ?ResizeEnded@Resize@InputETW@@SAXKPEAUtagPOINT@@0I@Z @ 0x1800FEC00 (-ResizeEnded@Resize@InputETW@@SAXKPEAUtagPOINT@@0I@Z.c)
 *     ?ResizeInProgress@Resize@InputETW@@SAXKPEAUtagPOINT@@0I@Z @ 0x1800FECF0 (-ResizeInProgress@Resize@InputETW@@SAXKPEAUtagPOINT@@0I@Z.c)
 *     ?ResizeStarted@Resize@InputETW@@SAXKPEAUtagPOINT@@0I@Z @ 0x1800FEDE0 (-ResizeStarted@Resize@InputETW@@SAXKPEAUtagPOINT@@0I@Z.c)
 *     ?StartAnimationCallBack@Resize@InputETW@@SAX_K00@Z @ 0x1800FF1C0 (-StartAnimationCallBack@Resize@InputETW@@SAX_K00@Z.c)
 *     ?ContinueProcessing@SystemButtonEventController@InputETW@@SAX_KK_N1@Z @ 0x180102334 (-ContinueProcessing@SystemButtonEventController@InputETW@@SAX_KK_N1@Z.c)
 *     ?ClientStateChanged@ControllerNavigationManager@InputETW@@SAXKUtagRECT@@UtagPOINT@@@Z @ 0x18011CE34 (-ClientStateChanged@ControllerNavigationManager@InputETW@@SAXKUtagRECT@@UtagPOINT@@@Z.c)
 *     ?DisableNavigation@ControllerNavigationManager@@AEAAXXZ @ 0x18011CF2C (-DisableNavigation@ControllerNavigationManager@@AEAAXXZ.c)
 *     ?NavigationEnabled@ControllerNavigationManager@InputETW@@SAXUtagRECT@@UtagPOINT@@@Z @ 0x18011D154 (-NavigationEnabled@ControllerNavigationManager@InputETW@@SAXUtagRECT@@UtagPOINT@@@Z.c)
 *     ?NavigationResumed@ControllerNavigationManager@InputETW@@SAXUtagRECT@@UtagPOINT@@@Z @ 0x18011D224 (-NavigationResumed@ControllerNavigationManager@InputETW@@SAXUtagRECT@@UtagPOINT@@@Z.c)
 *     ?PauseNavigation@ControllerNavigationManager@@AEAAXXZ @ 0x18011D574 (-PauseNavigation@ControllerNavigationManager@@AEAAXXZ.c)
 *     ?PointerCrossedClientBounds@ControllerNavigationManager@InputETW@@SAXKUtagPOINT@@@Z @ 0x18011D640 (-PointerCrossedClientBounds@ControllerNavigationManager@InputETW@@SAXKUtagPOINT@@@Z.c)
 *     ?PointerCrossedOverrideBounds@ControllerNavigationManager@InputETW@@SAXKUtagPOINT@@@Z @ 0x18011D6DC (-PointerCrossedOverrideBounds@ControllerNavigationManager@InputETW@@SAXKUtagPOINT@@@Z.c)
 *     ?RegisterClient@ControllerNavigationManager@InputETW@@SAXKUtagRECT@@UtagPOINT@@@Z @ 0x18011DB38 (-RegisterClient@ControllerNavigationManager@InputETW@@SAXKUtagRECT@@UtagPOINT@@@Z.c)
 *     ?ButtonEvent@RawButtonProcessor@InputETW@@SAXKKK@Z @ 0x1801822D8 (-ButtonEvent@RawButtonProcessor@InputETW@@SAXKKK@Z.c)
 *     ?ButtonEvent@SystemButtonProcessor@InputETW@@SAXK_N@Z @ 0x180182AFC (-ButtonEvent@SystemButtonProcessor@InputETW@@SAXK_N@Z.c)
 *     ?ButtonEvent@ButtonProcessor@InputETW@@SAXK_N@Z @ 0x180187D8C (-ButtonEvent@ButtonProcessor@InputETW@@SAXK_N@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z @ 0x1800295B0 (-get@-$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z.c)
 */

bool __fastcall InputETW::IsEnabled(__int64 a1)
{
  wil::TraceLoggingProvider *v1; // rax
  unsigned __int64 v2; // r8

  v1 = (wil::TraceLoggingProvider *)wil::details::static_lazy<InputETW>::get(
                                      a1,
                                      _lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_);
  return wil::TraceLoggingProvider::IsEnabled_(v1, 1u, v2);
}
