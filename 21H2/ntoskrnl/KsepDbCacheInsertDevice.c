/*
 * XREFs of KsepDbCacheInsertDevice @ 0x1407CCE88
 * Callers:
 *     KseQueryDeviceData @ 0x14075F5E0 (KseQueryDeviceData.c)
 *     KseQueryDeviceDataList @ 0x1408BF540 (KseQueryDeviceDataList.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     memset @ 0x140414300 (memset.c)
 *     KsepCacheLookup @ 0x14075F970 (KsepCacheLookup.c)
 *     KsepCacheInsert @ 0x140780908 (KsepCacheInsert.c)
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
  v6 = qword_140C50668;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v6, 0LL);
  RtlInitUnicodeString((PUNICODE_STRING)&v13[5], SourceString);
  if ( !KsepCacheLookup(qword_140C50668, (__int64)v13) )
  {
    KsepCacheInsert(qword_140C50668, a2);
    v4 = 0;
  }
  v7 = qword_140C50668;
  v8 = _InterlockedExchangeAdd64((volatile signed __int64 *)qword_140C50668, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v8 & 2) != 0 && (v8 & 4) == 0 )
    ExfTryToWakePushLock(v7);
  KeAbPostRelease(v7);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v9, v10, v11);
  return v4;
}
