/*
 * XREFs of RaidAdapterRequestTimerDeferred @ 0x1C002E0C0
 * Callers:
 *     StorPortNotification @ 0x1C000E7E0 (StorPortNotification.c)
 * Callees:
 *     RaidQueueDeferredItem @ 0x1C0002E10 (RaidQueueDeferredItem.c)
 */

char __fastcall RaidAdapterRequestTimerDeferred(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rdx
  char result; // al

  v4 = a1 + 1280;
  result = 0;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1296), 134684676, 134684677) != 134684677 )
    v4 = 0LL;
  if ( v4 )
  {
    *(_DWORD *)(v4 + 32) = 1;
    *(_QWORD *)(v4 + 40) = a2;
    *(_DWORD *)(v4 + 48) = a3;
    RaidQueueDeferredItem((char *)(a1 + 1152), (struct _SLIST_ENTRY *)v4);
    return 1;
  }
  else
  {
    _InterlockedIncrement(&RaidUnloggedErrors);
  }
  return result;
}
