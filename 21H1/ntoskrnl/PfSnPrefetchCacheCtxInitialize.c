/*
 * XREFs of PfSnPrefetchCacheCtxInitialize @ 0x1407AA96C
 * Callers:
 *     PfSnInitializePrefetcher @ 0x140A66910 (PfSnInitializePrefetcher.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x14026C4C0 (ExInitializeResourceLite.c)
 *     memset @ 0x140408F80 (memset.c)
 */

NTSTATUS __fastcall PfSnPrefetchCacheCtxInitialize(__int64 a1)
{
  memset((void *)a1, 0, 0x90uLL);
  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 24) = a1 + 16;
  *(_QWORD *)(a1 + 16) = a1 + 16;
  return ExInitializeResourceLite((PERESOURCE)(a1 + 40));
}
