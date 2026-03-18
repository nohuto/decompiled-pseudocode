/*
 * XREFs of HalpIommuGetExceptionList @ 0x1404C6B8C
 * Callers:
 *     IvtProcessDeviceExceptions @ 0x1409A6508 (IvtProcessDeviceExceptions.c)
 * Callees:
 *     <none>
 */

__int64 *HalpIommuGetExceptionList()
{
  return &HalpIommuExceptionList;
}
