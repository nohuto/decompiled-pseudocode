/*
 * XREFs of HalpIommuGetExceptionList @ 0x1405180B8
 * Callers:
 *     IvtProcessDeviceExceptions @ 0x140A64544 (IvtProcessDeviceExceptions.c)
 * Callees:
 *     <none>
 */

__int64 *HalpIommuGetExceptionList()
{
  return &HalpIommuExceptionList;
}
