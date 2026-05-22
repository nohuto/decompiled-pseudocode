/*
 * XREFs of ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180019010
 * Callers:
 *     ?UnregisterActivationController@ForegroundManager@@UEAAXPEAVActivationControllerBamoProxy@@@Z @ 0x180005110 (-UnregisterActivationController@ForegroundManager@@UEAAXPEAVActivationControllerBamoProxy@@@Z.c)
 *     ?OnFocusRequest@ContextualProcessorManager@@QEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x180018CF0 (-OnFocusRequest@ContextualProcessorManager@@QEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUIInputBuf.c)
 *     ?Provider@InputTraceLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x180018FF0 (-Provider@InputTraceLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?OnMitMessageReceived@CursorNotificationProcessor@@CAJPEAXPEBXH@Z @ 0x18001AD90 (-OnMitMessageReceived@CursorNotificationProcessor@@CAJPEAXPEBXH@Z.c)
 *     ?SetPosition@DWMCursor@@UEAAJJJ@Z @ 0x180021600 (-SetPosition@DWMCursor@@UEAAJJJ@Z.c)
 *     ?CheckAndUpdateDpiScale@DWMCursor@@AEAAJ_N@Z @ 0x1800228CC (-CheckAndUpdateDpiScale@DWMCursor@@AEAAJ_N@Z.c)
 *     ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x180029DB0 (--1PerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?ReceiveCursorPos@ISM@InputTraceLogging@@SAX_KAEBUtagPOINT@@@Z @ 0x18003AD3C (-ReceiveCursorPos@ISM@InputTraceLogging@@SAX_KAEBUtagPOINT@@@Z.c)
 *     ?OnInputReport@InputStateManager@@UEAAJPEAUInputInfo@@@Z @ 0x1800877A0 (-OnInputReport@InputStateManager@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?DropKeyboardInput@ISM@InputTraceLogging@@SAXPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z @ 0x1800B01E0 (-DropKeyboardInput@ISM@InputTraceLogging@@SAXPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z.c)
 *     ?DropMouseInput@ISM@InputTraceLogging@@SAXAEBU_InputMessageNotification@@@Z @ 0x1800B025C (-DropMouseInput@ISM@InputTraceLogging@@SAXAEBU_InputMessageNotification@@@Z.c)
 *     ?DropMouseInput@ISM@InputTraceLogging@@SAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z @ 0x1800B02D0 (-DropMouseInput@ISM@InputTraceLogging@@SAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z.c)
 *     ?ProcessKeyboardInputMessage@Win32kInterop@@AEAAXPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z @ 0x1800B1A28 (-ProcessKeyboardInputMessage@Win32kInterop@@AEAAXPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z.c)
 *     ?ProcessMouseInputMessage@Win32kInterop@@AEAAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z @ 0x1800B1BE4 (-ProcessMouseInputMessage@Win32kInterop@@AEAAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z.c)
 *     ?ReceiveInterceptMessage@ISM@InputTraceLogging@@SAXPEBURawMouseInputInfo@@@Z @ 0x1800B20A4 (-ReceiveInterceptMessage@ISM@InputTraceLogging@@SAXPEBURawMouseInputInfo@@@Z.c)
 *     ?ReceiveMouseInput@ISM@InputTraceLogging@@SAXAEBU_InputMessageNotification@@@Z @ 0x1800B2144 (-ReceiveMouseInput@ISM@InputTraceLogging@@SAXAEBU_InputMessageNotification@@@Z.c)
 *     ?ReceivePointerFrame@ISM@InputTraceLogging@@SAX_KAEBUtagTELEMETRY_POINTER_FRAME_TIMES@@KK@Z @ 0x1800B21B8 (-ReceivePointerFrame@ISM@InputTraceLogging@@SAX_KAEBUtagTELEMETRY_POINTER_FRAME_TIMES@@KK@Z.c)
 *     ?UpdateCursorOrientation@Cursor@InputTraceLogging@@SAX_KN@Z @ 0x1800B4608 (-UpdateCursorOrientation@Cursor@InputTraceLogging@@SAX_KN@Z.c)
 *     ?DeliverInput@ISM@InputTraceLogging@@SAXPEBUInputInfo@@@Z @ 0x1800B67E0 (-DeliverInput@ISM@InputTraceLogging@@SAXPEBUInputInfo@@@Z.c)
 *     ?ServerCreated@VirtualTouchpad@InputTraceLogging@@SAXPEBX@Z @ 0x1800F07B8 (-ServerCreated@VirtualTouchpad@InputTraceLogging@@SAXPEBX@Z.c)
 *     ?ServerDestroyed@VirtualTouchpad@InputTraceLogging@@SAXPEBX@Z @ 0x1800F0854 (-ServerDestroyed@VirtualTouchpad@InputTraceLogging@@SAXPEBX@Z.c)
 *     ?ServerIsActiveChanged@VirtualTouchpad@InputTraceLogging@@SAXPEBX_N@Z @ 0x1800F08F0 (-ServerIsActiveChanged@VirtualTouchpad@InputTraceLogging@@SAXPEBX_N@Z.c)
 *     ?ServerRectChanged@VirtualTouchpad@InputTraceLogging@@SAXPEBXAEBUtagRECT@@@Z @ 0x1800F09C4 (-ServerRectChanged@VirtualTouchpad@InputTraceLogging@@SAXPEBXAEBUtagRECT@@@Z.c)
 *     ?DeliverToInputService@Keyboard@InputTraceLogging@@SAXHK@Z @ 0x180101728 (-DeliverToInputService@Keyboard@InputTraceLogging@@SAXHK@Z.c)
 *     ?SetForegroundActivatableEntity@ForegroundManager@InputTraceLogging@@SAX_K@Z @ 0x180104BB0 (-SetForegroundActivatableEntity@ForegroundManager@InputTraceLogging@@SAX_K@Z.c)
 *     ?CreatePenEventsClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoPenEventsClientProxy@@@Z @ 0x1801328F0 (-CreatePenEventsClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoPenEventsClientProxy.c)
 *     ?OnPenEventsClientProxyDisconnected@PenEventsDispatcherPrincipal@@QEAAJPEAVBamoPenEventsClientProxy@@@Z @ 0x18013358C (-OnPenEventsClientProxyDisconnected@PenEventsDispatcherPrincipal@@QEAAJPEAVBamoPenEventsClientPr.c)
 *     ?OnPenEventsKernelMessage@PenEvents@InputTraceLogging@@SAXAEBU_MIT_PEN_EVENT_MESSAGE@@@Z @ 0x1801337C8 (-OnPenEventsKernelMessage@PenEvents@InputTraceLogging@@SAXAEBU_MIT_PEN_EVENT_MESSAGE@@@Z.c)
 *     ?SetButtonRoutingPolicy@PenEventsDispatcherPrincipal@@MEAAJPEAVBamoPenEventsDispatcherStub@@W4RoutingPolicy@Input@Devices@Internal@Windows@@@Z @ 0x180133F30 (-SetButtonRoutingPolicy@PenEventsDispatcherPrincipal@@MEAAJPEAVBamoPenEventsDispatcherStub@@W4Ro.c)
 *     ?SetDockRoutingPolicy@PenEventsDispatcherPrincipal@@MEAAJPEAVBamoPenEventsDispatcherStub@@W4RoutingPolicy@Input@Devices@Internal@Windows@@@Z @ 0x180134110 (-SetDockRoutingPolicy@PenEventsDispatcherPrincipal@@MEAAJPEAVBamoPenEventsDispatcherStub@@W4Rout.c)
 *     ?AddShapeToCursor@Cursor@InputTraceLogging@@SAXPEBX_K@Z @ 0x18013E868 (-AddShapeToCursor@Cursor@InputTraceLogging@@SAXPEBX_K@Z.c)
 *     ?CreateCursorForDevice@Cursor@InputTraceLogging@@SAX_KPEBX@Z @ 0x18013EAE4 (-CreateCursorForDevice@Cursor@InputTraceLogging@@SAX_KPEBX@Z.c)
 *     ?SetCursorImage@Cursor@InputTraceLogging@@SAX_K_N@Z @ 0x180140244 (-SetCursorImage@Cursor@InputTraceLogging@@SAX_K_N@Z.c)
 *     ?OnHitTest@ContextualProcessing@InputTraceLogging@@SAXPEBUHitTestInfo@@PEBGW4ContextualProcessorState@@@Z @ 0x180149274 (-OnHitTest@ContextualProcessing@InputTraceLogging@@SAXPEBUHitTestInfo@@PEBGW4ContextualProcessor.c)
 *     ?OnInput@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@PEBGW4ContextualProcessorDecision@@PEBUIInputTarget@@J@Z @ 0x18014C9F0 (-OnInput@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@PEBGW4ContextualProcessorDeci.c)
 *     ?UpdateClientOwner@DWMCursor@@UEAAJXZ @ 0x18019CCF0 (-UpdateClientOwner@DWMCursor@@UEAAJXZ.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180037234 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18003BFDC (atexit.c)
 */

LPVOID __fastcall wil::details::static_lazy<InputTraceLogging>::get(__int64 a1, void (__cdecl *a2)())
{
  __int64 fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+40h] [rbp+18h] BYREF

  fPending = a1;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`InputTraceLogging::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &Context)
    && (_DWORD)fPending )
  {
    qword_180208618[0] = &RawInputProvidersContinuousTracing::`vftable';
    Context = qword_180208618;
    qword_180208630 = (struct _tlgProvider_t *)&`InputTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    wil::TraceLoggingProvider::Register(
      (wil::TraceLoggingProvider *)qword_180208618,
      qword_180208630,
      (void (*)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))InputTraceLogging::Callback);
    InitOnceComplete(&`InputTraceLogging::Instance'::`2'::wrapper, 0, qword_180208618);
  }
  return Context;
}
