/*
 * XREFs of KeSynchronizeUmsThread @ 0x1408B8E48
 * Callers:
 *     PspRundownUmsThreadForApcDelivery @ 0x14090A53C (PspRundownUmsThreadForApcDelivery.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeInsertQueue @ 0x14031D0E0 (KeInsertQueue.c)
 *     KiSwapToUmsThreadContinue @ 0x140520A20 (KiSwapToUmsThreadContinue.c)
 *     KiCopyUchToStagingArea @ 0x1408BA698 (KiCopyUchToStagingArea.c)
 */

__int64 __fastcall KeSynchronizeUmsThread(__int64 a1, char a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  struct _KPRCB *v11; // r9

  v2 = *(_QWORD *)(a1 + 496);
  if ( a2 )
  {
    KeInsertQueue(*(PRKQUEUE *)(v2 + 32), *(PLIST_ENTRY *)(v2 + 40));
    *(_DWORD *)(v2 + 80) |= 2u;
    *(_QWORD *)(v2 + 72) = 0LL;
    return KiLeaveGuardedRegionUnsafe(a1, v4, v5, v6);
  }
  else
  {
    KiCopyUchToStagingArea(a1, *(_QWORD *)(v2 + 72));
    *(_QWORD *)(v2 + 72) = 0LL;
    return KiSwapToUmsThreadContinue(v9, v8, v10, v11);
  }
}
