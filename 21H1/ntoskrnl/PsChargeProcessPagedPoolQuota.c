/*
 * XREFs of PsChargeProcessPagedPoolQuota @ 0x140671A50
 * Callers:
 *     AlpcpChargePagedPoolQuota @ 0x140611E60 (AlpcpChargePagedPoolQuota.c)
 *     ExpAllocateHandleTable @ 0x140671618 (ExpAllocateHandleTable.c)
 *     ExpAllocateTablePagedPoolNoZero @ 0x1406719E4 (ExpAllocateTablePagedPoolNoZero.c)
 * Callees:
 *     PspChargeQuota @ 0x1402641B0 (PspChargeQuota.c)
 */

__int64 __fastcall PsChargeProcessPagedPoolQuota(struct _KPROCESS *a1, unsigned __int64 a2)
{
  if ( a1 == PsInitialSystemProcess )
    return 0LL;
  else
    return PspChargeQuota(a1[1].AffinityPadding[7], (__int64)a1, 1, a2);
}
