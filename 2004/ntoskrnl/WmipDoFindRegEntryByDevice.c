/*
 * XREFs of WmipDoFindRegEntryByDevice @ 0x14036EA34
 * Callers:
 *     IoWMIDeviceObjectToProviderId @ 0x14036E940 (IoWMIDeviceObjectToProviderId.c)
 *     WmipFindRegEntryByDevice @ 0x14036E9A4 (WmipFindRegEntryByDevice.c)
 * Callees:
 *     <none>
 */

int *__fastcall WmipDoFindRegEntryByDevice(void *a1)
{
  int *result; // rax

  for ( result = (int *)WmipInUseRegEntryHead; result != (int *)&WmipInUseRegEntryHead; result = *(int **)result )
  {
    if ( *((void **)result + 2) == a1 && result[12] >= 0 )
      return result;
  }
  return 0LL;
}
