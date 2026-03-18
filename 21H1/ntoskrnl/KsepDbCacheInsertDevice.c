/*
 * XREFs of KsepDbCacheInsertDevice @ 0x1407B7058
 * Callers:
 *     KseQueryDeviceData @ 0x140747E00 (KseQueryDeviceData.c)
 *     KseQueryDeviceDataList @ 0x1408BABA0 (KseQueryDeviceDataList.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     memset @ 0x140408F80 (memset.c)
 *     KsepCacheLookup @ 0x140748190 (KsepCacheLookup.c)
 *     KsepCacheInsert @ 0x14076B798 (KsepCacheInsert.c)
 */

__int64 __fastcall KsepDbCacheInsertDevice(PCWSTR SourceString, __int64 a2)
{
  unsigned int v4; // esi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v6; // rcx
  ULONG_PTR v7; // rbx
  char v8; // di
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD v13[10]; // [rsp+20h] [rbp-58h] BYREF

  v4 = -1073741811;
  memset(v13, 0, 0x48uLL);
  CurrentThread = KeGetCurrentThread();
  v6 = qword_140C50558;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v6, 0LL);
  RtlInitUnicodeString((PUNICODE_STRING)&v13[5], SourceString);
  if ( !KsepCacheLookup(qword_140C50558, (__int64)v13) )
  {
    KsepCacheInsert(qword_140C50558, a2);
    v4 = 0;
  }
  v7 = qword_140C50558;
  v8 = _InterlockedExchangeAdd64((volatile signed __int64 *)qword_140C50558, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v8 & 2) != 0 && (v8 & 4) == 0 )
    ExfTryToWakePushLock(v7);
  KeAbPostRelease(v7);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v9, v10, v11);
  return v4;
}
