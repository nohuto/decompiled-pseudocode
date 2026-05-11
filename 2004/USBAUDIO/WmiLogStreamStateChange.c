/*
 * XREFs of WmiLogStreamStateChange @ 0x1C00035B4
 * Callers:
 *     PinSetDeviceState @ 0x1C0024950 (PinSetDeviceState.c)
 * Callees:
 *     WmiLogEvent @ 0x1C00034D8 (WmiLogEvent.c)
 */

NTSTATUS __fastcall WmiLogStreamStateChange(__int64 a1, char a2, int a3)
{
  __int128 v4; // [rsp+40h] [rbp-18h] BYREF

  v4 = ExBus_PinState_GUID;
  return WmiLogEvent(a1, a2 + 1, &v4, a1, a3, 0, 0);
}
