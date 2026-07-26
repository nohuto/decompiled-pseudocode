/*
 * XREFs of ?ndisSSInvalidateOidCache@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@@Z @ 0x1C00A63F0
 * Callers:
 *     ?ndisIncrementAsyncIdleCountersLocked@@YAEPEAU_NDIS_SELECTIVE_SUSPEND@@KW4_NDIS_SS_BUSY_REASON@@@Z @ 0x1C00A5330 (-ndisIncrementAsyncIdleCountersLocked@@YAEPEAU_NDIS_SELECTIVE_SUSPEND@@KW4_NDIS_SS_BUSY_REASON@@.c)
 *     ?ndisIncrementSyncIdleCountersLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C00A53E0 (-ndisIncrementSyncIdleCountersLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@K@.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisSSInvalidateOidCache(struct _NDIS_SELECTIVE_SUSPEND *a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8

  v1 = 0LL;
  v2 = 5LL;
  do
  {
    v1 += 24LL;
    *(_BYTE *)(*((_QWORD *)a1 + 75) + v1 - 4) = 0;
    --v2;
  }
  while ( v2 );
}
