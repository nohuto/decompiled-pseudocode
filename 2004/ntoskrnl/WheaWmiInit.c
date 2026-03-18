/*
 * XREFs of WheaWmiInit @ 0x1405B82CC
 * Callers:
 *     WheaInitialize @ 0x140A5A6DC (WheaInitialize.c)
 * Callees:
 *     IoWMIRegistrationControl @ 0x14073F4F0 (IoWMIRegistrationControl.c)
 */

NTSTATUS WheaWmiInit()
{
  *(_QWORD *)&WheapDispatchPtr.Type = WheaWmiDispatch;
  return IoWMIRegistrationControl(&WheapDispatchPtr, 0x80000001);
}
