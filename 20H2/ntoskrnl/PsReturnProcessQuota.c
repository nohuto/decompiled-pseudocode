/*
 * XREFs of PsReturnProcessQuota @ 0x140263118
 * Callers:
 *     MmAdjustWorkingSetSizeEx @ 0x14031CBE4 (MmAdjustWorkingSetSizeEx.c)
 *     MmCleanProcessAddressSpace @ 0x1406242E8 (MmCleanProcessAddressSpace.c)
 *     MmDeleteProcessAddressSpace @ 0x140660164 (MmDeleteProcessAddressSpace.c)
 *     MmCreateProcessAddressSpace @ 0x1406ED8E8 (MmCreateProcessAddressSpace.c)
 * Callees:
 *     PspReturnQuota @ 0x1402175A0 (PspReturnQuota.c)
 */

signed __int64 __fastcall PsReturnProcessQuota(ULONG_PTR a1, __int64 a2, ULONG_PTR a3)
{
  signed __int64 result; // rax

  if ( (PEPROCESS)a1 != PsInitialSystemProcess )
    return PspReturnQuota(*(char **)(a1 + 1384), a1, 3u, a3);
  return result;
}
