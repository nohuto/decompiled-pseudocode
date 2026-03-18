/*
 * XREFs of KsepDbCacheQueryDevice @ 0x140747F88
 * Callers:
 *     KseQueryDeviceData @ 0x140747E00 (KseQueryDeviceData.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     memset @ 0x140408F80 (memset.c)
 *     KsepCacheLookup @ 0x140748190 (KsepCacheLookup.c)
 *     KsepDbCacheQueryDeviceData @ 0x1407B1F64 (KsepDbCacheQueryDeviceData.c)
 */

__int64 __fastcall KsepDbCacheQueryDevice(PCWSTR SourceString, int a2, int a3, int a4, void *a5)
{
  unsigned int DeviceData; // esi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v11; // rcx
  __int64 v12; // rax
  ULONG_PTR v13; // rbx
  char v14; // di
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD v19[10]; // [rsp+30h] [rbp-68h] BYREF

  DeviceData = -1073741275;
  memset(v19, 0, 0x48uLL);
  RtlInitUnicodeString((PUNICODE_STRING)&v19[5], SourceString);
  CurrentThread = KeGetCurrentThread();
  v11 = qword_140C50558;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v11, 0LL);
  v12 = KsepCacheLookup(qword_140C50558, v19);
  if ( v12 )
    DeviceData = KsepDbCacheQueryDeviceData(v12, a2, a3, a4, a5);
  v13 = qword_140C50558;
  v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)qword_140C50558, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v14 & 2) != 0 && (v14 & 4) == 0 )
    ExfTryToWakePushLock(v13);
  KeAbPostRelease(v13);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v15, v16, v17);
  return DeviceData;
}
