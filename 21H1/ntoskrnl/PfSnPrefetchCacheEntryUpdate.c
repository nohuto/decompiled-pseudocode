/*
 * XREFs of PfSnPrefetchCacheEntryUpdate @ 0x1405D1630
 * Callers:
 *     PfSnSetPrefetcherInformation @ 0x1405D13B0 (PfSnSetPrefetcherInformation.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
 *     memcmp @ 0x1403CE5A0 (memcmp.c)
 *     PfSnPrefetchCacheEntryGet @ 0x140650E24 (PfSnPrefetchCacheEntryGet.c)
 */

_QWORD *__fastcall PfSnPrefetchCacheEntryUpdate(__int64 a1)
{
  const void *v1; // rdi
  unsigned __int8 *v3; // r9
  __int64 v4; // rbp
  __int64 v5; // r10
  __int64 v6; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9

  v1 = (const void *)(a1 + 4);
  v3 = (unsigned __int8 *)(a1 + 4);
  v4 = 314159LL;
  v5 = 8LL;
  do
  {
    v6 = *v3;
    v3 += 8;
    v4 = *(v3 - 1)
       + 37
       * (*(v3 - 2)
        + 37
        * (*(v3 - 3) + 37 * (*(v3 - 4) + 37 * (*(v3 - 5) + 37 * (*(v3 - 6) + 37 * (*(v3 - 7) + 37 * (v6 + 37 * v4)))))));
    --v5;
  }
  while ( v5 );
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&stru_140C50420, 1u);
  v8 = qword_140C50410 - 16;
  if ( !memcmp((const void *)(qword_140C50410 - 16 + 32), v1, 0x40uLL)
    || (v8 = PfSnPrefetchCacheEntryGet(&unk_140C503F8, v1, v4, 0LL)) != 0 )
  {
    *(_DWORD *)(v8 + 112) = *(_DWORD *)(a1 + 68);
  }
  ExReleaseResourceLite(&stru_140C50420);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v9, v10, v11);
}
