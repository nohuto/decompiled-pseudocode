/*
 * XREFs of KeIntSteerIsSteeringEnabled @ 0x1402D3FEC
 * Callers:
 *     ExpQueryInterruptSteeringInformation @ 0x1407CF5A4 (ExpQueryInterruptSteeringInformation.c)
 * Callees:
 *     <none>
 */

char KeIntSteerIsSteeringEnabled()
{
  return KiIntSteerEnabled;
}
