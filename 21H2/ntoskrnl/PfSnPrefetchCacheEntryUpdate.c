/*
 * XREFs of PfSnPrefetchCacheEntryUpdate @ 0x1406DC5EC
 * Callers:
 *     PfSnSetPrefetcherInformation @ 0x1406DC36C (PfSnSetPrefetcherInformation.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14034B3F0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14034BBA0 (ExAcquireResourceExclusiveLite.c)
 *     memcmp @ 0x1403D29E0 (memcmp.c)
 *     PfSnPrefetchCacheEntryGet @ 0x1406C9FB4 (PfSnPrefetchCacheEntryGet.c)
 */

_QWORD *__fastcall PfSnPrefetchCacheEntryUpdate(__int64 a1)
{
  _OWORD *v1; // rdi
  unsigned __int8 *v3; // r9
  __int64 v4; // rbp
  __int64 v5; // r10
  __int64 v6; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rbx

  v1 = (_OWORD *)(a1 + 4);
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
  ExAcquireResourceExclusiveLite(&stru_140C504E0, 1u);
  v8 = qword_140C504D0 - 16;
  if ( !memcmp((const void *)(qword_140C504D0 - 16 + 32), v1, 0x40uLL)
    || (v8 = PfSnPrefetchCacheEntryGet((__int64)&unk_140C504B8, v1, v4, 0LL)) != 0 )
  {
    *(_DWORD *)(v8 + 112) = *(_DWORD *)(a1 + 68);
  }
  ExReleaseResourceLite(&stru_140C504E0);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
