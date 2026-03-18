/*
 * XREFs of EtwpUnreferenceGuidEntry @ 0x1405F494C
 * Callers:
 *     NtTraceEvent @ 0x140244D40 (NtTraceEvent.c)
 *     EtwGetProviderIdFromHandle @ 0x14039F3E8 (EtwGetProviderIdFromHandle.c)
 *     EtwpRegisterUMGuid @ 0x1405F3400 (EtwpRegisterUMGuid.c)
 *     EtwpDeleteRegistrationObject @ 0x1405F46F0 (EtwpDeleteRegistrationObject.c)
 *     EtwpAddRegEntryToGroup @ 0x140669A60 (EtwpAddRegEntryToGroup.c)
 *     EtwpFreeGuidEntry @ 0x1406D4F8C (EtwpFreeGuidEntry.c)
 *     EtwpGetNextGuidEntry @ 0x140717B6C (EtwpGetNextGuidEntry.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x140717CA4 (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpNotifyGuid @ 0x1407181E8 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x1407188EC (EtwpEnableGuid.c)
 *     EtwpUpdateGuidEnableInfo @ 0x140719440 (EtwpUpdateGuidEnableInfo.c)
 *     EtwpAddGuidEntry @ 0x14071A098 (EtwpAddGuidEntry.c)
 *     EtwpGetTraceGuidInfo @ 0x14072A6B0 (EtwpGetTraceGuidInfo.c)
 *     EtwUnregister @ 0x14075BB40 (EtwUnregister.c)
 *     EtwpRegisterProvider @ 0x14075E530 (EtwpRegisterProvider.c)
 *     EtwpDisallowedGuidAddition @ 0x140936434 (EtwpDisallowedGuidAddition.c)
 *     EtwpDisallowedGuidRemoval @ 0x14093671C (EtwpDisallowedGuidRemoval.c)
 *     EtwpGetTraceGroupInfo @ 0x140936F84 (EtwpGetTraceGroupInfo.c)
 *     SendCaptureStateNotificationsWorker @ 0x140942170 (SendCaptureStateNotificationsWorker.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x140221480 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     EtwpFreeGuidEntry @ 0x1406D4F8C (EtwpFreeGuidEntry.c)
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
