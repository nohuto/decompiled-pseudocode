/*
 * XREFs of EtwpUnreferenceGuidEntry @ 0x140796B04
 * Callers:
 *     EtwGetProviderIdFromHandle @ 0x14025A19C (EtwGetProviderIdFromHandle.c)
 *     NtTraceEvent @ 0x1402FE320 (NtTraceEvent.c)
 *     EtwpGetTraceGuidInfo @ 0x14065F10C (EtwpGetTraceGuidInfo.c)
 *     EtwUnregister @ 0x1406B7470 (EtwUnregister.c)
 *     EtwpRegisterKMProvider @ 0x1406D2394 (EtwpRegisterKMProvider.c)
 *     EtwpFreeGuidEntry @ 0x1406D708C (EtwpFreeGuidEntry.c)
 *     EtwpNotifyGuid @ 0x1406EF64C (EtwpNotifyGuid.c)
 *     EtwpUpdateGuidEnableInfo @ 0x14078FA54 (EtwpUpdateGuidEnableInfo.c)
 *     EtwpEnableGuid @ 0x14079028C (EtwpEnableGuid.c)
 *     EtwpAddGuidEntry @ 0x140792A4C (EtwpAddGuidEntry.c)
 *     EtwpAddRegEntryToGroup @ 0x140794F30 (EtwpAddRegEntryToGroup.c)
 *     EtwpRegisterUMProvider @ 0x140796040 (EtwpRegisterUMProvider.c)
 *     EtwpDeleteRegistrationObject @ 0x140796530 (EtwpDeleteRegistrationObject.c)
 *     EtwpFindOrCreateGuidEntry @ 0x140796798 (EtwpFindOrCreateGuidEntry.c)
 *     EtwpGetNextGuidEntry @ 0x1407969D0 (EtwpGetNextGuidEntry.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x140797054 (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpGetTraceGroupInfo @ 0x140883164 (EtwpGetTraceGroupInfo.c)
 *     EtwpNotifyDisallowedGuidChange @ 0x1409E448C (EtwpNotifyDisallowedGuidChange.c)
 *     SendCaptureStateNotificationsWorker @ 0x1409EC340 (SendCaptureStateNotificationsWorker.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     EtwpFreeGuidEntry @ 0x1406D708C (EtwpFreeGuidEntry.c)
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
