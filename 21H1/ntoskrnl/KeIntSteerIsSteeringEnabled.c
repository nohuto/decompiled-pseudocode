/*
 * XREFs of KeIntSteerIsSteeringEnabled @ 0x14032347C
 * Callers:
 *     ExpQueryInterruptSteeringInformation @ 0x1407B98E4 (ExpQueryInterruptSteeringInformation.c)
 * Callees:
 *     <none>
 */

char KeIntSteerIsSteeringEnabled()
{
  return KiIntSteerEnabled;
}
