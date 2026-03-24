/*
 * XREFs of KsepDbCacheInsertDevice @ 0x1407CCD18
 * Callers:
 *     KseQueryDeviceData @ 0x14075F420 (KseQueryDeviceData.c)
 *     KseQueryDeviceDataList @ 0x1408BF3E0 (KseQueryDeviceDataList.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     RtlInitUnicodeString @ 0x14027C520 (RtlInitUnicodeString.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     memset @ 0x140414200 (memset.c)
 *     KsepCacheLookup @ 0x14075F7B0 (KsepCacheLookup.c)
 *     KsepCacheInsert @ 0x140780748 (KsepCacheInsert.c)
 */

__int64 __fastcall KsepDbCacheInsertDevice(PCWSTR SourceString, __int64 a2)
{
  unsigned int v4; // esi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v6; // rcx
  ULONG_PTR v7; // rbx
  char v8; // di
  _QWORD v10[10]; // [rsp+20h] [rbp-58h] BYREF

  v4 = -1073741811;
  memset(v10, 0, 0x48uLL);
  CurrentThread = KeGetCurrentThread();
  v6 = qword_140C50628;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v6, 0LL);
  RtlInitUnicodeString((PUNICODE_STRING)&v10[5], SourceString);
  if ( !KsepCacheLookup(qword_140C50628, (__int64)v10) )
  {
    KsepCacheInsert(qword_140C50628, a2);
    v4 = 0;
  }
  v7 = qword_140C50628;
  v8 = _InterlockedExchangeAdd64((volatile signed __int64 *)qword_140C50628, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v8 & 2) != 0 && (v8 & 4) == 0 )
    ExfTryToWakePushLock(v7);
  KeAbPostRelease(v7);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v4;
}
