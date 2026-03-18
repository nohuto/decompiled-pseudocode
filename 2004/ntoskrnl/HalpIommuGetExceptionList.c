/*
 * XREFs of HalpIommuGetExceptionList @ 0x1404C703C
 * Callers:
 *     IvtProcessDeviceExceptions @ 0x1409A7348 (IvtProcessDeviceExceptions.c)
 * Callees:
 *     <none>
 */

__int64 *HalpIommuGetExceptionList()
{
  return &HalpIommuExceptionList;
}
