/*
 * XREFs of PsChargeProcessQuota @ 0x1402E2188
 * Callers:
 *     MmAdjustWorkingSetSizeEx @ 0x14034BC24 (MmAdjustWorkingSetSizeEx.c)
 *     MmCreateProcessAddressSpace @ 0x1406ABD7C (MmCreateProcessAddressSpace.c)
 * Callees:
 *     PspChargeQuota @ 0x1402AD280 (PspChargeQuota.c)
 */

__int64 __fastcall PsChargeProcessQuota(struct _KPROCESS *a1, __int64 a2, unsigned __int64 a3)
{
  if ( a1 == PsInitialSystemProcess )
    return 0LL;
  else
    return PspChargeQuota(a1[1].AffinityPadding[7], (__int64)a1, 3, a3);
}
