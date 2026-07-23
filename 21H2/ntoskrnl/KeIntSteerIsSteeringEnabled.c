/*
 * XREFs of KeIntSteerIsSteeringEnabled @ 0x14025225C
 * Callers:
 *     ExpQueryInterruptSteeringInformation @ 0x1407CF714 (ExpQueryInterruptSteeringInformation.c)
 * Callees:
 *     <none>
 */

char KeIntSteerIsSteeringEnabled()
{
  return KiIntSteerEnabled;
}
