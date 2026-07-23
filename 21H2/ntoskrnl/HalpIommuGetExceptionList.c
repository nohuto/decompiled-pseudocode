/*
 * XREFs of HalpIommuGetExceptionList @ 0x1404CC1AC
 * Callers:
 *     IvtProcessDeviceExceptions @ 0x1409AB0B8 (IvtProcessDeviceExceptions.c)
 * Callees:
 *     <none>
 */

__int64 *HalpIommuGetExceptionList()
{
  return &HalpIommuExceptionList;
}
