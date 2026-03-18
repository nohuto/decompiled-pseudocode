/*
 * XREFs of PsReturnProcessQuota @ 0x1402D4F98
 * Callers:
 *     MmAdjustWorkingSetSizeEx @ 0x14030E744 (MmAdjustWorkingSetSizeEx.c)
 *     MmCleanProcessAddressSpace @ 0x1406339B8 (MmCleanProcessAddressSpace.c)
 *     MmDeleteProcessAddressSpace @ 0x14066299C (MmDeleteProcessAddressSpace.c)
 *     MmCreateProcessAddressSpace @ 0x1406F0E98 (MmCreateProcessAddressSpace.c)
 * Callees:
 *     PspReturnQuota @ 0x14024C650 (PspReturnQuota.c)
 */

signed __int64 __fastcall PsReturnProcessQuota(ULONG_PTR a1, __int64 a2, ULONG_PTR a3)
{
  signed __int64 result; // rax

  if ( (PEPROCESS)a1 != PsInitialSystemProcess )
    return PspReturnQuota(*(char **)(a1 + 1384), a1, 3u, a3);
  return result;
}
