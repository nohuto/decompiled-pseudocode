/*
 * XREFs of SetPointer @ 0x1C004D9F0
 * Callers:
 *     xxxMakeWindowForegroundWithState @ 0x1C0032AD4 (xxxMakeWindowForegroundWithState.c)
 *     xxxSystemParametersInfoWorker @ 0x1C003E1F8 (xxxSystemParametersInfoWorker.c)
 *     UserResetPointer @ 0x1C004BC80 (UserResetPointer.c)
 *     SetMouseTrails @ 0x1C004C4B8 (SetMouseTrails.c)
 *     zzzEnableDwmPointerSupport @ 0x1C004CCD0 (zzzEnableDwmPointerSupport.c)
 *     xxxSwitchDesktop @ 0x1C004CE38 (xxxSwitchDesktop.c)
 *     xxxRemoteReconnect @ 0x1C01541B0 (xxxRemoteReconnect.c)
 *     xxxUserResetDisplayDevice @ 0x1C0155A70 (xxxUserResetDisplayDevice.c)
 *     ChangeComposableCursor @ 0x1C01D49F8 (ChangeComposableCursor.c)
 *     RemoteShadowCleanup @ 0x1C0226EE0 (RemoteShadowCleanup.c)
 *     RemoteShadowStart @ 0x1C02270B0 (RemoteShadowStart.c)
 * Callees:
 *     ?SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0x1C004DA10 (-SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 */

__int64 __fastcall SetPointer(__int64 a1)
{
  LOBYTE(a1) = (_DWORD)a1 != 0;
  return SetPointerInternal(a1, 6LL);
}
