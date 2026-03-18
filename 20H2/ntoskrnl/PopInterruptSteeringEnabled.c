/*
 * XREFs of PopInterruptSteeringEnabled @ 0x1403C13C8
 * Callers:
 *     PpmCheckReInit @ 0x1407B5B84 (PpmCheckReInit.c)
 * Callees:
 *     <none>
 */

bool PopInterruptSteeringEnabled()
{
  bool result; // al

  result = 0;
  if ( !PpmIntSteerDisabled )
    return KiIntSteerEnabled != 0;
  return result;
}
