/*
 * XREFs of WheapAttemptPhysicalPageOfflineWorker @ 0x14095FFB0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     WheapAttemptPhysicalPageOffline @ 0x14095FE1C (WheapAttemptPhysicalPageOffline.c)
 */

LONG __fastcall WheapAttemptPhysicalPageOfflineWorker(__int64 a1)
{
  *(_DWORD *)(a1 + 20) = WheapAttemptPhysicalPageOffline(
                           *(LARGE_INTEGER *)a1,
                           *(UNICODE_STRING **)(a1 + 8),
                           *(_BYTE *)(a1 + 16),
                           *(_BYTE *)(a1 + 17),
                           *(_BYTE *)(a1 + 18));
  return KeSetEvent((PRKEVENT)(a1 + 24), 0, 0);
}
