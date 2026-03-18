/*
 * XREFs of PfSnPrefetchCacheCtxInitialize @ 0x1407BBA0C
 * Callers:
 *     PfSnInitializePrefetcher @ 0x140A6D5C0 (PfSnInitializePrefetcher.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x14027F200 (ExInitializeResourceLite.c)
 *     memset @ 0x140411300 (memset.c)
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
