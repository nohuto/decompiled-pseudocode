/*
 * XREFs of PfSnScenarioAlloc @ 0x1406E8A50
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall PfSnScenarioAlloc(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x70506343u);
}
