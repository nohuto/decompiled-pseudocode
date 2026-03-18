/*
 * XREFs of SmpKeyedStoreReference @ 0x1402539C0
 * Callers:
 *     SmpPageWrite @ 0x14025529C (SmpPageWrite.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     KeLeaveCriticalRegion @ 0x140221480 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
 *     SmpKeyedStoreEntryGet @ 0x140253B98 (SmpKeyedStoreEntryGet.c)
 *     SmKmStoreReference @ 0x140256CA8 (SmKmStoreReference.c)
 */

__int64 __fastcall SmpKeyedStoreReference(signed __int64 *BugCheckParameter2, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // esi
  __int64 v6; // rax
  __int64 v7; // rdi

  CurrentThread = KeGetCurrentThread();
  v3 = -1;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)BugCheckParameter2, 0LL);
  v6 = SmpKeyedStoreEntryGet((ULONG_PTR)BugCheckParameter2);
  v7 = v6;
  if ( v6 )
  {
    SmKmStoreReference(a2, *(unsigned __int16 *)(v6 + 16));
    v3 = *(unsigned __int16 *)(v7 + 16);
  }
  if ( _InterlockedCompareExchange64(BugCheckParameter2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(BugCheckParameter2);
  KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  KeLeaveCriticalRegion();
  return v3;
}
