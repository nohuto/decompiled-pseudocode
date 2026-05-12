/*
 * XREFs of RaidAdapterConfigureResources @ 0x1C002BC88
 * Callers:
 *     RaidAdapterStartDevice @ 0x1C002F830 (RaidAdapterStartDevice.c)
 * Callees:
 *     RaidInitializeDeferredQueue @ 0x1C0033BF4 (RaidInitializeDeferredQueue.c)
 *     RaInitializeBus @ 0x1C0079F28 (RaInitializeBus.c)
 *     RaidInitializeResourceList @ 0x1C007B078 (RaidInitializeResourceList.c)
 */

__int64 __fastcall RaidAdapterConfigureResources(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // r8

  result = RaidInitializeResourceList(a1 + 304);
  if ( (int)result >= 0 )
  {
    if ( (unsigned int)RaInitializeBus(a1 + 624, *(_QWORD *)(a1 + 24)) != -1073741637 || (*(_BYTE *)(a1 + 104) & 8) != 0 )
    {
      RaidInitializeDeferredQueue(a1 + 1152, *(_QWORD *)(a1 + 8), v3, 80LL, RaidAdapterDeferredRoutine);
      KeInitializeDpc((PRKDPC)(a1 + 1664), (PKDEFERRED_ROUTINE)RaidpAdapterTimerDpcRoutine, *(PVOID *)(a1 + 8));
      KeInitializeDpc((PRKDPC)(a1 + 1792), RaidPauseTimerDpcRoutine, *(PVOID *)(a1 + 8));
      KeInitializeDpc((PRKDPC)(a1 + 1992), RaidCompletionDpcRoutine, *(PVOID *)(a1 + 8));
      KeInitializeDpc((PRKDPC)(a1 + 4344), RaidPauseTimerDpcRoutine, *(PVOID *)(a1 + 8));
      KeInitializeDpc((PRKDPC)(a1 + 2056), (PKDEFERRED_ROUTINE)RaidAdapterBusChangeDpcRoutine, *(PVOID *)(a1 + 8));
      KeInitializeDpc((PRKDPC)(a1 + 1856), RaidAdapterRestartDpcRoutine, *(PVOID *)(a1 + 8));
      KeInitializeDpc((PRKDPC)(a1 + 5584), RaidQueueWaitCheckDpcRoutine, *(PVOID *)(a1 + 8));
      return 0LL;
    }
    else
    {
      return 3221225659LL;
    }
  }
  return result;
}
