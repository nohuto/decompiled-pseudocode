/*
 * XREFs of WheaWmiInit @ 0x1405BBE2C
 * Callers:
 *     WheaInitialize @ 0x140A61A3C (WheaInitialize.c)
 * Callees:
 *     IoWMIRegistrationControl @ 0x14074E0D0 (IoWMIRegistrationControl.c)
 */

NTSTATUS WheaWmiInit()
{
  *(_QWORD *)&WheapDispatchPtr.Type = WheaWmiDispatch;
  return IoWMIRegistrationControl(&WheapDispatchPtr, 0x80000001);
}
