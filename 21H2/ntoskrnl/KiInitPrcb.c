/*
 * XREFs of KiInitPrcb @ 0x14099D788
 * Callers:
 *     KiInitializeBootStructures @ 0x14099D160 (KiInitializeBootStructures.c)
 * Callees:
 *     KiInitializeDpcList @ 0x1402520B4 (KiInitializeDpcList.c)
 *     KiIntSteerInitPrcb @ 0x1402520C4 (KiIntSteerInitPrcb.c)
 *     KeInitializeDpc @ 0x140269650 (KeInitializeDpc.c)
 *     InitializeSListHead @ 0x1402A3310 (InitializeSListHead.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall KiInitPrcb(__int64 a1, int a2)
{
  _QWORD *v3; // rax
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  __int64 i; // rcx
  __int64 result; // rax

  *(_DWORD *)(a1 + 31776) = 1;
  *(_DWORD *)(a1 + 31768) = 0;
  *(_DWORD *)(a1 + 32436) = 0;
  v3 = (_QWORD *)(a1 + 31872);
  *(_QWORD *)(a1 + 32440) = 0LL;
  v5 = 32LL;
  *(_QWORD *)(a1 + 11528) = 0LL;
  v6 = 32LL;
  do
  {
    v3[1] = v3;
    *v3 = v3;
    v3 += 2;
    --v6;
  }
  while ( v6 );
  v7 = 0LL;
  **(_QWORD **)(a1 + 33864) = 0LL;
  *(_DWORD *)(*(_QWORD *)(a1 + 33864) + 8LL) = 0;
  *(_DWORD *)(*(_QWORD *)(a1 + 33864) + 608LL) = 0;
  *(_QWORD *)(*(_QWORD *)(a1 + 33864) + 616LL) = 0LL;
  do
  {
    v8 = (_QWORD *)(v7 + *(_QWORD *)(a1 + 33864) + 16LL);
    v7 += 16LL;
    v8[1] = v8;
    *v8 = v8;
    --v5;
  }
  while ( v5 );
  memset((void *)(*(_QWORD *)(a1 + 33864) + 528LL), 127, 0x40uLL);
  *(_BYTE *)(*(_QWORD *)(a1 + 33864) + 592LL) = 1;
  *(_BYTE *)(*(_QWORD *)(a1 + 33864) + 593LL) = *(_BYTE *)(a1 + 209);
  for ( i = 0LL; i < 2; ++i )
    *(_BYTE *)(i + *(_QWORD *)(a1 + 33864) + 594) = 1;
  *(_QWORD *)(*(_QWORD *)(a1 + 33864) + 600LL) = *(_QWORD *)(a1 + 200);
  *(_QWORD *)(a1 + 56) = *(_QWORD *)(a1 + 33864) + 528LL;
  KiInitializeDpcList((_QWORD *)(a1 + 12480));
  *(_QWORD *)(a1 + 12496) = 0LL;
  *(_DWORD *)(a1 + 12504) = 0;
  *(_DWORD *)(a1 + 12588) = 0;
  *(_BYTE *)(a1 + 12586) = 0;
  *(_DWORD *)(a1 + 12508) = 0;
  *(_DWORD *)(a1 + 12568) = KiMaximumDpcQueueDepth;
  *(_DWORD *)(a1 + 12576) = KiMinimumDpcRate;
  *(_DWORD *)(a1 + 32404) = KiAdjustDpcThreshold;
  KeInitializeDpc((PRKDPC)(a1 + 31648), (PKDEFERRED_ROUTINE)KiDpcWatchdog, 0LL);
  if ( !*(_QWORD *)(a1 + 31704) )
    *(_WORD *)(a1 + 31650) = a2 + 1280;
  *(_BYTE *)(a1 + 31649) = 2;
  *(_QWORD *)(a1 + 31752) = a1 + 31744;
  *(_QWORD *)(a1 + 31744) = a1 + 31744;
  *(_QWORD *)(a1 + 12456) = 1LL;
  InitializeSListHead((PSLIST_HEADER)(a1 + 12416));
  KeGetPcr()->NtTib.ArbitraryUserPointer = (void *)(a1 + 1776);
  *(_QWORD *)(a1 + 2008) = &CcBcbSpinLock;
  *(_QWORD *)(a1 + 2000) = 0LL;
  *(_QWORD *)(a1 + 1864) = &CcMasterSpinLock;
  *(_QWORD *)(a1 + 1848) = &CcVacbSpinLock;
  *(_QWORD *)(a1 + 1880) = &NonPagedPoolLock;
  *(_QWORD *)(a1 + 1896) = &IopCancelSpinLock;
  *(_QWORD *)(a1 + 1928) = &IopVpbSpinLock;
  *(_QWORD *)(a1 + 1944) = &IopDatabaseLock;
  *(_QWORD *)(a1 + 1960) = &IopCompletionLock;
  *(_QWORD *)(a1 + 1976) = &NtfsStructLock;
  *(_QWORD *)(a1 + 1992) = &AfdWorkQueueSpinLock;
  *(_QWORD *)(a1 + 1856) = 0LL;
  *(_QWORD *)(a1 + 1840) = 0LL;
  *(_QWORD *)(a1 + 1872) = 0LL;
  *(_QWORD *)(a1 + 1888) = 0LL;
  *(_QWORD *)(a1 + 1920) = 0LL;
  *(_QWORD *)(a1 + 1936) = 0LL;
  *(_QWORD *)(a1 + 1952) = 0LL;
  *(_QWORD *)(a1 + 1968) = 0LL;
  *(_QWORD *)(a1 + 1984) = 0LL;
  *(_QWORD *)(a1 + 2032) = 0LL;
  *(_QWORD *)(a1 + 2040) = 0LL;
  *(_DWORD *)(a1 + 34272) = (3 * (_WORD)a2) & 0x3FF;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 31760) = 0LL;
  *(_DWORD *)(a1 + 31712) = 1;
  KeInitializeDpc((PRKDPC)(a1 + 34536), (PKDEFERRED_ROUTINE)KiEntropyDpcRoutine, (PVOID)(a1 + 34272));
  if ( !a2 )
  {
    KiClockPollCycle = KiClockKeepAliveCycle;
    KiReverseStallIpiLock = 0LL;
    CcBcbSpinLock = 0LL;
    CcMasterSpinLock = 0LL;
    CcVacbSpinLock = 0LL;
    IopCancelSpinLock = 0LL;
    IopCompletionLock = 0LL;
    IopDatabaseLock = 0LL;
    IopVpbSpinLock = 0LL;
    NonPagedPoolLock = 0LL;
    NtfsStructLock = 0LL;
    AfdWorkQueueSpinLock = 0LL;
    KeSleepingProcessors = 1310740;
    memset(&unk_140C2B3C4, 0, 0xA4uLL);
  }
  KiIntSteerInitPrcb(a1);
  KeInitializeDpc((PRKDPC)(a1 + 34688), (PKDEFERRED_ROUTINE)KiAbDeferredProcessingWorker, 0LL);
  result = *(_QWORD *)(a1 + 34744);
  if ( !result )
    *(_WORD *)(a1 + 34690) = a2 + 1280;
  return result;
}
