/*
 * XREFs of MiInitializeSections @ 0x14078E938
 * Callers:
 *     MiInitializePartition @ 0x14078E400 (MiInitializePartition.c)
 *     MiInitNucleus @ 0x140A43414 (MiInitNucleus.c)
 * Callees:
 *     KeInitializeEvent @ 0x14020D960 (KeInitializeEvent.c)
 *     KeInitializeTimerEx @ 0x1402D6620 (KeInitializeTimerEx.c)
 *     KeInitializeSemaphore @ 0x1402D6A20 (KeInitializeSemaphore.c)
 *     InitializeSListHead @ 0x140338AF0 (InitializeSListHead.c)
 */

void __fastcall MiInitializeSections(__int64 a1)
{
  __int64 v2; // rcx
  char v3; // al

  v2 = a1 + 1520;
  *(_QWORD *)(v2 + 40) = v2 + 32;
  *(_QWORD *)(v2 + 32) = v2 + 32;
  *(_QWORD *)(v2 + 56) = v2 + 48;
  *(_QWORD *)(v2 + 48) = v2 + 48;
  *(_QWORD *)(v2 + 72) = v2 + 64;
  *(_QWORD *)(v2 + 64) = v2 + 64;
  KeInitializeSemaphore((PRKSEMAPHORE)v2, 0, 0x7FFFFFFF);
  *(_QWORD *)(a1 + 1608) = a1 + 1600;
  *(_QWORD *)(a1 + 1600) = a1 + 1600;
  *(_QWORD *)(a1 + 1712) = a1 + 1704;
  *(_QWORD *)(a1 + 1704) = a1 + 1704;
  *(_QWORD *)(a1 + 1728) = a1 + 1720;
  *(_QWORD *)(a1 + 1720) = a1 + 1720;
  KeInitializeEvent((PRKEVENT)(a1 + 1400), NotificationEvent, 0);
  *(_QWORD *)(a1 + 1744) = a1 + 1736;
  *(_QWORD *)(a1 + 1736) = a1 + 1736;
  KeInitializeEvent((PRKEVENT)(a1 + 1376), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(a1 + 1752), SynchronizationEvent, 0);
  KeInitializeTimerEx((PKTIMER)(a1 + 1616), SynchronizationTimer);
  KeInitializeEvent((PRKEVENT)(a1 + 1808), NotificationEvent, 0);
  InitializeSListHead((PSLIST_HEADER)(a1 + 1840));
  *(_QWORD *)(a1 + 1464) = 1LL;
  *(_QWORD *)(a1 + 1432) = 0LL;
  *(_QWORD *)(a1 + 1472) = 0LL;
  *(_DWORD *)(a1 + 1504) = 0;
  v3 = *(_BYTE *)(a1 + 1511) & 0xFD;
  *(_QWORD *)(a1 + 1456) = a1;
  *(_BYTE *)(a1 + 1508) = -1;
  *(_BYTE *)(a1 + 1511) = v3 | 4;
  KeInitializeEvent((PRKEVENT)(a1 + 1480), NotificationEvent, 0);
}
