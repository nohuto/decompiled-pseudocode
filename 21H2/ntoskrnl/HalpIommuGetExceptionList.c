/*
 * XREFs of HalpIommuGetExceptionList @ 0x1404CBF6C
 * Callers:
 *     IvtProcessDeviceExceptions @ 0x1409AA188 (IvtProcessDeviceExceptions.c)
 * Callees:
 *     <none>
 */

__int64 *HalpIommuGetExceptionList()
{
  return &HalpIommuExceptionList;
}
