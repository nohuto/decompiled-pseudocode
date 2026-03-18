/*
 * XREFs of KeIntSteerIsSteeringEnabled @ 0x140360F4C
 * Callers:
 *     ExpQueryInterruptSteeringInformation @ 0x1407BCA54 (ExpQueryInterruptSteeringInformation.c)
 * Callees:
 *     <none>
 */

char KeIntSteerIsSteeringEnabled()
{
  return KiIntSteerEnabled;
}
