/*
 * XREFs of EtwpUnreferenceGuidEntry @ 0x1406ECBA8
 * Callers:
 *     NtTraceEvent @ 0x14027E790 (NtTraceEvent.c)
 *     EtwGetProviderIdFromHandle @ 0x14039F178 (EtwGetProviderIdFromHandle.c)
 *     EtwpAddRegEntryToGroup @ 0x140638390 (EtwpAddRegEntryToGroup.c)
 *     EtwpGetNextGuidEntry @ 0x1406B82EC (EtwpGetNextGuidEntry.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x1406B8424 (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpNotifyGuid @ 0x1406B8AE4 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x1406B96E4 (EtwpEnableGuid.c)
 *     EtwpUpdateGuidEnableInfo @ 0x1406BA238 (EtwpUpdateGuidEnableInfo.c)
 *     EtwpAddGuidEntry @ 0x1406BAE90 (EtwpAddGuidEntry.c)
 *     EtwpFreeGuidEntry @ 0x1406BCEEC (EtwpFreeGuidEntry.c)
 *     EtwpRegisterUMGuid @ 0x1406DB250 (EtwpRegisterUMGuid.c)
 *     EtwpDeleteRegistrationObject @ 0x1406EC060 (EtwpDeleteRegistrationObject.c)
 *     EtwpGetTraceGuidInfo @ 0x14072E894 (EtwpGetTraceGuidInfo.c)
 *     EtwUnregister @ 0x140760390 (EtwUnregister.c)
 *     EtwpRegisterProvider @ 0x140762EE0 (EtwpRegisterProvider.c)
 *     EtwpDisallowedGuidAddition @ 0x140933DD4 (EtwpDisallowedGuidAddition.c)
 *     EtwpDisallowedGuidRemoval @ 0x1409340BC (EtwpDisallowedGuidRemoval.c)
 *     EtwpGetTraceGroupInfo @ 0x140934924 (EtwpGetTraceGroupInfo.c)
 *     SendCaptureStateNotificationsWorker @ 0x14093FB10 (SendCaptureStateNotificationsWorker.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     EtwpFreeGuidEntry @ 0x1406BCEEC (EtwpFreeGuidEntry.c)
 */

__int64 __fastcall EtwpUnreferenceGuidEntry(volatile signed __int64 *P)
{
  __int64 v2; // rsi
  struct _KTHREAD *CurrentThread; // rax
  int v5; // r10d
  int v6; // edx
  int v7; // r8d
  int v8; // r9d
  __int64 v9; // rbp
  volatile signed __int64 *v10; // rbp
  volatile signed __int64 v11; // rcx
  PVOID *v12; // rax

  v2 = _InterlockedDecrement64(P + 4);
  if ( v2 )
  {
    if ( v2 < 0 )
      KeBugCheckEx(0x11Du, 9uLL, (ULONG_PTR)P, 0LL, 0LL);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v5 = *((_DWORD *)P + 10);
    v6 = *((_DWORD *)P + 13);
    v7 = *((_DWORD *)P + 12);
    v8 = *((_DWORD *)P + 11);
    v9 = *((_QWORD *)P + 49);
    --CurrentThread->KernelApcDisable;
    v10 = (volatile signed __int64 *)(56LL * (((unsigned __int8)v8 ^ (unsigned __int8)(v7 ^ v6 ^ v5)) & 0x3F) + v9 + 512);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v10, 0LL);
    v11 = *P;
    if ( *(volatile signed __int64 **)(*P + 8) != P || (v12 = (PVOID *)*((_QWORD *)P + 1), *v12 != P) )
      __fastfail(3u);
    *v12 = (PVOID)v11;
    *(_QWORD *)(v11 + 8) = v12;
    if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v10);
    KeAbPostRelease((ULONG_PTR)v10);
    KeLeaveCriticalRegion();
    EtwpFreeGuidEntry((char *)P);
  }
  return v2;
}
