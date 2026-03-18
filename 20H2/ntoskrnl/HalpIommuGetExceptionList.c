/*
 * XREFs of HalpIommuGetExceptionList @ 0x1404CA59C
 * Callers:
 *     IvtProcessDeviceExceptions @ 0x1409AD2B8 (IvtProcessDeviceExceptions.c)
 * Callees:
 *     <none>
 */

__int64 *HalpIommuGetExceptionList()
{
  return &HalpIommuExceptionList;
}
