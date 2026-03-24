/*
 * XREFs of KeSynchronizeUmsThread @ 0x1408BD688
 * Callers:
 *     PspRundownUmsThreadForApcDelivery @ 0x14090EBCC (PspRundownUmsThreadForApcDelivery.c)
 * Callees:
 *     KeInsertQueue @ 0x1402CCD30 (KeInsertQueue.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 *     KiSwapToUmsThreadContinue @ 0x140526520 (KiSwapToUmsThreadContinue.c)
 *     KiCopyUchToStagingArea @ 0x1408BEED8 (KiCopyUchToStagingArea.c)
 */

char __fastcall KeSynchronizeUmsThread(__int64 a1, char a2)
{
  __int64 v2; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  _DWORD *v8; // r9

  v2 = *(_QWORD *)(a1 + 496);
  if ( a2 )
  {
    KeInsertQueue(*(PRKQUEUE *)(v2 + 32), *(PLIST_ENTRY *)(v2 + 40));
    *(_DWORD *)(v2 + 80) |= 2u;
    *(_QWORD *)(v2 + 72) = 0LL;
    return KiLeaveGuardedRegionUnsafe(a1);
  }
  else
  {
    KiCopyUchToStagingArea(a1, *(_QWORD *)(v2 + 72));
    *(_QWORD *)(v2 + 72) = 0LL;
    return KiSwapToUmsThreadContinue(v6, v5, v7, v8);
  }
}
