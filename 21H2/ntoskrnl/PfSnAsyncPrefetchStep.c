/*
 * XREFs of PfSnAsyncPrefetchStep @ 0x140674F94
 * Callers:
 *     PfSnAsyncPrefetchWorker @ 0x140674BE0 (PfSnAsyncPrefetchWorker.c)
 * Callees:
 *     PfSnPrefetchSections @ 0x140675014 (PfSnPrefetchSections.c)
 *     PfSnPrefetchMetadata @ 0x140676A74 (PfSnPrefetchMetadata.c)
 */

__int64 __fastcall PfSnAsyncPrefetchStep(__int64 a1, int a2, int a3)
{
  int v6; // r9d
  __int64 result; // rax
  int v8; // r9d

  PfSnPrefetchMetadata(a2);
  result = PfSnPrefetchSections(a2, 0, a3, v6, *(_QWORD *)(a1 + 216));
  if ( (int)result >= 0 )
  {
    result = PfSnPrefetchSections(a2, 1, a3, v8, *(_QWORD *)(a1 + 216));
    if ( (int)result >= 0 )
    {
      *(_DWORD *)(a1 + 232) |= a3;
      return 0LL;
    }
  }
  return result;
}
