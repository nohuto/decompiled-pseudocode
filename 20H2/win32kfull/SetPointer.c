/*
 * XREFs of SetPointer @ 0x1C002B0A0
 * Callers:
 *     UserResetPointer @ 0x1C002A260 (UserResetPointer.c)
 *     SetMouseTrails @ 0x1C002AC88 (SetMouseTrails.c)
 *     zzzEnableDwmPointerSupport @ 0x1C002AEDC (zzzEnableDwmPointerSupport.c)
 *     xxxSwitchDesktop @ 0x1C002BDDC (xxxSwitchDesktop.c)
 *     xxxSystemParametersInfoWorker @ 0x1C002F978 (xxxSystemParametersInfoWorker.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C00BCC58 (xxxMakeWindowForegroundWithState.c)
 *     xxxRemoteReconnect @ 0x1C0156B10 (xxxRemoteReconnect.c)
 *     xxxUserResetDisplayDevice @ 0x1C01583D0 (xxxUserResetDisplayDevice.c)
 *     ChangeComposableCursor @ 0x1C01D3BE8 (ChangeComposableCursor.c)
 *     RemoteShadowCleanup @ 0x1C0226050 (RemoteShadowCleanup.c)
 *     RemoteShadowStart @ 0x1C0226220 (RemoteShadowStart.c)
 * Callees:
 *     ?SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0x1C002B0C0 (-SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 */

__int64 __fastcall SetPointer(__int64 a1)
{
  LOBYTE(a1) = (_DWORD)a1 != 0;
  return SetPointerInternal(a1, 6LL);
}
