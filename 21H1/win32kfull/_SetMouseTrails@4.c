/*
 * XREFs of _SetMouseTrails@4 @ 0xD8942
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x270DA (xxxSystemParametersInfoWorker.c)
 *     _xxxRemoteReconnect@4 @ 0xD18BC (_xxxRemoteReconnect@4.c)
 *     _xxxUpdatePerUserSystemParameters@8 @ 0xD78DE (_xxxUpdatePerUserSystemParameters@8.c)
 * Callees:
 *     __PostMessage@16 @ 0x6DA60 (__PostMessage@16.c)
 *     _FindTimer@20 @ 0x92EB2 (_FindTimer@20.c)
 *     ?SetPointerInternal@@YGX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0xB1576 (-SetPointerInternal@@YGX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 */

unsigned int __thiscall SetMouseTrails(char *this)
{
  unsigned int result; // eax

  SetPointerInternal(0, 6);
  WPP_MAIN_CB.DeviceQueue.Lock = this != 0 ? (KSPIN_LOCK)(this - 1) : 0;
  SetPointerInternal(1, 6);
  result = _gProtocolType;
  if ( !_gProtocolType )
  {
    result = WPP_MAIN_CB.DeviceQueue.Lock != 0;
    if ( result != (gtmridMouseTrails != 0) )
    {
      if ( WPP_MAIN_CB.DeviceQueue.Lock )
      {
        return _PostMessage(*(_DWORD *)(*(_DWORD *)(_gTermIO[2] + 252) + 12), 1025, 0, 0);
      }
      else
      {
        result = FindTimer(0, gtmridMouseTrails, 4u, 1, 0);
        gtmridMouseTrails = 0;
      }
    }
  }
  return result;
}
