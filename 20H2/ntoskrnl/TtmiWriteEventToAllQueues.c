/*
 * XREFs of TtmiWriteEventToAllQueues @ 0x140901DC8
 * Callers:
 *     TtmpPublishDeviceEvent @ 0x1408FF7C0 (TtmpPublishDeviceEvent.c)
 *     TtmpWriteDisplayStateChangedEvent @ 0x140900CC8 (TtmpWriteDisplayStateChangedEvent.c)
 *     TtmpWriteDisplayRequiredPowerRequestUpdatedEvent @ 0x140902E38 (TtmpWriteDisplayRequiredPowerRequestUpdatedEvent.c)
 * Callees:
 *     TtmiLogError @ 0x140905314 (TtmiLogError.c)
 *     TtmiCloseEventQueue @ 0x140907BDC (TtmiCloseEventQueue.c)
 *     TtmiWriteEventToSingleQueue @ 0x140907F4C (TtmiWriteEventToSingleQueue.c)
 */

void __fastcall TtmiWriteEventToAllQueues(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  _QWORD *v4; // rbx
  _QWORD *v5; // rsi
  int v6; // eax

  v2 = (_QWORD *)(a1 + 80);
  v4 = *(_QWORD **)(a1 + 80);
  while ( v4 != v2 )
  {
    v5 = v4;
    v4 = (_QWORD *)*v4;
    v6 = TtmiWriteEventToSingleQueue(v5, a2);
    if ( v6 < 0 )
    {
      TtmiLogError("TtmiWriteEventToAllQueues", 2198LL, (unsigned int)v6, 0xFFFFFFFFLL);
      TtmiCloseEventQueue(v5);
    }
  }
}
