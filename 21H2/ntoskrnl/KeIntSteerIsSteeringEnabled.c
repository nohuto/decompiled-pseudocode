/*
 * XREFs of KeIntSteerIsSteeringEnabled @ 0x14025E8F0
 * Callers:
 *     ExpQueryInterruptSteeringInformation @ 0x14085F318 (ExpQueryInterruptSteeringInformation.c)
 * Callees:
 *     <none>
 */

char KeIntSteerIsSteeringEnabled()
{
  return KiIntSteerEnabled;
}
