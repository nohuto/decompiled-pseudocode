/*
 * XREFs of PsReturnProcessQuota @ 0x14026B5F8
 * Callers:
 *     MmAdjustWorkingSetSizeEx @ 0x14034BC24 (MmAdjustWorkingSetSizeEx.c)
 *     MmCleanProcessAddressSpace @ 0x1405FE978 (MmCleanProcessAddressSpace.c)
 *     MmDeleteProcessAddressSpace @ 0x14061D27C (MmDeleteProcessAddressSpace.c)
 *     MmCreateProcessAddressSpace @ 0x1406ABD7C (MmCreateProcessAddressSpace.c)
 * Callees:
 *     PspReturnQuota @ 0x140288EF0 (PspReturnQuota.c)
 */

__int64 __fastcall PsReturnProcessQuota(struct _KPROCESS *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( a1 != PsInitialSystemProcess )
    return PspReturnQuota(a1[1].AffinityPadding[7], a1, 3LL, a3);
  return result;
}
