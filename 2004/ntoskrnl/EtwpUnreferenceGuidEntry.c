/*
 * XREFs of EtwpUnreferenceGuidEntry @ 0x14066F5A8
 * Callers:
 *     NtTraceEvent @ 0x14026C620 (NtTraceEvent.c)
 *     EtwGetProviderIdFromHandle @ 0x14039C298 (EtwGetProviderIdFromHandle.c)
 *     EtwpNotifyGuid @ 0x1406329B8 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x140635748 (EtwpEnableGuid.c)
 *     EtwpUpdateGuidEnableInfo @ 0x14063629C (EtwpUpdateGuidEnableInfo.c)
 *     EtwpAddGuidEntry @ 0x1406369BC (EtwpAddGuidEntry.c)
 *     EtwpAddRegEntryToGroup @ 0x14066BC00 (EtwpAddRegEntryToGroup.c)
 *     EtwpRegisterUMGuid @ 0x14066E310 (EtwpRegisterUMGuid.c)
 *     EtwpDeleteRegistrationObject @ 0x14066FF90 (EtwpDeleteRegistrationObject.c)
 *     EtwpGetNextGuidEntry @ 0x1406C7118 (EtwpGetNextGuidEntry.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x1406C7250 (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpFreeGuidEntry @ 0x14070189C (EtwpFreeGuidEntry.c)
 *     EtwpGetTraceGuidInfo @ 0x14071C74C (EtwpGetTraceGuidInfo.c)
 *     EtwUnregister @ 0x14074CF60 (EtwUnregister.c)
 *     EtwpRegisterProvider @ 0x14074F950 (EtwpRegisterProvider.c)
 *     EtwpDisallowedGuidAddition @ 0x140930604 (EtwpDisallowedGuidAddition.c)
 *     EtwpDisallowedGuidRemoval @ 0x1409308EC (EtwpDisallowedGuidRemoval.c)
 *     EtwpGetTraceGroupInfo @ 0x140931154 (EtwpGetTraceGroupInfo.c)
 *     SendCaptureStateNotificationsWorker @ 0x14093C340 (SendCaptureStateNotificationsWorker.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x140208500 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     EtwpFreeGuidEntry @ 0x14070189C (EtwpFreeGuidEntry.c)
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
