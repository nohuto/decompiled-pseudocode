/*
 * XREFs of EtwpUnreferenceGuidEntry @ 0x1405F7508
 * Callers:
 *     NtTraceEvent @ 0x1402D5FC0 (NtTraceEvent.c)
 *     EtwGetProviderIdFromHandle @ 0x14039BB08 (EtwGetProviderIdFromHandle.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x1405F31AC (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpGetNextGuidEntry @ 0x1405F35EC (EtwpGetNextGuidEntry.c)
 *     EtwpAddRegEntryToGroup @ 0x1405F4850 (EtwpAddRegEntryToGroup.c)
 *     EtwpRegisterUMGuid @ 0x1405F6270 (EtwpRegisterUMGuid.c)
 *     EtwpDeleteRegistrationObject @ 0x1405F7EF0 (EtwpDeleteRegistrationObject.c)
 *     EtwpNotifyGuid @ 0x14067D410 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x14067E254 (EtwpEnableGuid.c)
 *     EtwpUpdateGuidEnableInfo @ 0x14067EDA8 (EtwpUpdateGuidEnableInfo.c)
 *     EtwpAddGuidEntry @ 0x14067F4C8 (EtwpAddGuidEntry.c)
 *     EtwpFreeGuidEntry @ 0x1406DE9BC (EtwpFreeGuidEntry.c)
 *     EtwpGetTraceGuidInfo @ 0x14071A7D4 (EtwpGetTraceGuidInfo.c)
 *     EtwUnregister @ 0x140748B40 (EtwUnregister.c)
 *     EtwpRegisterProvider @ 0x14074B530 (EtwpRegisterProvider.c)
 *     EtwpDisallowedGuidAddition @ 0x14092F354 (EtwpDisallowedGuidAddition.c)
 *     EtwpDisallowedGuidRemoval @ 0x14092F63C (EtwpDisallowedGuidRemoval.c)
 *     EtwpGetTraceGroupInfo @ 0x14092FEA4 (EtwpGetTraceGroupInfo.c)
 *     SendCaptureStateNotificationsWorker @ 0x14093B0C0 (SendCaptureStateNotificationsWorker.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     EtwpFreeGuidEntry @ 0x1406DE9BC (EtwpFreeGuidEntry.c)
 */

__int64 __fastcall EtwpUnreferenceGuidEntry(__int64 *BugCheckParameter2)
{
  __int64 v2; // rsi
  struct _KTHREAD *CurrentThread; // rax
  int v5; // r10d
  int v6; // edx
  int v7; // r8d
  int v8; // r9d
  __int64 v9; // rbp
  volatile signed __int64 *v10; // rbp
  __int64 *v11; // rcx
  __int64 **v12; // rax

  v2 = _InterlockedDecrement64(BugCheckParameter2 + 4);
  if ( v2 )
  {
    if ( v2 < 0 )
      KeBugCheckEx(0x11Du, 9uLL, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v5 = *((_DWORD *)BugCheckParameter2 + 10);
    v6 = *((_DWORD *)BugCheckParameter2 + 13);
    v7 = *((_DWORD *)BugCheckParameter2 + 12);
    v8 = *((_DWORD *)BugCheckParameter2 + 11);
    v9 = BugCheckParameter2[49];
    --CurrentThread->KernelApcDisable;
    v10 = (volatile signed __int64 *)(56LL * (((unsigned __int8)v8 ^ (unsigned __int8)(v7 ^ v6 ^ v5)) & 0x3F) + v9 + 512);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v10, 0LL);
    v11 = (__int64 *)*BugCheckParameter2;
    if ( *(__int64 **)(*BugCheckParameter2 + 8) != BugCheckParameter2
      || (v12 = (__int64 **)BugCheckParameter2[1], *v12 != BugCheckParameter2) )
    {
      __fastfail(3u);
    }
    *v12 = v11;
    v11[1] = (__int64)v12;
    if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v10);
    KeAbPostRelease((ULONG_PTR)v10);
    KeLeaveCriticalRegion();
    EtwpFreeGuidEntry(BugCheckParameter2);
  }
  return v2;
}
