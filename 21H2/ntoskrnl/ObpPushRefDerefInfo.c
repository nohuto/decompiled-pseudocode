/*
 * XREFs of ObpPushRefDerefInfo @ 0x140986190
 * Callers:
 *     ObpPushStackInfo @ 0x1405C5EC8 (ObpPushStackInfo.c)
 *     ObpPushStackInfoQueue @ 0x1409863A0 (ObpPushStackInfoQueue.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404298C0 (RtlpInterlockedPushEntrySList.c)
 *     ObpGetObjectRefInfo @ 0x140985CD8 (ObpGetObjectRefInfo.c)
 *     ObpGetTraceIndex @ 0x140985DE4 (ObpGetTraceIndex.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

char __fastcall ObpPushRefDerefInfo(
        __int64 a1,
        char a2,
        unsigned __int16 a3,
        unsigned int a4,
        unsigned __int16 *Source2,
        int a6)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int16 *v11; // rdi
  unsigned __int16 TraceIndex; // r9
  unsigned __int16 i; // dx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rdi
  struct _SLIST_ENTRY *Pool2; // rax
  struct _KTHREAD *v19; // rax
  bool v20; // zf
  unsigned __int16 *v22; // [rsp+20h] [rbp-38h] BYREF

  v22 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&ObpStackTraceLock, 0LL);
  if ( (ObpTraceFlags & 0x73) != 0 )
  {
    if ( (int)ObpGetObjectRefInfo(a1, &v22) >= 0 )
    {
      v11 = v22;
      if ( v22 )
      {
        TraceIndex = ObpGetTraceIndex(Source2);
        if ( TraceIndex >= 0x3FFDu )
        {
          DbgPrintEx(0, 1u, "ObpPushRefDerefInfo - ObpStackTable overflow\n");
        }
        else
        {
          for ( i = v11[16]; i; *(_DWORD *)&v11[2 * v14 + 22] = *(_DWORD *)&v11[6 * i-- + 16] )
          {
            if ( a4 >= *(_DWORD *)&v11[6 * i + 12] )
              break;
            v14 = 3LL * i;
            *(_QWORD *)&v11[2 * v14 + 18] = *(_QWORD *)&v11[6 * i + 12];
          }
          v15 = i;
          v16 = 3LL * i;
          v11[2 * v16 + 20] = TraceIndex | (a2 != 0 ? 0x8000 : 0);
          v11[2 * v16 + 21] = a3;
          *(_DWORD *)&v11[6 * v15 + 18] = a4;
          *(_DWORD *)&v11[2 * v16 + 22] = a6;
          ++v11[16];
        }
      }
    }
    v17 = 100LL;
    if ( LOWORD(ObpWorkItemFreeList.Alignment) < 0x64u )
    {
      do
      {
        Pool2 = (struct _SLIST_ENTRY *)ExAllocatePool2(64LL, 176LL, 1951556175LL);
        if ( Pool2 )
          RtlpInterlockedPushEntrySList(&ObpWorkItemFreeList, Pool2);
        --v17;
      }
      while ( v17 );
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&ObpStackTraceLock);
    KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
    v19 = KeGetCurrentThread();
    v20 = v19->SpecialApcDisable++ == -1;
    if ( v20 )
    {
LABEL_21:
      v19 = (struct _KTHREAD *)((char *)v19 + 152);
      if ( *(struct _KTHREAD **)&v19->Header.Lock != v19 )
        LOBYTE(v19) = KiCheckForKernelApcDelivery();
    }
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&ObpStackTraceLock);
    KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
    v19 = KeGetCurrentThread();
    v20 = v19->SpecialApcDisable++ == -1;
    if ( v20 )
      goto LABEL_21;
  }
  return (char)v19;
}
