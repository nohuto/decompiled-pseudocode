/*
 * XREFs of PsChargeProcessPagedPoolQuota @ 0x1405D0F30
 * Callers:
 *     ExpAllocateHandleTable @ 0x1405D0AF8 (ExpAllocateHandleTable.c)
 *     ExpAllocateTablePagedPoolNoZero @ 0x1405D0EC4 (ExpAllocateTablePagedPoolNoZero.c)
 *     AlpcpChargePagedPoolQuota @ 0x140689FE4 (AlpcpChargePagedPoolQuota.c)
 * Callees:
 *     PspChargeQuota @ 0x1402AD280 (PspChargeQuota.c)
 */

__int64 __fastcall PsChargeProcessPagedPoolQuota(struct _KPROCESS *a1, unsigned __int64 a2)
{
  if ( a1 == PsInitialSystemProcess )
    return 0LL;
  else
    return PspChargeQuota(a1[1].AffinityPadding[7], (__int64)a1, 1, a2);
}
