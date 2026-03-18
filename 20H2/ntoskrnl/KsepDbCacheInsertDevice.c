/*
 * XREFs of KsepDbCacheInsertDevice @ 0x1407C8A58
 * Callers:
 *     KseQueryDeviceData @ 0x140758560 (KseQueryDeviceData.c)
 *     KseQueryDeviceDataList @ 0x1408C1C20 (KseQueryDeviceDataList.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     memset @ 0x140411300 (memset.c)
 *     KsepCacheLookup @ 0x1407588F0 (KsepCacheLookup.c)
 *     KsepCacheInsert @ 0x14077C968 (KsepCacheInsert.c)
 */

__int64 __fastcall KsepDbCacheInsertDevice(PCWSTR SourceString, __int64 a2)
{
  unsigned int v4; // esi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v6; // rcx
  volatile signed __int64 *v7; // rbx
  char v8; // di
  _QWORD v10[10]; // [rsp+20h] [rbp-58h] BYREF

  v4 = -1073741811;
  memset(v10, 0, 0x48uLL);
  CurrentThread = KeGetCurrentThread();
  v6 = qword_140C504A8;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v6, 0LL);
  RtlInitUnicodeString((PUNICODE_STRING)&v10[5], SourceString);
  if ( !KsepCacheLookup(qword_140C504A8, (__int64)v10) )
  {
    KsepCacheInsert(qword_140C504A8, a2);
    v4 = 0;
  }
  v7 = (volatile signed __int64 *)qword_140C504A8;
  v8 = _InterlockedExchangeAdd64((volatile signed __int64 *)qword_140C504A8, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v8 & 2) != 0 && (v8 & 4) == 0 )
    ExfTryToWakePushLock(v7);
  KeAbPostRelease((ULONG_PTR)v7);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v4;
}
