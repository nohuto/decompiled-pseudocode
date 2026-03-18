/*
 * XREFs of PiQueryStopForReset @ 0x140945A10
 * Callers:
 *     PiProcessDeviceResetAction @ 0x140560174 (PiProcessDeviceResetAction.c)
 *     PiQueryStopForReset @ 0x140945A10 (PiQueryStopForReset.c)
 * Callees:
 *     PiQueryStopForReset @ 0x140945A10 (PiQueryStopForReset.c)
 *     PnpCancelStopDeviceNode @ 0x140959B60 (PnpCancelStopDeviceNode.c)
 *     PnpQueryStopDeviceNode @ 0x140959F9C (PnpQueryStopDeviceNode.c)
 */

__int64 __fastcall PiQueryStopForReset(ULONG_PTR a1, ULONG_PTR *a2, _DWORD *a3)
{
  _QWORD *i; // rbx
  int StopForReset; // esi

  for ( i = *(_QWORD **)(a1 + 8); i; i = (_QWORD *)*i )
  {
    StopForReset = PiQueryStopForReset(i, a2, a3);
    if ( StopForReset < 0 )
      return (unsigned int)StopForReset;
  }
  StopForReset = PnpQueryStopDeviceNode(a1, 0LL);
  if ( StopForReset < 0 )
  {
    PnpCancelStopDeviceNode(a1);
    *a2 = a1;
    *a3 = 1;
  }
  return (unsigned int)StopForReset;
}
