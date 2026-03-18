/*
 * XREFs of KeIntSteerIsSteeringEnabled @ 0x140331D4C
 * Callers:
 *     ExpQueryInterruptSteeringInformation @ 0x1407CB2E4 (ExpQueryInterruptSteeringInformation.c)
 * Callees:
 *     <none>
 */

char KeIntSteerIsSteeringEnabled()
{
  return KiIntSteerEnabled;
}
