/*
 * XREFs of KsepDbCacheInsertDevice @ 0x1407BA1C8
 * Callers:
 *     KseQueryDeviceData @ 0x140749980 (KseQueryDeviceData.c)
 *     KseQueryDeviceDataList @ 0x1408BBEC0 (KseQueryDeviceDataList.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     memset @ 0x14040A280 (memset.c)
 *     KsepCacheLookup @ 0x140749D10 (KsepCacheLookup.c)
 *     KsepCacheInsert @ 0x14076DF38 (KsepCacheInsert.c)
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
  v6 = qword_140C50428;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v6, 0LL);
  RtlInitUnicodeString((PUNICODE_STRING)&v10[5], SourceString);
  if ( !KsepCacheLookup(qword_140C50428, (__int64)v10) )
  {
    KsepCacheInsert(qword_140C50428, a2);
    v4 = 0;
  }
  v7 = (volatile signed __int64 *)qword_140C50428;
  v8 = _InterlockedExchangeAdd64((volatile signed __int64 *)qword_140C50428, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v8 & 2) != 0 && (v8 & 4) == 0 )
    ExfTryToWakePushLock(v7);
  KeAbPostRelease((ULONG_PTR)v7);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v4;
}
