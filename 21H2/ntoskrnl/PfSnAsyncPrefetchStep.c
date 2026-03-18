/*
 * XREFs of PfSnAsyncPrefetchStep @ 0x1407D74C4
 * Callers:
 *     PfSnAsyncPrefetchWorker @ 0x1407DC0D0 (PfSnAsyncPrefetchWorker.c)
 * Callees:
 *     PfSnPrefetchSections @ 0x1407D7100 (PfSnPrefetchSections.c)
 *     PfSnPrefetchMetadata @ 0x1407DE1A8 (PfSnPrefetchMetadata.c)
 */

__int64 __fastcall PfSnAsyncPrefetchStep(__int64 a1, __int64 *a2, unsigned int a3)
{
  __int64 v6; // r9
  __int64 result; // rax
  __int64 v8; // r9

  PfSnPrefetchMetadata(a2, a3);
  result = PfSnPrefetchSections(a2, CriticalWorkQueue, a3, v6, *(_QWORD *)(a1 + 216));
  if ( (int)result >= 0 )
  {
    result = PfSnPrefetchSections(a2, DelayedWorkQueue, a3, v8, *(_QWORD *)(a1 + 216));
    if ( (int)result >= 0 )
    {
      *(_DWORD *)(a1 + 232) |= a3;
      return 0LL;
    }
  }
  return result;
}
