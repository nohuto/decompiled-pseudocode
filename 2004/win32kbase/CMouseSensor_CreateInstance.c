/*
 * XREFs of CMouseSensor_CreateInstance @ 0x1C00080E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CMouseSensor@@IEAA@XZ @ 0x1C0008200 (--0CMouseSensor@@IEAA@XZ.c)
 *     Win32AllocPool @ 0x1C0080DF0 (Win32AllocPool.c)
 */

CMouseSensor *CMouseSensor_CreateInstance()
{
  CMouseSensor *result; // rax

  gpMouseSensor = 0LL;
  result = (CMouseSensor *)Win32AllocPool(1752LL, 1885947971LL);
  if ( result )
    result = CMouseSensor::CMouseSensor(result);
  if ( result )
    gpMouseSensor = result;
  return result;
}
