/*
 * XREFs of PiDqObjectManagerMakeInconsistent @ 0x1408A49F0
 * Callers:
 *     PiPnpRtlObjectEventWorker @ 0x14074A1D0 (PiPnpRtlObjectEventWorker.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140253C70 (KeReleaseGuardedMutex.c)
 *     ExQueueWorkItem @ 0x1402E2FA0 (ExQueueWorkItem.c)
 *     ExAcquireFastMutex @ 0x140354DD0 (ExAcquireFastMutex.c)
 */

void __fastcall PiDqObjectManagerMakeInconsistent(__int64 a1)
{
  char v2; // di
  int v3; // edx
  int v4; // edx

  v2 = 0;
  ExAcquireFastMutex((PFAST_MUTEX)(a1 + 104));
  v3 = *(_DWORD *)(a1 + 228);
  if ( (v3 & 2) == 0 && *(_QWORD *)(a1 + 192) != a1 + 192 )
  {
    v4 = v3 | 2;
    *(_DWORD *)(a1 + 228) = v4;
    if ( (v4 & 1) == 0 )
    {
      v2 = 1;
      *(_DWORD *)(a1 + 228) = v4 | 1;
    }
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 104));
  if ( v2 )
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 160), NormalWorkQueue);
}
