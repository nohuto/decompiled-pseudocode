/*
 * XREFs of WheapAttemptPhysicalPageOfflineWorker @ 0x140958E50
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     WheapAttemptPhysicalPageOffline @ 0x140958CBC (WheapAttemptPhysicalPageOffline.c)
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
