/*
 * XREFs of KsepDbCacheQueryDevice @ 0x1407586E8
 * Callers:
 *     KseQueryDeviceData @ 0x140758560 (KseQueryDeviceData.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     memset @ 0x140411300 (memset.c)
 *     KsepCacheLookup @ 0x1407588F0 (KsepCacheLookup.c)
 *     KsepDbCacheQueryDeviceData @ 0x1407C3904 (KsepDbCacheQueryDeviceData.c)
 */

__int64 __fastcall KsepDbCacheQueryDevice(PCWSTR SourceString, int a2, int a3, int a4, void *a5)
{
  unsigned int DeviceData; // esi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v11; // rcx
  __int64 v12; // rax
  volatile signed __int64 *v13; // rbx
  char v14; // di
  _QWORD v16[10]; // [rsp+30h] [rbp-68h] BYREF

  DeviceData = -1073741275;
  memset(v16, 0, 0x48uLL);
  RtlInitUnicodeString((PUNICODE_STRING)&v16[5], SourceString);
  CurrentThread = KeGetCurrentThread();
  v11 = qword_140C504A8;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v11, 0LL);
  v12 = KsepCacheLookup(qword_140C504A8, v16);
  if ( v12 )
    DeviceData = KsepDbCacheQueryDeviceData(v12, a2, a3, a4, a5);
  v13 = (volatile signed __int64 *)qword_140C504A8;
  v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)qword_140C504A8, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v14 & 2) != 0 && (v14 & 4) == 0 )
    ExfTryToWakePushLock(v13);
  KeAbPostRelease((ULONG_PTR)v13);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return DeviceData;
}
