/*
 * XREFs of KsepDbCacheQueryDevice @ 0x14075F768
 * Callers:
 *     KseQueryDeviceData @ 0x14075F5E0 (KseQueryDeviceData.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     memset @ 0x140414300 (memset.c)
 *     KsepCacheLookup @ 0x14075F970 (KsepCacheLookup.c)
 *     KsepDbCacheQueryDeviceData @ 0x1407C7EE4 (KsepDbCacheQueryDeviceData.c)
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
  v11 = qword_140C50668;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v11, 0LL);
  v12 = KsepCacheLookup(qword_140C50668, v19);
  if ( v12 )
    DeviceData = KsepDbCacheQueryDeviceData(v12, a2, a3, a4, a5);
  v13 = qword_140C50668;
  v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)qword_140C50668, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v14 & 2) != 0 && (v14 & 4) == 0 )
    ExfTryToWakePushLock(v13);
  KeAbPostRelease(v13);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v15, v16, v17);
  return DeviceData;
}
