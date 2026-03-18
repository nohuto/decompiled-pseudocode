/*
 * XREFs of TtmiWriteEnumerationEventsToQueue @ 0x1408FC104
 * Callers:
 *     TtmpDispatchCreateEventQueue @ 0x1408FD75C (TtmpDispatchCreateEventQueue.c)
 * Callees:
 *     memset @ 0x14040A280 (memset.c)
 *     TtmiPublishDeviceEnumerationEvents @ 0x1408F8F50 (TtmiPublishDeviceEnumerationEvents.c)
 *     TtmpPublishDisplayRequiredPowerRequestEvents @ 0x1408FCAE0 (TtmpPublishDisplayRequiredPowerRequestEvents.c)
 *     TtmiLogError @ 0x1408FF6C0 (TtmiLogError.c)
 *     TtmiWriteEventToSingleQueue @ 0x140902330 (TtmiWriteEventToSingleQueue.c)
 */

__int64 __fastcall TtmiWriteEnumerationEventsToQueue(__int64 a1, __int64 a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  _DWORD v7[136]; // [rsp+20h] [rbp-228h] BYREF

  v4 = TtmiPublishDeviceEnumerationEvents(a1, a2);
  if ( v4 < 0 )
  {
    v5 = 2118LL;
LABEL_3:
    TtmiLogError("TtmiWriteEnumerationEventsToQueue", v5, (unsigned int)v4, (unsigned int)v4);
    return (unsigned int)v4;
  }
  TtmpPublishDisplayRequiredPowerRequestEvents(a1, a2);
  memset(&v7[1], 0, 0x21CuLL);
  v7[0] = 1;
  v4 = TtmiWriteEventToSingleQueue(a2, v7);
  if ( v4 < 0 )
  {
    v5 = 2137LL;
    goto LABEL_3;
  }
  return 0LL;
}
