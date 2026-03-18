/*
 * XREFs of ObpFreeWorkItemBlock @ 0x140985C14
 * Callers:
 *     ObpPushStackInfoQueue @ 0x1409863A0 (ObpPushStackInfoQueue.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404298C0 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

char __fastcall ObpFreeWorkItemBlock(struct _SLIST_ENTRY *P)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v3; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&ObpStackTraceLock, 0LL);
  if ( (ObpTraceFlags & 0x73) != 0 && LOWORD(ObpWorkItemFreeList.Alignment) < 0x1F4u )
    RtlpInterlockedPushEntrySList(&ObpWorkItemFreeList, P);
  else
    ExFreePoolWithTag(P, 0x7452624Fu);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&ObpStackTraceLock);
  KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
  v3 = KeGetCurrentThread();
  if ( v3->SpecialApcDisable++ == -1 )
  {
    v3 = (struct _KTHREAD *)((char *)v3 + 152);
    if ( *(struct _KTHREAD **)&v3->Header.Lock != v3 )
      LOBYTE(v3) = KiCheckForKernelApcDelivery();
  }
  return (char)v3;
}
