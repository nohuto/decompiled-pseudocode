/*
 * XREFs of KeSynchronizeUmsThread @ 0x1408BFEC8
 * Callers:
 *     PspRundownUmsThreadForApcDelivery @ 0x14091141C (PspRundownUmsThreadForApcDelivery.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     KeInsertQueue @ 0x1403610A0 (KeInsertQueue.c)
 *     KiSwapToUmsThreadContinue @ 0x140524A40 (KiSwapToUmsThreadContinue.c)
 *     KiCopyUchToStagingArea @ 0x1408C1718 (KiCopyUchToStagingArea.c)
 */

__int64 __fastcall KeSynchronizeUmsThread(__int64 a1, char a2)
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
