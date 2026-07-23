/*
 * XREFs of ZwUnlockVirtualMemory @ 0x1403F6F20
 * Callers:
 *     SmKmStoreHelperCommandProcess @ 0x1403037A0 (SmKmStoreHelperCommandProcess.c)
 *     CmSiUnlockViewOfSection @ 0x14034CF5C (CmSiUnlockViewOfSection.c)
 *     ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x1405948F4 (-SmStTrimWsStoreBatch@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z.c)
 *     VmColdPagesHint @ 0x14059D300 (VmColdPagesHint.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwUnlockVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG MapType)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
