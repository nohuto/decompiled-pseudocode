/*
 * XREFs of WheaWmiInit @ 0x1405B7BAC
 * Callers:
 *     WheaInitialize @ 0x140A5B63C (WheaInitialize.c)
 * Callees:
 *     IoWMIRegistrationControl @ 0x14073D970 (IoWMIRegistrationControl.c)
 */

NTSTATUS WheaWmiInit()
{
  *(_QWORD *)&WheapDispatchPtr.Type = WheaWmiDispatch;
  return IoWMIRegistrationControl(&WheapDispatchPtr, 0x80000001);
}
